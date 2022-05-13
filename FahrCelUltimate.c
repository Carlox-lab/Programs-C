//Fahr Celsius by Carlos Juárez
#include <stdio.h>

//Fuction table, creates a comparation table
int table(int valorInicial, int valorFinal)
{
    int celsius, fahr, step;
    celsius=valorInicial;

    printf("Introduce the step\n");
    scanf("%d" ,&step);
    printf("celsius\tfahr\n");

    while(celsius<=valorFinal)
    {
        fahr=((9*celsius)/5)+32;
        printf(" %d\t%d\n" ,celsius,fahr);
        celsius=celsius+step;
    }
    return 0;
}

//Fuction convertion, converts from fahr to celsius
int convertionfahr(int celsius)
{
    int fahr;
    fahr=((9*celsius)/5)+32;
    return fahr;
}

//Fuction convertion, converts from celsius to fahr
int convertioncelsius(int fahr)
{
    int celsius;
    celsius=5*(fahr-32)/9;    
    return celsius;
}

int main()
{
    int op, celsisus, fahr, valorInicial, valorFinal;
    char caracter;

    valorFinal=0;
    valorInicial=0;

    printf("What do you want to do?\n");
    printf("0 - Table Fahr celsius\n");
    printf("1 - Convertion\n");
    scanf("%d" ,&op);

    switch (op)
    {
    case 0:

        printf("Introduce the inicial value for the table\n");
        scanf("%d" ,&valorInicial);
        printf("Introduce the final value for the table\n");
        scanf("%d" ,&valorFinal);

        table(valorInicial, valorFinal);
        break;

    case 1:

        printf("Type C for celsius or F for fahrenheit \n");
        scanf (" %c" ,&caracter);

        switch (caracter)
        {
        case 'C':

            printf("Introduce the valor of celsius\n");
            scanf("%d" ,&celsisus);
            printf("\n\n");
            printf("The value of fahrenheit is: %d\n" ,convertionfahr(celsisus));
            break;

        case 'F':

            printf("Introduce the valor of fahrenheit\n");
            scanf("%d" ,&fahr);
            printf("\n\n");
            printf("The value of celsius is: %d\n" ,convertioncelsius(fahr));
            break;

        default:
        
            printf("Not valid\n");
            break;

        }
    default:
        printf("Not valid\n");
        break;
    }
}