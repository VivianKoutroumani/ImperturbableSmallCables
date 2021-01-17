#include <iostream>
#include <cmath>
using namespace std;
// function main begins program execution
bool circle_point (double x, double y, double r, double cx, double cy){
  if ((pow(x-cx,2)+pow(y-cy,2)) <= pow(r,2));
    return true;
  return false;
}
int main()
{
  cout<< "Exercise 1:Point in a circle ";
  double x,y,r,cx,cy;
  cout<<"Please insert the rad of the cycle:";
  cin>>r;
  cout<<"Please insert the x coefficient of the center of the cycle:";
  cin>>cx;
  cout<<"Please insert the y coefficient of the center of the cycle:";
  cin>>cy;
  cout<<"Please insert point you want to check, tell me the x coefficient";
  cin>>x;
  cout<<"And the y?";
  cin>>y;
  if (circle_point(x,y,r,cx,cy))
    cout<<"The point belongs tso the circle"<<endl;
  else
    cout<<"The point does not belong to the circle"<<endl;

//exercise 2
  int x0, u, a, dt;
  cout<<"enter the initial position, the speed and the acceleration: ";
  cin>>x0,u,a;
  double f (x0,u,
}
