/*******************************************************************************
** Program: game.h
** Author: Emerald Seale
** Date: 5/21/18
** Input: None
** Output: None
*******************************************************************************/
#ifndef GAME_H
#define GAME_H
#include "insect.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Game {
  private:
    int foodPoints;
    vector<Insect*> insects;
    string board[10];
    int turn;
    int numBees;
  public:
    Game ();
    int get_food_points ();
    string* get_board ();
    vector<Insect*> get_insects ();
    int get_num_bees ();
    void set_food_points (int);
    void set_board (string*);
    void start_game ();
    void print_board();
    void run_turn ();
    void print_stats ();
    void create_bee ();
    void create_ant ();
    string choose_ant ();
    void generate_ant (string);
    void generate_harvester ();
    void add_food ();
    void generate_thrower ();
    void generate_fire ();
    void generate_long_thrower ();
    void generate_short_thrower ();
    void generate_ninja ();
    void generate_wall ();
    void generate_body_guard ();
    void bees_move ();
    void bees_attack ();
    void print_insects ();
    void delete_insects ();
    void clear_dead_ants ();
    void clear_dead_bees ();
    void ants_attack ();
    void thrower_attack (int);
    void fire_attack (int);
    void short_thrower_attack (int);
    void long_thrower_attack (int);
    void ninja_attack (int);
    void end_game ();
};
#endif
