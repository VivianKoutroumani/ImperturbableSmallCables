#include <iostream>
#include <cmath>
#include<iomanip>
using namespace std;

void swap(int *ipx, int*ipy){
int a=*ipx;
*ipx=*ipy;
*ipy=a;
}



int main(){
int x,y;
cout<<"Please insert the first integer: ";
cin>>x;
cout<<"Please ente the second integer: ";
cin>>y;
swap(&x,&y);
cout<<x<<"  "<<endl;
cout<<y;
cout<<endl;



}