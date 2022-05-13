//Programa creado por: Ricardo Mejía, Diego Caraza y Carlos Juárez.
#include <stdio.h>
int main()
{
    int ex, age, x;
    char caracter;
    printf("Which excersice would you like to run?\n");
    printf("1 - excersise 1\n\n");
    printf("2 - excersice 2\n\n");
    printf("3 - excersice 3\n\n");
    scanf("%d" ,&ex);
    switch (ex)
    {
    case 1:
        printf("Introduce your age\n\n");
        scanf("%d" ,&age);
        if (age<25)
        {
            printf("What's up, how are you?\n");
        }
        else
        {
            printf("Hello sir, how are you?\n");
        }
        break;
    case 2:
        printf("Introduce a int number\n");
        scanf("%d" ,&x);
        if (x<0)
        {
            printf("less than 0\n");
        }
        else
        {
            if (x>=0 & x<=100)
            {
                printf("more than 0 but less than 100\n");
            }
            else
            {
                printf("more than 100\n");
            }            
        }
        break;
    case 3:
        printf("Introduce your grade\n");
        scanf (" %c" ,&caracter);
        switch (caracter)
        {
        case 'A':
            printf("Excelent job!\n");
            break;
        case 'B':
            printf("Very good!\n");
            break;
        case 'C':
            printf("Well done!\n");
            break;
        case 'D':
            printf("You should try again\n");
            break;
        default:
            printf("Not valid\n");
            break;
        }
        break;
    default:
        printf("Not valid\n");
        break;
    }
    return 0;
}