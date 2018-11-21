/*
* UUDate.cpp
*
* Version information
* Author: Liam McCormick
* Date: 19/10/2018
* Description: This file is the implementation file for the UUDate class and defines (implements) the functions of the class
*
* Copyright notice -
*/

#include <iostream>
#include <string>

#include <vector>
#include <sstream>
#include <array>
#include <regex>

#include "UUDate.h"

const int monthDayNo[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
const int monthDayNoLeap[13] = { 0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

UUDate::UUDate() {
	//Initialise the date to 01/01/2000
	day_ = 01, month_ = 01, year_ = 2000;
	//std::cout << "UUDate() ..." << day_ << "/" << month_ << "/" << year_ << std::endl;
}

UUDate::UUDate(int day, int month, int year) {
	//if ((day < 01 || day > 31) || (month < 01 || month > 12) || ((year / 1000) > 0 && (year / 10000) == 0)) {
	//	//std::cout << "Invalid date! UUDate int day, month, year" << std::endl;			
	//}
	//else {
	//	DateCheck(day, month, year);
	//}
	DateCheck(day, month, year);
	GetDate();
}

UUDate::UUDate(std::string date) {
	//date = day_ + "/" + month_ + "/" + year_;

	//std::regex dateFormat("[0-9]{2}/[0-9]{2}/[0-9]{4}");		//checks date is in format xx/xx/xxxx
	////00
	//
	//if (std::regex_match(date, dateFormat) == false)
	//{
	//	return;
	//}

	//std::size_t pos = date.find('/');		//find "/" in the date string
	//std::size_t pos2 = date.find('/', pos);

	//int day = stoi(date.substr(0, pos));								//day = xx/
	//int month = stoi(date.substr(pos + 1, pos + pos2));				//month = /xx/
	//int year = stoi(date.substr(pos + 1 + pos2 + 1, date.length()));	//year = /xxxx

	std::string stop[3];					//stores 3 elements in array (day, month, year)
	std::stringstream dateStream(date);		//goes through string
	std::string save;						//saved character from string
	int element = 0;							//counter

	while (std::getline(dateStream, save, '/')) {		//scans stream, finds / and stores prev in save
		stop[element] = save;
		element++;
	}
	int day = std::stoi(stop[0]);			//converts substr to int for day
	int month = std::stoi(stop[1]);
	int year = std::stoi(stop[2]);

	DateCheck(day, month, year);
}

void UUDate::IncrementDate() {
	int last = monthDayNo[month_];

	if (month_ == 2 && year_ % 4 == 0)
	{
		last = 29;
	}

	if (day_ + 1 > last) {		//asks if its the month's last day
		day_ = 01;				//if true, moves to next month and sets day to 01

		if (month_ + 1 == 13) {		//should ask if its the final month day and december
			month_ = 01;										//month set to 01 Jan
			year_ = year_ + 1;											//year incremented
		}
		else {
			month_ = month_ + 1;
		}
	}
	//check if leap year
	else {
		day_ = day_ + 1;
	}
}

int UUDate::Between(UUDate date) {
	//so compare year, month, day
	//assume second date is bigger than first

	bool betweenBool = false;
	int noOfDays = 0;
	int a = 1;
	while (a != 0)
	{
		if (date.year_ > year_) {		//check if date year > default
			betweenBool = true;
			a = 0;
			break;
		}
		/*else if (date.year_ == year_) {
			betweenBool = true;
		}*/
		else if (date.year_ < year_) {
			betweenBool = false;
			a = 0;
			break;
		}
		if (date.month_ > month_) {
			betweenBool = true;
			a = 0;
			break;
		}
		/*else if (date.month_ == month_) {
			betweenBool = true;
		}*/
		else if (date.month_ < month_) {
			betweenBool = false;
			a = 0;
			break;
		}
		if (date.day_ > day_) {
			betweenBool = true;
			a = 0;
			break;
		}
		if (day_ > date.day_)
		{
			betweenBool = true;
			a = 0;
			break;
		}
		else {
			a = 0;
			break;
		}
		/*else if (date.day_ == day_) {
			betweenBool = true;
		}*/
	}
	if (betweenBool == false) {
		while (date.GetDay() != day_ || date.GetMonth() != month_ || date.GetMonth() != year_) {
			//day or month or year must not match
			date.IncrementDate();
			noOfDays++;
		}
	}
	if (betweenBool == true) {
		while (day_ != date.GetDay() || month_ != date.GetMonth() || year_ != date.GetMonth()) {
			IncrementDate();
			noOfDays++;
		}
	}

	//vector<int> firstDate = splitBy(date1, '/');
	//vector<int> secondDate = splitBy (date2, '/');

	return noOfDays;
}

int UUDate::GetDay() const {
	return day_;
}

void UUDate::SetDay(int day) {
	int temp = monthDayNo[month_];

	if (day < temp && day > 0) {
		day_ = day;
	}
}

int UUDate::GetMonth() const {
	return month_;
}

void UUDate::SetMonth(int month) {
	if (month >= 01 && month <= 12) {
		month_ = month;
	}
}

int UUDate::GetYear() const {
	return year_;
}

void UUDate::SetYear(int year) {
	//if (year_ >=0001 || year_ <= 9999){

	if (year > 0) {				//year must not be 0
		year_ = year;
	}

	if ((year / 1000) > 0 && (year / 10000) == 0) {			//checks if its a 4 digit number
		year_ = year;
	}
}

std::string UUDate::GetDate() {
	//std::string date = day_ + "/" + month_ + "/" + year_;		//check!!!!!!

	//getDay();
	//getMonth();
	//getYear();

	//std::string date = std::to_string(dateInt);		//date to int

	//int a1[6];												//check 6
	//for (int i = 5; i >= 0; i--) {							//converts dateInt to an array
	//	a1[i] = dateInt % 10;
	//	dateInt /= 10;
	//}

	std::string dayString = std::to_string(GetDay());
	std::string monthString = std::to_string(GetMonth());
	std::string yearString = std::to_string(GetYear());

	date_ = dayString + "/" + monthString + "/" + yearString;
	return date_;

}

void  UUDate::DateCheck(int day, int month, int year) {

	//month_ = month;
	if (month >= 01 && month <= 12) {
		month_ = month;
	}
	else {
		month_ = 01;
	}

	int last = monthDayNo[month_];
	if (month_ == 2)
	{
		last = 29;
	}
	if ((day < 01) || (day > last)) {					//checks if day less than 1, day greater than month's last day
		day_ = 01;													//set day to 01
	}
	else {
		day_ = day;
	}

	if (year > 0)
	{											//year must not be 0
		year_ = year;
	}
	else {
		year_ = 2000;
	}

}





//ADDED BELOW !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

//bool UUDate::isEqual(date2) const {
//	return day == date2.day && month == date2.month && year == date2.year;
//}
//
//bool UUDate::isLeapYear() const {
//	return (year_ % 4 == 0 && year_ % 100 != 0) || year_ % 400 == 0;
//}
//
//int UUDate::lastDayInMonth() const {
//	if (month_ == 02 && isLeapYear()) {
//		return 29;
//	}
//	else {
//		return monthDayNo[month_];
//	}
//}
//
//bool UUDate::isLastDayInMonth() const {
//	return day_ == lastDayInMonth();
//}