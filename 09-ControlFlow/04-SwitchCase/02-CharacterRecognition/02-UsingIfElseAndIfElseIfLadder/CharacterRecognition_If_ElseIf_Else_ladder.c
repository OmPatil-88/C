#include<stdio.h>
#include<conio.h>

#define CHAR_ALPHABET_UPPER_CASE_BEINNING 65
#define CHAR_ALPHABET_UPPER_CASE_ENDING 90

#define CHAR_ALPHABET_LOWER_CASE_BEINNING 97
#define CHAR_ALPHABET_LOWER_CASE_ENDING 122

#define CHAR_DIGIT_BEGINNING 48
#define CHAR_DIGIT_ENDING 57

int main(void) {
	//variable declarations
	char ch_olp;
	int ch_value_olp;

	//code
	printf("\n\n");
	printf("Enter Character : ");

	ch_olp = getch();

	printf("\n\n");
	
	if ((ch_olp == 'A' || ch_olp == 'a') ||
		(ch_olp == 'E' || ch_olp == 'e') ||
		(ch_olp == 'I' || ch_olp == 'i') ||
		(ch_olp == 'O' || ch_olp == 'o') ||
		(ch_olp == 'U' || ch_olp == 'u')) {
		printf("Character \'%c\' Entered By you,Is A VOWEL CHARACTER from the English Alphabet !!!\n\n", ch_olp);
	}
	else
	{
		ch_value_olp = (int)ch_olp;

		if ((ch_value_olp >= CHAR_ALPHABET_UPPER_CASE_BEINNING) &&
			(ch_value_olp <= CHAR_ALPHABET_UPPER_CASE_ENDING) ||
			(ch_value_olp >= CHAR_ALPHABET_LOWER_CASE_BEINNING) &&
			(ch_value_olp <= CHAR_ALPHABET_LOWER_CASE_ENDING)) {
			printf("Character \'%c\' Entered By you,Is A CONSONANT CHARACTER From The English Alphabet !!! \n\n", ch_olp);
		}
		else if (ch_value_olp >= CHAR_DIGIT_BEGINNING &&
			ch_value_olp <= CHAR_DIGIT_ENDING) {
			printf("Character \'%c\' Entered By you,Is A DIGIT CHARACTER !!! \n\n", ch_value_olp);
		}
		else {
			printf("Character \'%c\' Entered By you,Is A SPECIAL CHARACTER !!! \n\n", ch_value_olp);
		}
	}
	return (0);
}