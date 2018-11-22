//GameCharacter.h
//Description: declaration for GameCharacter class
//Author: Liam McCormick
//Date: 20/11/2018

#pragma once
#include <iostream>
#include <string>
#include "Armour.h"
#include "Weapon.h"

enum CharacterState { Idle, Running, Sleeping, Walking, Defending, Attacking,  Dead};

class GameCharacter {
private: 
	std::string characterName_;
	float health_;
	float weightLimit_;
	Weapon weapon_;
	Armour armour_;
	int food_;
	CharacterState State_;

public:
	GameCharacter();
	~GameCharacter();

	bool Attack(GameCharacter &character);
	void Defend();
	void Walk();
	void Run();
	void Sleep();
	void GetState();
	void AddFood(int amount);
	void Eat();
};
