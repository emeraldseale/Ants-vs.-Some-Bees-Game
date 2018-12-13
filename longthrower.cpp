/*******************************************************************************
** Program: longthrower.cpp
** Author: Emerald Seale
** Date: 5/22/18
** Input: None
** Output: None
*******************************************************************************/
#include "longthrower.h"
#include <string>
#include <iostream>

using namespace std;

/*******************************************************************************
** Function: LongThrower
** Description: Defualt constructor for the long thrower class
** Parameters: None
** Pre-Conditions: A LongThrower object is declared
** Post-Conditions: A LongThrower object is created and initialized
*******************************************************************************/
LongThrower::LongThrower () {
  hitPoints = 1;
  armor = 1;
  foodCost = 3;
  piece = "A:LT";
}

/*******************************************************************************
** Function: attack
** Description: Attack function for the Bodyguard class
** Parameters: None
** Pre-Conditions: A bodyguard must be in play
** Post-Conditions: The bodyguard attacks
*******************************************************************************/
void LongThrower::attack () {}

/*******************************************************************************
** Function: move
** Description: Move function for the Bodyguard class
** Parameters: None
** Pre-Conditions: A Bodyguard must be on the board
** Post-Conditions: The Bodyguard moves forward one space
*******************************************************************************/
void LongThrower::move () {}

/*******************************************************************************
** Function: get_location
** Description: Accessor function for location
** Parameters: None
** Pre-Conditions: The location integer needs to be accessed
** Post-Conditions: Location is returned
*******************************************************************************/
int LongThrower::get_location () {
  return location;
}

/*******************************************************************************
** Function: set_location
** Description: Mutator function for location
** Parameters: None
** Pre-Conditions: Location needs to be changed
** Post-Conditions: Location is mutated
*******************************************************************************/
void LongThrower::set_location (int num) {
  location = num;
}
