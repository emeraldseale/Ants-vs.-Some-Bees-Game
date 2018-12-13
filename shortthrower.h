/*******************************************************************************
** Program: shortthrower.h
** Author: Emerald Seale
** Date: 5/22/18
** Input: None
** Output: None
*******************************************************************************/
#ifndef SHORTTHROWER_H
#define SHORTTHROWER_H
#include "ant.h"
#include <string>
#include <iostream>

using namespace std;

class ShortThrower: public Ant {
  private:

  public:
    ShortThrower ();
    void attack ();
    void move ();
    int get_location ();
    void set_location (int);
};
#endif
