#include <ctype.h>
#include <string.h>
#include <stdio.h>

void main (int argc, char* argv[]) {
	//Arg check
	if (argc != 2){
		printf("Too many/too few arguments");
	}
	else 
	{
		//Second largest word in the english language is approx. 2k characters long
		char input[2000];
		strcpy(input, argv[1]);
		printf("You input: %s", input); //Tell user what they input

		//Lets find out how long the input string actually is
		int arraylength;
		for (arraylength = 0; arraylength < 2000; arraylength++){
			//if not null terminator, continue, else break
			if (input[arraylength] != '\0'){
				continue;
			}
			else break;
		}
		printf("\nWord Length is: %i", 	arraylength);

		//Right half can only at most be half of the max length
		int pallength = (arraylength/2);
		char right_half[pallength];
		//Pointer to first char
		char * ptr = right_half;
		//Length of actual string
		printf("\nHalf a word is: %i", pallength); //Debug
		for (int x = 0; x < pallength; x++)
		{

			//Set value of right half array via pointer to the value in the original array at the index of array length minus 1 (because indexing starts at 0) and minus x 
			//then increment x and pointer
			//Essentially walking back in the original array while walking forward in the current one
			*ptr = toupper(input[arraylength -1 - x]);
			ptr++;

		}
		right_half[pallength] = '\0'; //Add a null terminator

		printf("\nReversed right half of word is: %s", right_half);
		
		//store left half 
		char left_half[pallength];
		for (int x = 0; x < pallength; x++)
		{
			left_half[x] = toupper(input[x]);
		}
		left_half[pallength] = '\0'; //Add a null terminator
		printf("\nLeft half of the word is: %s", left_half);

		//Compare the two halves
		if (strcmp(left_half, right_half) != 0){
			printf("\nThe Word is not a palindrome");
		}
		else printf("\nThe word is a palindrome");

	}}


		
