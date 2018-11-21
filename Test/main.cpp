/*
* main.cpp
*
* Version information
* Author: Liam McCormick
* Date: 19/10/2018
* Description: This file is the driver for the project, use it to test your code.
*
* Copyright notice -
*/

#pragma once 
#include <iostream> 
#include "UUDate.h"

using namespace std;

int main() {

	//dateOne.Between(dateTwo);

	//Remember to test your code thoroughly before running it against the tests in github
	//UUDate date("40/22/0");

	UUDate date("07/02/2005");
	cout << date.GetDate() << endl;
	//UUDate date3("06/10/2007");

	//Test GetDay on using default constructor	2
	//cout << date.GetDay() << endl;

	//Test GetMonth on using default constructor	2
	//cout << date.GetMonth() << endl;

	//Test default constructor	2
	//UUDate();																//!!!!!!!!!!

	//Test Getyear on using default constructor	2
	//cout << date.GetYear() << endl;																//!!!!!!!

	//Test create date constructor with valid arguments	4
	//UUDate(05/02/2018);																//!!!!!!!!!!!!!!!!!!!

	//Test create date constructor with invalid day argument	4
	//UUDate(35/02/2018);															//!!!!!!!!!!!!!!

	//Test create date constructor with invalid month argument	4
	//UUDate(30/22/2018);															//!!!!!!!!!!!!!!!!!

	//Test create date constructor with year 0 fails	2
	//UUDate(20/02/0);																//!!!!!!!!!!!!!!!!!!!!!


	//Test setDay with bad day argument	2
	date.SetDay(0);

	//Test setDay with argument 29 on non leap year	3
	date.SetDay(2);

	//Test setYear with bad year argument	3
	date.SetYear(0);

	//Test setMonth with bad argument	3
	date.SetMonth(13);

	//Test constructor with string1	5
	UUDate("02/02/2018");													//!!!!!!!!!!!!!!!!!!!!

	//Test constructor with string	5
	UUDate("06/02/2018");																		//!!!!!!!!!!!!!!!

	//Test incrementDate - increments the day	4
	date.IncrementDate();													//!!!!!!!!!!!!!!!!!!!!!!!!!

	//Test incrementDate - increments the month	5
	//date2.IncrementDate();													//!!!!!!!!!!!!!!!!!!!
	//cout << date2.GetDate() << endl;


	//Test incrementDate - increments the year	6
	//date.IncrementDate();													//!!!!!!!!!

	//Test incrementDate works for leap years 29 / 02	6
	//date.IncrementDate();													//!!!!!!!!!!!!!!

	//Test increment date functions correctly 29 / 03 moves to 01 / 04	6
	//date.IncrementDate();													//!!!!!!!!!!!!!!!!!!!!!

	//Check BetweenDates	8
	//date.Between("02/01/2000");											//!!!!!!!!!

	//Check Between2 - different days and months	8



	//Check Between3 - different years	8



	//GetDate returns correct string	6
	//date.GetDate();												//not calling!!!!!!!!!!!!!!!!!


	//dateTest.Between(dateTwo);

	return 0;
}