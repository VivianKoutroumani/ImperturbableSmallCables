#include <iostream>
using namespace std;

int sum_k(int k){
if (k==0||k==1)
  return k;
return k+sum_k(k-1);
}

int main(){
 int j ;
 cout<<"Please enter an integer: ";
 cin >> j; 
 cout << sum_k(j); 
 return 0;

}