// question 03-Write a program to print the value of the address of the pointer to a variable whose value is input from user. 
//jayasekara lcs  IM/2019/043  HOMEWORK08
#include<iostream>
using namespace std;
int main(void){
	//*(&xptr) should be printed
	
	int x;  //variable
	int *xptr; // pointer variable
	cout<<"Enter a number: ";
	cin>>x;
	xptr=&x;
	cout<<"Value of the address of the pointer variable is "<<*(&xptr);
	
}
