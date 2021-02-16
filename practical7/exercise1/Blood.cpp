#include "Blood.hpp"
int Blood::Sys(){
  return sys;
}
int Blood::Dias(){
  return dias;
}
Date Blood::ndate(){
  return date;
}
Blood::Blood(const int sys,const int dias,const Date date):date(date){
  this->sys=sys;
  this -> dias=dias;
}

void Blood:: print(){
  cout<<"systolic: "<<sys<<"diastolic: "<<dias<<"on"<<date.Day()<<"/"<<date.Month()<<"/"<<date.Year()<<endl;
}