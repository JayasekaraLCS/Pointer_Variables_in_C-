// question 04-Write a program to print a number which is entered from keyboard using pointer
//jayasekara lcs  IM/2019/043  HOMEWORK08
#include<iostream>
using namespace std;
int main(void){
	int x; // variable
	int *xptr; // pointer variable
	cout<<"Enter a number: ";
	cin>>x;
	xptr=&x;
	cout<<"You've entered "<<*xptr;
	
}
