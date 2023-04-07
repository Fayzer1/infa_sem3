#include <stdio.h>
#define MAX_SIZE 15

int main()
{
	char symbols[MAX_SIZE];
	int repeat[MAX_SIZE];
	char universal_symbols[MAX_SIZE];
	int input;
	int symbol_number = 0;
	int universal_number = 0;
	int count = 0;
	
	//Ввод символов
	while ((input = getchar()) != '\n')
	{
		symbols[symbol_number] = input;
		symbol_number++;
		if (symbol_number == MAX_SIZE)
			break;
	}
	

	//Формирование массива уникальных символов
	for (int i = 0; i <= symbol_number; i++)
	{
		for(int j = 0; j <= universal_number; j++)
		{
			if(symbols[i] == universal_symbols[j])
				break;

			if (universal_number == j)
			{
				universal_symbols[universal_number] = symbols[i];

				if (i != symbol_number)	
					universal_number++;

				break;
			}				
		}
	}
	


	//Подсчет каждого символа
	for (int i = 0; i <= universal_number; i++)
	{
		for(int j = 0; j <= symbol_number; j++)
		{
			if (universal_symbols[i] == symbols[j])
				count++;
		}
		repeat[i] = count;
		count = 0;
	}

/*
	for (int i = 0; i < universal_number; i++)
	{
		printf("%d ", repeat[i]);
	}
	putchar('\n');
*/



}
