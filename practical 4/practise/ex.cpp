#include <iostream>
#include <cmath>
#include<iomanip>
using namespace std;

class A{
protected : int nA;
public : A(int mA) { nA=mA;} // constructor initialise nA=mA
};
class B: public A{
 private : float fB;
 public :B(int mA, float gB):
  A(mA), // call constructor of parent class passing ’mA’
  fB(gB) // initialise ’fB’ with ’gB’
  {} // do nothing else
 void print () { 
  cout << ”nA:” << nA << ” fB:” << fB<< endl;
 }

}
int main(){
B objB (10,3.14); // initialise objB.nA=10 and objB.fB=3.14
objB. print ();
}