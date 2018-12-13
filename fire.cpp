/*******************************************************************************
** Program: fire.cpp
** Author: Emerald Seale
** Date: 5/22/18
** Input: None
** Output: None
*******************************************************************************/
#include "fire.h"
#include <string>
#include <iostream>

using namespace std;

/*******************************************************************************
** Function: Fire
** Description: Defualt constructor for the Fire class
** Parameters: None
** Pre-Conditions: A Fire object is declared
** Post-Conditions: A Fire object is created and initialized
*******************************************************************************/
Fire::Fire () {
  hitPoints = 3;
  armor = 1;
  foodCost = 4;
  piece = "A:F";
}

/*******************************************************************************
** Function: attack
** Description: Attack function for the Bodyguard class
** Parameters: None
** Pre-Conditions: A bodyguard must be in play
** Post-Conditions: The bodyguard attacks
*******************************************************************************/
void Fire::attack () {}

/*******************************************************************************
** Function: move
** Description: Move function for the Bodyguard class
** Parameters: None
** Pre-Conditions: A Bodyguard must be on the board
** Post-Conditions: The Bodyguard moves forward one space
*******************************************************************************/
void Fire::move () {}

/*******************************************************************************
** Function: get_location
** Description: Accessor function for location
** Parameters: None
** Pre-Conditions: The location integer needs to be accessed
** Post-Conditions: Location is returned
*******************************************************************************/
int Fire::get_location () {
  return location;
}

/*******************************************************************************
** Function: set_location
** Description: Mutator function for location
** Parameters: None
** Pre-Conditions: Location needs to be changed
** Post-Conditions: Location is mutated
*******************************************************************************/
void Fire::set_location (int num) {
  location = num;
}
