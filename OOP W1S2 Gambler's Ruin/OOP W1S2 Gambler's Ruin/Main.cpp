//Main .cpp file
//Gambler's Ruin challenge
//C++ Window's Console Application
//Author: Liam McCormick
//27/09/18

#include <stdlib.h>
#include <stdio.h>

#include <iostream>
using namespace std;

int main() {

	int money;
	int target;
	int betValue = 1;
	int gameCounter;

	cout << "How much money do you have?" << endl;
	cin >> money;

	cout << "What is your target?" << endl;
	cin >> target;

	while (money > 0 && money < target) {
		float random = static_cast <float> (rand()) / static_cast <float> (RAND_MAX);

		if (random < 0.5) {
			money = money + betValue;
			cout << "You won! Pot is now: " << money << " /n";
		}
		else {
			money = money - betValue;
			cout << "You lost! Pot is now: " << money << "/n";
		}
		system("pause");
	}

	bool quit = false;
	char answer;

	while (!quit) {
		cout << "Do you want to play again? Y/N" << endl;
		cin >> answer;

		answer = toupper(answer);
		if (answer == 'Y') {
			quit = true;
		}
	}
}