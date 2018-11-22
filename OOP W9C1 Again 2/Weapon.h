//Weapon.h
//Description: declaration for Weapon class
//Author: Liam McCormick
//Date: 20/11/2018

#pragma once
#include <iostream>
#include <string>
#include "Item.h"

class Weapon : public Item {
private:
	int weaponHitStrength_;
	int weaponHealth_;
	std::string weaponString_;
	
public:
	Weapon();
	Weapon(std::string weaponName, int value, float itemWeight, int WeaponHitStrength, int weaponHealth);

	void SetWeaponHitStrength(int weaponHitStrength);
	int GetWeaponHitStrength();
	void SetWeaponHealth(int health);
	int GetWeaponHealth();
	std::string ToString();
};