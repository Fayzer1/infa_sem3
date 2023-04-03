#include <stdio.h>
#include <stdbool.h>
#define MAX_SIZE 15

int main()
{
	char first_string[MAX_SIZE];
	char second_string[MAX_SIZE];
	int input;
	int input_delete;
	int amount_elements = 0;
	int elements_delete = 0;
	char *first_element;
	char *second_element;

	//Ввод строки символов
	while((input = getchar()) != '\n')
	{
		first_string[amount_elements] = input;
		amount_elements++;
		if (amount_elements >= MAX_SIZE)	
			break;
	}

	//Указтель на первый элемент массива для функции
	first_element = &first_string[0];
	
	//Ввод строки удаления
	while((input_delete = getchar()) != '\n')
	{
		second_string[elements_delete] = input_delete;
		elements_delete++;
		if(elements_delete == MAX_SIZE)
			break;
	}

	//Указатель на первый элемент массива удаления для функции
	second_element = &second_string[0];


	//Функция для удаления вычетания строки из строки;
	int delete_string(char *first_element, char *second_element, int amount_elements, int elements_delete)
	{
		bool exist = false;
		char difference_string[MAX_SIZE];

		for(int i = 0; i <= amount_elements; i++)
		{

			for(int j = 0; j <= elements_delete; j++)
			{
				if(*first_element == *second_element)
				{
					exist = true;	
					break;
				}

				second_element++;
				

			}

			if(exist == false)
				difference_string[i] = *first_element;

			first_element++;
			exist = false;
		}
		for(int k = 0; k <= sizeof(difference_string); k++)
			printf("%c", difference_string[k]);	
	}

	delete_string(first_element, second_element, amount_elements, elements_delete);

}
