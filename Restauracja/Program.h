#pragma once
#include <iostream>
#include <cmath>
#include <string>


namespace Restauracja {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Podsumowanie informacji o Program
	/// </summary>
	public ref class Program : public System::Windows::Forms::Form
	{
	public:
		String^ konfiguracja = L"datasource=localhost; port=3306; username=root; password=Andrinsh123!; database=restauracja1";
		Program(int idUzytkownik)
		{
			InitializeComponent();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
		}

	protected:
		/// <summary>
		/// Wyczyść wszystkie używane zasoby.
		/// </summary>
		~Program()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^ tPControl;
	protected:
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::Button^ ZmienHaslo;
	private: System::Windows::Forms::TextBox^ txtNoweHaslo2;
	private: System::Windows::Forms::TextBox^ txtNoweHaslo;
	private: System::Windows::Forms::TextBox^ txtStareHaslo;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ btnUSzukaj;
	private: System::Windows::Forms::TextBox^ txtUUzytkownik;


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataGridView^ dgUzytkownik;
	private: System::Windows::Forms::GroupBox^ gbUEdycja;

	private: System::Windows::Forms::Label^ label8;

	private: System::Windows::Forms::TextBox^ txtUNazwisko;
	private: System::Windows::Forms::TextBox^ txtUImie;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::GroupBox^ gbUGodziny;

	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label14;

	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Button^ btnUEdytuj;
	private: System::Windows::Forms::Button^ btnUUsun;
	private: System::Windows::Forms::Button^ btnUDodaj;
	private: System::Windows::Forms::TabPage^ gbWStawka;

	private: System::Windows::Forms::DataGridView^ dgWUzytkownik;
	private: System::Windows::Forms::Button^ btnWSzukaj;

	private: System::Windows::Forms::TextBox^ txtWZawod;

	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::GroupBox^ groupBox1;

	private: System::Windows::Forms::Label^ label22;

private: System::Windows::Forms::Button^ btnWEdytuj;
private: System::Windows::Forms::TabPage^ lblKMiesiac;

private: System::Windows::Forms::ComboBox^ txtUPracownik;
private: System::Windows::Forms::Label^ label7;
private: System::Windows::Forms::MaskedTextBox^ txtUDo;

private: System::Windows::Forms::MaskedTextBox^ txtUOd;
private: System::Windows::Forms::MaskedTextBox^ txtUDzien;
private: System::Windows::Forms::MaskedTextBox^ txtURok;
private: System::Windows::Forms::MaskedTextBox^ txtUMiesiac;
private: System::Windows::Forms::Label^ label11;
private: System::Windows::Forms::Label^ label10;
private: System::Windows::Forms::Label^ label9;
private: System::Windows::Forms::DataGridView^ dgGodziny;

private: System::Windows::Forms::Button^ btnGUsun;
private: System::Windows::Forms::Button^ btnGEdytuj;
private: System::Windows::Forms::Button^ btnGDodaj;
private: System::Windows::Forms::MaskedTextBox^ txtWStawka;
private: System::Windows::Forms::Label^ label12;
private: System::Windows::Forms::ComboBox^ txtWStanowisko;
private: System::Windows::Forms::DataGridView^ dgKWypłaty;

private: System::Windows::Forms::Label^ Użytkownik;


private: System::Windows::Forms::TextBox^ txtKSzukaj;

private: System::Windows::Forms::Button^ btnKSzukaj;
private: System::Windows::Forms::DataGridView^ dgKPodsumowanie;
private: System::Windows::Forms::DataGridView^ dgKUzytkownicy;

private: System::Windows::Forms::Label^ lblKNazwisko;
private: System::Windows::Forms::Label^ lblKImie;

private: System::Windows::Forms::Label^ label19;
private: System::Windows::Forms::Label^ label18;
private: System::Windows::Forms::Label^ label17;
private: System::Windows::Forms::Label^ lblKStanowisko;
private: System::Windows::Forms::Label^ label21;

private: System::Windows::Forms::Label^ label23;

private: System::Windows::Forms::Label^ label13;
private: System::Windows::Forms::Button^ btnKKsieguj;
private: System::Windows::Forms::TextBox^ txtKWyplata;
private: System::Windows::Forms::TextBox^ txtKRok;
private: System::Windows::Forms::TextBox^ txtKMiesiac;
private: System::Windows::Forms::Label^ label24;
private: System::Windows::Forms::TextBox^ txtKGodziny;
private: System::Windows::Forms::GroupBox^ gbKWyplaty;
private: System::Windows::Forms::TabPage^ tabPage3;
private: System::Windows::Forms::DataGridView^ dgRaport;

private: System::Windows::Forms::GroupBox^ groupBox2;
private: System::Windows::Forms::Label^ label27;
private: System::Windows::Forms::Label^ label26;
private: System::Windows::Forms::Label^ Rok;
private: System::Windows::Forms::ComboBox^ txtRDzien;
private: System::Windows::Forms::ComboBox^ txtRMiesiac;
private: System::Windows::Forms::ComboBox^ txtRRok;
private: System::Windows::Forms::Button^ btnRGeneruj;
private: System::Windows::Forms::ComboBox^ txtRRaport;
private: System::Windows::Forms::TabPage^ Rezerwacje;
private: System::Windows::Forms::DataGridView^ dgRRezerwacja;
private: System::Windows::Forms::GroupBox^ gbRezerwacja;
private: System::Windows::Forms::TextBox^ txtRRKom;
private: System::Windows::Forms::Label^ label30;
private: System::Windows::Forms::Button^ btnRUsun;
private: System::Windows::Forms::Button^ btnREdytuj;
private: System::Windows::Forms::Button^ btnRDodaj;
private: System::Windows::Forms::MaskedTextBox^ txtRRRok;
private: System::Windows::Forms::MaskedTextBox^ txtRRMiesiac;
private: System::Windows::Forms::MaskedTextBox^ txtRRDzien;
private: System::Windows::Forms::MaskedTextBox^ txtRRGodzina;
private: System::Windows::Forms::Label^ label29;
private: System::Windows::Forms::Label^ label28;
private: System::Windows::Forms::Label^ label25;
private: System::Windows::Forms::Label^ Godzina;
private: System::Windows::Forms::TextBox^ txtRSzukaj;
private: System::Windows::Forms::Button^ button1;
private: System::Windows::Forms::DataGridView^ dgRStolik;
private: System::Windows::Forms::Label^ label31;
private: System::Windows::Forms::TextBox^ txtRRStolik;
private: System::Windows::Forms::TabPage^ tabPage4;
private: System::Windows::Forms::GroupBox^ gbStoliki;
private: System::Windows::Forms::Label^ label32;
private: System::Windows::Forms::TextBox^ txtSNazwa;

private: System::Windows::Forms::Button^ btnRWyswietl;
private: System::Windows::Forms::Button^ btnSUsun;
private: System::Windows::Forms::Button^ btnSDodaj;
private: System::Windows::Forms::DataGridView^ dgSStolik;

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
			this->tPControl = (gcnew System::Windows::Forms::TabControl());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->dgGodziny = (gcnew System::Windows::Forms::DataGridView());
			this->gbUGodziny = (gcnew System::Windows::Forms::GroupBox());
			this->btnGUsun = (gcnew System::Windows::Forms::Button());
			this->btnGEdytuj = (gcnew System::Windows::Forms::Button());
			this->btnGDodaj = (gcnew System::Windows::Forms::Button());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->txtURok = (gcnew System::Windows::Forms::MaskedTextBox());
			this->txtUMiesiac = (gcnew System::Windows::Forms::MaskedTextBox());
			this->txtUDzien = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->txtUDo = (gcnew System::Windows::Forms::MaskedTextBox());
			this->txtUOd = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->gbUEdycja = (gcnew System::Windows::Forms::GroupBox());
			this->txtUPracownik = (gcnew System::Windows::Forms::ComboBox());
			this->btnUUsun = (gcnew System::Windows::Forms::Button());
			this->btnUEdytuj = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->txtUNazwisko = (gcnew System::Windows::Forms::TextBox());
			this->btnUDodaj = (gcnew System::Windows::Forms::Button());
			this->txtUImie = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->btnUSzukaj = (gcnew System::Windows::Forms::Button());
			this->txtUUzytkownik = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dgUzytkownik = (gcnew System::Windows::Forms::DataGridView());
			this->gbWStawka = (gcnew System::Windows::Forms::TabPage());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->txtWStawka = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->btnWSzukaj = (gcnew System::Windows::Forms::Button());
			this->txtWStanowisko = (gcnew System::Windows::Forms::ComboBox());
			this->txtWZawod = (gcnew System::Windows::Forms::TextBox());
			this->btnWEdytuj = (gcnew System::Windows::Forms::Button());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->dgWUzytkownik = (gcnew System::Windows::Forms::DataGridView());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->ZmienHaslo = (gcnew System::Windows::Forms::Button());
			this->txtNoweHaslo2 = (gcnew System::Windows::Forms::TextBox());
			this->txtNoweHaslo = (gcnew System::Windows::Forms::TextBox());
			this->txtStareHaslo = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->lblKMiesiac = (gcnew System::Windows::Forms::TabPage());
			this->gbKWyplaty = (gcnew System::Windows::Forms::GroupBox());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->txtKGodziny = (gcnew System::Windows::Forms::TextBox());
			this->txtKWyplata = (gcnew System::Windows::Forms::TextBox());
			this->txtKRok = (gcnew System::Windows::Forms::TextBox());
			this->txtKMiesiac = (gcnew System::Windows::Forms::TextBox());
			this->btnKKsieguj = (gcnew System::Windows::Forms::Button());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->lblKStanowisko = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->lblKNazwisko = (gcnew System::Windows::Forms::Label());
			this->lblKImie = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->Użytkownik = (gcnew System::Windows::Forms::Label());
			this->txtKSzukaj = (gcnew System::Windows::Forms::TextBox());
			this->btnKSzukaj = (gcnew System::Windows::Forms::Button());
			this->dgKWypłaty = (gcnew System::Windows::Forms::DataGridView());
			this->dgKPodsumowanie = (gcnew System::Windows::Forms::DataGridView());
			this->dgKUzytkownicy = (gcnew System::Windows::Forms::DataGridView());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->dgRaport = (gcnew System::Windows::Forms::DataGridView());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->Rok = (gcnew System::Windows::Forms::Label());
			this->txtRDzien = (gcnew System::Windows::Forms::ComboBox());
			this->txtRMiesiac = (gcnew System::Windows::Forms::ComboBox());
			this->txtRRok = (gcnew System::Windows::Forms::ComboBox());
			this->btnRGeneruj = (gcnew System::Windows::Forms::Button());
			this->txtRRaport = (gcnew System::Windows::Forms::ComboBox());
			this->Rezerwacje = (gcnew System::Windows::Forms::TabPage());
			this->dgRRezerwacja = (gcnew System::Windows::Forms::DataGridView());
			this->gbRezerwacja = (gcnew System::Windows::Forms::GroupBox());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->txtRRStolik = (gcnew System::Windows::Forms::TextBox());
			this->txtRRKom = (gcnew System::Windows::Forms::TextBox());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->btnRUsun = (gcnew System::Windows::Forms::Button());
			this->btnREdytuj = (gcnew System::Windows::Forms::Button());
			this->btnRDodaj = (gcnew System::Windows::Forms::Button());
			this->txtRRRok = (gcnew System::Windows::Forms::MaskedTextBox());
			this->txtRRMiesiac = (gcnew System::Windows::Forms::MaskedTextBox());
			this->txtRRDzien = (gcnew System::Windows::Forms::MaskedTextBox());
			this->txtRRGodzina = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->Godzina = (gcnew System::Windows::Forms::Label());
			this->txtRSzukaj = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dgRStolik = (gcnew System::Windows::Forms::DataGridView());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->gbStoliki = (gcnew System::Windows::Forms::GroupBox());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->txtSNazwa = (gcnew System::Windows::Forms::TextBox());
			this->btnRWyswietl = (gcnew System::Windows::Forms::Button());
			this->btnSUsun = (gcnew System::Windows::Forms::Button());
			this->btnSDodaj = (gcnew System::Windows::Forms::Button());
			this->dgSStolik = (gcnew System::Windows::Forms::DataGridView());
			this->tPControl->SuspendLayout();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgGodziny))->BeginInit();
			this->gbUGodziny->SuspendLayout();
			this->gbUEdycja->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgUzytkownik))->BeginInit();
			this->gbWStawka->SuspendLayout();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgWUzytkownik))->BeginInit();
			this->tabPage1->SuspendLayout();
			this->lblKMiesiac->SuspendLayout();
			this->gbKWyplaty->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgKWypłaty))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgKPodsumowanie))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgKUzytkownicy))->BeginInit();
			this->tabPage3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgRaport))->BeginInit();
			this->groupBox2->SuspendLayout();
			this->Rezerwacje->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgRRezerwacja))->BeginInit();
			this->gbRezerwacja->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgRStolik))->BeginInit();
			this->tabPage4->SuspendLayout();
			this->gbStoliki->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgSStolik))->BeginInit();
			this->SuspendLayout();
			// 
			// tPControl
			// 
			this->tPControl->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->tPControl->Controls->Add(this->tabPage2);
			this->tPControl->Controls->Add(this->gbWStawka);
			this->tPControl->Controls->Add(this->tabPage1);
			this->tPControl->Controls->Add(this->lblKMiesiac);
			this->tPControl->Controls->Add(this->tabPage3);
			this->tPControl->Controls->Add(this->Rezerwacje);
			this->tPControl->Controls->Add(this->tabPage4);
			this->tPControl->Location = System::Drawing::Point(8, 4);
			this->tPControl->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tPControl->Name = L"tPControl";
			this->tPControl->SelectedIndex = 0;
			this->tPControl->Size = System::Drawing::Size(1257, 741);
			this->tPControl->TabIndex = 0;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->dgGodziny);
			this->tabPage2->Controls->Add(this->gbUGodziny);
			this->tabPage2->Controls->Add(this->gbUEdycja);
			this->tabPage2->Controls->Add(this->btnUSzukaj);
			this->tabPage2->Controls->Add(this->txtUUzytkownik);
			this->tabPage2->Controls->Add(this->label1);
			this->tabPage2->Controls->Add(this->dgUzytkownik);
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tabPage2->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->tabPage2->Size = System::Drawing::Size(1249, 712);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Użytkownik";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// dgGodziny
			// 
			this->dgGodziny->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgGodziny->Location = System::Drawing::Point(541, 361);
			this->dgGodziny->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->dgGodziny->Name = L"dgGodziny";
			this->dgGodziny->RowHeadersWidth = 51;
			this->dgGodziny->Size = System::Drawing::Size(701, 341);
			this->dgGodziny->TabIndex = 16;
			this->dgGodziny->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Program::dgGodziny_CellClick);
			// 
			// gbUGodziny
			// 
			this->gbUGodziny->Controls->Add(this->btnGUsun);
			this->gbUGodziny->Controls->Add(this->btnGEdytuj);
			this->gbUGodziny->Controls->Add(this->btnGDodaj);
			this->gbUGodziny->Controls->Add(this->label11);
			this->gbUGodziny->Controls->Add(this->label10);
			this->gbUGodziny->Controls->Add(this->label9);
			this->gbUGodziny->Controls->Add(this->txtURok);
			this->gbUGodziny->Controls->Add(this->txtUMiesiac);
			this->gbUGodziny->Controls->Add(this->txtUDzien);
			this->gbUGodziny->Controls->Add(this->label7);
			this->gbUGodziny->Controls->Add(this->txtUDo);
			this->gbUGodziny->Controls->Add(this->txtUOd);
			this->gbUGodziny->Controls->Add(this->label15);
			this->gbUGodziny->Controls->Add(this->label14);
			this->gbUGodziny->Controls->Add(this->label16);
			this->gbUGodziny->Location = System::Drawing::Point(5, 284);
			this->gbUGodziny->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->gbUGodziny->Name = L"gbUGodziny";
			this->gbUGodziny->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->gbUGodziny->Size = System::Drawing::Size(529, 329);
			this->gbUGodziny->TabIndex = 15;
			this->gbUGodziny->TabStop = false;
			this->gbUGodziny->Text = L"Godziny Pracy";
			// 
			// btnGUsun
			// 
			this->btnGUsun->Enabled = false;
			this->btnGUsun->Location = System::Drawing::Point(363, 282);
			this->btnGUsun->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btnGUsun->Name = L"btnGUsun";
			this->btnGUsun->Size = System::Drawing::Size(123, 41);
			this->btnGUsun->TabIndex = 31;
			this->btnGUsun->Text = L"Usuń";
			this->btnGUsun->UseVisualStyleBackColor = true;
			this->btnGUsun->Click += gcnew System::EventHandler(this, &Program::btnGUsun_Click);
			// 
			// btnGEdytuj
			// 
			this->btnGEdytuj->Enabled = false;
			this->btnGEdytuj->Location = System::Drawing::Point(196, 282);
			this->btnGEdytuj->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btnGEdytuj->Name = L"btnGEdytuj";
			this->btnGEdytuj->Size = System::Drawing::Size(135, 41);
			this->btnGEdytuj->TabIndex = 30;
			this->btnGEdytuj->Text = L"Edytuj";
			this->btnGEdytuj->UseVisualStyleBackColor = true;
			this->btnGEdytuj->Click += gcnew System::EventHandler(this, &Program::btnGEdytuj_Click);
			// 
			// btnGDodaj
			// 
			this->btnGDodaj->Location = System::Drawing::Point(29, 282);
			this->btnGDodaj->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btnGDodaj->Name = L"btnGDodaj";
			this->btnGDodaj->Size = System::Drawing::Size(123, 41);
			this->btnGDodaj->TabIndex = 29;
			this->btnGDodaj->Text = L"Dodaj";
			this->btnGDodaj->UseVisualStyleBackColor = true;
			this->btnGDodaj->Click += gcnew System::EventHandler(this, &Program::btnGDodaj_Click);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(325, 105);
			this->label11->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(33, 17);
			this->label11->TabIndex = 28;
			this->label11->Text = L"Rok";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(239, 105);
			this->label10->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(55, 17);
			this->label10->TabIndex = 27;
			this->label10->Text = L"Miesiąc";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(152, 105);
			this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(44, 17);
			this->label9->TabIndex = 26;
			this->label9->Text = L"Dzień";
			// 
			// txtURok
			// 
			this->txtURok->Location = System::Drawing::Point(329, 124);
			this->txtURok->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->txtURok->Mask = L"0000";
			this->txtURok->Name = L"txtURok";
			this->txtURok->Size = System::Drawing::Size(49, 22);
			this->txtURok->TabIndex = 25;
			this->txtURok->Text = L"2022";
			// 
			// txtUMiesiac
			// 
			this->txtUMiesiac->Location = System::Drawing::Point(243, 124);
			this->txtUMiesiac->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->txtUMiesiac->Mask = L"00";
			this->txtUMiesiac->Name = L"txtUMiesiac";
			this->txtUMiesiac->Size = System::Drawing::Size(47, 22);
			this->txtUMiesiac->TabIndex = 24;
			// 
			// txtUDzien
			// 
			this->txtUDzien->Location = System::Drawing::Point(156, 124);
			this->txtUDzien->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->txtUDzien->Mask = L"00";
			this->txtUDzien->Name = L"txtUDzien";
			this->txtUDzien->Size = System::Drawing::Size(49, 22);
			this->txtUDzien->TabIndex = 23;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(25, 128);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(38, 17);
			this->label7->TabIndex = 22;
			this->label7->Text = L"Data";
			// 
			// txtUDo
			// 
			this->txtUDo->Location = System::Drawing::Point(291, 46);
			this->txtUDo->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->txtUDo->Mask = L"00";
			this->txtUDo->Name = L"txtUDo";
			this->txtUDo->Size = System::Drawing::Size(59, 22);
			this->txtUDo->TabIndex = 21;
			// 
			// txtUOd
			// 
			this->txtUOd->Location = System::Drawing::Point(156, 46);
			this->txtUOd->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->txtUOd->Mask = L"00";
			this->txtUOd->Name = L"txtUOd";
			this->txtUOd->Size = System::Drawing::Size(60, 22);
			this->txtUOd->TabIndex = 20;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(325, 18);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(24, 17);
			this->label15->TabIndex = 19;
			this->label15->Text = L"do";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(192, 18);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(24, 17);
			this->label14->TabIndex = 18;
			this->label14->Text = L"od";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(25, 54);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(60, 17);
			this->label16->TabIndex = 0;
			this->label16->Text = L"Godziny";
			// 
			// gbUEdycja
			// 
			this->gbUEdycja->Controls->Add(this->txtUPracownik);
			this->gbUEdycja->Controls->Add(this->btnUUsun);
			this->gbUEdycja->Controls->Add(this->btnUEdytuj);
			this->gbUEdycja->Controls->Add(this->label8);
			this->gbUEdycja->Controls->Add(this->txtUNazwisko);
			this->gbUEdycja->Controls->Add(this->btnUDodaj);
			this->gbUEdycja->Controls->Add(this->txtUImie);
			this->gbUEdycja->Controls->Add(this->label3);
			this->gbUEdycja->Controls->Add(this->label2);
			this->gbUEdycja->Location = System::Drawing::Point(5, 70);
			this->gbUEdycja->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->gbUEdycja->Name = L"gbUEdycja";
			this->gbUEdycja->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->gbUEdycja->Size = System::Drawing::Size(529, 210);
			this->gbUEdycja->TabIndex = 8;
			this->gbUEdycja->TabStop = false;
			this->gbUEdycja->Text = L"Edycja Danych Uzytkownika";
			// 
			// txtUPracownik
			// 
			this->txtUPracownik->FormattingEnabled = true;
			this->txtUPracownik->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"kucharz", L"sprzątacz", L"pracownik_baru",
					L"kelner", L"menadzer"
			});
			this->txtUPracownik->Location = System::Drawing::Point(156, 123);
			this->txtUPracownik->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->txtUPracownik->Name = L"txtUPracownik";
			this->txtUPracownik->Size = System::Drawing::Size(160, 24);
			this->txtUPracownik->TabIndex = 15;
			// 
			// btnUUsun
			// 
			this->btnUUsun->Enabled = false;
			this->btnUUsun->Location = System::Drawing::Point(363, 165);
			this->btnUUsun->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnUUsun->Name = L"btnUUsun";
			this->btnUUsun->Size = System::Drawing::Size(123, 32);
			this->btnUUsun->TabIndex = 13;
			this->btnUUsun->Text = L"Usuń";
			this->btnUUsun->UseVisualStyleBackColor = true;
			this->btnUUsun->Click += gcnew System::EventHandler(this, &Program::btnUUsun_Click);
			// 
			// btnUEdytuj
			// 
			this->btnUEdytuj->Enabled = false;
			this->btnUEdytuj->Location = System::Drawing::Point(199, 165);
			this->btnUEdytuj->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnUEdytuj->Name = L"btnUEdytuj";
			this->btnUEdytuj->Size = System::Drawing::Size(119, 32);
			this->btnUEdytuj->TabIndex = 14;
			this->btnUEdytuj->Text = L"Edytuj";
			this->btnUEdytuj->UseVisualStyleBackColor = true;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(59, 127);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(72, 17);
			this->label8->TabIndex = 11;
			this->label8->Text = L"Pracownik";
			// 
			// txtUNazwisko
			// 
			this->txtUNazwisko->Location = System::Drawing::Point(156, 82);
			this->txtUNazwisko->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtUNazwisko->Name = L"txtUNazwisko";
			this->txtUNazwisko->Size = System::Drawing::Size(183, 22);
			this->txtUNazwisko->TabIndex = 9;
			// 
			// btnUDodaj
			// 
			this->btnUDodaj->Location = System::Drawing::Point(29, 165);
			this->btnUDodaj->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnUDodaj->Name = L"btnUDodaj";
			this->btnUDodaj->Size = System::Drawing::Size(121, 32);
			this->btnUDodaj->TabIndex = 12;
			this->btnUDodaj->Text = L"Dodaj";
			this->btnUDodaj->UseVisualStyleBackColor = true;
			this->btnUDodaj->Click += gcnew System::EventHandler(this, &Program::btnUDodaj_Click);
			// 
			// txtUImie
			// 
			this->txtUImie->Location = System::Drawing::Point(156, 33);
			this->txtUImie->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtUImie->Name = L"txtUImie";
			this->txtUImie->Size = System::Drawing::Size(183, 22);
			this->txtUImie->TabIndex = 8;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(59, 82);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(67, 17);
			this->label3->TabIndex = 1;
			this->label3->Text = L"Nazwisko";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(59, 37);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(33, 17);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Imię";
			// 
			// btnUSzukaj
			// 
			this->btnUSzukaj->Location = System::Drawing::Point(421, 17);
			this->btnUSzukaj->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnUSzukaj->Name = L"btnUSzukaj";
			this->btnUSzukaj->Size = System::Drawing::Size(115, 32);
			this->btnUSzukaj->TabIndex = 3;
			this->btnUSzukaj->Text = L"Szukaj";
			this->btnUSzukaj->UseVisualStyleBackColor = true;
			this->btnUSzukaj->Click += gcnew System::EventHandler(this, &Program::btnUSzukaj_Click);
			// 
			// txtUUzytkownik
			// 
			this->txtUUzytkownik->Location = System::Drawing::Point(141, 22);
			this->txtUUzytkownik->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtUUzytkownik->Name = L"txtUUzytkownik";
			this->txtUUzytkownik->Size = System::Drawing::Size(273, 22);
			this->txtUUzytkownik->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(8, 25);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(136, 17);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Nazwa Użytkownika:";
			this->label1->Click += gcnew System::EventHandler(this, &Program::label1_Click);
			// 
			// dgUzytkownik
			// 
			this->dgUzytkownik->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgUzytkownik->Location = System::Drawing::Point(541, 6);
			this->dgUzytkownik->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dgUzytkownik->Name = L"dgUzytkownik";
			this->dgUzytkownik->RowHeadersWidth = 51;
			this->dgUzytkownik->RowTemplate->Height = 24;
			this->dgUzytkownik->Size = System::Drawing::Size(700, 348);
			this->dgUzytkownik->TabIndex = 0;
			this->dgUzytkownik->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Program::dgUzytkownik_CellClick);
			// 
			// gbWStawka
			// 
			this->gbWStawka->Controls->Add(this->groupBox1);
			this->gbWStawka->Controls->Add(this->dgWUzytkownik);
			this->gbWStawka->Location = System::Drawing::Point(4, 25);
			this->gbWStawka->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->gbWStawka->Name = L"gbWStawka";
			this->gbWStawka->Size = System::Drawing::Size(1249, 712);
			this->gbWStawka->TabIndex = 2;
			this->gbWStawka->Text = L"Wypłaty";
			this->gbWStawka->UseVisualStyleBackColor = true;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->txtWStawka);
			this->groupBox1->Controls->Add(this->label12);
			this->groupBox1->Controls->Add(this->btnWSzukaj);
			this->groupBox1->Controls->Add(this->txtWStanowisko);
			this->groupBox1->Controls->Add(this->txtWZawod);
			this->groupBox1->Controls->Add(this->btnWEdytuj);
			this->groupBox1->Controls->Add(this->label20);
			this->groupBox1->Controls->Add(this->label22);
			this->groupBox1->Location = System::Drawing::Point(4, 23);
			this->groupBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox1->Size = System::Drawing::Size(529, 208);
			this->groupBox1->TabIndex = 13;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Wyplaty Uzytkownika";
			// 
			// txtWStawka
			// 
			this->txtWStawka->Location = System::Drawing::Point(97, 145);
			this->txtWStawka->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->txtWStawka->Name = L"txtWStawka";
			this->txtWStawka->Size = System::Drawing::Size(132, 22);
			this->txtWStawka->TabIndex = 20;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(7, 117);
			this->label12->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(79, 17);
			this->label12->TabIndex = 19;
			this->label12->Text = L"Stanowisko";
			// 
			// btnWSzukaj
			// 
			this->btnWSzukaj->Location = System::Drawing::Point(341, 50);
			this->btnWSzukaj->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnWSzukaj->Name = L"btnWSzukaj";
			this->btnWSzukaj->Size = System::Drawing::Size(115, 32);
			this->btnWSzukaj->TabIndex = 11;
			this->btnWSzukaj->Text = L"Szukaj";
			this->btnWSzukaj->UseVisualStyleBackColor = true;
			this->btnWSzukaj->Click += gcnew System::EventHandler(this, &Program::btnWSzukaj_Click);
			// 
			// txtWStanowisko
			// 
			this->txtWStanowisko->FormattingEnabled = true;
			this->txtWStanowisko->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
				L"kucharz", L"menadzer", L"pracownik_baru",
					L"sprzątacz"
			});
			this->txtWStanowisko->Location = System::Drawing::Point(97, 113);
			this->txtWStanowisko->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->txtWStanowisko->Name = L"txtWStanowisko";
			this->txtWStanowisko->Size = System::Drawing::Size(160, 24);
			this->txtWStanowisko->TabIndex = 18;
			// 
			// txtWZawod
			// 
			this->txtWZawod->Location = System::Drawing::Point(140, 21);
			this->txtWZawod->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtWZawod->Name = L"txtWZawod";
			this->txtWZawod->Size = System::Drawing::Size(383, 22);
			this->txtWZawod->TabIndex = 10;
			// 
			// btnWEdytuj
			// 
			this->btnWEdytuj->Location = System::Drawing::Point(341, 138);
			this->btnWEdytuj->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnWEdytuj->Name = L"btnWEdytuj";
			this->btnWEdytuj->Size = System::Drawing::Size(119, 32);
			this->btnWEdytuj->TabIndex = 17;
			this->btnWEdytuj->Text = L"Edytuj";
			this->btnWEdytuj->UseVisualStyleBackColor = true;
			this->btnWEdytuj->Click += gcnew System::EventHandler(this, &Program::btnWEdytuj_Click);
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(7, 25);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(108, 17);
			this->label20->TabIndex = 9;
			this->label20->Text = L"Nazwa Zawodu:";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(7, 149);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(53, 17);
			this->label22->TabIndex = 1;
			this->label22->Text = L"Stawka";
			// 
			// dgWUzytkownik
			// 
			this->dgWUzytkownik->AllowUserToAddRows = false;
			this->dgWUzytkownik->AllowUserToDeleteRows = false;
			this->dgWUzytkownik->AllowUserToOrderColumns = true;
			this->dgWUzytkownik->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgWUzytkownik->Location = System::Drawing::Point(539, 7);
			this->dgWUzytkownik->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dgWUzytkownik->Name = L"dgWUzytkownik";
			this->dgWUzytkownik->ReadOnly = true;
			this->dgWUzytkownik->RowHeadersWidth = 51;
			this->dgWUzytkownik->RowTemplate->Height = 24;
			this->dgWUzytkownik->Size = System::Drawing::Size(696, 331);
			this->dgWUzytkownik->TabIndex = 13;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->ZmienHaslo);
			this->tabPage1->Controls->Add(this->txtNoweHaslo2);
			this->tabPage1->Controls->Add(this->txtNoweHaslo);
			this->tabPage1->Controls->Add(this->txtStareHaslo);
			this->tabPage1->Controls->Add(this->label4);
			this->tabPage1->Controls->Add(this->label5);
			this->tabPage1->Controls->Add(this->label6);
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tabPage1->Size = System::Drawing::Size(1249, 712);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Zmiana Hasła";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// ZmienHaslo
			// 
			this->ZmienHaslo->Location = System::Drawing::Point(388, 402);
			this->ZmienHaslo->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->ZmienHaslo->Name = L"ZmienHaslo";
			this->ZmienHaslo->Size = System::Drawing::Size(156, 38);
			this->ZmienHaslo->TabIndex = 34;
			this->ZmienHaslo->Text = L"Zmień";
			this->ZmienHaslo->UseVisualStyleBackColor = true;
			this->ZmienHaslo->Click += gcnew System::EventHandler(this, &Program::ZmienHaslo_Click_1);
			// 
			// txtNoweHaslo2
			// 
			this->txtNoweHaslo2->Location = System::Drawing::Point(475, 335);
			this->txtNoweHaslo2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtNoweHaslo2->Name = L"txtNoweHaslo2";
			this->txtNoweHaslo2->Size = System::Drawing::Size(175, 22);
			this->txtNoweHaslo2->TabIndex = 33;
			// 
			// txtNoweHaslo
			// 
			this->txtNoweHaslo->Location = System::Drawing::Point(475, 271);
			this->txtNoweHaslo->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtNoweHaslo->Name = L"txtNoweHaslo";
			this->txtNoweHaslo->Size = System::Drawing::Size(175, 22);
			this->txtNoweHaslo->TabIndex = 32;
			// 
			// txtStareHaslo
			// 
			this->txtStareHaslo->Location = System::Drawing::Point(475, 210);
			this->txtStareHaslo->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtStareHaslo->Name = L"txtStareHaslo";
			this->txtStareHaslo->Size = System::Drawing::Size(175, 22);
			this->txtStareHaslo->TabIndex = 31;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(309, 335);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(83, 17);
			this->label4->TabIndex = 30;
			this->label4->Text = L"Nowe Hasło";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(309, 271);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(83, 17);
			this->label5->TabIndex = 29;
			this->label5->Text = L"Nowe Hasło";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(309, 210);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(82, 17);
			this->label6->TabIndex = 28;
			this->label6->Text = L"Stare Hasło";
			// 
			// lblKMiesiac
			// 
			this->lblKMiesiac->Controls->Add(this->gbKWyplaty);
			this->lblKMiesiac->Controls->Add(this->dgKWypłaty);
			this->lblKMiesiac->Controls->Add(this->dgKPodsumowanie);
			this->lblKMiesiac->Controls->Add(this->dgKUzytkownicy);
			this->lblKMiesiac->Location = System::Drawing::Point(4, 25);
			this->lblKMiesiac->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->lblKMiesiac->Name = L"lblKMiesiac";
			this->lblKMiesiac->Size = System::Drawing::Size(1249, 712);
			this->lblKMiesiac->TabIndex = 3;
			this->lblKMiesiac->Text = L"Końcowe wyplaty";
			this->lblKMiesiac->UseVisualStyleBackColor = true;
			// 
			// gbKWyplaty
			// 
			this->gbKWyplaty->Controls->Add(this->label24);
			this->gbKWyplaty->Controls->Add(this->txtKGodziny);
			this->gbKWyplaty->Controls->Add(this->txtKWyplata);
			this->gbKWyplaty->Controls->Add(this->txtKRok);
			this->gbKWyplaty->Controls->Add(this->txtKMiesiac);
			this->gbKWyplaty->Controls->Add(this->btnKKsieguj);
			this->gbKWyplaty->Controls->Add(this->label13);
			this->gbKWyplaty->Controls->Add(this->label23);
			this->gbKWyplaty->Controls->Add(this->lblKStanowisko);
			this->gbKWyplaty->Controls->Add(this->label21);
			this->gbKWyplaty->Controls->Add(this->lblKNazwisko);
			this->gbKWyplaty->Controls->Add(this->lblKImie);
			this->gbKWyplaty->Controls->Add(this->label19);
			this->gbKWyplaty->Controls->Add(this->label18);
			this->gbKWyplaty->Controls->Add(this->label17);
			this->gbKWyplaty->Controls->Add(this->Użytkownik);
			this->gbKWyplaty->Controls->Add(this->txtKSzukaj);
			this->gbKWyplaty->Controls->Add(this->btnKSzukaj);
			this->gbKWyplaty->Location = System::Drawing::Point(7, 10);
			this->gbKWyplaty->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->gbKWyplaty->Name = L"gbKWyplaty";
			this->gbKWyplaty->Padding = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->gbKWyplaty->Size = System::Drawing::Size(504, 267);
			this->gbKWyplaty->TabIndex = 28;
			this->gbKWyplaty->TabStop = false;
			this->gbKWyplaty->Text = L"groupBox2";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(260, 225);
			this->label24->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(60, 17);
			this->label24->TabIndex = 27;
			this->label24->Text = L"Godziny";
			// 
			// txtKGodziny
			// 
			this->txtKGodziny->Location = System::Drawing::Point(347, 222);
			this->txtKGodziny->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->txtKGodziny->Name = L"txtKGodziny";
			this->txtKGodziny->Size = System::Drawing::Size(132, 22);
			this->txtKGodziny->TabIndex = 26;
			// 
			// txtKWyplata
			// 
			this->txtKWyplata->Location = System::Drawing::Point(347, 190);
			this->txtKWyplata->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->txtKWyplata->Name = L"txtKWyplata";
			this->txtKWyplata->Size = System::Drawing::Size(132, 22);
			this->txtKWyplata->TabIndex = 25;
			// 
			// txtKRok
			// 
			this->txtKRok->Location = System::Drawing::Point(347, 151);
			this->txtKRok->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->txtKRok->Name = L"txtKRok";
			this->txtKRok->Size = System::Drawing::Size(132, 22);
			this->txtKRok->TabIndex = 24;
			// 
			// txtKMiesiac
			// 
			this->txtKMiesiac->Location = System::Drawing::Point(347, 112);
			this->txtKMiesiac->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->txtKMiesiac->Name = L"txtKMiesiac";
			this->txtKMiesiac->Size = System::Drawing::Size(132, 22);
			this->txtKMiesiac->TabIndex = 23;
			// 
			// btnKKsieguj
			// 
			this->btnKKsieguj->Location = System::Drawing::Point(23, 160);
			this->btnKKsieguj->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btnKKsieguj->Name = L"btnKKsieguj";
			this->btnKKsieguj->Size = System::Drawing::Size(193, 54);
			this->btnKKsieguj->TabIndex = 22;
			this->btnKKsieguj->Text = L"Księguj wypłatę";
			this->btnKKsieguj->UseVisualStyleBackColor = true;
			this->btnKKsieguj->Click += gcnew System::EventHandler(this, &Program::btnKKsieguj_Click);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(260, 193);
			this->label13->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(59, 17);
			this->label13->TabIndex = 20;
			this->label13->Text = L"Wypłata";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(260, 155);
			this->label23->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(33, 17);
			this->label23->TabIndex = 17;
			this->label23->Text = L"Rok";
			// 
			// lblKStanowisko
			// 
			this->lblKStanowisko->AutoSize = true;
			this->lblKStanowisko->Location = System::Drawing::Point(161, 132);
			this->lblKStanowisko->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblKStanowisko->Name = L"lblKStanowisko";
			this->lblKStanowisko->Size = System::Drawing::Size(54, 17);
			this->lblKStanowisko->TabIndex = 16;
			this->lblKStanowisko->Text = L"label23";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(161, 96);
			this->label21->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(79, 17);
			this->label21->TabIndex = 15;
			this->label21->Text = L"Stanowisko";
			// 
			// lblKNazwisko
			// 
			this->lblKNazwisko->AutoSize = true;
			this->lblKNazwisko->Location = System::Drawing::Point(83, 132);
			this->lblKNazwisko->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblKNazwisko->Name = L"lblKNazwisko";
			this->lblKNazwisko->Size = System::Drawing::Size(54, 17);
			this->lblKNazwisko->TabIndex = 13;
			this->lblKNazwisko->Text = L"label24";
			// 
			// lblKImie
			// 
			this->lblKImie->AutoSize = true;
			this->lblKImie->Location = System::Drawing::Point(19, 132);
			this->lblKImie->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblKImie->Name = L"lblKImie";
			this->lblKImie->Size = System::Drawing::Size(54, 17);
			this->lblKImie->TabIndex = 12;
			this->lblKImie->Text = L"label23";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(260, 116);
			this->label19->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(55, 17);
			this->label19->TabIndex = 10;
			this->label19->Text = L"Miesiąc";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(83, 96);
			this->label18->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(67, 17);
			this->label18->TabIndex = 9;
			this->label18->Text = L"Nazwisko";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(19, 96);
			this->label17->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(33, 17);
			this->label17->TabIndex = 8;
			this->label17->Text = L"Imię";
			// 
			// Użytkownik
			// 
			this->Użytkownik->AutoSize = true;
			this->Użytkownik->Location = System::Drawing::Point(71, 14);
			this->Użytkownik->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->Użytkownik->Name = L"Użytkownik";
			this->Użytkownik->Size = System::Drawing::Size(78, 17);
			this->Użytkownik->TabIndex = 5;
			this->Użytkownik->Text = L"Użytkownik";
			// 
			// txtKSzukaj
			// 
			this->txtKSzukaj->Location = System::Drawing::Point(159, 10);
			this->txtKSzukaj->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->txtKSzukaj->Name = L"txtKSzukaj";
			this->txtKSzukaj->Size = System::Drawing::Size(193, 22);
			this->txtKSzukaj->TabIndex = 3;
			// 
			// btnKSzukaj
			// 
			this->btnKSzukaj->Location = System::Drawing::Point(75, 42);
			this->btnKSzukaj->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btnKSzukaj->Name = L"btnKSzukaj";
			this->btnKSzukaj->Size = System::Drawing::Size(279, 47);
			this->btnKSzukaj->TabIndex = 2;
			this->btnKSzukaj->Text = L"Szukaj";
			this->btnKSzukaj->UseVisualStyleBackColor = true;
			this->btnKSzukaj->Click += gcnew System::EventHandler(this, &Program::btnKSzukaj_Click);
			// 
			// dgKWypłaty
			// 
			this->dgKWypłaty->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgKWypłaty->Enabled = false;
			this->dgKWypłaty->Location = System::Drawing::Point(4, 299);
			this->dgKWypłaty->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->dgKWypłaty->Name = L"dgKWypłaty";
			this->dgKWypłaty->RowHeadersWidth = 51;
			this->dgKWypłaty->Size = System::Drawing::Size(524, 402);
			this->dgKWypłaty->TabIndex = 7;
			// 
			// dgKPodsumowanie
			// 
			this->dgKPodsumowanie->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgKPodsumowanie->Location = System::Drawing::Point(536, 299);
			this->dgKPodsumowanie->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->dgKPodsumowanie->Name = L"dgKPodsumowanie";
			this->dgKPodsumowanie->RowHeadersWidth = 51;
			this->dgKPodsumowanie->Size = System::Drawing::Size(707, 406);
			this->dgKPodsumowanie->TabIndex = 1;
			this->dgKPodsumowanie->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Program::dgKPodsumowanie_CellClick);
			// 
			// dgKUzytkownicy
			// 
			this->dgKUzytkownicy->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgKUzytkownicy->Location = System::Drawing::Point(536, 4);
			this->dgKUzytkownicy->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->dgKUzytkownicy->Name = L"dgKUzytkownicy";
			this->dgKUzytkownicy->RowHeadersWidth = 51;
			this->dgKUzytkownicy->Size = System::Drawing::Size(707, 288);
			this->dgKUzytkownicy->TabIndex = 0;
			this->dgKUzytkownicy->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Program::dgKUzytkownicy_CellClick);
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->dgRaport);
			this->tabPage3->Controls->Add(this->groupBox2);
			this->tabPage3->Location = System::Drawing::Point(4, 25);
			this->tabPage3->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Size = System::Drawing::Size(1249, 712);
			this->tabPage3->TabIndex = 4;
			this->tabPage3->Text = L"Raporty";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// dgRaport
			// 
			this->dgRaport->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgRaport->Enabled = false;
			this->dgRaport->Location = System::Drawing::Point(8, 92);
			this->dgRaport->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->dgRaport->Name = L"dgRaport";
			this->dgRaport->RowHeadersWidth = 51;
			this->dgRaport->Size = System::Drawing::Size(1233, 609);
			this->dgRaport->TabIndex = 1;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->label27);
			this->groupBox2->Controls->Add(this->label26);
			this->groupBox2->Controls->Add(this->Rok);
			this->groupBox2->Controls->Add(this->txtRDzien);
			this->groupBox2->Controls->Add(this->txtRMiesiac);
			this->groupBox2->Controls->Add(this->txtRRok);
			this->groupBox2->Controls->Add(this->btnRGeneruj);
			this->groupBox2->Controls->Add(this->txtRRaport);
			this->groupBox2->Location = System::Drawing::Point(4, 0);
			this->groupBox2->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Padding = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->groupBox2->Size = System::Drawing::Size(1239, 85);
			this->groupBox2->TabIndex = 0;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Parametry";
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Location = System::Drawing::Point(653, 31);
			this->label27->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(44, 17);
			this->label27->TabIndex = 7;
			this->label27->Text = L"Dzień";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Location = System::Drawing::Point(461, 32);
			this->label26->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(55, 17);
			this->label26->TabIndex = 6;
			this->label26->Text = L"Miesiąc";
			// 
			// Rok
			// 
			this->Rok->AutoSize = true;
			this->Rok->Location = System::Drawing::Point(284, 32);
			this->Rok->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->Rok->Name = L"Rok";
			this->Rok->Size = System::Drawing::Size(33, 17);
			this->Rok->TabIndex = 5;
			this->Rok->Text = L"Rok";
			// 
			// txtRDzien
			// 
			this->txtRDzien->FormattingEnabled = true;
			this->txtRDzien->Location = System::Drawing::Point(607, 50);
			this->txtRDzien->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->txtRDzien->Name = L"txtRDzien";
			this->txtRDzien->Size = System::Drawing::Size(147, 24);
			this->txtRDzien->TabIndex = 4;
			// 
			// txtRMiesiac
			// 
			this->txtRMiesiac->FormattingEnabled = true;
			this->txtRMiesiac->Location = System::Drawing::Point(424, 50);
			this->txtRMiesiac->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->txtRMiesiac->Name = L"txtRMiesiac";
			this->txtRMiesiac->Size = System::Drawing::Size(144, 24);
			this->txtRMiesiac->TabIndex = 3;
			// 
			// txtRRok
			// 
			this->txtRRok->FormattingEnabled = true;
			this->txtRRok->Location = System::Drawing::Point(245, 50);
			this->txtRRok->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->txtRRok->Name = L"txtRRok";
			this->txtRRok->Size = System::Drawing::Size(143, 24);
			this->txtRRok->TabIndex = 2;
			// 
			// btnRGeneruj
			// 
			this->btnRGeneruj->Location = System::Drawing::Point(916, 14);
			this->btnRGeneruj->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btnRGeneruj->Name = L"btnRGeneruj";
			this->btnRGeneruj->Size = System::Drawing::Size(300, 53);
			this->btnRGeneruj->TabIndex = 1;
			this->btnRGeneruj->Text = L"Generuj";
			this->btnRGeneruj->UseVisualStyleBackColor = true;
			this->btnRGeneruj->Click += gcnew System::EventHandler(this, &Program::btnRGeneruj_Click);
			// 
			// txtRRaport
			// 
			this->txtRRaport->FormattingEnabled = true;
			this->txtRRaport->Items->AddRange(gcnew cli::array< System::Object^  >(1) { L"KadraDnia" });
			this->txtRRaport->Location = System::Drawing::Point(8, 52);
			this->txtRRaport->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->txtRRaport->Name = L"txtRRaport";
			this->txtRRaport->Size = System::Drawing::Size(215, 24);
			this->txtRRaport->TabIndex = 0;
			// 
			// Rezerwacje
			// 
			this->Rezerwacje->Controls->Add(this->dgRRezerwacja);
			this->Rezerwacje->Controls->Add(this->gbRezerwacja);
			this->Rezerwacje->Controls->Add(this->dgRStolik);
			this->Rezerwacje->Location = System::Drawing::Point(4, 25);
			this->Rezerwacje->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Rezerwacje->Name = L"Rezerwacje";
			this->Rezerwacje->Size = System::Drawing::Size(1249, 712);
			this->Rezerwacje->TabIndex = 5;
			this->Rezerwacje->Text = L"Rezerwacje";
			this->Rezerwacje->UseVisualStyleBackColor = true;
			// 
			// dgRRezerwacja
			// 
			this->dgRRezerwacja->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgRRezerwacja->Location = System::Drawing::Point(407, 305);
			this->dgRRezerwacja->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->dgRRezerwacja->Name = L"dgRRezerwacja";
			this->dgRRezerwacja->RowHeadersWidth = 51;
			this->dgRRezerwacja->Size = System::Drawing::Size(821, 375);
			this->dgRRezerwacja->TabIndex = 2;
			this->dgRRezerwacja->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Program::dgRRezerwacja_CellClick);
			this->dgRRezerwacja->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Program::dgRRezerwacja_CellContentClick);
			// 
			// gbRezerwacja
			// 
			this->gbRezerwacja->Controls->Add(this->label31);
			this->gbRezerwacja->Controls->Add(this->txtRRStolik);
			this->gbRezerwacja->Controls->Add(this->txtRRKom);
			this->gbRezerwacja->Controls->Add(this->label30);
			this->gbRezerwacja->Controls->Add(this->btnRUsun);
			this->gbRezerwacja->Controls->Add(this->btnREdytuj);
			this->gbRezerwacja->Controls->Add(this->btnRDodaj);
			this->gbRezerwacja->Controls->Add(this->txtRRRok);
			this->gbRezerwacja->Controls->Add(this->txtRRMiesiac);
			this->gbRezerwacja->Controls->Add(this->txtRRDzien);
			this->gbRezerwacja->Controls->Add(this->txtRRGodzina);
			this->gbRezerwacja->Controls->Add(this->label29);
			this->gbRezerwacja->Controls->Add(this->label28);
			this->gbRezerwacja->Controls->Add(this->label25);
			this->gbRezerwacja->Controls->Add(this->Godzina);
			this->gbRezerwacja->Controls->Add(this->txtRSzukaj);
			this->gbRezerwacja->Controls->Add(this->button1);
			this->gbRezerwacja->Location = System::Drawing::Point(12, 12);
			this->gbRezerwacja->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->gbRezerwacja->Name = L"gbRezerwacja";
			this->gbRezerwacja->Padding = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->gbRezerwacja->Size = System::Drawing::Size(377, 378);
			this->gbRezerwacja->TabIndex = 1;
			this->gbRezerwacja->TabStop = false;
			this->gbRezerwacja->Text = L"Szczegóły rezerwacji";
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Location = System::Drawing::Point(260, 111);
			this->label31->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(46, 17);
			this->label31->TabIndex = 16;
			this->label31->Text = L"Stolik:";
			// 
			// txtRRStolik
			// 
			this->txtRRStolik->Location = System::Drawing::Point(261, 134);
			this->txtRRStolik->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->txtRRStolik->Name = L"txtRRStolik";
			this->txtRRStolik->Size = System::Drawing::Size(52, 22);
			this->txtRRStolik->TabIndex = 15;
			// 
			// txtRRKom
			// 
			this->txtRRKom->Location = System::Drawing::Point(8, 238);
			this->txtRRKom->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->txtRRKom->Multiline = true;
			this->txtRRKom->Name = L"txtRRKom";
			this->txtRRKom->Size = System::Drawing::Size(352, 84);
			this->txtRRKom->TabIndex = 14;
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Location = System::Drawing::Point(0, 213);
			this->label30->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(80, 17);
			this->label30->TabIndex = 13;
			this->label30->Text = L"Komentarz:";
			// 
			// btnRUsun
			// 
			this->btnRUsun->Enabled = false;
			this->btnRUsun->Location = System::Drawing::Point(261, 330);
			this->btnRUsun->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btnRUsun->Name = L"btnRUsun";
			this->btnRUsun->Size = System::Drawing::Size(100, 28);
			this->btnRUsun->TabIndex = 12;
			this->btnRUsun->Text = L"Usuń";
			this->btnRUsun->UseVisualStyleBackColor = true;
			this->btnRUsun->Click += gcnew System::EventHandler(this, &Program::btnRUsun_Click);
			// 
			// btnREdytuj
			// 
			this->btnREdytuj->Enabled = false;
			this->btnREdytuj->Location = System::Drawing::Point(135, 330);
			this->btnREdytuj->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btnREdytuj->Name = L"btnREdytuj";
			this->btnREdytuj->Size = System::Drawing::Size(100, 28);
			this->btnREdytuj->TabIndex = 11;
			this->btnREdytuj->Text = L"Edytuj";
			this->btnREdytuj->UseVisualStyleBackColor = true;
			this->btnREdytuj->Click += gcnew System::EventHandler(this, &Program::btnREdytuj_Click);
			// 
			// btnRDodaj
			// 
			this->btnRDodaj->Location = System::Drawing::Point(8, 330);
			this->btnRDodaj->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btnRDodaj->Name = L"btnRDodaj";
			this->btnRDodaj->Size = System::Drawing::Size(100, 28);
			this->btnRDodaj->TabIndex = 10;
			this->btnRDodaj->Text = L"Dodaj";
			this->btnRDodaj->UseVisualStyleBackColor = true;
			this->btnRDodaj->Click += gcnew System::EventHandler(this, &Program::btnRDodaj_Click);
			// 
			// txtRRRok
			// 
			this->txtRRRok->Location = System::Drawing::Point(80, 175);
			this->txtRRRok->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->txtRRRok->Mask = L"0000";
			this->txtRRRok->Name = L"txtRRRok";
			this->txtRRRok->Size = System::Drawing::Size(132, 22);
			this->txtRRRok->TabIndex = 9;
			this->txtRRRok->Text = L"2022";
			// 
			// txtRRMiesiac
			// 
			this->txtRRMiesiac->Location = System::Drawing::Point(80, 144);
			this->txtRRMiesiac->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->txtRRMiesiac->Mask = L"00";
			this->txtRRMiesiac->Name = L"txtRRMiesiac";
			this->txtRRMiesiac->Size = System::Drawing::Size(132, 22);
			this->txtRRMiesiac->TabIndex = 8;
			// 
			// txtRRDzien
			// 
			this->txtRRDzien->Location = System::Drawing::Point(80, 111);
			this->txtRRDzien->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->txtRRDzien->Mask = L"00";
			this->txtRRDzien->Name = L"txtRRDzien";
			this->txtRRDzien->Size = System::Drawing::Size(132, 22);
			this->txtRRDzien->TabIndex = 7;
			// 
			// txtRRGodzina
			// 
			this->txtRRGodzina->Location = System::Drawing::Point(80, 75);
			this->txtRRGodzina->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->txtRRGodzina->Mask = L"00";
			this->txtRRGodzina->Name = L"txtRRGodzina";
			this->txtRRGodzina->Size = System::Drawing::Size(132, 22);
			this->txtRRGodzina->TabIndex = 6;
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Location = System::Drawing::Point(4, 183);
			this->label29->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(37, 17);
			this->label29->TabIndex = 5;
			this->label29->Text = L"Rok:";
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Location = System::Drawing::Point(4, 153);
			this->label28->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(59, 17);
			this->label28->TabIndex = 4;
			this->label28->Text = L"Miesiąc:";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Location = System::Drawing::Point(4, 119);
			this->label25->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(48, 17);
			this->label25->TabIndex = 3;
			this->label25->Text = L"Dzień:";
			// 
			// Godzina
			// 
			this->Godzina->AutoSize = true;
			this->Godzina->Location = System::Drawing::Point(4, 84);
			this->Godzina->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->Godzina->Name = L"Godzina";
			this->Godzina->Size = System::Drawing::Size(64, 17);
			this->Godzina->TabIndex = 2;
			this->Godzina->Text = L"Godziny:";
			// 
			// txtRSzukaj
			// 
			this->txtRSzukaj->Location = System::Drawing::Point(8, 28);
			this->txtRSzukaj->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->txtRSzukaj->Name = L"txtRSzukaj";
			this->txtRSzukaj->Size = System::Drawing::Size(207, 22);
			this->txtRSzukaj->TabIndex = 1;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(236, 23);
			this->button1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(133, 36);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Szukaj";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Program::button1_Click);
			// 
			// dgRStolik
			// 
			this->dgRStolik->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgRStolik->Location = System::Drawing::Point(407, 12);
			this->dgRStolik->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->dgRStolik->Name = L"dgRStolik";
			this->dgRStolik->RowHeadersWidth = 51;
			this->dgRStolik->Size = System::Drawing::Size(821, 266);
			this->dgRStolik->TabIndex = 0;
			this->dgRStolik->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Program::dgRStolik_CellClick);
			// 
			// tabPage4
			// 
			this->tabPage4->Controls->Add(this->gbStoliki);
			this->tabPage4->Controls->Add(this->dgSStolik);
			this->tabPage4->Location = System::Drawing::Point(4, 25);
			this->tabPage4->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Size = System::Drawing::Size(1249, 712);
			this->tabPage4->TabIndex = 6;
			this->tabPage4->Text = L"Stolik";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// gbStoliki
			// 
			this->gbStoliki->Controls->Add(this->label32);
			this->gbStoliki->Controls->Add(this->txtSNazwa);
			this->gbStoliki->Controls->Add(this->btnRWyswietl);
			this->gbStoliki->Controls->Add(this->btnSUsun);
			this->gbStoliki->Controls->Add(this->btnSDodaj);
			this->gbStoliki->Location = System::Drawing::Point(9, 20);
			this->gbStoliki->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->gbStoliki->Name = L"gbStoliki";
			this->gbStoliki->Padding = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->gbStoliki->Size = System::Drawing::Size(457, 176);
			this->gbStoliki->TabIndex = 1;
			this->gbStoliki->TabStop = false;
			this->gbStoliki->Text = L"Stoliki";
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Location = System::Drawing::Point(124, 73);
			this->label32->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(54, 17);
			this->label32->TabIndex = 4;
			this->label32->Text = L"Nazwa:";
			// 
			// txtSNazwa
			// 
			this->txtSNazwa->Location = System::Drawing::Point(41, 92);
			this->txtSNazwa->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->txtSNazwa->Name = L"txtSNazwa";
			this->txtSNazwa->Size = System::Drawing::Size(240, 22);
			this->txtSNazwa->TabIndex = 3;
			// 
			// btnRWyswietl
			// 
			this->btnRWyswietl->Location = System::Drawing::Point(97, 23);
			this->btnRWyswietl->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btnRWyswietl->Name = L"btnRWyswietl";
			this->btnRWyswietl->Size = System::Drawing::Size(259, 39);
			this->btnRWyswietl->TabIndex = 2;
			this->btnRWyswietl->Text = L"Wyświetl";
			this->btnRWyswietl->UseVisualStyleBackColor = true;
			this->btnRWyswietl->Click += gcnew System::EventHandler(this, &Program::btnRWyswietl_Click);
			// 
			// btnSUsun
			// 
			this->btnSUsun->Location = System::Drawing::Point(291, 128);
			this->btnSUsun->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btnSUsun->Name = L"btnSUsun";
			this->btnSUsun->Size = System::Drawing::Size(157, 32);
			this->btnSUsun->TabIndex = 1;
			this->btnSUsun->Text = L"Usuń";
			this->btnSUsun->UseVisualStyleBackColor = true;
			this->btnSUsun->Click += gcnew System::EventHandler(this, &Program::btnSUsun_Click);
			// 
			// btnSDodaj
			// 
			this->btnSDodaj->Location = System::Drawing::Point(291, 87);
			this->btnSDodaj->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btnSDodaj->Name = L"btnSDodaj";
			this->btnSDodaj->Size = System::Drawing::Size(157, 33);
			this->btnSDodaj->TabIndex = 0;
			this->btnSDodaj->Text = L"Dodaj";
			this->btnSDodaj->UseVisualStyleBackColor = true;
			this->btnSDodaj->Click += gcnew System::EventHandler(this, &Program::btnSDodaj_Click);
			// 
			// dgSStolik
			// 
			this->dgSStolik->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgSStolik->Location = System::Drawing::Point(485, 20);
			this->dgSStolik->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->dgSStolik->Name = L"dgSStolik";
			this->dgSStolik->RowHeadersWidth = 51;
			this->dgSStolik->Size = System::Drawing::Size(744, 511);
			this->dgSStolik->TabIndex = 0;
			this->dgSStolik->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Program::dgSStolik_CellClick);
			// 
			// Program
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1263, 747);
			this->Controls->Add(this->tPControl);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"Program";
			this->Text = L"Program";
			this->Load += gcnew System::EventHandler(this, &Program::Program_Load);
			this->tPControl->ResumeLayout(false);
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgGodziny))->EndInit();
			this->gbUGodziny->ResumeLayout(false);
			this->gbUGodziny->PerformLayout();
			this->gbUEdycja->ResumeLayout(false);
			this->gbUEdycja->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgUzytkownik))->EndInit();
			this->gbWStawka->ResumeLayout(false);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgWUzytkownik))->EndInit();
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->lblKMiesiac->ResumeLayout(false);
			this->gbKWyplaty->ResumeLayout(false);
			this->gbKWyplaty->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgKWypłaty))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgKPodsumowanie))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgKUzytkownicy))->EndInit();
			this->tabPage3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgRaport))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->Rezerwacje->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgRRezerwacja))->EndInit();
			this->gbRezerwacja->ResumeLayout(false);
			this->gbRezerwacja->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgRStolik))->EndInit();
			this->tabPage4->ResumeLayout(false);
			this->gbStoliki->ResumeLayout(false);
			this->gbStoliki->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgSStolik))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		int id_recordu;
		int id_godziny;
		int id_rezerwacji;
		int id_stolik;
		String^ zawod;
		
		//String pracownik;

	private: System::Void ZmienHaslo_Click(System::Object^ sender, System::EventArgs^ e) {
	}

private: System::Void ZmienHaslo_Click_1(System::Object^ sender, System::EventArgs^ e) {
	
	MySqlConnection^ laczBaze = gcnew MySqlConnection(konfiguracja);
	MySqlCommand^ zapytanie = gcnew MySqlCommand("UPDATE uzytkownik SET hasloUzytkownik = '" + txtNoweHaslo->Text + "' WHERE idUzytkownik = 1 AND hasloUzytkownik = '" + txtStareHaslo->Text + "'", laczBaze);
	try {
		laczBaze->Open();

		if (zapytanie->ExecuteNonQuery()) {
			MessageBox::Show("It's working :)");
		}
		else {
			MessageBox::Show("It's not working bro :(");
		}
		laczBaze->Close();
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}
}

private: System::Void wyczysc(Control^ zbiorKontrolek) {
	for each (Control ^ element in zbiorKontrolek->Controls) {
		if (element->GetType() == TextBox::typeid) {
			element->Text = "";
		}

	}
}

private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnUSzukaj_Click(System::Object^ sender, System::EventArgs^ e) {
	MySqlConnection^ laczBaze = gcnew MySqlConnection(konfiguracja);
	MySqlCommand^ zapytanie = gcnew MySqlCommand("SELECT idUzytkownik, imieUzytkownik, nazwiskoUzytkownik, loginUzytkownik AS login, pracownik FROM uzytkownik WHERE concat(idUzytkownik, imieUzytkownik, ' ', nazwiskoUzytkownik) LIKE '%" + txtUUzytkownik->Text + "%'", laczBaze);

	try {
		laczBaze->Open();
		MySqlDataAdapter^ klinikaBaza = gcnew MySqlDataAdapter();
		klinikaBaza->SelectCommand = zapytanie;
		DataTable^ uTabel = gcnew DataTable();
		klinikaBaza->Fill(uTabel);
		BindingSource^ zrodloKlinika = gcnew BindingSource();
		zrodloKlinika->DataSource = uTabel;
		dgUzytkownik->DataSource = zrodloKlinika;
		laczBaze->Close();
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}
	dgUzytkownik->Columns[0]->Visible = false;
	wyczysc(gbUEdycja);
}
private: System::Void dgUzytkownik_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	if (e->RowIndex >= 0) {
		id_recordu = (int)dgUzytkownik->Rows[e->RowIndex]->Cells[0]->Value;
		txtUImie->Text = dgUzytkownik->Rows[e->RowIndex]->Cells["imieUzytkownik"]->Value->ToString();
		txtUNazwisko->Text = dgUzytkownik->Rows[e->RowIndex]->Cells["nazwiskoUzytkownik"]->Value->ToString();
		//txtULogin->Text = dgUzytkownik->Rows[e->RowIndex]->Cells["loginUzytkownik"]->Value->ToString();
		txtUPracownik->SelectedItem = dgUzytkownik->Rows[e->RowIndex]->Cells["pracownik"]->Value->ToString();  // !!!


		btnUEdytuj->Enabled = true;
		btnUUsun->Enabled = true;

		

		MySqlConnection^ laczBaze = gcnew MySqlConnection(konfiguracja);
		MySqlCommand^ zapytanie = gcnew MySqlCommand("SELECT idgodziny, dzien,miesiac,rok, godzina_k-godzina_r as suma from godziny where Uzytkownik_idUzytkownik='"+id_recordu+"';", laczBaze);

		try {
			laczBaze->Open();
			MySqlDataAdapter^ klinikaBaza = gcnew MySqlDataAdapter();
			klinikaBaza->SelectCommand = zapytanie;
			DataTable^ uTabel = gcnew DataTable();
			klinikaBaza->Fill(uTabel);
			BindingSource^ zrodloKlinika = gcnew BindingSource();
			zrodloKlinika->DataSource = uTabel;
			dgGodziny->DataSource = zrodloKlinika;
			laczBaze->Close();
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
		dgGodziny->Columns[0]->Visible = false;
		wyczysc(gbUEdycja);
		
		
	}
}



private: Void pokazSiatke(System::Windows::Forms::TextBox^ pole, System::Windows::Forms::DataGridView^ siatka) {
	MySqlConnection^ laczBaze = gcnew MySqlConnection(konfiguracja);
	MySqlCommand^ zapytanie = gcnew MySqlCommand("SELECT idUzytkownik, imieUzytkownik, nazwiskoUzytkownik, loginUzytkownik, pracownik FROM uzytkownik WHERE concat(idUzytkownik, imieUzytkownik, ' ', nazwiskoUzytkownik) LIKE '%"+pole->Text+"%';", laczBaze);
	try {
		laczBaze->Open();
		MySqlDataAdapter^ klinikaBaza = gcnew MySqlDataAdapter();
		klinikaBaza->SelectCommand = zapytanie;
		DataTable^ uTabel = gcnew DataTable();
		klinikaBaza->Fill(uTabel);
		BindingSource^ zrodloKlinika = gcnew BindingSource();
		zrodloKlinika->DataSource = uTabel;
		siatka->DataSource = zrodloKlinika;
		laczBaze->Close();
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}
	siatka->Columns[0]->Visible = false;
}
private: Void pokazStoliki(System::Windows::Forms::DataGridView^ siatka) {
		   MySqlConnection^ laczBaze = gcnew MySqlConnection(konfiguracja);
		   MySqlCommand^ zapytanie = gcnew MySqlCommand("SELECT * from stolik", laczBaze);
		   try {
			   laczBaze->Open();
			   MySqlDataAdapter^ klinikaBaza = gcnew MySqlDataAdapter();
			   klinikaBaza->SelectCommand = zapytanie;
			   DataTable^ uTabel = gcnew DataTable();
			   klinikaBaza->Fill(uTabel);
			   BindingSource^ zrodloKlinika = gcnew BindingSource();
			   zrodloKlinika->DataSource = uTabel;
			   siatka->DataSource = zrodloKlinika;
			   laczBaze->Close();
		   }
		   catch (Exception^ ex) {
			   MessageBox::Show(ex->Message);
		   }
		   siatka->Columns[0]->Visible = false;
	   }
private: Void pokazRezerwacje(System::Windows::Forms::TextBox^ pole, System::Windows::Forms::DataGridView^ siatka, System::Windows::Forms::DataGridView^ siatka2) {
	MySqlConnection^ laczBaze = gcnew MySqlConnection(konfiguracja);
	MySqlCommand^ zapytanie = gcnew MySqlCommand("SELECT * from rezerwacja where komentarz like '%" + pole->Text + "%';", laczBaze);

	try {
		laczBaze->Open();
		MySqlDataAdapter^ klinikaBaza = gcnew MySqlDataAdapter();
		klinikaBaza->SelectCommand = zapytanie;
		DataTable^ uTabel = gcnew DataTable();
		klinikaBaza->Fill(uTabel);
		BindingSource^ zrodloKlinika = gcnew BindingSource();
		zrodloKlinika->DataSource = uTabel;
		siatka->DataSource = zrodloKlinika;
		laczBaze->Close();
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}

	MySqlCommand^ zapytanie2 = gcnew MySqlCommand("SELECT * from stolik", laczBaze);

	try {
		laczBaze->Open();
		MySqlDataAdapter^ klinikaBaza = gcnew MySqlDataAdapter();
		klinikaBaza->SelectCommand = zapytanie2;
		DataTable^ uTabel = gcnew DataTable();
		klinikaBaza->Fill(uTabel);
		BindingSource^ zrodloKlinika = gcnew BindingSource();
		zrodloKlinika->DataSource = uTabel;
		siatka2->DataSource = zrodloKlinika;
		laczBaze->Close();
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}
	siatka->Columns[0]->Visible = false;
	siatka2->Columns[0]->Visible = false;
	   }

private: Void pokazGodziny(System::Windows::Forms::DataGridView^ siatka, int id) {
		   MySqlConnection^ laczBaze = gcnew MySqlConnection(konfiguracja);
		   MySqlCommand^ zapytanie = gcnew MySqlCommand("SELECT uzytkownik_idUzytkownik, dzien,miesiac,rok, godzina_k-godzina_r as suma FROM godziny WHERE Uzytkownik_idUzytkownik='"+id+"';", laczBaze);
		   try {
			   laczBaze->Open();
			   MySqlDataAdapter^ klinikaBaza = gcnew MySqlDataAdapter();
			   klinikaBaza->SelectCommand = zapytanie;
			   DataTable^ uTabel = gcnew DataTable();
			   klinikaBaza->Fill(uTabel);
			   BindingSource^ zrodloKlinika = gcnew BindingSource();
			   zrodloKlinika->DataSource = uTabel;
			   siatka->DataSource = zrodloKlinika;
			   laczBaze->Close();
		   }
		   catch (Exception^ ex) {
			   MessageBox::Show(ex->Message);
		   }
		   siatka->Columns[0]->Visible = false;
	   }

private: Void pokazWyplaty(System::Windows::Forms::DataGridView^ siatka, int id) {
		 MySqlConnection^ laczBaze = gcnew MySqlConnection(konfiguracja);
		 MySqlCommand^ zapytanie = gcnew MySqlCommand("SELECT rok,miesiac,suma,godziny FROM wyplaty WHERE Uzytkownik_idUzytkownik='" + id + "';", laczBaze);
		 try {
			 laczBaze->Open();
			 MySqlDataAdapter^ klinikaBaza = gcnew MySqlDataAdapter();
			 klinikaBaza->SelectCommand = zapytanie;
			 DataTable^ uTabel = gcnew DataTable();
			 klinikaBaza->Fill(uTabel);
			 BindingSource^ zrodloKlinika = gcnew BindingSource();
			 zrodloKlinika->DataSource = uTabel;
			 siatka->DataSource = zrodloKlinika;
			 laczBaze->Close();
		 }
		 catch (Exception^ ex) {
			 MessageBox::Show(ex->Message);
		 }
		 
	 }
// ------------------------------------------------------------------------------------------------------------  DODAJ --------------------------------------
private: System::Void btnUDodaj_Click(System::Object^ sender, System::EventArgs^ e) {
	
	if (txtUImie->Text->Length < 3 || txtUNazwisko->Text->Length < 5) {

		MessageBox::Show("Wprowadz dane poprawne, plz");
		return;

	}
	else {

		//MessageBox::Show("Uzytkownik jest dodany");
		
	}

	MySqlConnection^ laczBaze = gcnew MySqlConnection(konfiguracja);
	MySqlCommand^ polecenie = laczBaze->CreateCommand();
	MySqlTransaction^ transakcja;
	laczBaze->Open();

	transakcja = laczBaze->BeginTransaction(IsolationLevel::ReadCommitted);

	polecenie->Connection = laczBaze;
	polecenie->Transaction = transakcja;

	try {
		polecenie->CommandText = "INSERT INTO uzytkownik SET imieUzytkownik = '" +
			txtUImie->Text + "', nazwiskoUzytkownik = '" + txtUNazwisko->Text + "', loginUzytkownik = '" + txtUImie->Text+txtUNazwisko->Text + "', pracownik = '" +
			txtUPracownik->SelectedItem + "', hasloUzytkownik = '" + txtUImie->Text + txtUNazwisko->Text + "';";
		polecenie->ExecuteNonQuery();


		transakcja->Commit();

	}
	catch (Exception^ e) {

		MessageBox::Show(e->Message);
		transakcja->Rollback();

	}

	pokazSiatke(txtUUzytkownik,dgUzytkownik);
	laczBaze->Close();
	wyczysc(gbUEdycja);


}
private: System::Void btnUUsun_Click(System::Object^ sender, System::EventArgs^ e) {
	if (id_recordu == 1) {
		MessageBox::Show("Nie mozna usunac uzytkownika admin");
		return;
	}

	MySqlConnection^ laczBaze = gcnew MySqlConnection(konfiguracja);
	MySqlCommand^ polecenie = laczBaze->CreateCommand();
	MySqlTransaction^ transakcja;
	laczBaze->Open();

	transakcja = laczBaze->BeginTransaction(IsolationLevel::ReadCommitted);

	polecenie->Connection = laczBaze;
	polecenie->Transaction = transakcja;

	try {
		if (MessageBox::Show("Czy na pewno usunac uzytkownika " + txtUImie->Text + " " + txtUNazwisko + " ?", "Uwaga!!", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes);
		
		if (txtUPracownik->SelectedItem == "pracownik_baru" || txtUPracownik->SelectedItem == "kucharz" || txtUPracownik->SelectedItem == "kelner" || txtUPracownik->SelectedItem == "sprzątacz") {
			polecenie->CommandText = "DELETE FROM godziny WHERE Uzytkownik_idUzytkownik = " + id_recordu + " ;";
			polecenie->ExecuteNonQuery();
		}

		polecenie->CommandText = "DELETE FROM uzytkownik WHERE idUzytkownik = " + id_recordu + " ;";
		polecenie->ExecuteNonQuery();


		transakcja->Commit();
		MessageBox::Show("Uzytkownik " + id_recordu + ", zostal usunety");

	}
	catch (Exception^ e) {

		MessageBox::Show(e->Message);
		transakcja->Rollback();

	}

	pokazSiatke(txtUUzytkownik, dgUzytkownik);
	laczBaze->Close();
	wyczysc(gbUEdycja);
}


private: System::Void Program_Load(System::Object^ sender, System::EventArgs^ e) {
	gbUGodziny->Visible = true;
}
private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnWSzukaj_Click(System::Object^ sender, System::EventArgs^ e) { // BTNSZUKAJZawod

	MySqlConnection^ laczBaze = gcnew MySqlConnection(konfiguracja);
	MySqlCommand^ zapytanie = gcnew MySqlCommand("SELECT * FROM pracownicy WHERE pracownik LIKE '%"+txtWZawod->Text+"%';", laczBaze);

	try {
		laczBaze->Open();
		MySqlDataAdapter^ klinikaBaza = gcnew MySqlDataAdapter();
		klinikaBaza->SelectCommand = zapytanie;
		DataTable^ uTabel = gcnew DataTable();
		klinikaBaza->Fill(uTabel);
		BindingSource^ zrodloKlinika = gcnew BindingSource();
		zrodloKlinika->DataSource = uTabel;
		dgWUzytkownik->DataSource = zrodloKlinika;
		laczBaze->Close();
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}
	dgWUzytkownik->Columns[0]->Visible = true;
	//wyczysc(gbWEdycja);
}




private: System::Void btnGDodaj_Click(System::Object^ sender, System::EventArgs^ e) {
	if (txtUDzien->Text->Length!=2 ||txtUMiesiac->Text->Length!=2||txtURok->Text->Length!=4) {

		MessageBox::Show("Wprowadz dane poprawne, plz");
		return;

	}
	else {

		//MessageBox::Show("Uzytkownik jest dodany");
	
	}

	MySqlConnection^ laczBaze = gcnew MySqlConnection(konfiguracja);
	MySqlCommand^ polecenie = laczBaze->CreateCommand();
	MySqlTransaction^ transakcja;
	laczBaze->Open();

	transakcja = laczBaze->BeginTransaction(IsolationLevel::ReadCommitted);

	polecenie->Connection = laczBaze;
	polecenie->Transaction = transakcja;

	try {
			
			String^ godzina_r = txtUOd->Text->Replace(",", ".");
			String^ godzina_k = txtUDo->Text->Replace(",", ".");
			polecenie->CommandText = "Insert into godziny set uzytkownik_idUzytkownik='" + id_recordu + "',miesiac='" + txtUMiesiac->Text + "',dzien='" + txtUDzien->Text + "',rok='" + txtURok->Text + "',godzina_r='" + godzina_r + "',godzina_k='" + godzina_k +"';";
			polecenie->ExecuteNonQuery();
			MessageBox::Show("Godziny " + txtUPracownik->SelectedText + " " + txtUImie->Text + ", zostaly dodane do bazy danych");
		




		transakcja->Commit();

	}
	catch (Exception^ e) {

		MessageBox::Show(e->Message);
		transakcja->Rollback();

	}

	pokazSiatke(txtUUzytkownik, dgUzytkownik);
	pokazGodziny(dgGodziny,id_recordu);
	laczBaze->Close();
	wyczysc(gbUEdycja);
}
private: System::Void dgGodziny_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	if (e->RowIndex >= 0) {
		id_godziny = (int)dgGodziny->Rows[e->RowIndex]->Cells[0]->Value;
		txtUDzien->Text = dgGodziny->Rows[e->RowIndex]->Cells["dzien"]->Value->ToString();
		txtUMiesiac->Text = dgGodziny->Rows[e->RowIndex]->Cells["miesiac"]->Value->ToString();
		txtURok->Text = dgGodziny->Rows[e->RowIndex]->Cells["rok"]->Value->ToString();
		
		btnGEdytuj->Enabled = true;
		btnGUsun->Enabled = true;
		

	}

}
private: System::Void btnGUsun_Click(System::Object^ sender, System::EventArgs^ e) {
	MySqlConnection^ laczBaze = gcnew MySqlConnection(konfiguracja);
	MySqlCommand^ polecenie = laczBaze->CreateCommand();
	MySqlTransaction^ transakcja;
	laczBaze->Open();

	transakcja = laczBaze->BeginTransaction(IsolationLevel::ReadCommitted);

	polecenie->Connection = laczBaze;
	polecenie->Transaction = transakcja;

	try {
		if (MessageBox::Show("Czy na pewno usunac godziny " + txtUImie->Text + " " + txtUNazwisko + " ?", "Uwaga!!", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes);


		polecenie->CommandText = "DELETE FROM godziny WHERE idgodziny = " + id_godziny + " ;";
		polecenie->ExecuteNonQuery();


		transakcja->Commit();
		MessageBox::Show("Godziny zostaly usunete");

	}
	catch (Exception^ e) {

		MessageBox::Show(e->Message);
		transakcja->Rollback();

	}

	pokazSiatke(txtUUzytkownik, dgUzytkownik);
	pokazGodziny(dgGodziny, id_recordu);
	laczBaze->Close();
	wyczysc(gbUGodziny);

}
private: System::Void btnGEdytuj_Click(System::Object^ sender, System::EventArgs^ e) {
	MySqlConnection^ laczBaze = gcnew MySqlConnection(konfiguracja);
	MySqlCommand^ polecenie = laczBaze->CreateCommand();
	MySqlTransaction^ transakcja;
	laczBaze->Open();

	transakcja = laczBaze->BeginTransaction(IsolationLevel::ReadCommitted);

	polecenie->Connection = laczBaze;
	polecenie->Transaction = transakcja;
	try {
		
		String^ godzina_k = txtUDo->Text->Replace(",", ".");
		String^ godzina_r = txtUOd->Text->Replace(",", ".");
		
		
		
		polecenie->CommandText = "UPDATE godziny SET miesiac='" + txtUMiesiac->Text + "',dzien='" + txtUDzien->Text + "',rok='" + txtURok->Text +"',godzina_r='"+godzina_r+"',godzina_k='"+godzina_k+"' WHERE idgodziny=" + id_godziny;
		polecenie->ExecuteNonQuery();


		transakcja->Commit();
		MessageBox::Show("Godziny zostaly zaktualizowane");

	}
	catch (Exception^ e) {

		MessageBox::Show(e->Message);
		transakcja->Rollback();

	}

	pokazSiatke(txtUUzytkownik, dgUzytkownik);
	pokazGodziny(dgGodziny, id_recordu);
	laczBaze->Close();
	wyczysc(gbUGodziny);

}


private: System::Void btnWEdytuj_Click(System::Object^ sender, System::EventArgs^ e) {
	MySqlConnection^ laczBaze = gcnew MySqlConnection(konfiguracja);
	MySqlCommand^ polecenie = laczBaze->CreateCommand();
	MySqlTransaction^ transakcja;
	laczBaze->Open();

	transakcja = laczBaze->BeginTransaction(IsolationLevel::ReadCommitted);

	polecenie->Connection = laczBaze;
	polecenie->Transaction = transakcja;
	try {

		String^ stawka = txtUDo->Text->Replace(",", ".");
		



		polecenie->CommandText = "UPDATE pracownicy set stawka='" + txtWStawka->Text + "' WHERE pracownik='" + txtWStanowisko->Text + "';";
		polecenie->ExecuteNonQuery();


		transakcja->Commit();
		MessageBox::Show("Stawka zostala zaktualizowana");

	}
	catch (Exception^ e) {

		MessageBox::Show(e->Message);
		transakcja->Rollback();

	}

	
	laczBaze->Close();
	wyczysc(gbWStawka);
}
private: System::Void btnKSzukaj_Click(System::Object^ sender, System::EventArgs^ e) {
	MySqlConnection^ laczBaze = gcnew MySqlConnection(konfiguracja);
	MySqlCommand^ zapytanie = gcnew MySqlCommand("SELECT idUzytkownik, imieUzytkownik, nazwiskoUzytkownik, loginUzytkownik AS login, pracownik FROM uzytkownik WHERE concat(idUzytkownik, imieUzytkownik, ' ', nazwiskoUzytkownik) LIKE '%" + txtKSzukaj->Text + "%'", laczBaze);

	try {
		laczBaze->Open();
		MySqlDataAdapter^ klinikaBaza = gcnew MySqlDataAdapter();
		klinikaBaza->SelectCommand = zapytanie;
		DataTable^ uTabel = gcnew DataTable();
		klinikaBaza->Fill(uTabel);
		BindingSource^ zrodloKlinika = gcnew BindingSource();
		zrodloKlinika->DataSource = uTabel;
		dgKUzytkownicy->DataSource = zrodloKlinika;
		laczBaze->Close();
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}
	dgKUzytkownicy->Columns[0]->Visible = false;
	
}

private: System::Void dgKUzytkownicy_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	if (e->RowIndex >= 0) {
		id_recordu = (int)dgKUzytkownicy->Rows[e->RowIndex]->Cells["idUzytkownik"]->Value;
		lblKImie->Text = dgKUzytkownicy->Rows[e->RowIndex]->Cells["imieUzytkownik"]->Value->ToString();
		lblKNazwisko->Text = dgKUzytkownicy->Rows[e->RowIndex]->Cells["nazwiskoUzytkownik"]->Value->ToString();
		lblKStanowisko->Text = dgKUzytkownicy->Rows[e->RowIndex]->Cells["pracownik"]->Value->ToString();  // !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!1





		MySqlConnection^ laczBaze = gcnew MySqlConnection(konfiguracja);
		MySqlCommand ^ zapytanie = gcnew MySqlCommand("SELECT Uzytkownik_iduzytkownik, rok, miesiac as miesiac, stawka, sum(godzina_k - godzina_r) as suma, sum(godzina_k - godzina_r) * stawka as wyplata from uzytkownik u left join godziny g on u.idUzytkownik = g.Uzytkownik_idUzytkownik left join pracownicy p on u.pracownik = p.pracownik where iduzytkownik = "+id_recordu+" group by miesiac", laczBaze);


		try {
			laczBaze->Open();
			MySqlDataAdapter^ klinikaBaza = gcnew MySqlDataAdapter();
			klinikaBaza->SelectCommand = zapytanie;
			DataTable^ uTabel = gcnew DataTable();
			klinikaBaza->Fill(uTabel);
			BindingSource^ zrodloKlinika = gcnew BindingSource();
			zrodloKlinika->DataSource = uTabel;
			dgKPodsumowanie->DataSource = zrodloKlinika;
			laczBaze->Close();
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
		dgKPodsumowanie->Columns[0]->Visible = false;
		pokazWyplaty(dgKWypłaty, id_recordu);
		
		


	}
}



private: System::Void dgKPodsumowanie_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	if (e->RowIndex >= 0) {
		//id_godziny = (int)dgKPodsumowanie->Rows[e->RowIndex]->Cells[0]->Value;
		txtKMiesiac->Text = dgKPodsumowanie->Rows[e->RowIndex]->Cells["miesiac"]->Value->ToString();
		txtKRok->Text = dgKPodsumowanie->Rows[e->RowIndex]->Cells["rok"]->Value->ToString();
		txtKWyplata->Text = dgKPodsumowanie->Rows[e->RowIndex]->Cells["wyplata"]->Value->ToString();
		txtKGodziny->Text = dgKPodsumowanie->Rows[e->RowIndex]->Cells["suma"]->Value->ToString();

		btnKKsieguj->Enabled = true;
		pokazWyplaty(dgKWypłaty, id_recordu);


	}
}

private: System::Void btnKKsieguj_Click(System::Object^ sender, System::EventArgs^ e) {
	MySqlConnection^ laczBaze = gcnew MySqlConnection(konfiguracja);
	MySqlCommand^ polecenie = laczBaze->CreateCommand();
	MySqlTransaction^ transakcja;
	laczBaze->Open();

	transakcja = laczBaze->BeginTransaction(IsolationLevel::ReadCommitted);

	polecenie->Connection = laczBaze;
	polecenie->Transaction = transakcja;

	try {
		polecenie->CommandText = "INSERT INTO wyplaty SET uzytkownik_iduzytkownik = '" +
			id_recordu + "', suma = '" + txtKWyplata->Text + " PLN', miesiac = '" + txtKMiesiac->Text + "', rok = '" +
			txtKRok->Text + "',godziny  = '" + txtKGodziny->Text + "';";
		polecenie->ExecuteNonQuery();
		transakcja->Commit();
		MessageBox::Show("Wypłata za" +txtKMiesiac->Text+" "+txtKRok->Text+" dla "+lblKImie->Text+" "+lblKNazwisko->Text+" została zaksięgowana");
	}
	catch (Exception^ e) {

		MessageBox::Show(e->Message);
		transakcja->Rollback();

	}

	
	laczBaze->Close();
	pokazWyplaty(dgKWypłaty, id_recordu);
	wyczysc(gbKWyplaty);


}
private: System::Void btnRGeneruj_Click(System::Object^ sender, System::EventArgs^ e) {
	MySqlConnection^ laczBaze = gcnew MySqlConnection(konfiguracja);
	MySqlCommand^ zapytanie = gcnew MySqlCommand("SELECT Imie,Nazwisko,Od,Do from  "+txtRRaport->Text+"  WHERE miesiac='" + txtRMiesiac->Text + "' and dzien='"+txtRDzien->Text+"' and rok='"+txtRRok->Text+"';", laczBaze);

	try {
		laczBaze->Open();
		MySqlDataAdapter^ klinikaBaza = gcnew MySqlDataAdapter();
		klinikaBaza->SelectCommand = zapytanie;
		DataTable^ uTabel = gcnew DataTable();
		klinikaBaza->Fill(uTabel);
		BindingSource^ zrodloKlinika = gcnew BindingSource();
		zrodloKlinika->DataSource = uTabel;
		dgRaport->DataSource = zrodloKlinika;
		laczBaze->Close();
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}
	
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	pokazRezerwacje(txtRSzukaj, dgRRezerwacja,dgRStolik);
}
private: System::Void dgRStolik_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	
		txtRRStolik->Text = dgRStolik->Rows[e->RowIndex]->Cells["idstolik"]->Value->ToString();
		

		
		


	
}

private: System::Void dgRRezerwacja_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	
		id_rezerwacji = (int)dgRRezerwacja->Rows[e->RowIndex]->Cells[0]->Value;
		txtRRGodzina->Text = dgRRezerwacja->Rows[e->RowIndex]->Cells["godzina"]->Value->ToString();
		txtRRDzien->Text = dgRRezerwacja->Rows[e->RowIndex]->Cells["dzien"]->Value->ToString();
		txtRRMiesiac->Text = dgRRezerwacja->Rows[e->RowIndex]->Cells["miesiac"]->Value->ToString();
		txtRRRok->Text = dgRRezerwacja->Rows[e->RowIndex]->Cells["rok"]->Value->ToString();
		txtRRKom->Text = dgRRezerwacja->Rows[e->RowIndex]->Cells["komentarz"]->Value->ToString();
		txtRRStolik->Text = dgRRezerwacja->Rows[e->RowIndex]->Cells["idstolik"]->Value->ToString();
		
		btnREdytuj->Enabled = true;
		btnRUsun->Enabled = true;

	
}
private: System::Void btnRDodaj_Click(System::Object^ sender, System::EventArgs^ e) {
	MySqlConnection^ laczBaze = gcnew MySqlConnection(konfiguracja);
	MySqlCommand^ polecenie = laczBaze->CreateCommand();
	MySqlTransaction^ transakcja;
	laczBaze->Open();

	transakcja = laczBaze->BeginTransaction(IsolationLevel::ReadCommitted);

	polecenie->Connection = laczBaze;
	polecenie->Transaction = transakcja;

	try {

		polecenie->CommandText = "Insert into rezerwacja set idstolik='" + txtRRStolik->Text + "',miesiac='" + txtRRMiesiac->Text + "',dzien='" + txtRRDzien->Text + "',rok='" + txtRRRok->Text + "',komentarz='"+txtRRKom->Text+"',godzina='"+txtRRGodzina->Text+"'; ";
		polecenie->ExecuteNonQuery();
		MessageBox::Show("Rezerwacja zostala dodana do bazy danych");





		transakcja->Commit();

	}
	catch (Exception^ e) {

		MessageBox::Show(e->Message);
		transakcja->Rollback();

	}
	
	laczBaze->Close();
	pokazRezerwacje(txtRSzukaj, dgRRezerwacja, dgRStolik);
	wyczysc(gbRezerwacja);

}
private: System::Void btnREdytuj_Click(System::Object^ sender, System::EventArgs^ e) {
	MySqlConnection^ laczBaze = gcnew MySqlConnection(konfiguracja);
	MySqlCommand^ polecenie = laczBaze->CreateCommand();
	MySqlTransaction^ transakcja;
	laczBaze->Open();

	transakcja = laczBaze->BeginTransaction(IsolationLevel::ReadCommitted);

	polecenie->Connection = laczBaze;
	polecenie->Transaction = transakcja;
	try {

		



		polecenie->CommandText = "UPDATE rezerwacja set idstolik='" + txtRRStolik->Text + "',miesiac='" + txtRRMiesiac->Text + "',dzien='" + txtRRDzien->Text + "',rok='" + txtRRRok->Text + "',komentarz='" + txtRRKom->Text + "',godzina='" + txtRRGodzina->Text + "',idstolik="+txtRRStolik->Text+" where idrezerwacja=" + id_rezerwacji;
		polecenie->ExecuteNonQuery();


		transakcja->Commit();
		MessageBox::Show("Rezerwacja zostala zaktualizowana");

	}
	catch (Exception^ e) {

		MessageBox::Show(e->Message);
		transakcja->Rollback();

	}

	
	laczBaze->Close();
	pokazRezerwacje(txtRSzukaj, dgRRezerwacja, dgRStolik);
	wyczysc(gbRezerwacja);
}
private: System::Void btnRUsun_Click(System::Object^ sender, System::EventArgs^ e) {
	MySqlConnection^ laczBaze = gcnew MySqlConnection(konfiguracja);
	MySqlCommand^ polecenie = laczBaze->CreateCommand();
	MySqlTransaction^ transakcja;
	laczBaze->Open();

	transakcja = laczBaze->BeginTransaction(IsolationLevel::ReadCommitted);

	polecenie->Connection = laczBaze;
	polecenie->Transaction = transakcja;

	try {
		if (MessageBox::Show("Czy na pewno usunac rezerwację?", "Uwaga!!", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes);

		polecenie->CommandText = "DELETE FROM rezerwacja WHERE idrezerwacja = " + id_rezerwacji + " ;";
		polecenie->ExecuteNonQuery();


		transakcja->Commit();
		MessageBox::Show("Rezerwacja została usunięta");

	}
	catch (Exception^ e) {

		MessageBox::Show(e->Message);
		transakcja->Rollback();

	}

	pokazRezerwacje(txtRSzukaj, dgRRezerwacja, dgRStolik);
	laczBaze->Close();
	wyczysc(gbRezerwacja);

}
private: System::Void dgRRezerwacja_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	id_rezerwacji = (int)dgRRezerwacja->Rows[e->RowIndex]->Cells[0]->Value;
	txtRRGodzina->Text = dgRRezerwacja->Rows[e->RowIndex]->Cells["godzina"]->Value->ToString();
	txtRRDzien->Text = dgRRezerwacja->Rows[e->RowIndex]->Cells["dzien"]->Value->ToString();
	txtRRMiesiac->Text = dgRRezerwacja->Rows[e->RowIndex]->Cells["miesiac"]->Value->ToString();
	txtRRRok->Text = dgRRezerwacja->Rows[e->RowIndex]->Cells["rok"]->Value->ToString();
	txtRRKom->Text = dgRRezerwacja->Rows[e->RowIndex]->Cells["komentarz"]->Value->ToString();
	txtRRStolik->Text = dgRRezerwacja->Rows[e->RowIndex]->Cells["idstolik"]->Value->ToString();

	btnREdytuj->Enabled = true;
	btnRUsun->Enabled = true;
}
private: System::Void btnRWyswietl_Click(System::Object^ sender, System::EventArgs^ e) {
	pokazStoliki(dgSStolik);
}
private: System::Void btnSDodaj_Click(System::Object^ sender, System::EventArgs^ e) {
	MySqlConnection^ laczBaze = gcnew MySqlConnection(konfiguracja);
	MySqlCommand^ polecenie = laczBaze->CreateCommand();
	MySqlTransaction^ transakcja;
	laczBaze->Open();

	transakcja = laczBaze->BeginTransaction(IsolationLevel::ReadCommitted);

	polecenie->Connection = laczBaze;
	polecenie->Transaction = transakcja;

	try {

		polecenie->CommandText = "Insert into stolik set nazwa='" + txtSNazwa->Text + "';";
		polecenie->ExecuteNonQuery();
		MessageBox::Show("Stolik został dodany do bazy danych");





		transakcja->Commit();

	}
	catch (Exception^ e) {

		MessageBox::Show(e->Message);
		transakcja->Rollback();

	}

	laczBaze->Close();
	pokazStoliki(dgSStolik);
	wyczysc(gbRezerwacja);
}
private: System::Void dgSStolik_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	txtSNazwa->Text = dgSStolik->Rows[e->RowIndex]->Cells["nazwa"]->Value->ToString();
}
private: System::Void btnSUsun_Click(System::Object^ sender, System::EventArgs^ e) {
	MySqlConnection^ laczBaze = gcnew MySqlConnection(konfiguracja);
	MySqlCommand^ polecenie = laczBaze->CreateCommand();
	MySqlTransaction^ transakcja;
	laczBaze->Open();

	transakcja = laczBaze->BeginTransaction(IsolationLevel::ReadCommitted);

	polecenie->Connection = laczBaze;
	polecenie->Transaction = transakcja;

	try {
		if (MessageBox::Show("Czy na pewno usunac stolik?", "Uwaga!!", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes);

		polecenie->CommandText = "DELETE FROM stolik WHERE nazwa like '%" + txtSNazwa->Text + "%';";
		polecenie->ExecuteNonQuery();


		transakcja->Commit();
		MessageBox::Show("Stolik został usunięty");

	}
	catch (Exception^ e) {

		MessageBox::Show(e->Message);
		transakcja->Rollback();

	}

	pokazStoliki(dgSStolik);
	laczBaze->Close();
	wyczysc(gbStoliki);
}
};
};

