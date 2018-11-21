/*
* UUDate.h
*
* Version information
* Author: Liam McCormick
* Date: 19/10/2018
* Description: This file is the header file for the UUDate class and declares the class interface
* NOTE: Do not change the signatures of the functions provided. You may add your own support functions
*
* Copyright notice -
*/

#pragma once

#include <iostream>
#include <string>
//You can include addition non-date/time related headers

class UUDate
{

private:
	//Date data
	int day_;
	int month_;
	int year_;

	std::string date_;
	int dateInt;

public:
	UUDate(); //Default constructor sets date to 1/1/2000

	//Non default constructors - remeber to validate input
	UUDate(int day, int month, int year);
	UUDate(std::string date); //Should accept "2/8/2018" or "02/08/2018

	int Between(UUDate date); //Return # days between object and date
	std::string GetDate(); //Return date as a string in correct format

	//Getters and Setters, remember to validate input to setters
	int GetDay() const;
	void SetDay(int day);
	int GetMonth() const;
	void SetMonth(int month);
	int GetYear() const;
	void SetYear(int year);

	void IncrementDate();//Increment the current date by one day

	const int monthDayNo[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 }; //should this be in the .cpp??????????????????
	void DateCheck(int day, int month, int year);



	/*bool isEqual(const date2) const;
	bool isLeapYear() const;
	int lastDayInMonth() const;
	bool isLastYearinMonth() const;*/

};
