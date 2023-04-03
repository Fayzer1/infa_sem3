#include <stdio.h>
#define MAX_SIZE 15

int main()
{
    char array_char[MAX_SIZE];
    int input;
    int number;

    //Блок ввода и заполнения массива
    while((input = getchar()) != '\n' )
    {
        if (input != ' ' && input != '\t')
            array_char[number] = input;
        number++; 
        if (number == MAX_SIZE)
            break;
    }

    for (int i = 0; i < number; i++)
    {
        //Проверка на символ и реистр
        if (((array_char[i] >= 'a') && (array_char[i] <= 'z')) || ((array_char[i] >= 'A') && (array_char[i] <= 'Z')))
        {
            //Проверка на "-"
            if(array_char[i + 1] == '-')
            {
                //Проверка следующего символа
                if (((array_char[i + 2] >= 'a') && (array_char[i + 2] <= 'z')) || ((array_char[i + 2] >= 'A') && (array_char[i + 2] <= 'Z')))               
                {
                    //Нахождение количества символов для печати
                    int difference = array_char[i + 2] - array_char[i];
                    //Стандартное направление печати, если разность букв больше нуля
                    if (difference > 0)
                    {
                        for (int k = 0; k <= difference; k++)
                        {
                            //Исключение для символов между регистрами в таблице ASCII
                            if (array_char[i] + k == '[' || array_char[i] + k == '\\' || array_char[i] + k == ']' 
                            || array_char[i] + k == '^' || array_char[i] + k == '_' || array_char[i] + k == '`')
                                k++;
                                else
                                    printf("%c", array_char[i] + k);
                        }
                    }
                    //Обратное направление печати, если разность букв меньше нуля
                    else
                    {
                        for (int k = 0; k <= -difference; k++)
                        {
                            printf("%c", array_char[i] - k);
                        } 
                    }
                }    
            }
        }

        //Проверка на числа 
        if (array_char[i] >= '0' && array_char[i] <= '9')
        {
            //Проверка на знак "-"
            if(array_char[i + 1] == '-')
            {
                if (array_char[i + 2] >= '0' && array_char[i + 2] <= '9')
                {
                    //Разность между символами в таблице ASCII
                    int difference = array_char[i + 2] - array_char[i];

                    //Если разность больше нуля направление стандартное
                    if (difference > 0)
                    {
                        for (int k = 0; k <= difference; k++)
                        {
                            printf("%c", array_char[i] + k);
                        }
                    }
                    //Если разность меньше нуля направление обратное
                    else
                    {
                        for (int k = 0; k <= difference; k++)
                        {
                            printf("%c", array_char[i] + k);
                        } 
                    }

                }   
            }
        }
    }
    putchar('\n');
    
}
