-- phpMyAdmin SQL Dump
-- version 4.7.7
-- https://www.phpmyadmin.net/
--
-- Host: localhost:3306
-- Generation Time: Jan 21, 2018 at 12:37 PM
-- Server version: 5.7.20
-- PHP Version: 7.1.13

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
SET AUTOCOMMIT = 0;
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Database: `myshop`
--

-- --------------------------------------------------------

--
-- Table structure for table `articles`
--

CREATE TABLE `articles` (
  `art_id` int(5) NOT NULL,
  `id_cat` int(5) NOT NULL,
  `art_name` varchar(100) NOT NULL,
  `art_img` varchar(255) NOT NULL,
  `art_price` int(5) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

--
-- Dumping data for table `articles`
--

INSERT INTO `articles` (`art_id`, `id_cat`, `art_name`, `art_img`, `art_price`) VALUES
(1, 1, 'Ballpoint pen Herlitz Dynamics (color: black)', 'https://i1.rozetka.ua/goods/1634340/herlitz_10417947s_images_1634340012.jpg', 79),
(2, 2, 'Mechanical pencil Herlitz 0.7 мм HB ', 'https://i2.rozetka.ua/goods/1634347/copy_herlitz_10412500_5754a5a7a089e_images_1634347838.jpg', 49),
(3, 1, 'Ballpen Herlitz Ladylike Bloom (color:blue)', 'https://i2.rozetka.ua/goods/1706530/herlitz_11368198_images_1706530942.jpg', 90),
(4, 2, 'Pencil Pelikan HB', 'https://i1.rozetka.ua/goods/1656272/copy_pelikan_978866_577bb6227f226_images_1656272951.jpg', 8),
(5, 2, 'Pencil Maped Black Peps', 'https://i1.rozetka.ua/goods/1994962/maped_mp850024_images_1994962700.jpg', 5),
(6, 2, 'SALE! Pencil kit Cool For School Softy НВ', 'https://i1.rozetka.ua/goods/2227560/cool_for_school_cf15140_images_2227560800.jpg', 20),
(7, 2, 'Mechanical pencil Koh-i-Noor 5.6 mm for pastels', 'https://i1.rozetka.ua/goods/1393303/koh_i_noor_5343_images_1393303575.jpg', 220),
(8, 1, 'Fountain pen Herlitz Smiley World Rainbow', 'https://i2.rozetka.ua/goods/2032418/herlitz_50001910_images_2032418844.jpg', 120),
(9, 1, 'SALE! Ballpen kit Schneider Slider Edge', 'https://i2.rozetka.ua/goods/2294801/copy_schneider_s152103_59f1e5d3eda9c_images_2294801681.jpg', 80),
(10, 1, 'Ballpen Axent Milagro (color:blue)', 'https://i1.rozetka.ua/goods/1927062/axent_ab1011_02_a_blakit_k_images_1927062217.jpg', 11),
(11, 3, 'Buromax Green', 'https://i1.rozetka.ua/goods/1442933/buromax_bm_8800_04_images_1442933893.jpg', 8),
(12, 3, 'Buromax Red', 'https://i1.rozetka.ua/goods/1442934/buromax_bm_8800_05_images_1442934068.jpg', 8),
(13, 3, 'SALE! Mini-markers kit Rexel Quartet', 'https://i2.rozetka.ua/goods/1970430/quartet_1903792_images_1970430662.jpg', 99),
(14, 3, 'Flluorescent markers kit Faber-Castell ', 'https://i1.rozetka.ua/goods/1672047/faber_castell_4005401546429_images_1672047920.jpg', 79),
(15, 3, 'Text marker Patio 2-5 mm', 'https://i2.rozetka.ua/goods/1861863/patio_58940ptr_images_1861863266.jpg', 19),
(16, 4, 'Correction pen + Gel pen Herlitz Superhai XL (color: blue)', 'https://i1.rozetka.ua/goods/1634318/copy_herlitz_8625105_5753ee9346591_images_1634318991.jpg', 25),
(17, 4, 'Correction fluid Buromax', 'https://i2.rozetka.ua/goods/1436710/buromax_bm_1002_images_1436710818.jpg', 7),
(18, 4, 'Correction pen Pilot 1 mm ', 'https://i2.rozetka.ua/goods/1847635/pilot_31_2_images_1847635982.jpg', 26),
(19, 4, 'Correction tape Axent 5mm x 5mm', 'https://i1.rozetka.ua/goods/762778/axent_7006_02a_images_762778798.jpg', 31),
(20, 4, 'Correction fluid  Economix', 'https://i1.rozetka.ua/goods/2248009/corrector_liquid_economix_20_ml_e41312_images_2248009188.jpg', 9);

-- --------------------------------------------------------

--
-- Table structure for table `categories`
--

CREATE TABLE `categories` (
  `id_cat` int(5) NOT NULL,
  `name_cat` varchar(100) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

--
-- Dumping data for table `categories`
--

INSERT INTO `categories` (`id_cat`, `name_cat`) VALUES
(1, 'pens'),
(2, 'pencils'),
(3, 'markers'),
(4, 'correction fluids');

--
-- Indexes for dumped tables
--

--
-- Indexes for table `articles`
--
ALTER TABLE `articles`
  ADD PRIMARY KEY (`art_id`);

--
-- Indexes for table `categories`
--
ALTER TABLE `categories`
  ADD PRIMARY KEY (`id_cat`);

--
-- AUTO_INCREMENT for dumped tables
--

--
-- AUTO_INCREMENT for table `articles`
--
ALTER TABLE `articles`
  MODIFY `art_id` int(5) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=21;

--
-- AUTO_INCREMENT for table `categories`
--
ALTER TABLE `categories`
  MODIFY `id_cat` int(5) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=5;
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
