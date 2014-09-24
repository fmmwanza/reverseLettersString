
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