#pragma once

#include "Program.h"

namespace Restauracja {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Podsumowanie informacji o Logowanie
	/// </summary>
	public ref class Logowanie : public System::Windows::Forms::Form
	{
	public:
		Logowanie(void)
		{
			InitializeComponent();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
		}

	
		/// <summary>
		/// Wyczyść wszystkie używane zasoby.
		/// </summary>
	protected:
		~Logowanie()
		{
			if (components)
			{
				delete components;
			}
		}
	protected:
	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txtLLogin;
	private: System::Windows::Forms::TextBox^ txtLHaslo;


	private: System::Windows::Forms::Button^ btnLZaloguj;
	private: System::Windows::Forms::Button^ btnLAnuluj;

	private:
		/// <summary>
		/// Wymagana zmienna projektanta.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Metoda wymagana do obsługi projektanta — nie należy modyfikować
		/// jej zawartości w edytorze kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtLLogin = (gcnew System::Windows::Forms::TextBox());
			this->txtLHaslo = (gcnew System::Windows::Forms::TextBox());
			this->btnLZaloguj = (gcnew System::Windows::Forms::Button());
			this->btnLAnuluj = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(79, 89);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(43, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Login";
			this->label1->Click += gcnew System::EventHandler(this, &Logowanie::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(79, 166);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(44, 17);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Hasło";
			// 
			// txtLLogin
			// 
			this->txtLLogin->Location = System::Drawing::Point(205, 83);
			this->txtLLogin->Name = L"txtLLogin";
			this->txtLLogin->Size = System::Drawing::Size(201, 22);
			this->txtLLogin->TabIndex = 2;
			this->txtLLogin->Text = L"admin";
			// 
			// txtLHaslo
			// 
			this->txtLHaslo->Location = System::Drawing::Point(205, 166);
			this->txtLHaslo->Name = L"txtLHaslo";
			this->txtLHaslo->PasswordChar = '$';
			this->txtLHaslo->Size = System::Drawing::Size(201, 22);
			this->txtLHaslo->TabIndex = 3;
			this->txtLHaslo->Text = L"123";
			this->txtLHaslo->UseSystemPasswordChar = true;
			// 
			// btnLZaloguj
			// 
			this->btnLZaloguj->Location = System::Drawing::Point(82, 244);
			this->btnLZaloguj->Name = L"btnLZaloguj";
			this->btnLZaloguj->Size = System::Drawing::Size(146, 40);
			this->btnLZaloguj->TabIndex = 4;
			this->btnLZaloguj->Text = L"Zaloguj";
			this->btnLZaloguj->UseVisualStyleBackColor = true;
			this->btnLZaloguj->Click += gcnew System::EventHandler(this, &Logowanie::btnLZaloguj_Click);
			// 
			// btnLAnuluj
			// 
			this->btnLAnuluj->Location = System::Drawing::Point(267, 244);
			this->btnLAnuluj->Name = L"btnLAnuluj";
			this->btnLAnuluj->Size = System::Drawing::Size(139, 40);
			this->btnLAnuluj->TabIndex = 5;
			this->btnLAnuluj->Text = L"Anuluj";
			this->btnLAnuluj->UseVisualStyleBackColor = true;
			this->btnLAnuluj->Click += gcnew System::EventHandler(this, &Logowanie::btnLAnuluj_Click);
			// 
			// Logowanie
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(522, 346);
			this->Controls->Add(this->btnLAnuluj);
			this->Controls->Add(this->btnLZaloguj);
			this->Controls->Add(this->txtLHaslo);
			this->Controls->Add(this->txtLLogin);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"Logowanie";
			this->Text = L"Logowanie";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btnLAnuluj_Click(System::Object^ sender, System::EventArgs^ e) {
		
		txtLLogin->Text = "";
		txtLHaslo->Text = "";

	}
private: System::Void btnLZaloguj_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ konfiguracja = L"datasource=localhost; port=3306; username=root; password=Andrinsh123!; database=restauracja1";
	MySqlConnection^ laczBaze = gcnew MySqlConnection(konfiguracja);
	MySqlCommand^ zapytanie = gcnew MySqlCommand("SELECT * FROM uzytkownik WHERE loginUzytkownik = '" + txtLLogin->Text + "' AND hasloUzytkownik = '" + txtLHaslo->Text + "' ; ", laczBaze);
	MySqlDataReader^ odczytanie;
	if (txtLLogin->Text == "admin") {
		try {
			laczBaze->Open();
			odczytanie = zapytanie->ExecuteReader();

			if (odczytanie->Read()) {
				int idUzytkownik = odczytanie->GetInt32(0);

				this->Hide();
				Program^ program = gcnew Program(idUzytkownik);
				program->ShowDialog();
				this->Close();
			}
			else {
				MessageBox::Show("IT IS NOT WORKING");
			}

		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);

		}
	}
	else {
		MessageBox::Show("YOU ARE NOT ADMIN");
	}
	
	laczBaze->Close();
}
};
}
