/*******************************************************************************
** Program: bee.cpp
** Author: Emerald Seale
** Date: 5/21/18
** Input: None
** Output: None
*******************************************************************************/
#include "bee.h"
#include <iostream>
#include <string>

using namespace std;

/*******************************************************************************
** Function: Bee
** Description: Defualt constructor for the Bee class
** Parameters: None
** Pre-Conditions: A Bee object is declared
** Post-Conditions: A Bee object is created and initialized
*******************************************************************************/
Bee::Bee () {
  hitPoints = 1;
  armor = 3;
  foodCost = 0;
  location = 9;
  piece = "B";
}

/*******************************************************************************
** Function: attack
** Description: Attack function for the Bee class
** Parameters: None
** Pre-Conditions: A Bee must be in play
** Post-Conditions: The Bee attacks
*******************************************************************************/
void Bee::attack () {}

/*******************************************************************************
** Function: move
** Description: Move function for the Bee class
** Parameters: None
** Pre-Conditions: A Bee must be on the board
** Post-Conditions: The Bee moves forward one space
*******************************************************************************/
void Bee::move () {}

/*******************************************************************************
** Function: get_location
** Description: Accessor function for location
** Parameters: None
** Pre-Conditions: The location integer needs to be accessed
** Post-Conditions: Location is returned
*******************************************************************************/
int Bee::get_location () {
  return location;
}

/*******************************************************************************
** Function: set_location
** Description: Mutator function for location
** Parameters: None
** Pre-Conditions: Location needs to be changed
** Post-Conditions: Location is mutated
*******************************************************************************/
void Bee::set_location (int num) {
  location = num;
}
