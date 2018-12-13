/*******************************************************************************
** Program: bodyguard.h
** Author: Emerald Seale
** Date: 5/22/18
** Input: None
** Output: None
*******************************************************************************/
#ifndef BODYGUARD_H
#define BODYGUARD_H
#include "ant.h"
#include <string>
#include <iostream>

using namespace std;

class Bodyguard: public Ant {
  private:

  public:
    Bodyguard ();
    void attack ();
    void move ();
    int get_location ();
    void set_location (int);
};
#endif
