/*******************************************************************************
** Program: game.cpp
** Author: Emerald Seale
** Date: 5/21/18
** Input: Selecting ants to create, selecting where to place ants
** Output: Game board and pieces, text describing events and rules of the game
*******************************************************************************/
#include "game.h"
#include "insect.h"
#include "bee.h"
#include "ant.h"
#include "harvester.h"
#include "thrower.h"
#include "fire.h"
#include "longthrower.h"
#include "shortthrower.h"
#include "wall.h"
#include "ninja.h"
#include "bodyguard.h"
#include <iostream>
#include <string>

using namespace std;

/*******************************************************************************
** Function: Game
** Description: Game class default constructor
** Parameters: None
** Pre-Conditions: A Game object is created
** Post-Conditions: The game object's member variables are initialized
*******************************************************************************/
Game::Game () {
  foodPoints = 50;
  board[0] = "A:Q";
  for (int i = 1; i < 10; i++) {
    board[i] = "  ";
  }
  turn = 0;
  numBees = 0;
}

/*******************************************************************************
** Function: delete_insects
** Description: Clears all dynamic memory from the heap
** Parameters: None
** Pre-Conditions: The insect vector is populated with dynamic pointers
** Post-Conditions: The dynamic pointers are cleared from the heap
*******************************************************************************/
void Game::delete_insects () {
  for (int i = 0; i < insects.size(); i++) {
    delete insects[i];
  }
}

/*******************************************************************************
** Function: get_insects
** Description: Accessor function for the insects vector
** Parameters: None
** Pre-Conditions: A non member needs to access the insect vector
** Post-Conditions: The insect vector is returned and is accessable
*******************************************************************************/
vector<Insect*> Game::get_insects () {
  return insects;
}

/*******************************************************************************
** Function: get_num_bees
** Description: Accessor function for the integer numBees
** Parameters: None
** Pre-Conditions: A non member needs to access the numBees integer value
** Post-Conditions: numBees is returned and is accessable
*******************************************************************************/
int Game::get_num_bees () {
  return numBees;
}

/*******************************************************************************
** Function: get_board
** Description: Accessor function for the string array board
** Parameters: None
** Pre-Conditions: A non member needs to access the string array board
** Post-Conditions: board is returned and made accessable
*******************************************************************************/
string* Game::get_board () {
  return board;
}

/*******************************************************************************
** Function: start_game
** Description: Prints out a welcome message to the user at the beginning
** Parameters: None
** Pre-Conditions: The program begins
** Post-Conditions: The program is explained to the user via text
*******************************************************************************/
void Game::start_game () {
  cout << "\nWelcome to Ants vs. Some Bees!" << endl;
  cout << "Your job is to strategically place ants on the board to eliminate the bees and protect the queen." << endl;
  cout << "Each type of ant has a food cost, and your food bank starts at 50. If you defeat all the bees" << endl;
  cout << "on the board you win, ";
  cout << "and if a bee reaches the queen square you lose. Let's begin!" << endl;
}

/*******************************************************************************
** Function: print_board
** Description: Prints the game board to the screen
** Parameters: None
** Pre-Conditions: The turn starts
** Post-Conditions: The updated board is printed to the screen
*******************************************************************************/
void Game::print_board () {
  cout << endl;
  cout << "Here is the current board: " << endl;
  cout << endl;
  cout << "|";
  for (int i = 0; i < 10; i++) {
    cout << "| " << board[i];
    cout << " |";
  }
  cout << "|";
  cout << endl;
}

/*******************************************************************************
** Function: print_stats
** Description: Prints the turn number and food bank to the screen
** Parameters: None
** Pre-Conditions: It is the beginning of a turn
** Post-Conditions: The turn number and food bank amount are printed
*******************************************************************************/
void Game::print_stats () {
    turn++;
    cout << "\nIt is turn #" << turn << endl;
    cout << "Your food bank amount is: " << foodPoints << endl;
}

/*******************************************************************************
** Function: create_bee
** Description: Creates a new bee and adds it to the insects vector and board
** Parameters: None
** Pre-Conditions: It is the start of a new turn
** Post-Conditions: A new bee object is generated
*******************************************************************************/
void Game::create_bee () {
  Bee* b = new Bee;
  insects.push_back(b);
  numBees++;
  if (board[9] == "  ") {
    board[9] = "B";
  } else {
    board[9] = board[9] + "B";
  }
}

/*******************************************************************************
** Function: choose_ant
** Description: Prints the ant options to the screen and returns the choice
** Parameters: None
** Pre-Conditions: The player chooses to create a new ant
** Post-Conditions: The player's choice of ant or quitting is returned
*******************************************************************************/
string Game::choose_ant () {
  string choice = " ";
  cout << "Which kind of ant would you like to create? Here are your choices:" << endl;
  cout << "\t1. Harvester Ant. Cost: 2 food points." << endl;
  cout << "\t2. Thrower Ant. Cost: 4 food points." << endl;
  cout << "\t3. Fire Ant. Cost: 4 food points." << endl;
  cout << "\t4. Long Thrower Ant. Cost: 3 food points." << endl;
  cout << "\t5. Short Thrower Ant. Cost: 3 food points." << endl;
  cout << "\t6. Ninja Ant. Cost: 6 food points." << endl;
  cout << "\t7. Bodyguard Ant. Cost: 4 food points." << endl;
  cout << "\t8. Wall Ant. Cost: 4 food points." << endl;
  cout << "Enter the number of the ant you would like to create, or enter Q to cancel: ";
  getline(cin, choice);
  if (choice != "1"&&choice!="2"&&choice!="3"&&choice!="4"&&choice!="5"&&choice!="6"&&choice!="7"&&choice!="8"&&choice!="q"&&choice!="Q") {
    do {
      cout << "Please enter a valid input: ";
      getline(cin, choice);
    } while (choice != "1"&&choice!="2"&&choice!="3"&&choice!="4"&&choice!="5"&&choice!="6"&&choice!="7"&&choice!="8"&&choice!="q"&&choice!="Q");
  }
  return choice;
}

/*******************************************************************************
** Function: add_food
** Description: Adds 1 food to the bank every turn a harvester is alive
** Parameters: None
** Pre-Conditions: A harvester ant must be in play
** Post-Conditions: 1 food is added per harvester ant
*******************************************************************************/
void Game::add_food () {
  int count = 0;
  for (int i = 0; i < 10; i++) {
    if (board[i] == "A:H" || board[i] == "A:HA:BG" || board[i] == "A:HB" || board[i] == "A:HA:BGB" || board[i] == "A:HA:BGBB" || board[i] == "A:HBB") {
      count++;
    }
  }
  foodPoints = foodPoints + count;
}

/*******************************************************************************
** Function: generate_harvester
** Description: Generates a harvester ant and adds it to the vector and board
** Parameters: None
** Pre-Conditions: The player chooses to create a harvester ant
** Post-Conditions: A harvester ant is created
*******************************************************************************/
void Game::generate_harvester () {
  Harvester* h = new Harvester;
  int num = 0;
  cout << "Where would you like to place your Harvester Ant?" << endl;
  do {
    cout << "Enter the square's number: ";
    cin >> num;
  } while (num!=1&&num!=2&&num!=3&&num!=4&&num!=5&&num!=6&&num!=7&&num!=8&&num!=9&&num!=10);
  if (board[(num - 1)] != "  ") {
    cout << "You can't place a Harvester Ant on an occupied space!" << endl;
  } else {
    h->set_location((num - 1));
    insects.push_back(h);
    board[insects[(insects.size() - 1)]->get_location()] = "A:H";
    foodPoints = foodPoints - h->get_food_cost();
  }
}

/*******************************************************************************
** Function: generate_thrower
** Description: Generates a thrower ant and adds it to the vector and board
** Parameters: None
** Pre-Conditions: The player chooses to create a thrower ant
** Post-Conditions: A thrower ant is created
*******************************************************************************/
void Game::generate_thrower () {
  Thrower* t = new Thrower;
  int num = 0;
  cout << "Where would you like to place your Thrower Ant?" << endl;
  do {
    cout << "Enter the square's number: ";
    cin >> num;
  } while (num!=1&&num!=2&&num!=3&&num!=4&&num!=5&&num!=6&&num!=7&&num!=8&&num!=9&&num!=10);
  if (board[(num - 1)] != "  ") {
    cout << "You can't place a Thrower Ant on an occupied space!" << endl;
  } else {
    t->set_location((num - 1));
    insects.push_back(t);
    board[insects[(insects.size() - 1)]->get_location()] = "A:T";
    foodPoints = foodPoints - t->get_food_cost();
  }
}

/*******************************************************************************
** Function: generate_fire
** Description: Generates a fire ant and adds it to the vector and board
** Parameters: None
** Pre-Conditions: The player chooses to create a fire ant
** Post-Conditions: A fire ant is created
*******************************************************************************/
void Game::generate_fire () {
  Fire* f = new Fire;
  int num = 0;
  cout << "Where would you like to place your Fire Ant?" << endl;
  do {
    cout << "Enter the square's number: ";
    cin >> num;
  } while (num!=1&&num!=2&&num!=3&&num!=4&&num!=5&&num!=6&&num!=7&&num!=8&&num!=9&&num!=10);
  if (board[(num - 1)] != "  ") {
    cout << "You can't place a Fire Ant on an occupied space!" << endl;
  } else {
    f->set_location((num - 1));
    insects.push_back(f);
    board[insects[(insects.size() - 1)]->get_location()] = "A:F";
    foodPoints = foodPoints - f->get_food_cost();
  }
}

/*******************************************************************************
** Function: generate_long_thrower
** Description: Generates a long thrower ant and adds it to the vector and board
** Parameters: None
** Pre-Conditions: The player chooses to create a long thrower ant
** Post-Conditions: A long thrower ant is created
*******************************************************************************/
void Game::generate_long_thrower () {
  LongThrower* l = new LongThrower;
  int num = 0;
  cout << "Where would you like to place your Long Thrower Ant?" << endl;
  do {
    cout << "Enter the square's number: ";
    cin >> num;
  } while (num!=1&&num!=2&&num!=3&&num!=4&&num!=5&&num!=6&&num!=7&&num!=8&&num!=9&&num!=10);
  if (board[(num - 1)] != "  ") {
    cout << "You can't place a Long Thrower Ant on an occupied space!" << endl;
  } else {
    l->set_location((num - 1));
    insects.push_back(l);
    board[insects[(insects.size() - 1)]->get_location()] = "A:LT";
    foodPoints = foodPoints - l->get_food_cost();
  }
}

/*******************************************************************************
** Function: generate_short_thrower
** Description: Generates a shortthrower ant and adds it to the vector and board
** Parameters: None
** Pre-Conditions: The player chooses to create a short thrower ant
** Post-Conditions: A short thrower ant is created
*******************************************************************************/
void Game::generate_short_thrower () {
  ShortThrower* s = new ShortThrower;
  int num = 0;
  cout << "Where would you like to place your Short Thrower Ant?" << endl;
  do {
    cout << "Enter the square's number: ";
    cin >> num;
  } while (num!=1&&num!=2&&num!=3&&num!=4&&num!=5&&num!=6&&num!=7&&num!=8&&num!=9&&num!=10);
  if (board[(num - 1)] != "  ") {
    cout << "You can't place a Short Thrower Ant on an occupied space!" << endl;
  } else {
    s->set_location((num - 1));
    insects.push_back(s);
    board[insects[(insects.size() - 1)]->get_location()] = "A:ST";
    foodPoints = foodPoints - s->get_food_cost();
  }
}

/*******************************************************************************
** Function: generate_ninja
** Description: Generates a ninja ant and adds it to the vector and board
** Parameters: None
** Pre-Conditions: The player chooses to create a nina ant
** Post-Conditions: A ninja ant is created
*******************************************************************************/
void Game::generate_ninja () {
  Ninja* n = new Ninja;
  int num = 0;
  cout << "Where would you like to place your Ninja Ant?" << endl;
  do {
    cout << "Enter the square's number: ";
    cin >> num;
  } while (num!=1&&num!=2&&num!=3&&num!=4&&num!=5&&num!=6&&num!=7&&num!=8&&num!=9&&num!=10);
  if (board[(num - 1)] != "  ") {
    cout << "You can't place a Ninja Ant on an occupied space!" << endl;
  } else {
    n->set_location((num - 1));
    insects.push_back(n);
    board[insects[(insects.size() - 1)]->get_location()] = "A:N";
    foodPoints = foodPoints - n->get_food_cost();
  }
}

/*******************************************************************************
** Function: generate_body_guard
** Description: Generates a body guard ant and adds it to the vector and board
** Parameters: None
** Pre-Conditions: The player chooses to create a body guard ant
** Post-Conditions: A body guard ant is created
*******************************************************************************/
void Game::generate_body_guard () {
  Bodyguard* b = new Bodyguard;
  int num = 0;
  cout << "Where would you like to place your Bodyguard Ant?" << endl;
  do {
    cout << "Enter the square's number: ";
    cin >> num;
  } while (num!=1&&num!=2&&num!=3&&num!=4&&num!=5&&num!=6&&num!=7&&num!=8&&num!=9&&num!=10);
    if (board[(num - 1)] == "A:Q") {
      cout << "You can't place a Bodyguard Ant on the Queen square!" << endl;
    } else {
      b->set_location((num - 1));
      insects.push_back(b);
      if (board[insects[(insects.size() - 1)]->get_location()] == "  ") {
        board[insects[(insects.size() - 1)]->get_location()] = "A:BG";
      } else {
        board[insects[(insects.size() - 1)]->get_location()] = board[insects[(insects.size() - 1)]->get_location()] + "A:BG";
      }
      foodPoints = foodPoints - b->get_food_cost();
    }
}

/*******************************************************************************
** Function: generate_wall
** Description: Generates a wall ant and adds it to the vector and board
** Parameters: None
** Pre-Conditions: The player chooses to create a wall ant
** Post-Conditions: A wall ant is created
*******************************************************************************/
void Game::generate_wall () {
  Wall* w = new Wall;
  int num = 0;
  cout << "Where would you like to place your Wall Ant?" << endl;
  do {
    cout << "Enter the square's number: ";
    cin >> num;
  } while (num!=1&&num!=2&&num!=3&&num!=4&&num!=5&&num!=6&&num!=7&&num!=8&&num!=9&&num!=10);
  if (board[(num - 1)] != "  ") {
    cout << "You can't place a Wall Ant on an occupied space!" << endl;
  } else {
    w->set_location((num - 1));
    insects.push_back(w);
    board[insects[(insects.size() - 1)]->get_location()] = "A:W";
    foodPoints = foodPoints - w->get_food_cost();
  }
}

/*******************************************************************************
** Function: generate_ant
** Description: Generates an ant based on the player's choice
** Parameters: string a for the players choice
** Pre-Conditions: The player chooses to create an ant
** Post-Conditions: An ant is made or it quits
*******************************************************************************/
void Game::generate_ant (string a) {
  if (a == "1") {
    generate_harvester();
  } else if (a == "2") {
      generate_thrower();
  } else if (a == "3") {
      generate_fire();
  } else if (a == "4") {
      generate_long_thrower();
  } else if (a == "5") {
      generate_short_thrower();
  } else if (a == "6") {
      generate_ninja();
  } else if (a == "7") {
      generate_body_guard();
  } else if (a == "8") {
    generate_wall();
  } else if (a == "q" || a == "Q") {}
}

/*******************************************************************************
** Function: create_ant
** Description: Checks to see if the player's food amount is enough for an ant
** Parameters: None
** Pre-Conditions: The turn is halfway done
** Post-Conditions: The player chooses whether or not to create an ant
*******************************************************************************/
void Game::create_ant () {
  if (foodPoints > 1) {
    string choice = " ";
    do {
      cout << "\nWould you like to create a new ant? Y/N: ";
      getline(cin, choice);
    } while (choice != "Y" && choice != "y" && choice != "N" && choice != "n");
    if (choice == "Y" || choice == "y") {
      choice = choose_ant();
      generate_ant(choice);
    } else {}
  } else {
    cout << "You don't have enough food to generate an ant!" << endl;
  }
}

/*******************************************************************************
** Function: bees_move
** Description: The bees move forward one space on the board
** Parameters: None
** Pre-Conditions: There is at least one bee on the board
** Post-Conditions: The bees have moved forward one space
*******************************************************************************/
void Game::bees_move () {
  for (int i = 1; i < 10; i++) {
    if (board[i] == "B" || board[i] == "BB" || board[i] == "BBB" || board[i] == "BBBB") {
      board[i] = "  ";
      for (int j = 0; j < insects.size(); j++) {
        if (insects[j]->get_piece() == "B" && insects[j]->get_location() == i) {
          insects[j]->set_location((i-1));
        }
      }
      if (board[(i - 1)] == "  ") {
        board[(i - 1)] = "B";
      } else {
        board[(i - 1)] = board[(i - 1)] + "B";
      }
    } else if (board[i] == "A:NB" || board[i] == "A:NBB" || board[i] == "A:NBBB") {
      board[i] = "A:N";
      for (int j = 0; j < insects.size(); j++) {
        if (insects[j]->get_piece() == "B" && insects[j]->get_location() == i) {
          insects[j]->set_location((i-1));
        }
      }
      if (board[(i - 1)] == "  ") {
        board[(i - 1)] = "B";
      } else {
        board[(i - 1)] = board[(i - 1)] + "B";
      }
    }
  }
}

/*******************************************************************************
** Function: bees_attack
** Description: The bees attack the ants from right to left
** Parameters: None
** Pre-Conditions: The turn is almost halfway through
** Post-Conditions: Each ant on a bees space loses one health
*******************************************************************************/
void Game::bees_attack () {
  for (int i = 9; i >= 0; i--) {
    if (board[i][0] == 'A' && board[i][((board[i].length()) - 1)] == 'B') {
      for (int j = 0; j < insects.size() - 1; j++) {
        if (insects.at(j)->get_piece()[0] == 'A' && insects[j]->get_location() == i && insects.at(j)->get_piece() != "A:N") {
          insects[j]->set_armor((insects[j]->get_armor() - 1));
          cout << "\nAnt on space " << i << " lost health! It is now at " << insects[j]->get_armor() << endl;
        }
      }
    }
  }
}

/*******************************************************************************
** Function: clear_dead_ants
** Description: Clears ants with health at 0 off the board
** Parameters: None
** Pre-Conditions: An ants health must be at 0 or below
** Post-Conditions: The ant is cleared from the board
*******************************************************************************/
void Game::clear_dead_ants () {
  for (int i = 0; i < insects.size(); i++) {
    if (insects[i]->get_piece()[0] == 'A') {
      if (insects[i]->get_armor() <= 0) {
        board[insects[i]->get_location()] = "B";
      }
    }
  }
}

/*******************************************************************************
** Function: clear_dead_bees
** Description: Clears bees with health at 0 from the board
** Parameters: None
** Pre-Conditions: A bee must have health at or below 0
** Post-Conditions: The bees are cleared from the board
*******************************************************************************/
void Game::clear_dead_bees () {
  for (int i = 0; i < insects.size(); i++) {
    if (insects[i]->get_piece()[0] == 'B') {
      if (insects[i]->get_armor() <= 0) {
          board[insects[i]->get_location()] = "  ";
          numBees--;
      }
    }
  }
}

/*******************************************************************************
** Function: thrower_attack
** Description: Triggers the thrower attack
** Parameters: Integer i
** Pre-Conditions: There must be an ant in play
** Post-Conditions: The ant attacks
*******************************************************************************/
void Game::thrower_attack (int i) {
    if (board[i][((board[i].length()) - 1)] == 'B') {
      for (int j = 0; j < insects.size() - 1; j++) {
        if (insects[j]->get_piece()[0] == 'B' && insects[j]->get_location() == i) {
          insects[j]->set_armor((insects[j]->get_armor() - 1));
          cout << "\nBee on space " << i << " lost health! It is now at " << insects[j]->get_armor() << endl;
        }
      }
    }
}

/*******************************************************************************
** Function: fire_attack
** Description: Triggers the fire attack
** Parameters: Integer i
** Pre-Conditions: There must be an ant in play
** Post-Conditions: The ant attacks
*******************************************************************************/
void Game::fire_attack (int j) {
  if (insects[j]->get_armor() <= 0) {
    for (int i = 0; i < insects.size(); i++) {
      if (insects[i]->get_piece() == "B" && insects[i]->get_location() == j) {
        insects[i]->set_armor(0);
        cout << "All bees on space " << i << " died!" << endl;
      }
    }
  }
}

/*******************************************************************************
** Function: long_thrower_attack
** Description: Triggers the long thrower attack
** Parameters: Integer i
** Pre-Conditions: There must be an ant in play
** Post-Conditions: The ant attacks
*******************************************************************************/
void Game::long_thrower_attack (int i) {
  if (board[(i + 4)][((board[(i + 4)].length()) - 1)] == 'B') {
    for (int j = 0; j < insects.size() - 1; j++) {
      if (insects[j]->get_piece()[0] == 'B' && insects[j]->get_location() == (i + 4)) {
        insects[j]->set_armor((insects[j]->get_armor() - 1));
        cout << "\nBee on space " << (i + 4) << " lost health! It is now at " << insects[j]->get_armor() << endl;
      }
    }
  }
}

/*******************************************************************************
** Function: short_thrower_attack
** Description: Triggers the short thrower attack
** Parameters: Integer i
** Pre-Conditions: There must be an ant in play
** Post-Conditions: The ant attacks
*******************************************************************************/
void Game::short_thrower_attack (int i) {
  if (board[(i + 2)][((board[(i + 2)].length()) - 1)] == 'B') {
    for (int j = 0; j < insects.size() - 1; j++) {
      if (insects[j]->get_piece()[0] == 'B' && insects[j]->get_location() == (i + 2)) {
        insects[j]->set_armor((insects[j]->get_armor() - 1));
        cout << "\nBee on space " << (i + 2) << " lost health! It is now at " << insects[j]->get_armor() << endl;
      }
    }
  }
}

/*******************************************************************************
** Function: ninja_attack
** Description: Triggers the ninja attack
** Parameters: Integer i
** Pre-Conditions: There must be an ant in play
** Post-Conditions: The ant attacks
*******************************************************************************/
void Game::ninja_attack (int i) {
  if (board[(i - 1)][((board[(i - 1)].length()) - 1)] == 'B') {
    for (int j = 0; j < insects.size() - 1; j++) {
      if (insects[j]->get_piece()[0] == 'B' && insects[j]->get_location() == (i - 1)) {
        insects[j]->set_armor((insects[j]->get_armor() - 1));
        cout << "\nBee on space " << (i - 1) << " lost health! It is now at " << insects[j]->get_armor() << endl;
      }
    }
  }
}

/*******************************************************************************
** Function: ants_attack
** Description: Checks the board for types of ants and calls their attacks
** Parameters: None
** Pre-Conditions: There must be some ant in play
** Post-Conditions: The ants attack
*******************************************************************************/
void Game::ants_attack () {
  for (int i = 1; i < 10; i++) {
    if (board[i][0] == 'A') {
      for (int j = 0; j < insects.size() - 1; j++) {
        if (insects[j]->get_piece() == "A:T" && insects[j]->get_location() == i) {
          thrower_attack(i);
        } else if (insects[j]->get_piece() == "A:F" && insects[j]->get_location() == i) {
          fire_attack(j);
        } else if (insects[j]->get_piece() == "A:LT" && insects[j]->get_location() == i) {
          long_thrower_attack(i);
        } else if (insects[j]->get_piece() == "A:ST" && insects[j]->get_location() == i) {
          short_thrower_attack(i);
        } else if (insects[j]->get_piece() == "A:N" && insects[j]->get_location() == i) {
          ninja_attack(i);
        }
      }
    }
  }
}

/*******************************************************************************
** Function: run_turn
** Description: Runs the turn of the game
** Parameters: None
** Pre-Conditions: The game must not yet be won or lost
** Post-Conditions: The turn is run
*******************************************************************************/
void Game::run_turn () {
  add_food ();
  create_bee();
  print_stats();
  print_board();
  create_ant();
  ants_attack();
  clear_dead_bees();
  bees_attack();
  clear_dead_ants();
  bees_move();
}

/*******************************************************************************
** Function: end_game
** Description: Ends the program with a win or lose message
** Parameters: None
** Pre-Conditions: The queen must have been caught or the bees defeated
** Post-Conditions: A win or lose message is printed and the program ends
*******************************************************************************/
void Game::end_game () {
  if (numBees <= 0) {
    cout << "\nCongratulations! You've defeated the bees and won the game." << endl;
  } else {
    cout << "\nThe bees have reached the Queen! Game over." << endl;
  }
}
