/*******************************************************************************
** Program: ninja.h
** Author: Emerald Seale
** Date: 5/22/18
** Input: None
** Output: None
*******************************************************************************/
#ifndef NINJA_H
#define NINJA_H
#include "ant.h"
#include <string>
#include <iostream>

using namespace std;

class Ninja: public Ant {
  private:

  public:
    Ninja ();
    void passby ();
    void attack ();
    void move ();
    int get_location ();
    void set_location (int);
};
#endif
