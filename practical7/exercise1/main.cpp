#include "stackI.hpp"
#include "stack.hpp"
#include <iostream>
using namespace std;
int main(){
  Stack<int> a = Stack <int>(5);

  a.print();
  a.push(8);
  a.push(6);
  a.push(9);
  a.push(3);
  a.push(1);
  a.print();
  a.pop();
  a.pop();
  a.print();

  return 0;


}