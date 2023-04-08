#include <stdio.h>
#include "sem3.h"
#define MAX_SIZE 15


int main()
{
	char string[MAX_SIZE];
	char symbols_delete[MAX_SIZE];

	int number_string = 0;
	int number_delete = 0;

	char *symbols_pointer;
	char *delete_pointer;

	//Ввод строки символов
	int input;
	while((input = getchar()) != '\n')
	{
		string[number_string] = input;
		number_string++;
		if (number_string >= MAX_SIZE)	
			break;
	}

	//Указтель на первый элемент массива для функции
	symbols_pointer = &string[0];

	//Ввод строки удаления
	int input_delete;
	while((input_delete = getchar()) != '\n')
	{
		symbols_delete[number_delete] = input_delete;
		number_delete++;
		if(number_delete == MAX_SIZE)
			break;
	}

	//Указатель на первый элемент массива удаления для функции
	delete_pointer = &symbols_delete[0];

	delete_func(symbols_pointer, delete_pointer, number_string, number_delete);
	
}
