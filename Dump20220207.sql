CREATE DATABASE  IF NOT EXISTS `restauracja` /*!40100 DEFAULT CHARACTER SET utf8 */ /*!80016 DEFAULT ENCRYPTION='N' */;
USE `restauracja`;
-- MySQL dump 10.13  Distrib 8.0.27, for Win64 (x86_64)
--
-- Host: localhost    Database: restauracja
-- ------------------------------------------------------
-- Server version	8.0.27

/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!50503 SET NAMES utf8 */;
/*!40103 SET @OLD_TIME_ZONE=@@TIME_ZONE */;
/*!40103 SET TIME_ZONE='+00:00' */;
/*!40014 SET @OLD_UNIQUE_CHECKS=@@UNIQUE_CHECKS, UNIQUE_CHECKS=0 */;
/*!40014 SET @OLD_FOREIGN_KEY_CHECKS=@@FOREIGN_KEY_CHECKS, FOREIGN_KEY_CHECKS=0 */;
/*!40101 SET @OLD_SQL_MODE=@@SQL_MODE, SQL_MODE='NO_AUTO_VALUE_ON_ZERO' */;
/*!40111 SET @OLD_SQL_NOTES=@@SQL_NOTES, SQL_NOTES=0 */;

--
-- Table structure for table `godziny`
--

DROP TABLE IF EXISTS `godziny`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `godziny` (
  `idgodziny` int NOT NULL AUTO_INCREMENT,
  `miesiac` varchar(45) DEFAULT NULL,
  `dzien` varchar(45) DEFAULT NULL,
  `rok` varchar(45) DEFAULT NULL,
  `godzina_r` decimal(10,0) DEFAULT NULL,
  `godzina_k` decimal(10,0) DEFAULT NULL,
  `Uzytkownik_idUzytkownik` int NOT NULL,
  `data` datetime DEFAULT NULL,
  `suma` decimal(10,0) DEFAULT NULL,
  PRIMARY KEY (`idgodziny`,`Uzytkownik_idUzytkownik`),
  UNIQUE KEY `idgodziny_UNIQUE` (`idgodziny`),
  KEY `fk_Godziny_Uzytkownik1_idx` (`Uzytkownik_idUzytkownik`),
  CONSTRAINT `fk_Godziny_Uzytkownik1` FOREIGN KEY (`Uzytkownik_idUzytkownik`) REFERENCES `uzytkownik` (`idUzytkownik`)
) ENGINE=InnoDB AUTO_INCREMENT=11 DEFAULT CHARSET=utf8mb3;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `godziny`
--

LOCK TABLES `godziny` WRITE;
/*!40000 ALTER TABLE `godziny` DISABLE KEYS */;
INSERT INTO `godziny` VALUES (1,'02','01','2022',12,16,3,NULL,NULL),(4,'02','06','2022',10,18,2,NULL,NULL),(6,'02','10','2021',9,18,2,NULL,NULL),(9,'12','21','2021',10,19,2,NULL,NULL),(10,'12','21','2021',10,19,3,NULL,NULL);
/*!40000 ALTER TABLE `godziny` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Temporary view structure for view `kadradnia`
--

DROP TABLE IF EXISTS `kadradnia`;
/*!50001 DROP VIEW IF EXISTS `kadradnia`*/;
SET @saved_cs_client     = @@character_set_client;
/*!50503 SET character_set_client = utf8mb4 */;
/*!50001 CREATE VIEW `kadradnia` AS SELECT 
 1 AS `Imie`,
 1 AS `Nazwisko`,
 1 AS `Stanowisko`,
 1 AS `Od`,
 1 AS `Do`,
 1 AS `dzien`,
 1 AS `miesiac`,
 1 AS `rok`*/;
SET character_set_client = @saved_cs_client;

--
-- Table structure for table `pracownicy`
--

DROP TABLE IF EXISTS `pracownicy`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `pracownicy` (
  `pracownik` varchar(45) NOT NULL,
  `stawka` decimal(10,0) DEFAULT NULL,
  PRIMARY KEY (`pracownik`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb3;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `pracownicy`
--

LOCK TABLES `pracownicy` WRITE;
/*!40000 ALTER TABLE `pracownicy` DISABLE KEYS */;
INSERT INTO `pracownicy` VALUES ('kelner',20),('kucharz',35),('menadzer',50),('pracownik_baru',25),('sprzątacz',18);
/*!40000 ALTER TABLE `pracownicy` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `rezerwacja`
--

DROP TABLE IF EXISTS `rezerwacja`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `rezerwacja` (
  `idrezerwacja` int NOT NULL AUTO_INCREMENT,
  `godzina` varchar(45) NOT NULL,
  `dzien` varchar(45) NOT NULL,
  `miesiac` varchar(45) NOT NULL,
  `rok` varchar(45) NOT NULL,
  `komentarz` varchar(45) DEFAULT NULL,
  `idstolik` int NOT NULL,
  PRIMARY KEY (`idrezerwacja`),
  UNIQUE KEY `unq_wyplaty` (`godzina`,`dzien`,`miesiac`,`rok`,`idstolik`),
  KEY `fk_rezerwacja_stolik1_idx` (`idstolik`),
  CONSTRAINT `fk_rezerwacja_stolik1` FOREIGN KEY (`idstolik`) REFERENCES `stolik` (`idstolik`)
) ENGINE=InnoDB AUTO_INCREMENT=4 DEFAULT CHARSET=utf8mb3;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `rezerwacja`
--

LOCK TABLES `rezerwacja` WRITE;
/*!40000 ALTER TABLE `rezerwacja` DISABLE KEYS */;
INSERT INTO `rezerwacja` VALUES (2,'21','12','12','2022','',1),(3,'22','14','12','2021','test2',1);
/*!40000 ALTER TABLE `rezerwacja` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `stolik`
--

DROP TABLE IF EXISTS `stolik`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `stolik` (
  `idstolik` int NOT NULL AUTO_INCREMENT,
  `nazwa` varchar(45) NOT NULL,
  PRIMARY KEY (`idstolik`)
) ENGINE=InnoDB AUTO_INCREMENT=4 DEFAULT CHARSET=utf8mb3;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `stolik`
--

LOCK TABLES `stolik` WRITE;
/*!40000 ALTER TABLE `stolik` DISABLE KEYS */;
INSERT INTO `stolik` VALUES (1,'testowy'),(3,'Przy barze');
/*!40000 ALTER TABLE `stolik` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `uzytkownik`
--

DROP TABLE IF EXISTS `uzytkownik`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `uzytkownik` (
  `idUzytkownik` int NOT NULL AUTO_INCREMENT,
  `imieUzytkownik` varchar(45) NOT NULL,
  `nazwiskoUzytkownik` varchar(45) NOT NULL,
  `loginUzytkownik` varchar(45) NOT NULL,
  `hasloUzytkownik` varchar(45) NOT NULL,
  `pracownik` varchar(45) NOT NULL,
  PRIMARY KEY (`idUzytkownik`,`pracownik`),
  UNIQUE KEY `idUzytkownik_UNIQUE` (`idUzytkownik`),
  UNIQUE KEY `loginUzytkownik_UNIQUE` (`loginUzytkownik`),
  KEY `fk_Uzytkownik_pracownicy1_idx` (`pracownik`),
  CONSTRAINT `fk_Uzytkownik_pracownicy1` FOREIGN KEY (`pracownik`) REFERENCES `pracownicy` (`pracownik`)
) ENGINE=InnoDB AUTO_INCREMENT=4 DEFAULT CHARSET=utf8mb3;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `uzytkownik`
--

LOCK TABLES `uzytkownik` WRITE;
/*!40000 ALTER TABLE `uzytkownik` DISABLE KEYS */;
INSERT INTO `uzytkownik` VALUES (2,'Pawel','Twardokes','admin','123','kucharz'),(3,'Test','Tester','TestTester','TestTester','sprzątacz');
/*!40000 ALTER TABLE `uzytkownik` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `wyplaty`
--

DROP TABLE IF EXISTS `wyplaty`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `wyplaty` (
  `idwyplaty` int NOT NULL AUTO_INCREMENT,
  `suma` varchar(45) DEFAULT NULL,
  `miesiac` varchar(45) DEFAULT NULL,
  `rok` varchar(45) DEFAULT NULL,
  `godziny` varchar(45) DEFAULT NULL,
  `Uzytkownik_idUzytkownik` int NOT NULL,
  PRIMARY KEY (`idwyplaty`,`Uzytkownik_idUzytkownik`),
  UNIQUE KEY `unq_wyplaty` (`Uzytkownik_idUzytkownik`,`miesiac`,`rok`),
  KEY `fk_wyplaty_Uzytkownik1_idx` (`Uzytkownik_idUzytkownik`),
  CONSTRAINT `fk_wyplaty_Uzytkownik1` FOREIGN KEY (`Uzytkownik_idUzytkownik`) REFERENCES `uzytkownik` (`idUzytkownik`)
) ENGINE=InnoDB AUTO_INCREMENT=10 DEFAULT CHARSET=utf8mb3;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `wyplaty`
--

LOCK TABLES `wyplaty` WRITE;
/*!40000 ALTER TABLE `wyplaty` DISABLE KEYS */;
INSERT INTO `wyplaty` VALUES (1,'595','02','2022','17',2),(3,'315 PLN','12','2021','9',2),(6,' PLN','','','',3),(7,'72 PLN','02','2022','4',3),(9,'162 PLN','12','2021','9',3);
/*!40000 ALTER TABLE `wyplaty` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Dumping events for database 'restauracja'
--

--
-- Dumping routines for database 'restauracja'
--

--
-- Final view structure for view `kadradnia`
--

/*!50001 DROP VIEW IF EXISTS `kadradnia`*/;
/*!50001 SET @saved_cs_client          = @@character_set_client */;
/*!50001 SET @saved_cs_results         = @@character_set_results */;
/*!50001 SET @saved_col_connection     = @@collation_connection */;
/*!50001 SET character_set_client      = utf8mb4 */;
/*!50001 SET character_set_results     = utf8mb4 */;
/*!50001 SET collation_connection      = utf8mb4_0900_ai_ci */;
/*!50001 CREATE ALGORITHM=UNDEFINED */
/*!50013 DEFINER=`pawel`@`%` SQL SECURITY DEFINER */
/*!50001 VIEW `kadradnia` AS select `u`.`imieUzytkownik` AS `Imie`,`u`.`nazwiskoUzytkownik` AS `Nazwisko`,`u`.`pracownik` AS `Stanowisko`,`g`.`godzina_r` AS `Od`,`g`.`godzina_k` AS `Do`,`g`.`dzien` AS `dzien`,`g`.`miesiac` AS `miesiac`,`g`.`rok` AS `rok` from (`uzytkownik` `u` left join `godziny` `g` on((`u`.`idUzytkownik` = `g`.`Uzytkownik_idUzytkownik`))) */;
/*!50001 SET character_set_client      = @saved_cs_client */;
/*!50001 SET character_set_results     = @saved_cs_results */;
/*!50001 SET collation_connection      = @saved_col_connection */;
/*!40103 SET TIME_ZONE=@OLD_TIME_ZONE */;

/*!40101 SET SQL_MODE=@OLD_SQL_MODE */;
/*!40014 SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS */;
/*!40014 SET UNIQUE_CHECKS=@OLD_UNIQUE_CHECKS */;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
/*!40111 SET SQL_NOTES=@OLD_SQL_NOTES */;

-- Dump completed on 2022-02-07 23:07:09
