#include <stdio.h>
#define MAX_SIZE 15

int main()
{
	char symbols[MAX_SIZE];
	int count_repeat[MAX_SIZE];
	char universal_symbols[MAX_SIZE];
	int histogram[MAX_SIZE];
	int input;
	int symbol_number = 0;
	int universal_number = 0;
	int count = 0;
	int count_max = 0;
	int max_value;
	
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
		count_repeat[i] = count;
		count = 0;
	}


	puts("Horizontal Histogram");

	//Формирование горизонтальной гистограммы

	for (int i = 0; i < universal_number; i++)
	{
		printf("%c: ", universal_symbols[i]);

		for (int j = 0; j < count_repeat[i]; j++)
			putchar('#');
		putchar('\n');
	}

	//Определение максимальной частоты встречающихся символов
	for (int i = 0; i < universal_number; i++)
	{
		for (int j = 0; j < universal_number; j++)
		{
			if (count_repeat[i] >= count_repeat[j])
				count_max++;
			if (count_max == universal_number)
			{
				max_value = count_repeat[i];
				break;
			}
					
		}
		count_max = 0;

	}

	puts("Vertical Histogram");

	//Формирование вертикальной гистограммы
	for (int i = 0; i < universal_number; i++)
		histogram[i] = count_repeat[i] - max_value;


	for (int i = 0; i <= max_value; i++)
	{
		for (int j = 0; j < universal_number; j++)
		{
			if (histogram[j] <= 0)
			{
				putchar(' ');
				putchar(' ');
			}
			if (histogram[j] > 0)
				printf("# ");
			histogram[j] = histogram[j] + 1;
			
		}
		putchar('\n');
	}
	for(int i = 0; i < universal_number; i++)
		printf("%c ", universal_symbols[i]);
	putchar('\n');


}
