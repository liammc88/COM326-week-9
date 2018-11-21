//Armour.h
//Description: declaration for Armour class
//Author: Liam McCormick
//Date: 20/11/2018

#pragma once
#include <iostream>
#include <string>
#include "Item.h"

class Armour : public Item {
private:
	int armourDefence_;
	int armourHealth_;
	//ArmourType armourType_;
	std::string armourString_;

public:
	Armour();
	Armour(std::string armourName, int itemValue, float itemWeight, int armourDefence, int armourHealth); //, ArmourType armourType

	void SetArmourDefence(int armourDefence);
	int GetArmourDefence();
	void SetArmourHealth(int armourHealth);
	int GetArmourHealth();
	std::string ToString();
};