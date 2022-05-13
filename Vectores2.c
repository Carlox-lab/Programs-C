#include <stdio.h>

int main ()
{
    int nums1[10]= {1,2,3,4,5,6,7,8,9,10};

    for (int pos = 0; pos < 10; pos++)
    {
        nums3[pos]=nums1[pos]*nums2[pos2];
        pos2--;
    }
    
    for (int i = 0; i < 10; i++)
    {
        printf("Multiplicacion %d : %d\n" ,i+1 ,nums3[i]);
    }
    
    float suma, promedio;

    for (int i = 0; i < 10; i++)
    {
        suma += nums3[i];
    }
    

    promedio = suma/10;
    printf("%.2f\n" ,promedio);
}