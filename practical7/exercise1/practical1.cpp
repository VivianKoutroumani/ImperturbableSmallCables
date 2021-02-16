#include <iostream>
#include <cmath>
#include<iomanip>
using namespace std;
// function main begins program execution
int main()
{

//exercise 1
cout << "Exercise 1:Program 0";
cout << "Welcome␣to␣C++!" << endl; // prints on screen
cout<<endl; // indicates that program ended successfully


//exercise 2
cout<<"Exercise 2:Read in 2 integers and display their product";
int x;
int y;
cout <<"Please enter integer x:";
cin>> x;
cout <<"Please enter integer y:";
cin>> y;
cout<< "The product of the two integers is "<<x*y<< endl;
cout<<endl;

//exercise 3
cout<<"Exercise 3:is a number multiple of another one ?";
int a;
int b;
cout<<"Please enter integer a:";
cin>>a;
cout<<"Please enter integer b:";
cin>>b;
if (a==b) 
cout<<"The numbers are equal,and each number is a multiple of itself"<<endl;
else if (a%b==0 || b%a==0)
cout<<"One number is multiple of the other one"<<endl;
else 
cout<<"None of the numbers is a multiple of the other one"<<endl;
cout<<endl;

//exercise 4
cout<<"Exercise 4:Display a line of characters";
int c;
cout<<"Please enter integer c:";
cin>>c;
do{
cout<<"*";
c=c-1;}
while (c>0);

//exercise 5
cout<<"Exercice 5 : Factorial";
int d,p;
cout<<"Enter d";
cin>>d;
p=d;
while (d>1)
{d=d-1;
p=p*d;
}


cout<<"The factorial is "<<p<<endl;

