//Item.cpp
//Description: definition for Item class
//Author: Liam McCormick
//Date: 20/11/2018

#include <iostream>
#include <string>
#include "Item.h"

//constructors and destructors
Item::Item() {
	std::cout << "Default constructor for Item" << std::endl;
}

Item::Item(std::string itemName, int itemValue, float itemWeight)
	:itemName_{ itemName }, itemValue_{ itemValue }, itemWeight_{ itemWeight } {
	std::cout << "Custom constructor for Item 1" << std::endl;
}

Item::~Item() {
	std::cout << "Default destructor for Item" << std::endl;
}

//getters and setters
void Item::SetItemName(std::string itemName) {
	itemName_ = itemName;
}

std::string Item::GetItemName() {
	return itemName_;
}

void Item::SetItemValue(int itemValue) {
	itemValue_ = itemValue;
}

int Item::GetItemValue() {
	return itemValue_;
}

void Item::SetItemWeight(float itemWeight) {
	itemWeight_ = itemWeight;
}

float Item::GetItemWeight() {
	return itemWeight_;
}

std::string Item::ToString() {
	std::string itemNameString = GetItemName();
	std::string itemValueString = std::to_string(GetItemValue());
	//std::string itemWeightString = std::to_string(GetItemWeight());

	return itemString_ = "Name: " + itemNameString + "Value: " + itemValueString;
}