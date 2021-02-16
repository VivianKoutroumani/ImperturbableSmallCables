#include "Date.hpp"

int Date::Day(){
  return day;
}
int Date::Month(){
  return month;
}
int Date::Year(){
  return year;
}

Date::Date(const int day,const int month, const int year){
  this->day=day;
  this-> month=month;
  this->year=year;
}
void Date::print(){
  cout<<day<<"/"<<month<<"/"<<year<<endl;
}