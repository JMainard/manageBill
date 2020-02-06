CREATE TABLE `contactLanguage`(`clId` INTEGER,`clWording` VARCHAR(65),`clAlpha2` VARCHAR(2),primary key(`clId`));

CREATE TABLE `country`(`couId` INTEGER,`couWording` VARCHAR(80),`couAlpha2` VARCHAR(2),`couAlpha3` VARCHAR(3),primary key(`couId`));

CREATE TABLE `category`(`catId` INTEGER,`catWording` VARCHAR(25),primary key(`catId`));

CREATE TABLE `subCategory`(`sCatId` INTEGER,`sCatWording` VARCHAR(30),`catId` INTEGER NOT NULL, foreign key (`catId`) references category(`catId`),primary key(`sCatId`));

CREATE TABLE `vat`(`vatId` INTEGER,`vatPercent` FLOAT,primary key(`vatId`));

CREATE TABLE `typeOfQuantity`(`toqId` INTEGER,`toqWording` VARCHAR(25),primary key(`toqId`));

CREATE TABLE `client`(`cliId` INTEGER,`cliPhone` VARCHAR(14),`cliMobilPhone` VARCHAR(14),`cliStreet` VARCHAR(60),`cliCity` VARCHAR(60),`cliPostCode` VARCHAR(10),`cliEmail` VARCHAR(60),`cliCompanyName` VARCHAR(40),`cliFirstName` VARCHAR(50),`cliFamilyName` VARCHAR(50),`cliCompanyClient` BOOL,`cliVATNumber` VARCHAR(30),`cliDOYNumber` VARCHAR(30),`clId` INTEGER NOT NULL,`couId` INTEGER NOT NULL, foreign key (`clId`) references contactLanguage(`clId`), foreign key (`couId`) references country(`couId`),primary key(`cliId`));

CREATE TABLE `supplier`(`supId` INTEGER,`supCompanyName` VARCHAR(40),`suPhone` VARCHAR(20),`supMobilPhone` VARCHAR(20),`supStreet` VARCHAR(40),`supCity` VARCHAR(40),`supPostCode` VARCHAR(15),`supEmail` VARCHAR(60),`supVATNumber` VARCHAR(20),`supDOYNumber` VARCHAR(20),`clId` INTEGER NOT NULL,`couId` INTEGER NOT NULL, foreign key (`clId`) references contactLanguage(`clId`), foreign key (`couId`) references country(`couId`),primary key(`supId`));

CREATE TABLE `personnel`(`perId` INTEGER,`perFirstName` VARCHAR(40),`perFamilyName` VARCHAR(40),`perPhone` VARCHAR(20),`perPhoneMobile` VARCHAR(20),`perStreet` VARCHAR(40),`perPostCode` VARCHAR(15),`perCity` VARCHAR(40),`perEmail` VARCHAR(60),`perVATNumber` VARCHAR(20),`perDOYNumber` VARCHAR(20),`clId` INTEGER NOT NULL,`couId` INTEGER NOT NULL, foreign key (`clId`) references contactLanguage(`clId`), foreign key (`couId`) references country(`couId`),primary key(`perId`));

CREATE TABLE `billClient`(`bcId` INTEGER,`bcBillingDate` DATE,`bcPaymentDate` DATE,`bcTotalAmount` FLOAT,`bcReason` VARCHAR(255),`bcBillPaid` BOOL,`cliId` INTEGER NOT NULL, foreign key (`cliId`) references client(`cliId`),primary key(`bcId`));

CREATE TABLE `billSupplier`(`bsId` INTEGER,`bsBillingDate` DATE,`bsPaymentDate` DATE,`bsTotalAmount` FLOAT,`bsReason` VARCHAR(255),`bsBillPaid` BOOL,`supId` INTEGER NOT NULL, foreign key (`supId`) references supplier(`supId`),primary key(`bsId`));

CREATE TABLE `billPersonnel`(`bpId` INTEGER,`bpBillingDate` DATE,`bpPaymentDate` DATE,`bpTotalAmount` FLOAT,`bpReason` VARCHAR(255),`bpBilllPaid` BOOL,`perId` INTEGER NOT NULL, foreign key (`perId`) references personnel(`perId`),primary key(`bpId`));

CREATE TABLE `products`(`prodId` INTEGER,`prodWording` VARCHAR(50),`catId` INTEGER ,`sCatId` INTEGER ,`toqId` INTEGER NOT NULL, foreign key (`catId`) references category(`catId`), foreign key (`sCatId`) references subCategory(`sCatId`), foreign key (`toqId`) references typeOfQuantity(`toqId`),primary key(`prodId`));

CREATE TABLE `persoProducts`(`ppPriceWithVAT` FLOAT,`ppQuantity` FLOAT,`ppPriceWithoutVAT` FLOAT,`bpId` INTEGER NOT NULL,`prodId` INTEGER NOT NULL,`vatId` INTEGER NOT NULL, foreign key (`bpId`) references billPersonnel(`bpId`), foreign key (`prodId`) references products(`prodId`), foreign key (`vatId`) references vat(`vatId`),primary key(`bpId`,`prodId`));

CREATE TABLE `clientProducts`(`cpPriceWithVAT` FLOAT,`cpQuantity` FLOAT,`cpPriceWithoutVAT` FLOAT,`bcId` INTEGER NOT NULL,`prodId` INTEGER NOT NULL,`vatId` INTEGER NOT NULL, foreign key (`bcId`) references billClient(`bcId`), foreign key (`prodId`) references products(`prodId`), foreign key (`vatId`) references vat(`vatId`),primary key(`bcId`,`prodId`));

CREATE TABLE `supplierProducts`(`spPriceWithVAT` FLOAT,`spQuantity` FLOAT,`spPriceWithoutVAT` FLOAT,`bsId` INTEGER NOT NULL,`prodId` INTEGER NOT NULL,`vatId` INTEGER NOT NULL, foreign key (`bsId`) references billSupplier(`bsId`), foreign key (`prodId`) references products(`prodId`), foreign key (`vatId`) references vat(`vatId`),primary key(`bsId`,`prodId`));

