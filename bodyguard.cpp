/*******************************************************************************
** Program: bodyguard.cpp
** Author: Emerald Seale
** Date: 5/22/18
** Input: None
** Output: None
*******************************************************************************/
#include "bodyguard.h"
#include <string>
#include <iostream>

using namespace std;

/*******************************************************************************
** Function: Bodyguard
** Description: Defualt constructor for the Bodyguard class
** Parameters: None
** Pre-Conditions: A Bodyguard object is declared
** Post-Conditions: A Bodyguard object is created and initialized
*******************************************************************************/
Bodyguard::Bodyguard () {
  hitPoints = 0;
  armor = 2;
  foodCost = 4;
  piece = "A:BG";
}

/*******************************************************************************
** Function: attack
** Description: Attack function for the Bodyguard class
** Parameters: None
** Pre-Conditions: A bodyguard must be in play
** Post-Conditions: The bodyguard attacks
*******************************************************************************/
void Bodyguard::attack () {}

/*******************************************************************************
** Function: move
** Description: Move function for the Bodyguard class
** Parameters: None
** Pre-Conditions: A Bodyguard must be on the board
** Post-Conditions: The Bodyguard moves forward one space
*******************************************************************************/
void Bodyguard::move () {}

/*******************************************************************************
** Function: get_location
** Description: Accessor function for location
** Parameters: None
** Pre-Conditions: The location integer needs to be accessed
** Post-Conditions: Location is returned
*******************************************************************************/
int Bodyguard::get_location () {
  return location;
}

/*******************************************************************************
** Function: set_location
** Description: Mutator function for location
** Parameters: None
** Pre-Conditions: Location needs to be changed
** Post-Conditions: Location is mutated
*******************************************************************************/
void Bodyguard::set_location (int num) {
  location = num;
}
