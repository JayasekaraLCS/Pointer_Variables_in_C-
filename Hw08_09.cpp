// question 09- Write a program to store n elements in an array and print the elements using pointer
//jayasekara lcs  IM/2019/043  HOMEWORK08
#include<iostream>
using namespace std;
int main(void){
	int elements;
	cout<<"Enter the number of elements you want: ";
	cin>>elements;
	
	int array[elements];
	
	int input; // variable of inputs
	int *inputptr; // pointer variable of inputs
	
	for(int x=0;x<=elements-1;x++){
		cout<<"Enter the "<<x+1<<" number of your array: ";
		cin>>input;
		inputptr=&input;
		array[x]=*inputptr;
	}
	cout<<"\n";
	
	for(int y=0;y<=elements-1;y++){
		cout<<"You've entered "<<array[y]<<" as your "<<y+1<<" elements\n";
	}
}
