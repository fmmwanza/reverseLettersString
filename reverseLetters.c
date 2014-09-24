// Write a method/procedure (in any programming or declarative language) that takes in a string parameter composed of digits and letters only 
//(you don't need to validate the string). The method should reverse all letter and keep the digits in their original position.
// Ex.: ab1c2de345f => fe1d2cb345a

//How to compile
//gcc ahmed.c -o ahmed
//How to execute
// ./ahmed <InputString>


#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
	char stringTemp[strlen(argv[1])];
	char stringTemp2[strlen(argv[1])];
	int i;
	int count = 0;

	strcpy(stringTemp,argv[1]);

	for (i = 0; i < strlen(stringTemp); ++i){
		if(!isdigit(stringTemp[i])){
			stringTemp2[count] = stringTemp[i];
			stringTemp[i] ='-';
			count++;
		}
	}

	stringTemp2[count++]='\0';

	//Reverse 
	count = strlen(stringTemp2)-1;
	for (i = 0; i < strlen(stringTemp); ++i){
		if(!isdigit(stringTemp[i])){
			stringTemp[i] = stringTemp2[count];
			count--;
		}
	}
	printf("%s => %s \n", argv[1],stringTemp);

	return 0;
}