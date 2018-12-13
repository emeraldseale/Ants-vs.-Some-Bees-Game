/*******************************************************************************
** Program: shortthrower.cpp
** Author: Emerald Seale
** Date: 5/22/18
** Input: None
** Output: None
*******************************************************************************/
#include "shortthrower.h"
#include <string>
#include <iostream>

using namespace std;

/*******************************************************************************
** Function: ShortThrower
** Description: Defualt constructor for the short thrower class
** Parameters: None
** Pre-Conditions: A ShortThrower object is declared
** Post-Conditions: A ShortThrower object is created and initialized
*******************************************************************************/
ShortThrower::ShortThrower () {
  hitPoints = 1;
  armor = 1;
  foodCost = 3;
  piece = "A:ST";
}

/*******************************************************************************
** Function: attack
** Description: Attack function for the Bodyguard class
** Parameters: None
** Pre-Conditions: A bodyguard must be in play
** Post-Conditions: The bodyguard attacks
*******************************************************************************/
void ShortThrower::attack () {}

/*******************************************************************************
** Function: move
** Description: Move function for the Bodyguard class
** Parameters: None
** Pre-Conditions: A Bodyguard must be on the board
** Post-Conditions: The Bodyguard moves forward one space
*******************************************************************************/
void ShortThrower::move () {}

/*******************************************************************************
** Function: get_location
** Description: Accessor function for location
** Parameters: None
** Pre-Conditions: The location integer needs to be accessed
** Post-Conditions: Location is returned
*******************************************************************************/
int ShortThrower::get_location () {
  return location;
}

/*******************************************************************************
** Function: set_location
** Description: Mutator function for location
** Parameters: None
** Pre-Conditions: Location needs to be changed
** Post-Conditions: Location is mutated
*******************************************************************************/
void ShortThrower::set_location (int num) {
  location = num;
}
