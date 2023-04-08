#include <stdio.h>
#include <stdbool.h>
#define MAX_SIZE 15


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

