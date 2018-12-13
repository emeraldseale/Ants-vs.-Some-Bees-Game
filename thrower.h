/*******************************************************************************
** Program: thrower.h
** Author: Emerald Seale
** Date: 5/22/18
** Input: None
** Output: None
*******************************************************************************/
#ifndef THROWER_H
#define THROWER_H
#include "ant.h"
#include <string>
#include <iostream>

using namespace std;

class Thrower: public Ant {
  private:

  public:
    Thrower ();
    void attack ();
    void move ();
    int get_location ();
    void set_location (int);
};
#endif
