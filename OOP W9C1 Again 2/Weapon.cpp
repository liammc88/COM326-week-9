//Weapon.cpp
//Description: definition for Weapon class
//Author: Liam McCormick
//Date: 20/11/2018

#include <iostream>
#include <string>
#include "Weapon.h"
#include "Item.h"

//constructors and destructors
Weapon::Weapon() {
	std::cout << "Default constructor for Weapon" << std::endl;
}

Weapon::Weapon(std::string weaponName, int itemValue, float itemWeight, int weaponHitStrength, int weaponHealth)
	: Item{ weaponName, itemValue, itemWeight }, weaponHitStrength_{ weaponHitStrength }, weaponHealth_{ weaponHealth } {
	std::cout << "Constructor for Weapon 1" << std::endl;
}

//getters and setters
void Weapon::SetWeaponHitStrength(int weaponHitStrength) {
	weaponHitStrength_ = weaponHitStrength;
}

int Weapon::GetWeaponHitStrength() {
	return weaponHitStrength_;
}

void Weapon::SetWeaponHealth(int weaponHealth) {
	weaponHealth_ = weaponHealth;
}

int Weapon::GetWeaponHealth() {
	return weaponHealth_;
}

std::string Weapon::ToString() {
	std::string weaponNameString = GetItemName();
	std::string weaponValueString = std::to_string(GetItemValue());
	std::string weaponHitStrengthString = std::to_string(GetWeaponHitStrength());
	std::string weaponHealthString = std::to_string(GetWeaponHealth());
	//std::string weight = std::to_string(GetWeight());

	return weaponString_ = "Weapon: " + weaponNameString + "Worth: " + weaponValueString + "Hit strength: "
		+ weaponHitStrengthString + "Weapon health: " + weaponHealthString;
}