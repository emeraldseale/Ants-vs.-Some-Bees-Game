/*******************************************************************************
** Program: thrower.cpp
** Author: Emerald Seale
** Date: 5/22/18
** Input: None
** Output: None
*******************************************************************************/
#include "thrower.h"
#include <string>
#include <iostream>

using namespace std;

/*******************************************************************************
** Function: Thrower
** Description: Defualt constructor for the thrower class
** Parameters: None
** Pre-Conditions: A Thrower object is declared
** Post-Conditions: A Thrower object is created and initialized
*******************************************************************************/
Thrower::Thrower () {
  hitPoints = 1;
  armor = 1;
  foodCost = 4;
  piece = "A:T";
}

/*******************************************************************************
** Function: attack
** Description: Attack function for the Bodyguard class
** Parameters: None
** Pre-Conditions: A bodyguard must be in play
** Post-Conditions: The bodyguard attacks
*******************************************************************************/
void Thrower::attack () {}

/*******************************************************************************
** Function: move
** Description: Move function for the Bodyguard class
** Parameters: None
** Pre-Conditions: A Bodyguard must be on the board
** Post-Conditions: The Bodyguard moves forward one space
*******************************************************************************/
void Thrower::move () {}

/*******************************************************************************
** Function: get_location
** Description: Accessor function for location
** Parameters: None
** Pre-Conditions: The location integer needs to be accessed
** Post-Conditions: Location is returned
*******************************************************************************/
int Thrower::get_location () {
  return location;
}

/*******************************************************************************
** Function: set_location
** Description: Accessor function for location
** Parameters: None
** Pre-Conditions: The location integer needs to be accessed
** Post-Conditions: Location is returned
*******************************************************************************/
void Thrower::set_location (int num) {
  location = num;
}
