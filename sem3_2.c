#include <stdio.h>
#define MAX_SIZE 15
#define true 1
#define false 0

char delete_symbols(char first_string, char first_string_num);

int main()
{
	int input;

	char first_string[MAX_SIZE];
	int first_string_num;

	puts("Input string: ");
	while((input = getchar()) != '\n')
	{
		first_string[first_string_num] = input;
		first_string_num++;
		if (first_string_num == MAX_SIZE)
			break;
	}

	delete_symbols(first_string, first_string_num);
}

char delete_symbols(char first_string[MAX_SIZE], int first_string_num)
{
	int exist;
	int input;
	int second_string[MAX_SIZE];
	int third_string_num;
	int second_string_num;
	char third_string[MAX_SIZE];


	puts("Input symbols of delete: ");
	while((input = getchar()) != '\n')
	{
		second_string[second_string_num] = input;
		second_string_num++;
		if (second_string_num == MAX_SIZE)
			break;

	}

	for(int i = 0; i <= first_string_num; i++)
	{
		for(int j = 0; j <= second_string_num; j++)	
		{
			if (first_string[i] == second_string[j])
				exist = true;
		}
		if (exist == false)
		{
			third_string[third_string_num] = first_string[i];
			third_string_num++;
		}
	}
	puts("Result:");
	for(int i = 0; i <= third_string_num; i++)
		printf("%c", third_string[i]);
}
