#include <stdio.h>
#define MAX_SIZE 10

char string_array[MAX_SIZE];
char * first_string;

void get_array(char * first_string);

int main()
{
	int input;
	int number = 0;

	while((input = getchar()) != '\n')
	{
		string_array[number] = input;
		number++;
		if (number >= MAX_SIZE)
		       break;	
	}

	first_string = string_array;

	for(int i = 0; i <= number; i++)
	{
		printf("%c\n", string_array[i]);
	}

	printf("%c\n", first_string);

	get_array(first_string);

}

void get_array(char * first_string)
{
	printf("%c ", first_string + 1);
	putchar('\n');
}
