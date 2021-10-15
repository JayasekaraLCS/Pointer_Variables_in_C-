// question 06- Write a program to find out the greatest and the smallest among three numbers using pointers. 
//jayasekara lcs  IM/2019/043  HOMEWORK08
#include<iostream>
using namespace std;
int main(void){
	int input,max,min;
	int *inputptr;
	
	int x=1;
	while(x<=3){
		cout<<"Enter your "<<x<<" number: ";
		cin>>input;
		inputptr=&input;
		
		
		if(x==1){
			max=*inputptr;
			min=*inputptr;
		}
		else{
			if(*inputptr>max){
				max=*inputptr;
			}
			
			if(*inputptr<min){
				min=*inputptr;
			}
		}
		x++;
	}
	
	cout<<"Greatest number is: "<<max<<" \nSmallest number is: "<<min;
}
