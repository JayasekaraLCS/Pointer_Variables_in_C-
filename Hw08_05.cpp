// question 05-Write a function which will take pointer and display the number on screen. Take number from user and print it on screen using that function. 
//jayasekara lcs  IM/2019/043  HOMEWORK08
#include<iostream>
using namespace std;

void print_num(int *xptr){
	cout<<"You've entered "<<(*xptr);
}
int main(void){
	int x;
	cout<<"Enter a number: ";
	cin>>x;
	print_num(&x);
	
}
