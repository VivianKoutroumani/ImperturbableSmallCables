#include <iostream>
#include <cmath>
#include<iomanip>
using namespace std;

void floyd (int size){
int row=0, col=0;
static int num=1;
for(row=0;row<size;row=row+1){
  for(int col=0;col<size;col++){
    if(row-col>=0){
      cout << num<<" ";
      num=num+1;}
    else
      cout << " ";
    
      
  }
  cout << endl;
}
}
int main(){
int size;
cout<<"Pleaase enter the number of lines: ";
cin>>size;
floyd(size);
}
