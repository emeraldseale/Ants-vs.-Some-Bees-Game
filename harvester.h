/*******************************************************************************
** Program: harvester.h
** Author: Emerald Seale
** Date: 5/22/18
** Input: None
** Output: None
*******************************************************************************/
#include "ant.h"
#include <iostream>
#include <string>

using namespace std;

class Harvester: public Ant {
  private:

  public:
    Harvester ();
    void set_location (int);
    int get_location ();
    void attack ();
    void move ();
};
