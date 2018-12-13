/*******************************************************************************
** Program: harvester.cpp
** Author: Emerald Seale
** Date: 5/22/18
** Input: None
** Output: None
*******************************************************************************/
#include "harvester.h"
#include <iostream>
#include <string>

using namespace std;

/*******************************************************************************
** Function: Harvester
** Description: Defualt constructor for the Harvester class
** Parameters: None
** Pre-Conditions: A Harvester object is declared
** Post-Conditions: A Harvester object is created and initialized
*******************************************************************************/
Harvester::Harvester () {
  hitPoints = 0;
  armor = 1;
  foodCost = 2;
  location = 0;
  piece = "A:H";
}

/*******************************************************************************
** Function: set_location
** Description: Mutator function for location
** Parameters: None
** Pre-Conditions: Location needs to be changed
** Post-Conditions: Location is mutated
*******************************************************************************/
void Harvester::set_location (int num) {
  location = num;
}

/*******************************************************************************
** Function: get_location
** Description: Accessor function for location
** Parameters: None
** Pre-Conditions: The location integer needs to be accessed
** Post-Conditions: Location is returned
*******************************************************************************/
int Harvester::get_location () {
  return location;
}

/*******************************************************************************
** Function: attack
** Description: Attack function for the Bodyguard class
** Parameters: None
** Pre-Conditions: A bodyguard must be in play
** Post-Conditions: The bodyguard attacks
*******************************************************************************/
void Harvester::attack () {}

/*******************************************************************************
** Function: move
** Description: Move function for the Bodyguard class
** Parameters: None
** Pre-Conditions: A Bodyguard must be on the board
** Post-Conditions: The Bodyguard moves forward one space
*******************************************************************************/
void Harvester::move () {}
