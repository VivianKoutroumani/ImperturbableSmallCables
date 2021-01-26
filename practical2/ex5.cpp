#include <iostream>
#include <cmath>
#include<iomanip>
using namespace std;

int fib(int n){
if (n==1||n==0) 
cout<<"The fib number is: "<<n<<endl;
else{ 
  int a=0;
  int b=1;
  for (int k=2;k==n;k=k+1){ 
    int i=a+b;
    a=b;
    b=i;}
  cout<<i;
}
//I cannot understand why it doesn't recognise i as a variable, I also tried ::i but it didn't work.
  
}

}



int main(){
int n;
cout<<"Please enter which fibonacci number you want to calculate: ";
cin>>n;
cout<<"The fib number is: "<<fib(n)<<endl;
cout<<endl;


}