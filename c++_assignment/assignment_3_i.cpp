/* Program for concatenation of two strings without any
predefined string functions */

#include<iostream>
#include<cstring>

//Function for concatenation of two strings
void string_concatenation(char*string_1, char*string_2);

int main(){
	char string_1[100] = "Hello"; //string 1
	char string_2[] = "Guys";//string 2
	string_concatenation(string_1,string_2);//function call
	return 0;
}

//Function for concatenation of two stings
void string_concatenation(char*string_1, char*string_2){
	//To bring pointer of string1 to place of '/0'
	while(*string_1){
		string_1++;
	}
	//To concatenate string 2 to string 1 until '/0' of string2
	while(*string_1++ = *string_2++);
	//To bring pointer of string1 back to first character
	string_1 -= strlen(string_2)+1;
	std::cout<<string_1<<"\n";//to print string1
}
