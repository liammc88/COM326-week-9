//Week 9
//Challenge 1
//Description: multi class hierarchy in RPG game
//Author: Liam McCormick
//Date: 20/11/2018

#include <iostream>
#include "Item.h"
#include "Weapon.h"
using namespace std;

int main() {

Item sword{ "Geoff's Blade", 100, 1.5f };
cout << sword.ToString() << ". Weight: " << sword.GetItemWeight() << "\n" << endl;

cout << "Setting values \n";
sword.SetItemName("Bob's Blade");
sword.SetItemValue(300);
sword.SetItemWeight(2.0f);
cout << sword.ToString() << ". Weight: " << sword.GetItemWeight() << "\n" << endl;

cout << "Getting Values \n";
cout << "Name: " << sword.GetItemName() << endl;
cout << "Value: " << sword.GetItemValue() << endl;
cout << "Weight: " << sword.GetItemWeight() << endl;

}