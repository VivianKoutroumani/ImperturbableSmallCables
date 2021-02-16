#ifnden Stack_hpp
#define Stack_hpp
#include<stdio.h>
#include<iostream>
#include "stackI.hpp"
using namespace std;

template<typename T>class Stack:StackI<T>{
  protected:
  int top1;
  int elements;//number of elemnts
  int size;
  T s[];

  public:
  Stack(){
    s[20];
    top1=0;
    elements=0;
    size=0;
  }

  Stack(int i){
    s[i];
    topindex=0;
    elements=0;
    size=i;
  }
void push(T t){
  if (elements>=0&& elements<size){
    s[top1++]=t;
    elements++;
  }
}
T top(){
  if (elements>0){
    return s[top1];
  }
  else return s[0];

  void print(){
    if (elements==0){
      cout<<"The stack is empty"<<endl;
    }
    else{
      for(int i=top1-1;i>=0;i--){
        cout<<s[i]<<endl;
      }
    }

  }
  bool isEmpty(){
    return(elements==0)?true:false;
  }
};
#endif