// question 02-Write a program to print the address of the pointer to a variable whose value is input from user. 
//jayasekara lcs  IM/2019/043  HOMEWORK08
#include<iostream>
using namespace std;
int main(void){
	int x; // variable
	int *xptr; // pointer variable
	cout<<"Enter a number: ";
	cin>>x; 
	xptr= &x;
	cout<<"Address of the pointer variable is: "<<&*xptr;  //&(*xtpr) should be printed

	
	
}
