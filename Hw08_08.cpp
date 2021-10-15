// question 08- Write a program to reverse the digits a number using pointers.
//jayasekara lcs  IM/2019/043  HOMEWORK08
#include<iostream>
using namespace std;
int main(void){
	int num; // variable
	int *numptr; // pointer variable
	
	cout<<"Enter a number: ";
	cin>>num;
	
	numptr=&num;
	
	int rev=0, m;
	
	while(num>0){
		m= *numptr%10; // m is moduls of *numptr devided by 10
		rev= rev*10+m; // rev is reversing progress
		*numptr= *numptr/10; // this is used for managed the itteration of while loop
	}
	
	cout<<"The reverse style of the number you entered is: "<<rev;
	
	
}
