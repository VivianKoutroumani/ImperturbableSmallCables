#include "stackI.hpp"
#include "stack.hpp"
#include <iostream>
using namespace std;
int main(int argc, const char *argv[]){
  Stack<int> s = Stack <int> (5);

  s.print();
  s.push(8);
  s.push(6);
  s.push(9);
  s.push(3);
  s.push(1);
  s.print();
  s.pop();
  s.pop();
  s.print();

  return 0;


}