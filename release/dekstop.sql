-- phpMyAdmin SQL Dump
-- version 5.0.3
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1
-- Generation Time: Apr 14, 2021 at 12:42 PM
-- Server version: 10.4.14-MariaDB
-- PHP Version: 7.2.34

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Database: `projektsklep`
--

-- --------------------------------------------------------

--
-- Stand-in structure for view `biedronka_produkty`
-- (See below for the actual view)
--
CREATE TABLE `biedronka_produkty` (
`nazwa_produktu` varchar(26)
,`cena_produktu` int(5)
,`firma_produktu` varchar(26)
);

-- --------------------------------------------------------

--
-- Stand-in structure for view `lidl_produkty`
-- (See below for the actual view)
--
CREATE TABLE `lidl_produkty` (
`nazwa_produktu` varchar(26)
,`cena_produktu` int(5)
,`firma_produktu` varchar(26)
);

-- --------------------------------------------------------

--
-- Table structure for table `produkt`
--

CREATE TABLE `produkt` (
  `ID` int(5) NOT NULL,
  `cena_produktu` int(5) NOT NULL,
  `nazwa_produktu` varchar(26) NOT NULL,
  `sklepID` int(5) NOT NULL,
  `firma_produktu` varchar(26) NOT NULL,
  `Ilosc` int(255) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data for table `produkt`
--

INSERT INTO `produkt` (`ID`, `cena_produktu`, `nazwa_produktu`, `sklepID`, `firma_produktu`, `Ilosc`) VALUES
(2, 11, 'Chleb', 2, 'pierkarnia1', NULL),
(3, 21, 'Chleb', 3, 'pierkarnia1', NULL),
(7, 16, 'Masło', 2, 'Firma2', NULL),
(8, 21, 'Masło', 3, 'Firma3', NULL),
(9, 10, 'Woda', 3, 'Firma2', NULL),
(10, 6, 'Woda', 2, 'Firma1', NULL),
(12, 11, 'Woda', 1, 'Firma3', NULL),
(14, 12, 'Czekolada', 2, 'Firma2', NULL),
(15, 21, 'Czekolada', 3, 'Firma3', NULL),
(16, 14, 'Masło', 1, 'Firma2', NULL),
(17, 12, 'Masło', 3, 'Firma2', NULL),
(19, 30, 'Czekolada', 3, 'Firma1', NULL),
(118, 21, 'Czekolada', 2, 'Firma1', NULL),
(144, 42, 'aa', 1, 'aa', 42),
(145, 10, 'Czekolada', 1, 'Wedel', 2),
(146, 0, 'Czekolada', 1, 'Wedel', 2),
(147, 2, 'Test', 1, 'test', 2),
(148, 15, 'Czekolada', 1, 'AlpenGold', 42),
(149, 2, 'Chleb', 1, 'Piekarnia2', 4);

-- --------------------------------------------------------

--
-- Table structure for table `sklep`
--

CREATE TABLE `sklep` (
  `nazwa_sklepu` varchar(26) NOT NULL,
  `ID` int(5) NOT NULL,
  `Miejscowosc_sklepu` varchar(26) NOT NULL,
  `Kod_sklepu` varchar(20) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data for table `sklep`
--

INSERT INTO `sklep` (`nazwa_sklepu`, `ID`, `Miejscowosc_sklepu`, `Kod_sklepu`) VALUES
('Tesco', 1, 'Warszawa', 'WarTes1'),
('Lidl', 2, 'Warszawa', 'WarLid1'),
('Biedoronka', 3, 'Warszawa', 'WarBie1');

-- --------------------------------------------------------

--
-- Stand-in structure for view `tesco_produkty`
-- (See below for the actual view)
--
CREATE TABLE `tesco_produkty` (
`nazwa_produktu` varchar(26)
,`cena_produktu` int(5)
,`firma_produktu` varchar(26)
);

-- --------------------------------------------------------

--
-- Table structure for table `users`
--

CREATE TABLE `users` (
  `id` int(5) NOT NULL,
  `email_klienta` varchar(50) NOT NULL,
  `hasło_klienta` varchar(72) NOT NULL,
  `login_klienta` varchar(32) NOT NULL,
  `typ_uzytkownika` varchar(26) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data for table `users`
--

INSERT INTO `users` (`id`, `email_klienta`, `hasło_klienta`, `login_klienta`, `typ_uzytkownika`) VALUES
(8, ':email', ':password', ':username', ''),
(17, 'aaa', ' aaaa', 'aa', ''),
(27, '123@gmail.com', '123', '123', ''),
(28, 'danil@gamil.com', 'Daniel2', 'Daniel', 'klient'),
(29, 'asdasd@interia.pl', 'Test123', 'Test1', ''),
(30, 'adadad@interia.pl', 'dad111111111', 'add', ''),
(31, 'asddad@gmail.com', 'Nowe123', 'Test123', ''),
(32, 'test@gmail.com', '1231234', 'Test12345', ''),
(33, 'test@gmai.com', 'adam1', 'Adam', ''),
(34, 'aaa@gmail.com', 'Test123', 'Test2', ''),
(38, 'asdasdasd@andssda.pl', 'asdkaskd', 'ndaisdjadk', ''),
(39, 'magazynier@gmail.com', 'magazynier', 'magazyniertest', 'magazynier'),
(40, 'test@gmail.com', 'sqlinjectiontest', 'SELECT 1 OR \' \';', 'kurier'),
(41, 'asdasda@asdasd.pl', 'asdasdasdasd', 'sadasdas', 'klient'),
(42, '123123@ga.pl', 'kuriertest', 'kuriertest', 'kurier'),
(43, '23123@gmail.com', 'kuriertest2', 'kuriertest2', 'kurier'),
(44, 'asf@fm.pl', 'magtest', 'magtest', 'magazynier');

-- --------------------------------------------------------

--
-- Stand-in structure for view `wolnezamowienia`
-- (See below for the actual view)
--
CREATE TABLE `wolnezamowienia` (
`ID` int(5)
,`KlientID` int(5)
,`Koszt_zamowienia` int(26)
,`Adres_dostawy` varchar(20)
,`Sklep` varchar(26)
,`Nazwisko_klienta` varchar(60)
,`Imie_klienta` varchar(30)
,`Status` varchar(20)
,`Zakupione_produkty` varchar(500)
,`Miasto` varchar(36)
,`Data` datetime(6)
,`Kurier` varchar(20)
);

-- --------------------------------------------------------

--
-- Table structure for table `zamowienie`
--

CREATE TABLE `zamowienie` (
  `ID` int(5) NOT NULL,
  `KlientID` int(5) NOT NULL,
  `Koszt_zamowienia` int(26) NOT NULL,
  `Adres_dostawy` varchar(20) NOT NULL,
  `Sklep` varchar(26) NOT NULL,
  `Nazwisko_klienta` varchar(60) NOT NULL,
  `Imie_klienta` varchar(30) NOT NULL,
  `Status` varchar(20) DEFAULT NULL,
  `Zakupione_produkty` varchar(500) NOT NULL,
  `Miasto` varchar(36) NOT NULL,
  `Data` datetime(6) DEFAULT NULL,
  `Kurier` varchar(20) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data for table `zamowienie`
--

INSERT INTO `zamowienie` (`ID`, `KlientID`, `Koszt_zamowienia`, `Adres_dostawy`, `Sklep`, `Nazwisko_klienta`, `Imie_klienta`, `Status`, `Zakupione_produkty`, `Miasto`, `Data`, `Kurier`) VALUES
(1, 17, 42, 'Test1', '', '', '', 'zakonczone', '', '', NULL, ''),
(2, 17, 0, '', '', '', '', '', '', '', NULL, 'kuriertest'),
(3, 31, 63, 'Testowa31/50', '', '', '', '', '', '', NULL, ''),
(4, 32, 63, 'Adres12/14', '', '', '', 'Zakończone', '', '', NULL, 'kuriertest'),
(5, 33, 42, 'ADad31', '', '', '', '', '', '', NULL, 'kuriertest'),
(7, 28, 2, 'test', 'biedronka', ':nazwisko', ':imie', ':status', '12:produkty', ':miasto', NULL, 'kuriertest'),
(8, 34, 42, 'Test1/2', 'Tesco', 'Gal', 'Daniel', 'Faza1', 'CzekoladaFirma1    ', 'Tychy', NULL, ''),
(9, 34, 60, 'Test1/2', 'Tesco', 'Gal', 'Daniel', 'Faza1', 'CzekoladaFirma1    MasłoFirma1    ', 'Tychy', NULL, ''),
(10, 34, 42, 'test', 'Tesco', 'test', 'test', 'Faza1', '2CzekoladaFirma1    ', 'test', NULL, ''),
(11, 34, 72, 'test', 'Tesco', 'test', 'test', 'Faza1', '2CzekoladaFirma1    5MasłoFirma1    ', 'test', NULL, ''),
(12, 31, 210, 'TEst/1/1', 'Tesco', 'Testowy', 'Test', 'Zakończone', '10CzekoladaFirma1  test  sd aasd asd asdasdasd asd asd asdas ', 'Tychy', NULL, 'kuriertest'),
(13, 31, 252, 'test', 'Tesco', 'Test', 'Daniel', 'Zakończone', '10CzekoladaFirma1    2CzekoladaFirma1    ', 'test', NULL, 'kuriertest'),
(18, 28, 42, 'test', 'Lidl', 'test', 'test', 'Zakończone', 'CzekoladaFirma1    2CzekoladaFirma1    ', 'test', '2021-03-16 00:00:00.000000', 'kuriertest');

--
-- Triggers `zamowienie`
--
DELIMITER $$
CREATE TRIGGER `currentdata` BEFORE INSERT ON `zamowienie` FOR EACH ROW SET NEW.Data = CURRENT_DATE
$$
DELIMITER ;

-- --------------------------------------------------------

--
-- Structure for view `biedronka_produkty`
--
DROP TABLE IF EXISTS `biedronka_produkty`;

CREATE ALGORITHM=UNDEFINED DEFINER=`root`@`localhost` SQL SECURITY DEFINER VIEW `biedronka_produkty`  AS SELECT `produkt`.`nazwa_produktu` AS `nazwa_produktu`, `produkt`.`cena_produktu` AS `cena_produktu`, `produkt`.`firma_produktu` AS `firma_produktu` FROM `produkt` WHERE `produkt`.`sklepID` = 3 ;

-- --------------------------------------------------------

--
-- Structure for view `lidl_produkty`
--
DROP TABLE IF EXISTS `lidl_produkty`;

CREATE ALGORITHM=UNDEFINED DEFINER=`root`@`localhost` SQL SECURITY DEFINER VIEW `lidl_produkty`  AS SELECT `produkt`.`nazwa_produktu` AS `nazwa_produktu`, `produkt`.`cena_produktu` AS `cena_produktu`, `produkt`.`firma_produktu` AS `firma_produktu` FROM `produkt` WHERE `produkt`.`sklepID` = 2 ;

-- --------------------------------------------------------

--
-- Structure for view `tesco_produkty`
--
DROP TABLE IF EXISTS `tesco_produkty`;

CREATE ALGORITHM=UNDEFINED DEFINER=`root`@`localhost` SQL SECURITY DEFINER VIEW `tesco_produkty`  AS SELECT `produkt`.`nazwa_produktu` AS `nazwa_produktu`, `produkt`.`cena_produktu` AS `cena_produktu`, `produkt`.`firma_produktu` AS `firma_produktu` FROM `produkt` WHERE `produkt`.`sklepID` = 1 ;

-- --------------------------------------------------------

--
-- Structure for view `wolnezamowienia`
--
DROP TABLE IF EXISTS `wolnezamowienia`;

CREATE ALGORITHM=UNDEFINED DEFINER=`root`@`localhost` SQL SECURITY DEFINER VIEW `wolnezamowienia`  AS SELECT `zamowienie`.`ID` AS `ID`, `zamowienie`.`KlientID` AS `KlientID`, `zamowienie`.`Koszt_zamowienia` AS `Koszt_zamowienia`, `zamowienie`.`Adres_dostawy` AS `Adres_dostawy`, `zamowienie`.`Sklep` AS `Sklep`, `zamowienie`.`Nazwisko_klienta` AS `Nazwisko_klienta`, `zamowienie`.`Imie_klienta` AS `Imie_klienta`, `zamowienie`.`Status` AS `Status`, `zamowienie`.`Zakupione_produkty` AS `Zakupione_produkty`, `zamowienie`.`Miasto` AS `Miasto`, `zamowienie`.`Data` AS `Data`, `zamowienie`.`Kurier` AS `Kurier` FROM `zamowienie` WHERE `zamowienie`.`Kurier` = ' ' ;

--
-- Indexes for dumped tables
--

--
-- Indexes for table `produkt`
--
ALTER TABLE `produkt`
  ADD PRIMARY KEY (`ID`),
  ADD KEY `sklepID` (`sklepID`);

--
-- Indexes for table `sklep`
--
ALTER TABLE `sklep`
  ADD PRIMARY KEY (`ID`);

--
-- Indexes for table `users`
--
ALTER TABLE `users`
  ADD PRIMARY KEY (`id`);

--
-- Indexes for table `zamowienie`
--
ALTER TABLE `zamowienie`
  ADD PRIMARY KEY (`ID`),
  ADD KEY `Klient` (`KlientID`);

--
-- AUTO_INCREMENT for dumped tables
--

--
-- AUTO_INCREMENT for table `produkt`
--
ALTER TABLE `produkt`
  MODIFY `ID` int(5) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=150;

--
-- AUTO_INCREMENT for table `users`
--
ALTER TABLE `users`
  MODIFY `id` int(5) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=45;

--
-- AUTO_INCREMENT for table `zamowienie`
--
ALTER TABLE `zamowienie`
  MODIFY `ID` int(5) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=19;

--
-- Constraints for dumped tables
--

--
-- Constraints for table `produkt`
--
ALTER TABLE `produkt`
  ADD CONSTRAINT `produkt_ibfk_1` FOREIGN KEY (`sklepID`) REFERENCES `sklep` (`ID`);

--
-- Constraints for table `zamowienie`
--
ALTER TABLE `zamowienie`
  ADD CONSTRAINT `zamowienie_ibfk_1` FOREIGN KEY (`KlientID`) REFERENCES `users` (`id`);
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
