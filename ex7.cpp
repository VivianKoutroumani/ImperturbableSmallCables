#include <iostream>
using namespace std;

int pow_k(int k,int n){
  if (n==0) return 1;
  else if (n==1) return k;
  else{
    return k*pow_k(k,n-1);

  }
  
}

int main(){
 int a,n ;
 cout<<"Please enter an integer base: ";
 cin >> a; 
 cout<<"Please enter an int non negative power: ";
 cin>>n;
 if (n<0) cout<<"This number is negative";
 else cout << pow_k(a,n); 
 return 0;

}