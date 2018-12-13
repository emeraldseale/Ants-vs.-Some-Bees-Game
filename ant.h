/*******************************************************************************
** Program: ant.h
** Author: Emerald Seale
** Date: 5/21/18
** Input: None
** Output: None
*******************************************************************************/
#ifndef ANT_H
#define ANT_H
#include "insect.h"
#include <iostream>
#include <string>

using namespace std;

class Ant: public Insect {
  protected:

  public:
    Ant ();
    virtual void set_location (int) = 0;
};
#endif
