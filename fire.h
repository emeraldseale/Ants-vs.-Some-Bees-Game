/*******************************************************************************
** Program: fire.h
** Author: Emerald Seale
** Date: 5/22/18
** Input: None
** Output: None
*******************************************************************************/
#ifndef FIRE_H
#define FIRE_H
#include "ant.h"
#include <string>
#include <iostream>

using namespace std;

class Fire: public Ant {
  private:

  public:
    Fire ();
    void death ();
    void attack ();
    void move ();
    int get_location ();
    void set_location (int);
};
#endif
