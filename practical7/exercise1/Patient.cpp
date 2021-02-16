#include "Date.hpp"
#include "Blood.hpp"
#include "Patient.hpp"

Patient::Patient(string name){
  name=name;
  table=vector<Blood>();
}
void Patient::addRecord(Blood record){
  table.push_back(record);
}
void Patient::print(){
  cout<<"Patient: "<<name<<endl;
  for (int i=0;i<table.size();i++){
    table[i].print();
  }
}

void Patient::printReport(){
  vector <Blood> abnormal=vector<Blood>();
  int m=140;//the maximun normal systolic
  double avgDias=0.0;//I will store here the average diastolic
  
  for (int i=0;i<table.size();i++){
    avgDias=avgDias+table[i].Dias();
    if (table[i].Sys()>=m){
      abnormal.clear();
      abnormal.push_back(table[i]);
      m=table[i].Sys();
    }

  }
  cout<<"Patient:"<<name<<"report: "<<endl;
  if (abnormal.size()==0) {cout<<"the levels of blood pressure are normal"<<endl;}
  else{
    cout<<"The fiollowing abnormal levels were observed: "<<endl;
    for (int i =0;i<abnormal.size();i++){
      cout<<"\t";
      abnormal[i].print();
    }
  }
  cout<<"Average diastolic pressure is: "<<avgDias/table.size()<<endl;

}