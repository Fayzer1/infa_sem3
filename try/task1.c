#include <stdio.h>
#define MAX_SIZE 15

int main()
{
    char elements[MAX_SIZE];
    int count = 0;
    int number_element = 0;
    int input;

    while ((input = getchar()) != '\n')
    {
        if (input != ' ' && input != '\t')
        {
            elements[number_element] = input;
            number_element++;
        }

    }

    while (count <= number_element)
    {
        if (((elements[count] >= 'a') && (elements[count] <= 'z')) || ((elements[count] >= 'A') && (elements[count] <= 'Z')))
        {
            if(elements[count + 1] == '-')
            {
                if (((elements[count + 2] >= 'a') && (elements[count + 2] <= 'z')) || ((elements[count + 2] >= 'A') && (elements[count + 2] <= 'Z')))
                {
                   int difference = elements[count] - elements[count + 2];
                   if (difference > 0)
                   {
                        for (int i = 0; i < difference; i++)
                        {
                            printf("%c", elements[count + i]);
                        }
                        
                   } 
                   else
                   {
                        for(int i = 0; i < difference; i++)
                        {
                            printf("%c", elements[count - i]);
                        }
                   }
                }
            }
        }
        count++;
    }
    
}