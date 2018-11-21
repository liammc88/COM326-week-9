//Armmour.cpp
//Description: definition for Armour class
//Author: Liam McCormick
//Date: 20/11/2018

#include <iostream>
#include <string>
#include "Armour.h"
#include "Item.h"

//constructors and destructors
Armour::Armour() {
	std::cout << "Default constructor for Armour" << std::endl;
}

Armour::Armour(std::string armourName, int itemValue, float itemWeight, int armourDefence, int armourHealth) /*, ArmourType armourType*/
	: Item{ armourName, itemValue, itemWeight }, armourDefence_{ armourDefence }, armourHealth_{ armourHealth } { /*, ARMOURTYPE*/
	std::cout << "Constructor for Armour 1" << std::endl;
}

//getters and setters
void Armour::SetArmourDefence(int armourDefence) {
	armourDefence_ = armourDefence;
}

int Armour::GetArmourDefence() {
	return armourDefence_;
}

void Armour::SetArmourHealth(int armourHealth) {
	armourHealth_ = armourHealth;
}

int Armour::GetArmourHealth() {
	return armourHealth_;
}

//ADD ARMOUR TYPE GET AND SET

std::string Armour::ToString() {
	std::string armourNameString = GetItemName();
	std::string armourValueString = std::to_string(GetItemValue());
	std::string armourDefenceString = std::to_string(GetArmourDefence());
	std::string armourHealthString = std::to_string(GetArmourHealth());
	//std::string armourTypeString = std::to_string(GetrmourType());

	return armourString_ = "Weapon: " + armourNameString + "Worth: " + armourValueString + "Defence: "
		+ armourDefenceString + "Armour health: " + armourHealthString; //+ "Armour material: " + armourTypeString;
}