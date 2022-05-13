#include <stdio.h>
int main()
{
    float fahr, celsius;
    int op;
    fahr=0;
    celsius=0;
    printf("1 - fahrenheit to celsius\n");
    printf("0 - celsius to fahrenheit\n");
    scanf("%d", &op);
    if (op==1)
    {
        printf("Please enter the value of celsius\n");
        scanf("%f", &celsius);
        fahr=((9*celsius)/5)+32;
    }
    else
    {
        printf("Please enter the value of fahrenheit\n");
        scanf("%f", &fahr);
        celsius=5*(fahr-32)/9;
    }
    printf("fahr\t\tcelsius\n");
    printf("%f\t%f1\n",fahr, celsius);
return 0;
}