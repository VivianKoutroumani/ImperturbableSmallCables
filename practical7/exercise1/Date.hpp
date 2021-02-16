#ifndef Date_hpp
#define Date_hpp
#include <iostream>
#include <stdio.h>
using namespace std;

class Date {
  private:
    int day, month, year;
  public:
    Date(const int , const int ,const int );
    int Day(), Month(), Year();
    void print();
};

#endif