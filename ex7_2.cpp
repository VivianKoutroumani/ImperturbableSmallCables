#include <iostream>
#include <cmath>
using namespace std;

int pow_k(int k,int n){
  if (n==0) return 1;
  else if (n%2==0) return pow_k(k,n/2)*pow_k(k,n/2);
  else
    return k*pow_k(k,n/2)*pow_k(k,n/2);
  
}

int main(){
 int a,n ;
 cout<<"Please enter an integer base: ";
 cin >> a; 
 cout<<"Please enter an int non negative power: ";
 cin>>n;
 cout << pow_k(a,n); 
 return 0;

}
//The number of recursive calls in ex7 is half the number of recursive calls of ex7_2, as in the second case we split exach call to two.