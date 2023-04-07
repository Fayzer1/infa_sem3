#include <stdio.h>
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

	//Функция удаления
	char delete_func(char *symbols_pointer, char *delete_pointer, int number_string, int number_delete)
	{
		char difference[MAX_SIZE];
		bool exist = false;
		char string_going;
		char delete_going;
		int number_del = 0;

		//Перебор каждого символа строки
		for (int i = 0; i <= number_string; i++)
		{
			//Сравнение каждого символа строки с символами удаления
			for(int j = 0; j <= number_delete; j++)
			{
				if (string_going == delete_going)
					break;

				if (j == number_delete)
				{
					difference[number_del] = string_going;
					number_del++;
				}

				delete_going = *(delete_pointer + j);
			}
			string_going = *(symbols_pointer + i);
		}		
		
		//Вывод
		for(int i = 0; i <= number_del; i++)
			printf("%c", difference[i]);
		putchar('\n');
	}

	delete_func(symbols_pointer, delete_pointer, number_string, number_delete);
	
}
