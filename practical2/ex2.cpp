#include <iostream>
#include <cmath>
#include<iomanip>
using namespace std;

//exercise 2
double f (int i, int x0,double u0,double a, double dt){
static int x=x0;
static double u=u0, t=0;
x=x+(u*t)+(1/2*a* pow(t,2));
cout<<"At time: "<<t<<" the position is "<<x<<endl;
t=t+dt;
}



int main()
{
int x0,times;
double u0, a, dt;
  cout<<"enter the initial position";
  cin>>x0;
  cout<<" the speed: ";
  cin>>u0;
  cout<<" and the acceleration: ";
  cin>>a;
  cout<<"how many times you want to display the position of the moving body? ";
  cin>>times;
  cout<<"how often (in seconds) you want to update the position of the moving object? ";
  cin>>dt;
  for (int i=0;i<=times;i=i+1)
    cout<<f(i,x0,u0,a, dt)<<endl;
  cout<<endl;

}