// question 01-Write a program to print the address of a variable whose value is input from user
//jayasekara lcs  IM/2019/043  HOMEWORK08
#include<iostream>
using namespace std;
int main(void){
	int x;// variable
	int *xptr; // pointer variable
	cout<<"Enter a number: ";
	cin>>x;
	xptr= &x;
	cout<<"Adress of the variable value is input by user: "<<xptr; 
	
	

	

}
