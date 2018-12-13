/*******************************************************************************
** Program: longthrower.h
** Author: Emerald Seale
** Date: 5/22/18
** Input: None
** Output: None
*******************************************************************************/
#ifndef LONGTHROWER_H
#define LONGTHROWER_H
#include "ant.h"
#include <string>
#include <iostream>

using namespace std;

class LongThrower: public Ant {
  private:

  public:
    LongThrower ();
    void attack ();
    void move ();
    int get_location ();
    void set_location (int);
};
#endif
