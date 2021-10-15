// question 12-Write a program in C to sort an array using Pointer 
//jayasekara lcs  IM/2019/043  HOMEWORK08
#include<iostream>
using namespace std;
int main(void){
	int input; // variable
	int *inputptr; //pointer variable
	
	int elements;
	cout<<"Enter the number of elements you want: ";
	cin>>elements;
	
	int array[elements];
	
	for(int x=0;x<=elements-1;x++){
		cout<<"Enter your "<<x+1<<" number: ";
		cin>>input;
		inputptr= &input;
		array[x]= *inputptr;
	}
	for(int z=0;z<=elements;z++){
	for(int y=0;y<=elements-2;y++){
		int temp;
		if(array[y]>array[y+1]){
			temp= array[y];
			array[y]=array[y+1];
			array[y+1]=temp;
		}
	}
 }
 cout<<"\n";
 
 for( int c=0;c<=elements-1;c++){
 	cout<<"The "<<c+1<<" element is: "<<array[c]<<" after sorted\n";
 }
}

