/*******************************************************************************
** Program: wall.cpp
** Author: Emerald Seale
** Date: 5/22/18
** Input: None
** Output: None
*******************************************************************************/
#include "wall.h"
#include <string>
#include <iostream>

using namespace std;

/*******************************************************************************
** Function: Wall
** Description: Defualt constructor for the wall class
** Parameters: None
** Pre-Conditions: A Wall object is declared
** Post-Conditions: A Wall object is created and initialized
*******************************************************************************/
Wall::Wall () {
  hitPoints = 0;
  armor = 4;
  foodCost = 4;
  piece = "A:W";
}

/*******************************************************************************
** Function: attack
** Description: Attack function for the Bodyguard class
** Parameters: None
** Pre-Conditions: A bodyguard must be in play
** Post-Conditions: The bodyguard attacks
*******************************************************************************/
void Wall::attack () {}

/*******************************************************************************
** Function: move
** Description: Move function for the Bodyguard class
** Parameters: None
** Pre-Conditions: A Bodyguard must be on the board
** Post-Conditions: The Bodyguard moves forward one space
*******************************************************************************/
void Wall::move () {}

/*******************************************************************************
** Function: get_location
** Description: Accessor function for location
** Parameters: None
** Pre-Conditions: The location integer needs to be accessed
** Post-Conditions: Location is returned
*******************************************************************************/
int Wall::get_location () {
  return location;
}

/*******************************************************************************
** Function: set_location
** Description: Accessor function for location
** Parameters: None
** Pre-Conditions: The location integer needs to be accessed
** Post-Conditions: Location is returned
*******************************************************************************/
void Wall::set_location (int num) {
  location = num;
}
