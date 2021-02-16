#include <vector> // needed for referring to 
#include <iostream>
using namespace std;
int main(){

vector<int> vect; // create a vector of int
for ( int count=0; count < 6; ++count)
  vect.push_back(10 -count); // insert at end of vector
for ( int index=0; index < vect. size (); ++index)
  cout << vect[index] <<"";//ments of vector
cout << '\n';
}