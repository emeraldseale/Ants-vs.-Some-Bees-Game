/*******************************************************************************
** Program: wall.h
** Author: Emerald Seale
** Date: 5/22/18
** Input: None
** Output: None
*******************************************************************************/
#ifndef WALL_H
#define WALL_H
#include "ant.h"
#include <string>
#include <iostream>

using namespace std;

class Wall: public Ant {
  private:

  public:
    Wall ();
    void attack ();
    void move ();
    int get_location ();
    void set_location (int);
};
#endif
