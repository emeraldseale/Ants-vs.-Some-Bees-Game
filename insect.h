/*******************************************************************************
** Program: insect.h
** Author: Emerald Seale
** Date: 5/21/18
** Input: None
** Output: None
*******************************************************************************/
#ifndef INSECT_H
#define INSECT_H
#include <iostream>
#include <string>

using namespace std;

class Insect {
  protected:
    int hitPoints;
    int armor;
    int foodCost;
    int location;
    string piece;
  public:
    Insect ();
    int get_attack ();
    int get_armor ();
    int get_food_cost ();
    string get_piece ();
    void set_attack (int);
    void set_armor (int);
    void set_food_cost (int);
    void set_piece (string);
    virtual int get_location () = 0;
    virtual void set_location (int) = 0;
    virtual void attack () = 0;
    virtual void move () = 0;
};
#endif
