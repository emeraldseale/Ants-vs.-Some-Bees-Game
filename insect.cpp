/*******************************************************************************
** Program: insect.cpp
** Author: Emerald Seale
** Date: 5/21/18
** Input: None
** Output: None
*******************************************************************************/
#include "insect.h"
#include <string>
#include <iostream>

using namespace std;

/*******************************************************************************
** Function: Insect
** Description: Defualt constructor for the Insect class
** Parameters: None
** Pre-Conditions: An Insect object is declared
** Post-Conditions: An Insect object is created and initialized
*******************************************************************************/
Insect::Insect () {
  hitPoints = 0;
  armor = 0;
  foodCost = 0;
  location = 0;
  piece = "z";
}

/*******************************************************************************
** Function: get_food_cost
** Description: Accessor function for food cost
** Parameters: None
** Pre-Conditions: Food cost needs to be accessed
** Post-Conditions: Food cost is returned
*******************************************************************************/
int Insect::get_food_cost () {
  return foodCost;
}

/*******************************************************************************
** Function: get_piece
** Description: Accessor function for piece
** Parameters: None
** Pre-Conditions: Piece needs to be accessed
** Post-Conditions: Piece is returned
*******************************************************************************/
string Insect::get_piece () {
    return piece;
}

/*******************************************************************************
** Function: get_armor
** Description: Accessor function for armor
** Parameters: None
** Pre-Conditions: armor needs to be accessed
** Post-Conditions: armor is returned
*******************************************************************************/
int Insect::get_armor () {
  return armor;
}

/*******************************************************************************
** Function: set_armor
** Description: Mutator function for armor
** Parameters: None
** Pre-Conditions: armor needs to be changed
** Post-Conditions: armor is mutated
*******************************************************************************/
void Insect::set_armor (int a) {
  armor = a;
}
