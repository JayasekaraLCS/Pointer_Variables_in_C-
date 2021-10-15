// question 11- Write a program to count the number of vowels and consonants in a string using a pointer
//jayasekara lcs  IM/2019/043  HOMEWORK08
#include<iostream>
using namespace std;
int main(){
	char str[100], *s;
	int main_count=0;
	int vowel_count=0;
	int constant_count=0;
	
	cout<<"Enter the string part: ";
	cin>>str;
	
	s= str;
	while(*s !='\0'){
		main_count++;
		if(*s=='a'|| *s=='A'|| *s=='e'|| *s=='E'|| *s=='i'|| *s=='I'|| *s=='o'|| *s=='O'|| *s=='u'|| *s=='U'){
			vowel_count++;
			
		}
		else{
			constant_count++;
		}
		s++;
	}
	
	cout<<"\n";
	cout<<"Total length of the entered string is: "<<main_count<<"\n";
	cout<<"\n";
	cout<<"Total vowel characters of the entered string is: "<<vowel_count<<"\n";
	cout<<"\n";
	cout<<"Total constant characters of the entered string is: "<<constant_count;
	
	
	
}
