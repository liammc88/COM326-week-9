//GameCharacter.cpp
//Description: definition for GameCharacter class
//Author: Liam McCormick
//Date: 20/11/2018

#include <iostream>
#include <string>
#include "Weapon.h"
#include "GameCharacter.h"

GameCharacter::GameCharacter() {
	std::cout << "Default constructor for GameCharacter" << std::endl;
}


GameCharacter::~GameCharacter() {
	std::cout << "Default destructor for GameCharacter" << std::endl;
}

bool GameCharacter::Attack(GameCharacter &character) {
	//TODO
}

void GameCharacter::Defend() {
	//TODO
}

void GameCharacter::Walk() {
	//TODO
}

void GameCharacter::Run() {
	//TODO
}

void GameCharacter::Sleep() {
	//TODO
}

void CharacterState::GetState() {		///is this void???????????????????????
	//TODO
}

void GameCharacter::AddFood(int amount) {
	//TODO
}

void GameCharacter::Eat() {
	//TODO
}
