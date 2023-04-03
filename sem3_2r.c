#include <stdio.h>
#define MAX_SIZE 15

int main()
{
	char first_string[MAX_SIZE];
	char second_string[MAX_SIZE];
	int input;
	int input_delete;
	int first_str_element_number = 0;
	int second_str_element_number = 0;
	char *first_element;
	char *second_element;

	while((input = getchar()) != '\n')
	{
		first_string[first_str_element_number] = input;
		first_str_element_number++;
		if (first_str_element_number >= MAX_SIZE)	
			break;
	}

	first_element = &first_string[0];
	
	while((input_delete = getchar()) != '\n')
	{
		second_string[second_str_element_number] = input_delete;
		second_str_element_number++;
		if(second_str_element_number == MAX_SIZE)
			break;
	}

	second_element = &second_string[0];

	int i = 0;
	int j = 0;

	// До этого момента все работает


}
