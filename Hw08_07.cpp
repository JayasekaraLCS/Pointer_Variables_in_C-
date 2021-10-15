// question 07- Write a program to find the factorial of a number using pointers. 
//jayasekara lcs  IM/2019/043  HOMEWORK08
#include<iostream>
using namespace std;
int main(void){
	int x;
	int *xptr;
	int f=1;
	cout<<"Enter the number that you want to find the factorial: ";
	cin>>x;
	xptr=&x;
	
	int r=1;
	while(r<=*xptr){
		f=f*r;
		r++;	
	}
	
	cout<<"\nfactorial value of "<<x<<" is: "<<f;
	
	
}
