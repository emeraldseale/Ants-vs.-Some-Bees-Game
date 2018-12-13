/*******************************************************************************
** Program: bee.h
** Author: Emerald Seale
** Date: 5/21/18
** Input: None
** Output: None
*******************************************************************************/
#ifndef BEE_H
#define BEE_H
#include "insect.h"
#include <iostream>
#include <string>

using namespace std;

class Bee: public Insect {
  private:

  public:
    Bee ();
    void attack ();
    void move ();
    int get_location ();
    void set_location (int);
};
#endif
