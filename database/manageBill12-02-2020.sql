-- MySQL dump 10.13  Distrib 5.7.29, for Linux (x86_64)
--
-- Host: localhost    Database: manageBill
-- ------------------------------------------------------
-- Server version	5.7.29-0ubuntu0.18.04.1

/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8 */;
/*!40103 SET @OLD_TIME_ZONE=@@TIME_ZONE */;
/*!40103 SET TIME_ZONE='+00:00' */;
/*!40014 SET @OLD_UNIQUE_CHECKS=@@UNIQUE_CHECKS, UNIQUE_CHECKS=0 */;
/*!40014 SET @OLD_FOREIGN_KEY_CHECKS=@@FOREIGN_KEY_CHECKS, FOREIGN_KEY_CHECKS=0 */;
/*!40101 SET @OLD_SQL_MODE=@@SQL_MODE, SQL_MODE='NO_AUTO_VALUE_ON_ZERO' */;
/*!40111 SET @OLD_SQL_NOTES=@@SQL_NOTES, SQL_NOTES=0 */;

--
-- Current Database: `manageBill`
--

CREATE DATABASE /*!32312 IF NOT EXISTS*/ `manageBill` /*!40100 DEFAULT CHARACTER SET latin1 */;

USE `manageBill`;

--
-- Table structure for table `billClient`
--

DROP TABLE IF EXISTS `billClient`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `billClient` (
  `bcId` int(11) NOT NULL,
  `bcBillingDate` date DEFAULT NULL,
  `bcPaymentDate` date DEFAULT NULL,
  `bcTotalAmount` float DEFAULT NULL,
  `bcReason` varchar(255) DEFAULT NULL,
  `bcBillPaid` tinyint(1) DEFAULT NULL,
  `bcPDF` varchar(500) DEFAULT NULL,
  `cliId` int(11) NOT NULL,
  PRIMARY KEY (`bcId`),
  KEY `cliId` (`cliId`),
  CONSTRAINT `billClient_ibfk_1` FOREIGN KEY (`cliId`) REFERENCES `client` (`cliId`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `billClient`
--

LOCK TABLES `billClient` WRITE;
/*!40000 ALTER TABLE `billClient` DISABLE KEYS */;
INSERT INTO `billClient` VALUES (1,'2020-01-17','2020-02-17',800,'Water 5L',0,'',1),(2,'2020-01-10','2020-02-10',1500,'Water and tea waffle',1,'',2),(3,'2019-11-11','2019-11-30',8000,'Water 5L',0,'',1);
/*!40000 ALTER TABLE `billClient` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `billPersonnel`
--

DROP TABLE IF EXISTS `billPersonnel`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `billPersonnel` (
  `bpId` int(11) NOT NULL,
  `bpBillingDate` date DEFAULT NULL,
  `bpPaymentDate` date DEFAULT NULL,
  `bpTotalAmount` float DEFAULT NULL,
  `bpReason` varchar(255) DEFAULT NULL,
  `bpBillPaid` tinyint(1) DEFAULT NULL,
  `bpPDF` varchar(500) DEFAULT NULL,
  `perId` int(11) NOT NULL,
  PRIMARY KEY (`bpId`),
  KEY `perId` (`perId`),
  CONSTRAINT `billPersonnel_ibfk_1` FOREIGN KEY (`perId`) REFERENCES `personnel` (`perId`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `billPersonnel`
--

LOCK TABLES `billPersonnel` WRITE;
/*!40000 ALTER TABLE `billPersonnel` DISABLE KEYS */;
INSERT INTO `billPersonnel` VALUES (1,'2019-12-31','2019-12-31',1500,'Salarie',1,'',1),(2,'2019-11-30','2019-11-30',1500,'Salarie',1,'',1),(3,'2020-01-31','2020-01-31',1500,'Salarie',0,'',1),(4,'2019-12-31','2019-12-31',1500,'Salarie',1,'',2);
/*!40000 ALTER TABLE `billPersonnel` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `billSupplier`
--

DROP TABLE IF EXISTS `billSupplier`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `billSupplier` (
  `bsId` int(11) NOT NULL,
  `bsBillingDate` date DEFAULT NULL,
  `bsPaymentDate` date DEFAULT NULL,
  `bsTotalAmount` float DEFAULT NULL,
  `bsReason` varchar(255) DEFAULT NULL,
  `bsBillPaid` tinyint(1) DEFAULT NULL,
  `bsPDF` varchar(500) DEFAULT NULL,
  `supId` int(11) NOT NULL,
  PRIMARY KEY (`bsId`),
  KEY `supId` (`supId`),
  CONSTRAINT `billSupplier_ibfk_1` FOREIGN KEY (`supId`) REFERENCES `supplier` (`supId`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `billSupplier`
--

LOCK TABLES `billSupplier` WRITE;
/*!40000 ALTER TABLE `billSupplier` DISABLE KEYS */;
INSERT INTO `billSupplier` VALUES (1,'2020-01-01','2020-02-01',800,'Waffle',0,'',2),(2,'2020-01-15','2020-02-15',1000,'Waffle and water',0,'',2),(3,'2019-12-29','2020-02-01',100,'Tea',0,'',1),(4,'2020-01-28','2020-02-28',800,'Waffle',0,'',3);
/*!40000 ALTER TABLE `billSupplier` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `category`
--

DROP TABLE IF EXISTS `category`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `category` (
  `catId` int(11) NOT NULL,
  `catWording` varchar(25) DEFAULT NULL,
  PRIMARY KEY (`catId`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `category`
--

LOCK TABLES `category` WRITE;
/*!40000 ALTER TABLE `category` DISABLE KEYS */;
INSERT INTO `category` VALUES (1,'Products'),(2,'Services'),(3,'Utilities');
/*!40000 ALTER TABLE `category` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `client`
--

DROP TABLE IF EXISTS `client`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `client` (
  `cliId` int(11) NOT NULL,
  `cliPhone` varchar(14) DEFAULT NULL,
  `cliMobilPhone` varchar(14) DEFAULT NULL,
  `cliStreet` varchar(60) DEFAULT NULL,
  `cliCity` varchar(60) DEFAULT NULL,
  `cliPostCode` varchar(10) DEFAULT NULL,
  `cliEmail` varchar(60) DEFAULT NULL,
  `cliCompanyName` varchar(40) DEFAULT NULL,
  `cliFirstName` varchar(50) DEFAULT NULL,
  `cliFamilyName` varchar(50) DEFAULT NULL,
  `cliCompanyClient` tinyint(1) DEFAULT NULL,
  `cliVATNumber` varchar(30) DEFAULT NULL,
  `cliDOYNumber` varchar(30) DEFAULT NULL,
  `clId` int(11) NOT NULL,
  `couId` int(11) NOT NULL,
  PRIMARY KEY (`cliId`),
  KEY `clId` (`clId`),
  KEY `couId` (`couId`),
  CONSTRAINT `client_ibfk_1` FOREIGN KEY (`clId`) REFERENCES `contactLanguage` (`clId`),
  CONSTRAINT `client_ibfk_2` FOREIGN KEY (`couId`) REFERENCES `country` (`couId`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `client`
--

LOCK TABLES `client` WRITE;
/*!40000 ALTER TABLE `client` DISABLE KEYS */;
INSERT INTO `client` VALUES (1,'+3025896574','+30658745896','40-42 siggrou street','Athens','104 44','siggrou@gmail.com','travel panda','','',1,'BN8888888888','YO8888888888',1,826),(2,'+3087545478','+30999999999',' 31 rue carnot','Gap','05000','mainard@gmail.com','','Jeremy','Mainard',0,'BN777777777','YO7777777777',3,826),(3,'+3066666666','+3066666666','20 siggrou street','Athens','104 44','666666@gmail.com','titi company','','',1,'BN6666666666','YO6666666666',1,826),(4,'+30555555','+30555555','groove street','London','E1 7AE','london@gmail.com','','DjiDji','Five',0,'BN5555555555','YO5555555555',3,826);
/*!40000 ALTER TABLE `client` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `clientProducts`
--

DROP TABLE IF EXISTS `clientProducts`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `clientProducts` (
  `cpPriceWithVAT` float DEFAULT NULL,
  `cpQuantity` float DEFAULT NULL,
  `cpPriceWithoutVAT` float DEFAULT NULL,
  `bcId` int(11) NOT NULL,
  `prodId` int(11) NOT NULL,
  `vatId` int(11) NOT NULL,
  PRIMARY KEY (`bcId`,`prodId`),
  KEY `prodId` (`prodId`),
  KEY `vatId` (`vatId`),
  CONSTRAINT `clientProducts_ibfk_1` FOREIGN KEY (`bcId`) REFERENCES `billClient` (`bcId`),
  CONSTRAINT `clientProducts_ibfk_2` FOREIGN KEY (`prodId`) REFERENCES `products` (`prodId`),
  CONSTRAINT `clientProducts_ibfk_3` FOREIGN KEY (`vatId`) REFERENCES `vat` (`vatId`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `clientProducts`
--

LOCK TABLES `clientProducts` WRITE;
/*!40000 ALTER TABLE `clientProducts` DISABLE KEYS */;
INSERT INTO `clientProducts` VALUES (800,8,720,1,1,2),(500,5,460,2,1,2),(1000,150,870,2,3,2),(8000,80,7000,3,1,2);
/*!40000 ALTER TABLE `clientProducts` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `contactLanguage`
--

DROP TABLE IF EXISTS `contactLanguage`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `contactLanguage` (
  `clId` int(11) NOT NULL,
  `clWording` varchar(65) DEFAULT NULL,
  `clAlpha2` varchar(2) DEFAULT NULL,
  PRIMARY KEY (`clId`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `contactLanguage`
--

LOCK TABLES `contactLanguage` WRITE;
/*!40000 ALTER TABLE `contactLanguage` DISABLE KEYS */;
INSERT INTO `contactLanguage` VALUES (1,'English','en'),(2,'Afar','aa'),(3,'Abkhazian','ab'),(4,'Afrikaans','af'),(5,'Amharic','am'),(6,'Arabic','ar'),(7,'Assamese','as'),(8,'Aymara','ay'),(9,'Azerbaijani','az'),(10,'Bashkir','ba'),(11,'Belarusian','be'),(12,'Bulgarian','bg'),(13,'Bihari','bh'),(14,'Bislama','bi'),(15,'Bengali/Bangla','bn'),(16,'Tibetan','bo'),(17,'Breton','br'),(18,'Catalan','ca'),(19,'Corsican','co'),(20,'Czech','cs'),(21,'Welsh','cy'),(22,'Danish','da'),(23,'German','de'),(24,'Bhutani','dz'),(25,'Greek','el'),(26,'Esperanto','eo'),(27,'Spanish','es'),(28,'Estonian','et'),(29,'Basque','eu'),(30,'Persian','fa'),(31,'Finnish','fi'),(32,'Fiji','fj'),(33,'Faeroese','fo'),(34,'French','fr'),(35,'Frisian','fy'),(36,'Irish','ga'),(37,'Scots/Gaelic','gd'),(38,'Galician','gl'),(39,'Guarani','gn'),(40,'Gujarati','gu'),(41,'Hausa','ha'),(42,'Hindi','hi'),(43,'Croatian','hr'),(44,'Hungarian','hu'),(45,'Armenian','hy'),(46,'Interlingua','ia'),(47,'Interlingue','ie'),(48,'Inupiak','ik'),(49,'Indonesian','in'),(50,'Icelandic','is'),(51,'Italian','it'),(52,'Hebrew','iw'),(53,'Japanese','ja'),(54,'Yiddish','ji'),(55,'Javanese','jw'),(56,'Georgian','ka'),(57,'Kazakh','kk'),(58,'Greenlandic','kl'),(59,'Cambodian','km'),(60,'Kannada','kn'),(61,'Korean','ko'),(62,'Kashmiri','ks'),(63,'Kurdish','ku'),(64,'Kirghiz','ky'),(65,'Latin','la'),(66,'Lingala','ln'),(67,'Laothian','lo'),(68,'Lithuanian','lt'),(69,'Latvian/Lettish','lv'),(70,'Malagasy','mg'),(71,'Maori','mi'),(72,'Macedonian','mk'),(73,'Malayalam','ml'),(74,'Mongolian','mn'),(75,'Moldavian','mo'),(76,'Marathi','mr'),(77,'Malay','ms'),(78,'Maltese','mt'),(79,'Burmese','my'),(80,'Nauru','na'),(81,'Nepali','ne'),(82,'Dutch','nl'),(83,'Norwegian','no'),(84,'Occitan','oc'),(85,'(Afan)/Oromoor/Oriya','om'),(86,'Punjabi','pa'),(87,'Polish','pl'),(88,'Pashto/Pushto','ps'),(89,'Portuguese','pt'),(90,'Quechua','qu'),(91,'Rhaeto-Romance','rm'),(92,'Kirundi','rn'),(93,'Romanian','ro'),(94,'Russian','ru'),(95,'Kinyarwanda','rw'),(96,'Sanskrit','sa'),(97,'Sindhi','sd'),(98,'Sangro','sg'),(99,'Serbo-Croatian','sh'),(100,'Singhalese','si'),(101,'Slovak','sk'),(102,'Slovenian','sl'),(103,'Samoan','sm'),(104,'Shona','sn'),(105,'Somali','so'),(106,'Albanian','sq'),(107,'Serbian','sr'),(108,'Siswati','ss'),(109,'Sesotho','st'),(110,'Sundanese','su'),(111,'Swedish','sv'),(112,'Swahili','sw'),(113,'Tamil','ta'),(114,'Telugu','te'),(115,'Tajik','tg'),(116,'Thai','th'),(117,'Tigrinya','ti'),(118,'Turkmen','tk'),(119,'Tagalog','tl'),(120,'Setswana','tn'),(121,'Tonga','to'),(122,'Turkish','tr'),(123,'Tsonga','ts'),(124,'Tatar','tt'),(125,'Twi','tw'),(126,'Ukrainian','uk'),(127,'Urdu','ur'),(128,'Uzbek','uz'),(129,'Vietnamese','vi'),(130,'Volapuk','vo'),(131,'Wolof','wo'),(132,'Xhosa','xh'),(133,'Yoruba','yo'),(134,'Chinese','zh'),(135,'Zulu','zu');
/*!40000 ALTER TABLE `contactLanguage` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `country`
--

DROP TABLE IF EXISTS `country`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `country` (
  `couId` int(11) NOT NULL,
  `couWording` varchar(80) DEFAULT NULL,
  `couAlpha2` varchar(2) DEFAULT NULL,
  `couAlpha3` varchar(3) DEFAULT NULL,
  PRIMARY KEY (`couId`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `country`
--

LOCK TABLES `country` WRITE;
/*!40000 ALTER TABLE `country` DISABLE KEYS */;
INSERT INTO `country` VALUES (4,'Afghanistan','af','afg'),(8,'Albania','al','alb'),(12,'Algeria','dz','dza'),(20,'Andorra','ad','and'),(24,'Angola','ao','ago'),(28,'Antigua and Barbuda','ag','atg'),(31,'Azerbaijan','az','aze'),(32,'Argentina','ar','arg'),(36,'Australia','au','aus'),(40,'Austria','at','aut'),(44,'Bahamas','bs','bhs'),(48,'Bahrain','bh','bhr'),(50,'Bangladesh','bd','bgd'),(51,'Armenia','am','arm'),(52,'Barbados','bb','brb'),(56,'Belgium','be','bel'),(64,'Bhutan','bt','btn'),(68,'Bolivia (Plurinational State of)','bo','bol'),(70,'Bosnia and Herzegovina','ba','bih'),(72,'Botswana','bw','bwa'),(76,'Brazil','br','bra'),(84,'Belize','bz','blz'),(90,'Solomon Islands','sb','slb'),(96,'Brunei Darussalam','bn','brn'),(100,'Bulgaria','bg','bgr'),(104,'Myanmar','mm','mmr'),(108,'Burundi','bi','bdi'),(112,'Belarus','by','blr'),(116,'Cambodia','kh','khm'),(120,'Cameroon','cm','cmr'),(124,'Canada','ca','can'),(132,'Cabo Verde','cv','cpv'),(140,'Central African Republic','cf','caf'),(144,'Sri Lanka','lk','lka'),(148,'Chad','td','tcd'),(152,'Chile','cl','chl'),(156,'China','cn','chn'),(170,'Colombia','co','col'),(174,'Comoros','km','com'),(178,'Congo','cg','cog'),(180,'Congo, Democratic Republic of the','cd','cod'),(188,'Costa Rica','cr','cri'),(191,'Croatia','hr','hrv'),(192,'Cuba','cu','cub'),(196,'Cyprus','cy','cyp'),(203,'Czechia','cz','cze'),(204,'Benin','bj','ben'),(208,'Denmark','dk','dnk'),(212,'Dominica','dm','dma'),(214,'Dominican Republic','do','dom'),(218,'Ecuador','ec','ecu'),(222,'El Salvador','sv','slv'),(226,'Equatorial Guinea','gq','gnq'),(231,'Ethiopia','et','eth'),(232,'Eritrea','er','eri'),(233,'Estonia','ee','est'),(242,'Fiji','fj','fji'),(246,'Finland','fi','fin'),(250,'France','fr','fra'),(262,'Djibouti','dj','dji'),(266,'Gabon','ga','gab'),(268,'Georgia','ge','geo'),(270,'Gambia','gm','gmb'),(276,'Germany','de','deu'),(288,'Ghana','gh','gha'),(296,'Kiribati','ki','kir'),(300,'Greece','gr','grc'),(308,'Grenada','gd','grd'),(320,'Guatemala','gt','gtm'),(324,'Guinea','gn','gin'),(328,'Guyana','gy','guy'),(332,'Haiti','ht','hti'),(340,'Honduras','hn','hnd'),(348,'Hungary','hu','hun'),(352,'Iceland','is','isl'),(356,'India','in','ind'),(360,'Indonesia','id','idn'),(364,'Iran (Islamic Republic of)','ir','irn'),(368,'Iraq','iq','irq'),(372,'Ireland','ie','irl'),(376,'Israel','il','isr'),(380,'Italy','it','ita'),(384,'Côte d\'Ivoire','ci','civ'),(388,'Jamaica','jm','jam'),(392,'Japan','jp','jpn'),(398,'Kazakhstan','kz','kaz'),(400,'Jordan','jo','jor'),(404,'Kenya','ke','ken'),(408,'Korea (Democratic People\'s Republic of)','kp','prk'),(410,'Korea, Republic of','kr','kor'),(414,'Kuwait','kw','kwt'),(417,'Kyrgyzstan','kg','kgz'),(418,'Lao People\'s Democratic Republic','la','lao'),(422,'Lebanon','lb','lbn'),(426,'Lesotho','ls','lso'),(428,'Latvia','lv','lva'),(430,'Liberia','lr','lbr'),(434,'Libya','ly','lby'),(438,'Liechtenstein','li','lie'),(440,'Lithuania','lt','ltu'),(442,'Luxembourg','lu','lux'),(450,'Madagascar','mg','mdg'),(454,'Malawi','mw','mwi'),(458,'Malaysia','my','mys'),(462,'Maldives','mv','mdv'),(466,'Mali','ml','mli'),(470,'Malta','mt','mlt'),(478,'Mauritania','mr','mrt'),(480,'Mauritius','mu','mus'),(484,'Mexico','mx','mex'),(492,'Monaco','mc','mco'),(496,'Mongolia','mn','mng'),(498,'Moldova, Republic of','md','mda'),(499,'Montenegro','me','mne'),(504,'Morocco','ma','mar'),(508,'Mozambique','mz','moz'),(512,'Oman','om','omn'),(516,'Namibia','na','nam'),(520,'Nauru','nr','nru'),(524,'Nepal','np','npl'),(528,'Netherlands','nl','nld'),(548,'Vanuatu','vu','vut'),(554,'New Zealand','nz','nzl'),(558,'Nicaragua','ni','nic'),(562,'Niger','ne','ner'),(566,'Nigeria','ng','nga'),(578,'Norway','no','nor'),(583,'Micronesia (Federated States of)','fm','fsm'),(584,'Marshall Islands','mh','mhl'),(585,'Palau','pw','plw'),(586,'Pakistan','pk','pak'),(591,'Panama','pa','pan'),(598,'Papua New Guinea','pg','png'),(600,'Paraguay','py','pry'),(604,'Peru','pe','per'),(608,'Philippines','ph','phl'),(616,'Poland','pl','pol'),(620,'Portugal','pt','prt'),(624,'Guinea-Bissau','gw','gnb'),(626,'Timor-Leste','tl','tls'),(634,'Qatar','qa','qat'),(642,'Romania','ro','rou'),(643,'Russian Federation','ru','rus'),(646,'Rwanda','rw','rwa'),(659,'Saint Kitts and Nevis','kn','kna'),(662,'Saint Lucia','lc','lca'),(670,'Saint Vincent and the Grenadines','vc','vct'),(674,'San Marino','sm','smr'),(678,'Sao Tome and Principe','st','stp'),(682,'Saudi Arabia','sa','sau'),(686,'Senegal','sn','sen'),(688,'Serbia','rs','srb'),(690,'Seychelles','sc','syc'),(694,'Sierra Leone','sl','sle'),(702,'Singapore','sg','sgp'),(703,'Slovakia','sk','svk'),(704,'Viet Nam','vn','vnm'),(705,'Slovenia','si','svn'),(706,'Somalia','so','som'),(710,'South Africa','za','zaf'),(716,'Zimbabwe','zw','zwe'),(724,'Spain','es','esp'),(728,'South Sudan','ss','ssd'),(729,'Sudan','sd','sdn'),(740,'Suriname','sr','sur'),(748,'Eswatini','sz','swz'),(752,'Sweden','se','swe'),(756,'Switzerland','ch','che'),(760,'Syrian Arab Republic','sy','syr'),(762,'Tajikistan','tj','tjk'),(764,'Thailand','th','tha'),(768,'Togo','tg','tgo'),(776,'Tonga','to','ton'),(780,'Trinidad and Tobago','tt','tto'),(784,'United Arab Emirates','ae','are'),(788,'Tunisia','tn','tun'),(792,'Turkey','tr','tur'),(795,'Turkmenistan','tm','tkm'),(798,'Tuvalu','tv','tuv'),(800,'Uganda','ug','uga'),(804,'Ukraine','ua','ukr'),(807,'North Macedonia','mk','mkd'),(818,'Egypt','eg','egy'),(826,'United Kingdom of Great Britain and Northern Ireland','gb','gbr'),(834,'Tanzania, United Republic of','tz','tza'),(840,'United States of America','us','usa'),(854,'Burkina Faso','bf','bfa'),(858,'Uruguay','uy','ury'),(860,'Uzbekistan','uz','uzb'),(862,'Venezuela (Bolivarian Republic of)','ve','ven'),(882,'Samoa','ws','wsm'),(887,'Yemen','ye','yem'),(894,'Zambia','zm','zmb');
/*!40000 ALTER TABLE `country` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `persoProducts`
--

DROP TABLE IF EXISTS `persoProducts`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `persoProducts` (
  `ppPriceWithVAT` float DEFAULT NULL,
  `ppQuantity` float DEFAULT NULL,
  `ppPriceWithoutVAT` float DEFAULT NULL,
  `bpId` int(11) NOT NULL,
  `prodId` int(11) NOT NULL,
  `vatId` int(11) NOT NULL,
  PRIMARY KEY (`bpId`,`prodId`),
  KEY `prodId` (`prodId`),
  KEY `vatId` (`vatId`),
  CONSTRAINT `persoProducts_ibfk_1` FOREIGN KEY (`bpId`) REFERENCES `billPersonnel` (`bpId`),
  CONSTRAINT `persoProducts_ibfk_2` FOREIGN KEY (`prodId`) REFERENCES `products` (`prodId`),
  CONSTRAINT `persoProducts_ibfk_3` FOREIGN KEY (`vatId`) REFERENCES `vat` (`vatId`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `persoProducts`
--

LOCK TABLES `persoProducts` WRITE;
/*!40000 ALTER TABLE `persoProducts` DISABLE KEYS */;
INSERT INTO `persoProducts` VALUES (1500,1,1250,1,5,1),(1500,1,1250,2,5,1),(1500,1,1250,3,5,1),(1500,1,1250,4,6,1);
/*!40000 ALTER TABLE `persoProducts` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `personnel`
--

DROP TABLE IF EXISTS `personnel`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `personnel` (
  `perId` int(11) NOT NULL,
  `perFirstName` varchar(40) DEFAULT NULL,
  `perFamilyName` varchar(40) DEFAULT NULL,
  `perPhone` varchar(20) DEFAULT NULL,
  `perPhoneMobile` varchar(20) DEFAULT NULL,
  `perStreet` varchar(40) DEFAULT NULL,
  `perPostCode` varchar(15) DEFAULT NULL,
  `perCity` varchar(40) DEFAULT NULL,
  `perEmail` varchar(60) DEFAULT NULL,
  `perVATNumber` varchar(20) DEFAULT NULL,
  `perDOYNumber` varchar(20) DEFAULT NULL,
  `clId` int(11) NOT NULL,
  `couId` int(11) NOT NULL,
  PRIMARY KEY (`perId`),
  KEY `clId` (`clId`),
  KEY `couId` (`couId`),
  CONSTRAINT `personnel_ibfk_1` FOREIGN KEY (`clId`) REFERENCES `contactLanguage` (`clId`),
  CONSTRAINT `personnel_ibfk_2` FOREIGN KEY (`couId`) REFERENCES `country` (`couId`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `personnel`
--

LOCK TABLES `personnel` WRITE;
/*!40000 ALTER TABLE `personnel` DISABLE KEYS */;
INSERT INTO `personnel` VALUES (1,'TATA','ONE','+3322222222','+33022222222','acropolis','104 44','Athens','tata@gmail.com','BN1111111111','YO1111111111',1,826),(2,'Loic','bouchain','+3311111111','+331111111','3 rue de Gaulle','41250','AZE','loic@gmail.com','BN0000000000','YO0000000000',3,826);
/*!40000 ALTER TABLE `personnel` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `products`
--

DROP TABLE IF EXISTS `products`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `products` (
  `prodId` int(11) NOT NULL,
  `prodWording` varchar(50) DEFAULT NULL,
  `catId` int(11) DEFAULT NULL,
  `sCatId` int(11) DEFAULT NULL,
  `toqId` int(11) NOT NULL,
  PRIMARY KEY (`prodId`),
  KEY `catId` (`catId`),
  KEY `sCatId` (`sCatId`),
  KEY `toqId` (`toqId`),
  CONSTRAINT `products_ibfk_1` FOREIGN KEY (`catId`) REFERENCES `category` (`catId`),
  CONSTRAINT `products_ibfk_2` FOREIGN KEY (`sCatId`) REFERENCES `subCategory` (`sCatId`),
  CONSTRAINT `products_ibfk_3` FOREIGN KEY (`toqId`) REFERENCES `typeOfQuantity` (`toqId`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `products`
--

LOCK TABLES `products` WRITE;
/*!40000 ALTER TABLE `products` DISABLE KEYS */;
INSERT INTO `products` VALUES (1,'Water Spiros 5L',1,1,3),(2,'Water nera kritis 0.5L',1,1,2),(3,'Tea grey',1,2,3),(4,'waffles',1,2,3),(5,'Popi salaries',2,NULL,3),(6,'Katerina salaries',2,NULL,3);
/*!40000 ALTER TABLE `products` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `subCategory`
--

DROP TABLE IF EXISTS `subCategory`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `subCategory` (
  `sCatId` int(11) NOT NULL,
  `sCatWording` varchar(30) DEFAULT NULL,
  `catId` int(11) NOT NULL,
  PRIMARY KEY (`sCatId`),
  KEY `catId` (`catId`),
  CONSTRAINT `subCategory_ibfk_1` FOREIGN KEY (`catId`) REFERENCES `category` (`catId`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `subCategory`
--

LOCK TABLES `subCategory` WRITE;
/*!40000 ALTER TABLE `subCategory` DISABLE KEYS */;
INSERT INTO `subCategory` VALUES (1,'Computer',1),(2,'Food',1);
/*!40000 ALTER TABLE `subCategory` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `supplier`
--

DROP TABLE IF EXISTS `supplier`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `supplier` (
  `supId` int(11) NOT NULL,
  `supCompanyName` varchar(40) DEFAULT NULL,
  `suPhone` varchar(20) DEFAULT NULL,
  `supMobilPhone` varchar(20) DEFAULT NULL,
  `supStreet` varchar(40) DEFAULT NULL,
  `supCity` varchar(40) DEFAULT NULL,
  `supPostCode` varchar(15) DEFAULT NULL,
  `supEmail` varchar(60) DEFAULT NULL,
  `supVATNumber` varchar(20) DEFAULT NULL,
  `supDOYNumber` varchar(20) DEFAULT NULL,
  `clId` int(11) NOT NULL,
  `couId` int(11) NOT NULL,
  PRIMARY KEY (`supId`),
  KEY `clId` (`clId`),
  KEY `couId` (`couId`),
  CONSTRAINT `supplier_ibfk_1` FOREIGN KEY (`clId`) REFERENCES `contactLanguage` (`clId`),
  CONSTRAINT `supplier_ibfk_2` FOREIGN KEY (`couId`) REFERENCES `country` (`couId`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `supplier`
--

LOCK TABLES `supplier` WRITE;
/*!40000 ALTER TABLE `supplier` DISABLE KEYS */;
INSERT INTO `supplier` VALUES (1,'Spiros','+302589647','','65 synggrou','Athens','145 58','sypros@gmailcom','BN4444444444','YO4444444444',1,826),(2,'Neastea','+302589647','','grove street','London','E1 7AE','neastea@gmailcom','BN3333333333','YO333333333',3,826),(3,'dat','+302589647','','17 rue charle de gaulle ','Paris','75500','dat@gmailcom','BN2222222222','YO2222222222',3,826);
/*!40000 ALTER TABLE `supplier` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `supplierProducts`
--

DROP TABLE IF EXISTS `supplierProducts`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `supplierProducts` (
  `spPriceWithVAT` float DEFAULT NULL,
  `spQuantity` float DEFAULT NULL,
  `spPriceWithoutVAT` float DEFAULT NULL,
  `bsId` int(11) NOT NULL,
  `prodId` int(11) NOT NULL,
  `vatId` int(11) NOT NULL,
  PRIMARY KEY (`bsId`,`prodId`),
  KEY `prodId` (`prodId`),
  KEY `vatId` (`vatId`),
  CONSTRAINT `supplierProducts_ibfk_1` FOREIGN KEY (`bsId`) REFERENCES `billSupplier` (`bsId`),
  CONSTRAINT `supplierProducts_ibfk_2` FOREIGN KEY (`prodId`) REFERENCES `products` (`prodId`),
  CONSTRAINT `supplierProducts_ibfk_3` FOREIGN KEY (`vatId`) REFERENCES `vat` (`vatId`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `supplierProducts`
--

LOCK TABLES `supplierProducts` WRITE;
/*!40000 ALTER TABLE `supplierProducts` DISABLE KEYS */;
INSERT INTO `supplierProducts` VALUES (800,600,650,1,4,1),(600,800,550,2,2,1),(400,250,320,2,4,1),(100,60,85,3,3,1),(800,600,650,4,4,1);
/*!40000 ALTER TABLE `supplierProducts` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `typeOfQuantity`
--

DROP TABLE IF EXISTS `typeOfQuantity`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `typeOfQuantity` (
  `toqId` int(11) NOT NULL,
  `toqWording` varchar(25) DEFAULT NULL,
  PRIMARY KEY (`toqId`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `typeOfQuantity`
--

LOCK TABLES `typeOfQuantity` WRITE;
/*!40000 ALTER TABLE `typeOfQuantity` DISABLE KEYS */;
INSERT INTO `typeOfQuantity` VALUES (1,'Liter'),(2,'0.5L Bottle'),(3,'Unity');
/*!40000 ALTER TABLE `typeOfQuantity` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Temporary table structure for view `vCategory`
--

DROP TABLE IF EXISTS `vCategory`;
/*!50001 DROP VIEW IF EXISTS `vCategory`*/;
SET @saved_cs_client     = @@character_set_client;
SET character_set_client = utf8;
/*!50001 CREATE VIEW `vCategory` AS SELECT 
 1 AS `vCatId`,
 1 AS `vCatWording`*/;
SET character_set_client = @saved_cs_client;

--
-- Temporary table structure for view `vClientInvoice`
--

DROP TABLE IF EXISTS `vClientInvoice`;
/*!50001 DROP VIEW IF EXISTS `vClientInvoice`*/;
SET @saved_cs_client     = @@character_set_client;
SET character_set_client = utf8;
/*!50001 CREATE VIEW `vClientInvoice` AS SELECT 
 1 AS `vBcId`,
 1 AS `vBcBillingDate`,
 1 AS `vBcPaymentDate`,
 1 AS `vBcTotalAmount`,
 1 AS `vBcReason`,
 1 AS `vBcBillPaid`,
 1 AS `vVatNumber`,
 1 AS `vCliFirstName`,
 1 AS `vCliFamilyName`,
 1 AS `vCliCompanyName`*/;
SET character_set_client = @saved_cs_client;

--
-- Temporary table structure for view `vCompanyClient`
--

DROP TABLE IF EXISTS `vCompanyClient`;
/*!50001 DROP VIEW IF EXISTS `vCompanyClient`*/;
SET @saved_cs_client     = @@character_set_client;
SET character_set_client = utf8;
/*!50001 CREATE VIEW `vCompanyClient` AS SELECT 
 1 AS `vCliId`,
 1 AS `vCliCompanyName`,
 1 AS `vCliVatNumber`,
 1 AS `vCliEmail`,
 1 AS `vCliPhone`,
 1 AS `vCliMobilPhone`,
 1 AS `vCliStreet`,
 1 AS `vCliCity`,
 1 AS `vCliPostCode`,
 1 AS `vCliCountry`,
 1 AS `vCliDoyNumber`,
 1 AS `vClWording`*/;
SET character_set_client = @saved_cs_client;

--
-- Temporary table structure for view `vEmployeeInvoice`
--

DROP TABLE IF EXISTS `vEmployeeInvoice`;
/*!50001 DROP VIEW IF EXISTS `vEmployeeInvoice`*/;
SET @saved_cs_client     = @@character_set_client;
SET character_set_client = utf8;
/*!50001 CREATE VIEW `vEmployeeInvoice` AS SELECT 
 1 AS `vBpId`,
 1 AS `vBpBillingDate`,
 1 AS `vBpPaymentDate`,
 1 AS `vBpTotalAmount`,
 1 AS `vBpReason`,
 1 AS `vBpBillPaid`,
 1 AS `vPerVatNumber`,
 1 AS `vPerFirstName`,
 1 AS `vPerFamilyName`*/;
SET character_set_client = @saved_cs_client;

--
-- Temporary table structure for view `vFillCountry`
--

DROP TABLE IF EXISTS `vFillCountry`;
/*!50001 DROP VIEW IF EXISTS `vFillCountry`*/;
SET @saved_cs_client     = @@character_set_client;
SET character_set_client = utf8;
/*!50001 CREATE VIEW `vFillCountry` AS SELECT 
 1 AS `vCouId`,
 1 AS `vCouWording`,
 1 AS `vCouAlpha2`*/;
SET character_set_client = @saved_cs_client;

--
-- Temporary table structure for view `vFillLanguage`
--

DROP TABLE IF EXISTS `vFillLanguage`;
/*!50001 DROP VIEW IF EXISTS `vFillLanguage`*/;
SET @saved_cs_client     = @@character_set_client;
SET character_set_client = utf8;
/*!50001 CREATE VIEW `vFillLanguage` AS SELECT 
 1 AS `vClId`,
 1 AS `vClWording`,
 1 AS `vClAlpha2`*/;
SET character_set_client = @saved_cs_client;

--
-- Temporary table structure for view `vFillProduct`
--

DROP TABLE IF EXISTS `vFillProduct`;
/*!50001 DROP VIEW IF EXISTS `vFillProduct`*/;
SET @saved_cs_client     = @@character_set_client;
SET character_set_client = utf8;
/*!50001 CREATE VIEW `vFillProduct` AS SELECT 
 1 AS `vProdId`,
 1 AS `vProdWording`,
 1 AS `vCatId`,
 1 AS `vSCatId`*/;
SET character_set_client = @saved_cs_client;

--
-- Temporary table structure for view `vFillSCategory`
--

DROP TABLE IF EXISTS `vFillSCategory`;
/*!50001 DROP VIEW IF EXISTS `vFillSCategory`*/;
SET @saved_cs_client     = @@character_set_client;
SET character_set_client = utf8;
/*!50001 CREATE VIEW `vFillSCategory` AS SELECT 
 1 AS `vSCatId`,
 1 AS `vSCatWording`,
 1 AS `vCatId`*/;
SET character_set_client = @saved_cs_client;

--
-- Temporary table structure for view `vFillTOQ`
--

DROP TABLE IF EXISTS `vFillTOQ`;
/*!50001 DROP VIEW IF EXISTS `vFillTOQ`*/;
SET @saved_cs_client     = @@character_set_client;
SET character_set_client = utf8;
/*!50001 CREATE VIEW `vFillTOQ` AS SELECT 
 1 AS `vToqId`,
 1 AS `vToqWording`*/;
SET character_set_client = @saved_cs_client;

--
-- Temporary table structure for view `vIndividualClient`
--

DROP TABLE IF EXISTS `vIndividualClient`;
/*!50001 DROP VIEW IF EXISTS `vIndividualClient`*/;
SET @saved_cs_client     = @@character_set_client;
SET character_set_client = utf8;
/*!50001 CREATE VIEW `vIndividualClient` AS SELECT 
 1 AS `vCliId`,
 1 AS `vCliFamilyName`,
 1 AS `vCliFirstName`,
 1 AS `vCliVatNumber`,
 1 AS `vCliEmail`,
 1 AS `vCliPhone`,
 1 AS `vCliMobilPhone`,
 1 AS `vCliStreet`,
 1 AS `vCliCity`,
 1 AS `vCliPostCode`,
 1 AS `vCliCountry`,
 1 AS `vCliDoyNumber`,
 1 AS `vClWording`*/;
SET character_set_client = @saved_cs_client;

--
-- Temporary table structure for view `vInvoicePerProductClient`
--

DROP TABLE IF EXISTS `vInvoicePerProductClient`;
/*!50001 DROP VIEW IF EXISTS `vInvoicePerProductClient`*/;
SET @saved_cs_client     = @@character_set_client;
SET character_set_client = utf8;
/*!50001 CREATE VIEW `vInvoicePerProductClient` AS SELECT 
 1 AS `vBcBillingDate`,
 1 AS `vBcPaymentDate`,
 1 AS `vBcTotalAmount`,
 1 AS `vBcReason`,
 1 AS `vBcBillPaid`,
 1 AS `vCliFirstName`,
 1 AS `vCliFamilyName`,
 1 AS `vCliCompanyName`,
 1 AS `vProdId`*/;
SET character_set_client = @saved_cs_client;

--
-- Temporary table structure for view `vInvoicePerProductPersonnel`
--

DROP TABLE IF EXISTS `vInvoicePerProductPersonnel`;
/*!50001 DROP VIEW IF EXISTS `vInvoicePerProductPersonnel`*/;
SET @saved_cs_client     = @@character_set_client;
SET character_set_client = utf8;
/*!50001 CREATE VIEW `vInvoicePerProductPersonnel` AS SELECT 
 1 AS `vBpBillingDate`,
 1 AS `vBpPaymentDate`,
 1 AS `vBpTotalAmount`,
 1 AS `vBpReason`,
 1 AS `vBpBillPaid`,
 1 AS `vPersFamilyName`,
 1 AS `vPersFirstName`,
 1 AS `vProdId`*/;
SET character_set_client = @saved_cs_client;

--
-- Temporary table structure for view `vInvoicePerProductSupplier`
--

DROP TABLE IF EXISTS `vInvoicePerProductSupplier`;
/*!50001 DROP VIEW IF EXISTS `vInvoicePerProductSupplier`*/;
SET @saved_cs_client     = @@character_set_client;
SET character_set_client = utf8;
/*!50001 CREATE VIEW `vInvoicePerProductSupplier` AS SELECT 
 1 AS `vBsBillingDate`,
 1 AS `vBsPaymentDate`,
 1 AS `vBsTotalAmount`,
 1 AS `vBsReason`,
 1 AS `vBsBillPaid`,
 1 AS `vSupCompanyName`,
 1 AS `vProdId`*/;
SET character_set_client = @saved_cs_client;

--
-- Temporary table structure for view `vPersonnel`
--

DROP TABLE IF EXISTS `vPersonnel`;
/*!50001 DROP VIEW IF EXISTS `vPersonnel`*/;
SET @saved_cs_client     = @@character_set_client;
SET character_set_client = utf8;
/*!50001 CREATE VIEW `vPersonnel` AS SELECT 
 1 AS `vPerId`,
 1 AS `vPerFamilyName`,
 1 AS `vPerFirstName`,
 1 AS `vPerVATNumber`,
 1 AS `vPerStreet`,
 1 AS `vPerCity`,
 1 AS `vCouWording`,
 1 AS `vPerPostCode`,
 1 AS `vPerEmail`,
 1 AS `vPerDOYNumber`,
 1 AS `vPerPhoneMobile`,
 1 AS `vClWording`*/;
SET character_set_client = @saved_cs_client;

--
-- Temporary table structure for view `vProductInvoiceClient`
--

DROP TABLE IF EXISTS `vProductInvoiceClient`;
/*!50001 DROP VIEW IF EXISTS `vProductInvoiceClient`*/;
SET @saved_cs_client     = @@character_set_client;
SET character_set_client = utf8;
/*!50001 CREATE VIEW `vProductInvoiceClient` AS SELECT 
 1 AS `vBcId`,
 1 AS `vProdWording`,
 1 AS `vCpPriceWithVAT`,
 1 AS `vVatPercent`,
 1 AS `vCpPriceWithoutVAT`,
 1 AS `vCpQuantity`,
 1 AS `vToqWording`*/;
SET character_set_client = @saved_cs_client;

--
-- Temporary table structure for view `vProductInvoiceEmployee`
--

DROP TABLE IF EXISTS `vProductInvoiceEmployee`;
/*!50001 DROP VIEW IF EXISTS `vProductInvoiceEmployee`*/;
SET @saved_cs_client     = @@character_set_client;
SET character_set_client = utf8;
/*!50001 CREATE VIEW `vProductInvoiceEmployee` AS SELECT 
 1 AS `vBpId`,
 1 AS `vProdWording`,
 1 AS `vPpPriceWithVAT`,
 1 AS `vVatPercent`,
 1 AS `vPpPriceWithoutVAT`,
 1 AS `vPpQuantity`,
 1 AS `vToqWording`*/;
SET character_set_client = @saved_cs_client;

--
-- Temporary table structure for view `vProductInvoiceSupplier`
--

DROP TABLE IF EXISTS `vProductInvoiceSupplier`;
/*!50001 DROP VIEW IF EXISTS `vProductInvoiceSupplier`*/;
SET @saved_cs_client     = @@character_set_client;
SET character_set_client = utf8;
/*!50001 CREATE VIEW `vProductInvoiceSupplier` AS SELECT 
 1 AS `vBsId`,
 1 AS `vProdWording`,
 1 AS `vSpPriceWithVAT`,
 1 AS `vVatPercent`,
 1 AS `vSpPriceWithoutVAT`,
 1 AS `vSpQuantity`,
 1 AS `vToqWording`*/;
SET character_set_client = @saved_cs_client;

--
-- Temporary table structure for view `vSupplier`
--

DROP TABLE IF EXISTS `vSupplier`;
/*!50001 DROP VIEW IF EXISTS `vSupplier`*/;
SET @saved_cs_client     = @@character_set_client;
SET character_set_client = utf8;
/*!50001 CREATE VIEW `vSupplier` AS SELECT 
 1 AS `vSupId`,
 1 AS `vSupCompanyName`,
 1 AS `vSupVatNumber`,
 1 AS `vSupEmail`,
 1 AS `vSupPhone`,
 1 AS `vSupMobilPhone`,
 1 AS `vSupStreet`,
 1 AS `vSupCity`,
 1 AS `vSupPostCode`,
 1 AS `vSupCountry`,
 1 AS `vSupDoyNumber`,
 1 AS `vSupContactLanguage`*/;
SET character_set_client = @saved_cs_client;

--
-- Temporary table structure for view `vSupplierInvoice`
--

DROP TABLE IF EXISTS `vSupplierInvoice`;
/*!50001 DROP VIEW IF EXISTS `vSupplierInvoice`*/;
SET @saved_cs_client     = @@character_set_client;
SET character_set_client = utf8;
/*!50001 CREATE VIEW `vSupplierInvoice` AS SELECT 
 1 AS `vBsId`,
 1 AS `vBsBillingDate`,
 1 AS `vBsPaymentDate`,
 1 AS `vBsTotalAmount`,
 1 AS `vBsReason`,
 1 AS `vBsBillPaid`,
 1 AS `vVatNumber`,
 1 AS `vSupCompanyName`*/;
SET character_set_client = @saved_cs_client;

--
-- Table structure for table `vat`
--

DROP TABLE IF EXISTS `vat`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `vat` (
  `vatId` int(11) NOT NULL,
  `vatPercent` float DEFAULT NULL,
  PRIMARY KEY (`vatId`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `vat`
--

LOCK TABLES `vat` WRITE;
/*!40000 ALTER TABLE `vat` DISABLE KEYS */;
INSERT INTO `vat` VALUES (1,24),(2,13),(3,6);
/*!40000 ALTER TABLE `vat` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Current Database: `manageBill`
--

USE `manageBill`;

--
-- Final view structure for view `vCategory`
--

/*!50001 DROP VIEW IF EXISTS `vCategory`*/;
/*!50001 SET @saved_cs_client          = @@character_set_client */;
/*!50001 SET @saved_cs_results         = @@character_set_results */;
/*!50001 SET @saved_col_connection     = @@collation_connection */;
/*!50001 SET character_set_client      = utf8 */;
/*!50001 SET character_set_results     = utf8 */;
/*!50001 SET collation_connection      = utf8_general_ci */;
/*!50001 CREATE ALGORITHM=UNDEFINED */
/*!50013 DEFINER=`jeremy`@`localhost` SQL SECURITY DEFINER */
/*!50001 VIEW `vCategory` AS select `category`.`catId` AS `vCatId`,`category`.`catWording` AS `vCatWording` from `category` */;
/*!50001 SET character_set_client      = @saved_cs_client */;
/*!50001 SET character_set_results     = @saved_cs_results */;
/*!50001 SET collation_connection      = @saved_col_connection */;

--
-- Final view structure for view `vClientInvoice`
--

/*!50001 DROP VIEW IF EXISTS `vClientInvoice`*/;
/*!50001 SET @saved_cs_client          = @@character_set_client */;
/*!50001 SET @saved_cs_results         = @@character_set_results */;
/*!50001 SET @saved_col_connection     = @@collation_connection */;
/*!50001 SET character_set_client      = utf8 */;
/*!50001 SET character_set_results     = utf8 */;
/*!50001 SET collation_connection      = utf8_general_ci */;
/*!50001 CREATE ALGORITHM=UNDEFINED */
/*!50013 DEFINER=`jeremy`@`localhost` SQL SECURITY DEFINER */
/*!50001 VIEW `vClientInvoice` AS select `billClient`.`bcId` AS `vBcId`,`billClient`.`bcBillingDate` AS `vBcBillingDate`,`billClient`.`bcPaymentDate` AS `vBcPaymentDate`,`billClient`.`bcTotalAmount` AS `vBcTotalAmount`,`billClient`.`bcReason` AS `vBcReason`,`billClient`.`bcBillPaid` AS `vBcBillPaid`,`client`.`cliVATNumber` AS `vVatNumber`,`client`.`cliFirstName` AS `vCliFirstName`,`client`.`cliFamilyName` AS `vCliFamilyName`,`client`.`cliCompanyName` AS `vCliCompanyName` from (`client` join `billClient` on((`billClient`.`cliId` = `client`.`cliId`))) */;
/*!50001 SET character_set_client      = @saved_cs_client */;
/*!50001 SET character_set_results     = @saved_cs_results */;
/*!50001 SET collation_connection      = @saved_col_connection */;

--
-- Final view structure for view `vCompanyClient`
--

/*!50001 DROP VIEW IF EXISTS `vCompanyClient`*/;
/*!50001 SET @saved_cs_client          = @@character_set_client */;
/*!50001 SET @saved_cs_results         = @@character_set_results */;
/*!50001 SET @saved_col_connection     = @@collation_connection */;
/*!50001 SET character_set_client      = utf8 */;
/*!50001 SET character_set_results     = utf8 */;
/*!50001 SET collation_connection      = utf8_general_ci */;
/*!50001 CREATE ALGORITHM=UNDEFINED */
/*!50013 DEFINER=`jeremy`@`localhost` SQL SECURITY DEFINER */
/*!50001 VIEW `vCompanyClient` AS select `client`.`cliId` AS `vCliId`,`client`.`cliCompanyName` AS `vCliCompanyName`,`client`.`cliVATNumber` AS `vCliVatNumber`,`client`.`cliEmail` AS `vCliEmail`,`client`.`cliPhone` AS `vCliPhone`,`client`.`cliMobilPhone` AS `vCliMobilPhone`,`client`.`cliStreet` AS `vCliStreet`,`client`.`cliCity` AS `vCliCity`,`client`.`cliPostCode` AS `vCliPostCode`,`country`.`couWording` AS `vCliCountry`,`client`.`cliDOYNumber` AS `vCliDoyNumber`,`contactLanguage`.`clWording` AS `vClWording` from ((`client` join `country` on((`client`.`couId` = `country`.`couId`))) join `contactLanguage` on((`contactLanguage`.`clId` = `client`.`clId`))) where (`client`.`cliCompanyClient` = 1) */;
/*!50001 SET character_set_client      = @saved_cs_client */;
/*!50001 SET character_set_results     = @saved_cs_results */;
/*!50001 SET collation_connection      = @saved_col_connection */;

--
-- Final view structure for view `vEmployeeInvoice`
--

/*!50001 DROP VIEW IF EXISTS `vEmployeeInvoice`*/;
/*!50001 SET @saved_cs_client          = @@character_set_client */;
/*!50001 SET @saved_cs_results         = @@character_set_results */;
/*!50001 SET @saved_col_connection     = @@collation_connection */;
/*!50001 SET character_set_client      = utf8 */;
/*!50001 SET character_set_results     = utf8 */;
/*!50001 SET collation_connection      = utf8_general_ci */;
/*!50001 CREATE ALGORITHM=UNDEFINED */
/*!50013 DEFINER=`jeremy`@`localhost` SQL SECURITY DEFINER */
/*!50001 VIEW `vEmployeeInvoice` AS select `billPersonnel`.`bpId` AS `vBpId`,`billPersonnel`.`bpBillingDate` AS `vBpBillingDate`,`billPersonnel`.`bpPaymentDate` AS `vBpPaymentDate`,`billPersonnel`.`bpTotalAmount` AS `vBpTotalAmount`,`billPersonnel`.`bpReason` AS `vBpReason`,`billPersonnel`.`bpBillPaid` AS `vBpBillPaid`,`personnel`.`perVATNumber` AS `vPerVatNumber`,`personnel`.`perFirstName` AS `vPerFirstName`,`personnel`.`perFamilyName` AS `vPerFamilyName` from (`personnel` join `billPersonnel` on((`billPersonnel`.`perId` = `personnel`.`perId`))) */;
/*!50001 SET character_set_client      = @saved_cs_client */;
/*!50001 SET character_set_results     = @saved_cs_results */;
/*!50001 SET collation_connection      = @saved_col_connection */;

--
-- Final view structure for view `vFillCountry`
--

/*!50001 DROP VIEW IF EXISTS `vFillCountry`*/;
/*!50001 SET @saved_cs_client          = @@character_set_client */;
/*!50001 SET @saved_cs_results         = @@character_set_results */;
/*!50001 SET @saved_col_connection     = @@collation_connection */;
/*!50001 SET character_set_client      = utf8 */;
/*!50001 SET character_set_results     = utf8 */;
/*!50001 SET collation_connection      = utf8_general_ci */;
/*!50001 CREATE ALGORITHM=UNDEFINED */
/*!50013 DEFINER=`jeremy`@`localhost` SQL SECURITY DEFINER */
/*!50001 VIEW `vFillCountry` AS select `country`.`couId` AS `vCouId`,`country`.`couWording` AS `vCouWording`,`country`.`couAlpha2` AS `vCouAlpha2` from `country` */;
/*!50001 SET character_set_client      = @saved_cs_client */;
/*!50001 SET character_set_results     = @saved_cs_results */;
/*!50001 SET collation_connection      = @saved_col_connection */;

--
-- Final view structure for view `vFillLanguage`
--

/*!50001 DROP VIEW IF EXISTS `vFillLanguage`*/;
/*!50001 SET @saved_cs_client          = @@character_set_client */;
/*!50001 SET @saved_cs_results         = @@character_set_results */;
/*!50001 SET @saved_col_connection     = @@collation_connection */;
/*!50001 SET character_set_client      = utf8 */;
/*!50001 SET character_set_results     = utf8 */;
/*!50001 SET collation_connection      = utf8_general_ci */;
/*!50001 CREATE ALGORITHM=UNDEFINED */
/*!50013 DEFINER=`jeremy`@`localhost` SQL SECURITY DEFINER */
/*!50001 VIEW `vFillLanguage` AS select `contactLanguage`.`clId` AS `vClId`,`contactLanguage`.`clWording` AS `vClWording`,`contactLanguage`.`clAlpha2` AS `vClAlpha2` from `contactLanguage` */;
/*!50001 SET character_set_client      = @saved_cs_client */;
/*!50001 SET character_set_results     = @saved_cs_results */;
/*!50001 SET collation_connection      = @saved_col_connection */;

--
-- Final view structure for view `vFillProduct`
--

/*!50001 DROP VIEW IF EXISTS `vFillProduct`*/;
/*!50001 SET @saved_cs_client          = @@character_set_client */;
/*!50001 SET @saved_cs_results         = @@character_set_results */;
/*!50001 SET @saved_col_connection     = @@collation_connection */;
/*!50001 SET character_set_client      = utf8 */;
/*!50001 SET character_set_results     = utf8 */;
/*!50001 SET collation_connection      = utf8_general_ci */;
/*!50001 CREATE ALGORITHM=UNDEFINED */
/*!50013 DEFINER=`jeremy`@`localhost` SQL SECURITY DEFINER */
/*!50001 VIEW `vFillProduct` AS select `products`.`prodId` AS `vProdId`,`products`.`prodWording` AS `vProdWording`,`products`.`catId` AS `vCatId`,`products`.`sCatId` AS `vSCatId` from `products` */;
/*!50001 SET character_set_client      = @saved_cs_client */;
/*!50001 SET character_set_results     = @saved_cs_results */;
/*!50001 SET collation_connection      = @saved_col_connection */;

--
-- Final view structure for view `vFillSCategory`
--

/*!50001 DROP VIEW IF EXISTS `vFillSCategory`*/;
/*!50001 SET @saved_cs_client          = @@character_set_client */;
/*!50001 SET @saved_cs_results         = @@character_set_results */;
/*!50001 SET @saved_col_connection     = @@collation_connection */;
/*!50001 SET character_set_client      = utf8 */;
/*!50001 SET character_set_results     = utf8 */;
/*!50001 SET collation_connection      = utf8_general_ci */;
/*!50001 CREATE ALGORITHM=UNDEFINED */
/*!50013 DEFINER=`jeremy`@`localhost` SQL SECURITY DEFINER */
/*!50001 VIEW `vFillSCategory` AS select `subCategory`.`sCatId` AS `vSCatId`,`subCategory`.`sCatWording` AS `vSCatWording`,`subCategory`.`catId` AS `vCatId` from `subCategory` */;
/*!50001 SET character_set_client      = @saved_cs_client */;
/*!50001 SET character_set_results     = @saved_cs_results */;
/*!50001 SET collation_connection      = @saved_col_connection */;

--
-- Final view structure for view `vFillTOQ`
--

/*!50001 DROP VIEW IF EXISTS `vFillTOQ`*/;
/*!50001 SET @saved_cs_client          = @@character_set_client */;
/*!50001 SET @saved_cs_results         = @@character_set_results */;
/*!50001 SET @saved_col_connection     = @@collation_connection */;
/*!50001 SET character_set_client      = utf8 */;
/*!50001 SET character_set_results     = utf8 */;
/*!50001 SET collation_connection      = utf8_general_ci */;
/*!50001 CREATE ALGORITHM=UNDEFINED */
/*!50013 DEFINER=`jeremy`@`localhost` SQL SECURITY DEFINER */
/*!50001 VIEW `vFillTOQ` AS select `typeOfQuantity`.`toqId` AS `vToqId`,`typeOfQuantity`.`toqWording` AS `vToqWording` from `typeOfQuantity` */;
/*!50001 SET character_set_client      = @saved_cs_client */;
/*!50001 SET character_set_results     = @saved_cs_results */;
/*!50001 SET collation_connection      = @saved_col_connection */;

--
-- Final view structure for view `vIndividualClient`
--

/*!50001 DROP VIEW IF EXISTS `vIndividualClient`*/;
/*!50001 SET @saved_cs_client          = @@character_set_client */;
/*!50001 SET @saved_cs_results         = @@character_set_results */;
/*!50001 SET @saved_col_connection     = @@collation_connection */;
/*!50001 SET character_set_client      = utf8 */;
/*!50001 SET character_set_results     = utf8 */;
/*!50001 SET collation_connection      = utf8_general_ci */;
/*!50001 CREATE ALGORITHM=UNDEFINED */
/*!50013 DEFINER=`jeremy`@`localhost` SQL SECURITY DEFINER */
/*!50001 VIEW `vIndividualClient` AS select `client`.`cliId` AS `vCliId`,`client`.`cliFamilyName` AS `vCliFamilyName`,`client`.`cliFirstName` AS `vCliFirstName`,`client`.`cliVATNumber` AS `vCliVatNumber`,`client`.`cliEmail` AS `vCliEmail`,`client`.`cliPhone` AS `vCliPhone`,`client`.`cliMobilPhone` AS `vCliMobilPhone`,`client`.`cliStreet` AS `vCliStreet`,`client`.`cliCity` AS `vCliCity`,`client`.`cliPostCode` AS `vCliPostCode`,`country`.`couWording` AS `vCliCountry`,`client`.`cliDOYNumber` AS `vCliDoyNumber`,`contactLanguage`.`clWording` AS `vClWording` from ((`client` join `country` on((`client`.`couId` = `country`.`couId`))) join `contactLanguage` on((`contactLanguage`.`clId` = `client`.`clId`))) where (`client`.`cliCompanyClient` = 0) */;
/*!50001 SET character_set_client      = @saved_cs_client */;
/*!50001 SET character_set_results     = @saved_cs_results */;
/*!50001 SET collation_connection      = @saved_col_connection */;

--
-- Final view structure for view `vInvoicePerProductClient`
--

/*!50001 DROP VIEW IF EXISTS `vInvoicePerProductClient`*/;
/*!50001 SET @saved_cs_client          = @@character_set_client */;
/*!50001 SET @saved_cs_results         = @@character_set_results */;
/*!50001 SET @saved_col_connection     = @@collation_connection */;
/*!50001 SET character_set_client      = utf8 */;
/*!50001 SET character_set_results     = utf8 */;
/*!50001 SET collation_connection      = utf8_general_ci */;
/*!50001 CREATE ALGORITHM=UNDEFINED */
/*!50013 DEFINER=`jeremy`@`localhost` SQL SECURITY DEFINER */
/*!50001 VIEW `vInvoicePerProductClient` AS select `billClient`.`bcBillingDate` AS `vBcBillingDate`,`billClient`.`bcPaymentDate` AS `vBcPaymentDate`,`billClient`.`bcTotalAmount` AS `vBcTotalAmount`,`billClient`.`bcReason` AS `vBcReason`,`billClient`.`bcBillPaid` AS `vBcBillPaid`,`client`.`cliFirstName` AS `vCliFirstName`,`client`.`cliFamilyName` AS `vCliFamilyName`,`client`.`cliCompanyName` AS `vCliCompanyName`,`clientProducts`.`prodId` AS `vProdId` from ((`billClient` join `clientProducts` on((`clientProducts`.`bcId` = `billClient`.`bcId`))) join `client` on((`client`.`cliId` = `billClient`.`cliId`))) */;
/*!50001 SET character_set_client      = @saved_cs_client */;
/*!50001 SET character_set_results     = @saved_cs_results */;
/*!50001 SET collation_connection      = @saved_col_connection */;

--
-- Final view structure for view `vInvoicePerProductPersonnel`
--

/*!50001 DROP VIEW IF EXISTS `vInvoicePerProductPersonnel`*/;
/*!50001 SET @saved_cs_client          = @@character_set_client */;
/*!50001 SET @saved_cs_results         = @@character_set_results */;
/*!50001 SET @saved_col_connection     = @@collation_connection */;
/*!50001 SET character_set_client      = utf8 */;
/*!50001 SET character_set_results     = utf8 */;
/*!50001 SET collation_connection      = utf8_general_ci */;
/*!50001 CREATE ALGORITHM=UNDEFINED */
/*!50013 DEFINER=`jeremy`@`localhost` SQL SECURITY DEFINER */
/*!50001 VIEW `vInvoicePerProductPersonnel` AS select `billPersonnel`.`bpBillingDate` AS `vBpBillingDate`,`billPersonnel`.`bpPaymentDate` AS `vBpPaymentDate`,`billPersonnel`.`bpTotalAmount` AS `vBpTotalAmount`,`billPersonnel`.`bpReason` AS `vBpReason`,`billPersonnel`.`bpBillPaid` AS `vBpBillPaid`,`personnel`.`perFamilyName` AS `vPersFamilyName`,`personnel`.`perFirstName` AS `vPersFirstName`,`persoProducts`.`prodId` AS `vProdId` from ((`billPersonnel` join `persoProducts` on((`persoProducts`.`bpId` = `billPersonnel`.`bpId`))) join `personnel` on((`personnel`.`perId` = `billPersonnel`.`perId`))) */;
/*!50001 SET character_set_client      = @saved_cs_client */;
/*!50001 SET character_set_results     = @saved_cs_results */;
/*!50001 SET collation_connection      = @saved_col_connection */;

--
-- Final view structure for view `vInvoicePerProductSupplier`
--

/*!50001 DROP VIEW IF EXISTS `vInvoicePerProductSupplier`*/;
/*!50001 SET @saved_cs_client          = @@character_set_client */;
/*!50001 SET @saved_cs_results         = @@character_set_results */;
/*!50001 SET @saved_col_connection     = @@collation_connection */;
/*!50001 SET character_set_client      = utf8 */;
/*!50001 SET character_set_results     = utf8 */;
/*!50001 SET collation_connection      = utf8_general_ci */;
/*!50001 CREATE ALGORITHM=UNDEFINED */
/*!50013 DEFINER=`jeremy`@`localhost` SQL SECURITY DEFINER */
/*!50001 VIEW `vInvoicePerProductSupplier` AS select `billSupplier`.`bsBillingDate` AS `vBsBillingDate`,`billSupplier`.`bsPaymentDate` AS `vBsPaymentDate`,`billSupplier`.`bsTotalAmount` AS `vBsTotalAmount`,`billSupplier`.`bsReason` AS `vBsReason`,`billSupplier`.`bsBillPaid` AS `vBsBillPaid`,`supplier`.`supCompanyName` AS `vSupCompanyName`,`supplierProducts`.`prodId` AS `vProdId` from ((`billSupplier` join `supplierProducts` on((`supplierProducts`.`bsId` = `billSupplier`.`bsId`))) join `supplier` on((`supplier`.`supId` = `billSupplier`.`supId`))) */;
/*!50001 SET character_set_client      = @saved_cs_client */;
/*!50001 SET character_set_results     = @saved_cs_results */;
/*!50001 SET collation_connection      = @saved_col_connection */;

--
-- Final view structure for view `vPersonnel`
--

/*!50001 DROP VIEW IF EXISTS `vPersonnel`*/;
/*!50001 SET @saved_cs_client          = @@character_set_client */;
/*!50001 SET @saved_cs_results         = @@character_set_results */;
/*!50001 SET @saved_col_connection     = @@collation_connection */;
/*!50001 SET character_set_client      = utf8 */;
/*!50001 SET character_set_results     = utf8 */;
/*!50001 SET collation_connection      = utf8_general_ci */;
/*!50001 CREATE ALGORITHM=UNDEFINED */
/*!50013 DEFINER=`jeremy`@`localhost` SQL SECURITY DEFINER */
/*!50001 VIEW `vPersonnel` AS select `personnel`.`perId` AS `vPerId`,`personnel`.`perFamilyName` AS `vPerFamilyName`,`personnel`.`perFirstName` AS `vPerFirstName`,`personnel`.`perVATNumber` AS `vPerVATNumber`,`personnel`.`perStreet` AS `vPerStreet`,`personnel`.`perCity` AS `vPerCity`,`country`.`couWording` AS `vCouWording`,`personnel`.`perPostCode` AS `vPerPostCode`,`personnel`.`perEmail` AS `vPerEmail`,`personnel`.`perDOYNumber` AS `vPerDOYNumber`,`personnel`.`perPhoneMobile` AS `vPerPhoneMobile`,`contactLanguage`.`clWording` AS `vClWording` from ((`personnel` join `country` on((`country`.`couId` = `personnel`.`couId`))) join `contactLanguage` on((`contactLanguage`.`clId` = `personnel`.`clId`))) */;
/*!50001 SET character_set_client      = @saved_cs_client */;
/*!50001 SET character_set_results     = @saved_cs_results */;
/*!50001 SET collation_connection      = @saved_col_connection */;

--
-- Final view structure for view `vProductInvoiceClient`
--

/*!50001 DROP VIEW IF EXISTS `vProductInvoiceClient`*/;
/*!50001 SET @saved_cs_client          = @@character_set_client */;
/*!50001 SET @saved_cs_results         = @@character_set_results */;
/*!50001 SET @saved_col_connection     = @@collation_connection */;
/*!50001 SET character_set_client      = utf8 */;
/*!50001 SET character_set_results     = utf8 */;
/*!50001 SET collation_connection      = utf8_general_ci */;
/*!50001 CREATE ALGORITHM=UNDEFINED */
/*!50013 DEFINER=`jeremy`@`localhost` SQL SECURITY DEFINER */
/*!50001 VIEW `vProductInvoiceClient` AS select `clientProducts`.`bcId` AS `vBcId`,`products`.`prodWording` AS `vProdWording`,`clientProducts`.`cpPriceWithVAT` AS `vCpPriceWithVAT`,`vat`.`vatPercent` AS `vVatPercent`,`clientProducts`.`cpPriceWithoutVAT` AS `vCpPriceWithoutVAT`,`clientProducts`.`cpQuantity` AS `vCpQuantity`,`typeOfQuantity`.`toqWording` AS `vToqWording` from (((`clientProducts` join `products` on((`products`.`prodId` = `clientProducts`.`prodId`))) join `typeOfQuantity` on((`typeOfQuantity`.`toqId` = `products`.`toqId`))) join `vat` on((`vat`.`vatId` = `clientProducts`.`vatId`))) */;
/*!50001 SET character_set_client      = @saved_cs_client */;
/*!50001 SET character_set_results     = @saved_cs_results */;
/*!50001 SET collation_connection      = @saved_col_connection */;

--
-- Final view structure for view `vProductInvoiceEmployee`
--

/*!50001 DROP VIEW IF EXISTS `vProductInvoiceEmployee`*/;
/*!50001 SET @saved_cs_client          = @@character_set_client */;
/*!50001 SET @saved_cs_results         = @@character_set_results */;
/*!50001 SET @saved_col_connection     = @@collation_connection */;
/*!50001 SET character_set_client      = utf8 */;
/*!50001 SET character_set_results     = utf8 */;
/*!50001 SET collation_connection      = utf8_general_ci */;
/*!50001 CREATE ALGORITHM=UNDEFINED */
/*!50013 DEFINER=`jeremy`@`localhost` SQL SECURITY DEFINER */
/*!50001 VIEW `vProductInvoiceEmployee` AS select `persoProducts`.`bpId` AS `vBpId`,`products`.`prodWording` AS `vProdWording`,`persoProducts`.`ppPriceWithVAT` AS `vPpPriceWithVAT`,`vat`.`vatPercent` AS `vVatPercent`,`persoProducts`.`ppPriceWithoutVAT` AS `vPpPriceWithoutVAT`,`persoProducts`.`ppQuantity` AS `vPpQuantity`,`typeOfQuantity`.`toqWording` AS `vToqWording` from (((`persoProducts` join `products` on((`products`.`prodId` = `persoProducts`.`prodId`))) join `typeOfQuantity` on((`typeOfQuantity`.`toqId` = `products`.`toqId`))) join `vat` on((`vat`.`vatId` = `persoProducts`.`vatId`))) */;
/*!50001 SET character_set_client      = @saved_cs_client */;
/*!50001 SET character_set_results     = @saved_cs_results */;
/*!50001 SET collation_connection      = @saved_col_connection */;

--
-- Final view structure for view `vProductInvoiceSupplier`
--

/*!50001 DROP VIEW IF EXISTS `vProductInvoiceSupplier`*/;
/*!50001 SET @saved_cs_client          = @@character_set_client */;
/*!50001 SET @saved_cs_results         = @@character_set_results */;
/*!50001 SET @saved_col_connection     = @@collation_connection */;
/*!50001 SET character_set_client      = utf8 */;
/*!50001 SET character_set_results     = utf8 */;
/*!50001 SET collation_connection      = utf8_general_ci */;
/*!50001 CREATE ALGORITHM=UNDEFINED */
/*!50013 DEFINER=`jeremy`@`localhost` SQL SECURITY DEFINER */
/*!50001 VIEW `vProductInvoiceSupplier` AS select `supplierProducts`.`bsId` AS `vBsId`,`products`.`prodWording` AS `vProdWording`,`supplierProducts`.`spPriceWithVAT` AS `vSpPriceWithVAT`,`vat`.`vatPercent` AS `vVatPercent`,`supplierProducts`.`spPriceWithoutVAT` AS `vSpPriceWithoutVAT`,`supplierProducts`.`spQuantity` AS `vSpQuantity`,`typeOfQuantity`.`toqWording` AS `vToqWording` from (((`supplierProducts` join `products` on((`products`.`prodId` = `supplierProducts`.`prodId`))) join `typeOfQuantity` on((`typeOfQuantity`.`toqId` = `products`.`toqId`))) join `vat` on((`vat`.`vatId` = `supplierProducts`.`vatId`))) */;
/*!50001 SET character_set_client      = @saved_cs_client */;
/*!50001 SET character_set_results     = @saved_cs_results */;
/*!50001 SET collation_connection      = @saved_col_connection */;

--
-- Final view structure for view `vSupplier`
--

/*!50001 DROP VIEW IF EXISTS `vSupplier`*/;
/*!50001 SET @saved_cs_client          = @@character_set_client */;
/*!50001 SET @saved_cs_results         = @@character_set_results */;
/*!50001 SET @saved_col_connection     = @@collation_connection */;
/*!50001 SET character_set_client      = utf8 */;
/*!50001 SET character_set_results     = utf8 */;
/*!50001 SET collation_connection      = utf8_general_ci */;
/*!50001 CREATE ALGORITHM=UNDEFINED */
/*!50013 DEFINER=`jeremy`@`localhost` SQL SECURITY DEFINER */
/*!50001 VIEW `vSupplier` AS select `supplier`.`supId` AS `vSupId`,`supplier`.`supCompanyName` AS `vSupCompanyName`,`supplier`.`supVATNumber` AS `vSupVatNumber`,`supplier`.`supEmail` AS `vSupEmail`,`supplier`.`suPhone` AS `vSupPhone`,`supplier`.`supMobilPhone` AS `vSupMobilPhone`,`supplier`.`supStreet` AS `vSupStreet`,`supplier`.`supCity` AS `vSupCity`,`supplier`.`supPostCode` AS `vSupPostCode`,`country`.`couWording` AS `vSupCountry`,`supplier`.`supDOYNumber` AS `vSupDoyNumber`,`contactLanguage`.`clWording` AS `vSupContactLanguage` from ((`supplier` join `country` on((`country`.`couId` = `supplier`.`couId`))) join `contactLanguage` on((`contactLanguage`.`clId` = `supplier`.`clId`))) */;
/*!50001 SET character_set_client      = @saved_cs_client */;
/*!50001 SET character_set_results     = @saved_cs_results */;
/*!50001 SET collation_connection      = @saved_col_connection */;

--
-- Final view structure for view `vSupplierInvoice`
--

/*!50001 DROP VIEW IF EXISTS `vSupplierInvoice`*/;
/*!50001 SET @saved_cs_client          = @@character_set_client */;
/*!50001 SET @saved_cs_results         = @@character_set_results */;
/*!50001 SET @saved_col_connection     = @@collation_connection */;
/*!50001 SET character_set_client      = utf8 */;
/*!50001 SET character_set_results     = utf8 */;
/*!50001 SET collation_connection      = utf8_general_ci */;
/*!50001 CREATE ALGORITHM=UNDEFINED */
/*!50013 DEFINER=`jeremy`@`localhost` SQL SECURITY DEFINER */
/*!50001 VIEW `vSupplierInvoice` AS select `billSupplier`.`bsId` AS `vBsId`,`billSupplier`.`bsBillingDate` AS `vBsBillingDate`,`billSupplier`.`bsPaymentDate` AS `vBsPaymentDate`,`billSupplier`.`bsTotalAmount` AS `vBsTotalAmount`,`billSupplier`.`bsReason` AS `vBsReason`,`billSupplier`.`bsBillPaid` AS `vBsBillPaid`,`supplier`.`supVATNumber` AS `vVatNumber`,`supplier`.`supCompanyName` AS `vSupCompanyName` from (`billSupplier` join `supplier` on((`supplier`.`supId` = `billSupplier`.`supId`))) */;
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

-- Dump completed on 2020-02-12 17:00:08
