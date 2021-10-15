// question 03- Write a program to Calculate the length of the string using a pointer 
//jayasekara lcs  IM/2019/043  HOMEWORK08
#include<iostream>
using namespace std;
int main(void){
	char str[100], *inputptr;
	int count=0;
	
	cout<<"Enter the string [should be less than 100 characters]: ";
	cin>>str;
	
	inputptr= str;
	while(*inputptr != '\0'){
		count++;
		inputptr++;
	}
	
	cout<<"\n the length of string part is: "<<count;
		
} 


