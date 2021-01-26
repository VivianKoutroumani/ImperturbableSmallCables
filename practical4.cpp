#include <iostream>
#include<math.h>
#include<cmath>
using namespace std;

double * read_poly(int &n){
  cout << "degree of polynomial: ";
  cin >> n;
  double * c=new double[n+1];
  for(int i=0;i<=n;i++){
    cout << "coefficient of degree " << i << ": ";
    cin >> c[i];
  }
  return c;
}


double value(double *c,int n, int x){//Calculating the value of polynomial
  double a=0;
  for (int i=0;i<=n;i++){
    a=a+ c[i]*pow(x,i);
  }
  return a;
}


void print_poly(double *c, int n){
  int i;
  cout << c[0];
  if(n>0)
    cout << " + ";
  for(i=1;i<n;i++)
    cout << c[i] << "*x^" << i << " + ";
  if(n>0)
    cout << c[n] << "*x^" << i;
  cout << endl;
}


double * poli_sum (double * p1, int d1, double * p2, int d2, int & dr){
    int i;
    dr=max(d1,d2);
    cout<<p1[0]+p2[0];
    if (p1[1]+p2[1]>0)
      cout<<"+";
    if (d1<=d2){
      for (i=1;i<=d1;i++)
        cout << p1[i]+p2[i]<< "*x^" << i << " + ";
  
      for (i=d1+1;i<=d2;i++)
        cout << p2[i] << "*x^" << i << " + ";}
      
  
    else {

    for (int i=1;i<=d2;i++)
      cout << p1[i]+p2[i]<< "*x^" << i << " + ";
    for (int i=d2+1;i<=d1;i++)
      cout << p1[i] << "*x^" << i << " + ";}
  
}

double * poli_product(double *p1,int d1, double * p2, int d2){
int i, j;
for (i=0;i<=d1;i++)
  for (j=0;j<=d2;j++)
    cout<<p1[i]*p2[j]<<"*x^"<<i+j<<"+";
}






int main()
{
  double *p1,*p2;
  int g1,x, g2, dr;

  p1=read_poly(g1);
  print_poly(p1,g1);
  

  cout<<"Please insert x:";
  cin>>x;
  cout<<"The value of polynomial for x is: "<<value(p1,g1,x)<<endl;

  p2=read_poly(g2);

  cout<<"The sum of the two polynomials is: "<<poli_sum(p1,g1,p2,g2,dr)<<"\n";
  cout<<"The product of the two polynomials is: "<<poli_product(p1,g1,p2,g2);


  delete[] p1,p2;
  return 0;
}
