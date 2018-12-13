/*******************************************************************************
** Program: ninja.cpp
** Author: Emerald Seale
** Date: 5/22/18
** Input: None
** Output: None
*******************************************************************************/
#include "ninja.h"
#include <string>
#include <iostream>

using namespace std;

/*******************************************************************************
** Function: Ninja
** Description: Defualt constructor for the ninja class
** Parameters: None
** Pre-Conditions: A Ninja object is declared
** Post-Conditions: A Ninja object is created and initialized
*******************************************************************************/
Ninja::Ninja () {
  hitPoints = 1;
  armor = 1000000;
  foodCost = 6;
  piece = "A:N";
}

/*******************************************************************************
** Function: attack
** Description: Attack function for the Bodyguard class
** Parameters: None
** Pre-Conditions: A bodyguard must be in play
** Post-Conditions: The bodyguard attacks
*******************************************************************************/
void Ninja::attack () {}

/*******************************************************************************
** Function: move
** Description: Move function for the Bodyguard class
** Parameters: None
** Pre-Conditions: A Bodyguard must be on the board
** Post-Conditions: The Bodyguard moves forward one space
*******************************************************************************/
void Ninja::move () {}

/*******************************************************************************
** Function: get_location
** Description: Accessor function for location
** Parameters: None
** Pre-Conditions: The location integer needs to be accessed
** Post-Conditions: Location is returned
*******************************************************************************/
int Ninja::get_location () {
  return location;
}

/*******************************************************************************
** Function: set_location
** Description: Mutator function for location
** Parameters: None
** Pre-Conditions: Location needs to be changed
** Post-Conditions: Location is mutated
*******************************************************************************/
void Ninja::set_location (int num) {
  location = num;
}
