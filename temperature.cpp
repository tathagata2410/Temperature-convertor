#include<iostream>
#include<conio.h> 
using namespace std;
 int main()
 
 { 
 double count,temp;
 int choice;
    cout<<"Temperature Menu:\n";
    cout<<"1.Fahrenheit To Celsius:\n";
	cout<<"2.Celsius To Fahrenheit:\n";
    cout<<"Enter Your Choice:\n";
	 cin>>choice; 

   if(choice==1){ 
   cout<<"Enter The Temperature IN Fahrenheit:"; 
    cin>>temp; 
   count=(temp-32)/1.8;
   cout<<"Temperature In Celsius Is:"<<count; } 

   else{ 
    cout<<"Enter The Temperature In Celsius:"; 
    cin>>temp; 
    count=temp*1.8+32; cout<<"Temperature In Fahrenheit Is:"<<count;
	 } 
	 }