/*******************************************************************************
** Program: driver.cpp
** Author: Emerald Seale
** Date: 5/21/18
** Input: None
** Output: Text messages to the screen about instructions
*******************************************************************************/
#include "game.h"
#include "insect.h"
#include <iostream>

using namespace std;

/*******************************************************************************
** Function: main
** Description: Main function for the program, called at runtime, runs turns
** Parameters: None
** Pre-Conditions: Program is run
** Post-Conditions: Program ends
*******************************************************************************/
int main () {
  Game g;
  g.start_game();
  do {
    g.run_turn();
  } while (g.get_num_bees() != 0 && g.get_board()[0] == "A:Q");
  g.end_game();
  g.delete_insects();
  return 0;
}
