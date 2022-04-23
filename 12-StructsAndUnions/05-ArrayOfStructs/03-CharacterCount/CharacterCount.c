#include<stdio.h>
#include<ctype.h>
#include<string.h>

#define MAX_STRING_LENGTH 1024

struct CharacterCount {
	char ch;
	int ch_count;
}character_and_count[] = { {'A',0},{'B',0} , {'C',0}, {'D',0},{'E',0},{'F',0},
						   {'G',0},{'H',0} , {'I',0}, {'J',0},{'K',0},{'L',0},
						   {'M',0},{'N',0} , {'O',0}, {'P',0},{'Q',0},{'R',0},
						   {'S',0},{'T',0} , {'U',0}, {'V',0},{'W',0},{'X',0},
						   {'Y',0},{'Z',0}};

#define SIZE_OF_ENTIRE_ARRAY_OF_STRUCTS sizeof(character_and_count)
#define SIZE_OF_ONE_STRUCT_FROM_THE_ARRAY_OF_STRUCTS sizeof(character_and_count[0])
#define NUM_ELEMENTS_IN_ARRAY (SIZE_OF_ENTIRE_ARRAY_OF_STRUCTS/SIZE_OF_ONE_STRUCT_FROM_THE_ARRAY_OF_STRUCTS)

int main(void) {

	//variable declarations

	char str_olp[MAX_STRING_LENGTH];
	int i_olp, j_olp, actual_string_length = 0;

	//code
	printf("\n\n");
	printf("Enter A String : \n\n");
	gets_s(str_olp, MAX_STRING_LENGTH);

	actual_string_length = strlen(str_olp);

	printf("\n\n");
	printf("The String You have Entered Is: \n\n");
	printf("%s\n\n", str_olp);


	for (i_olp = 0; i_olp < actual_string_length; i_olp++) {
		for (j_olp = 0; j_olp < NUM_ELEMENTS_IN_ARRAY; j_olp++)
		{
			str_olp[i_olp] = toupper(str_olp[i_olp]);

			if (str_olp[i_olp] == character_and_count[j_olp].ch)
				character_and_count[j_olp].ch_count++;
		}
	}

	printf("\n\n");
	printf("The Number Of Occurences Of All Characters From Alphabet Are As Follows : \n\n");
	for (i_olp = 0; i_olp < NUM_ELEMENTS_IN_ARRAY; i_olp++) {
		printf("Character %c = %d\n", character_and_count[i_olp].ch, character_and_count[i_olp].ch_count);
	}
	printf("\n\n");
	return(0);
}