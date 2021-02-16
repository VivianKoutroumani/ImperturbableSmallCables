#ifndef Blood_hpp
#define Blood_hpp 
#include "Date.hpp"

class Blood{
protected:
  int sys, dias;
  Date date;
public:
  Blood(const int, const int, const Date);
  int Sys(),Dias();
  Date ndate();
  void print();
};
#endif