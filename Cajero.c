#include <stdio.h>

float depositar(float dinero)
{
    float depositado;
    
    printf("Cuanto dinero desea depositar?\n\n");
    scanf("%f" ,&depositado);
    dinero+=depositado;
    printf("Se han depositado %2.3f pesos a su cuenta.\n", depositado);
    printf("Su saldo actual ahora es de %2.3f pesos.\n\n", dinero);

    return dinero;
}

void consultar(float dinero)
{
    printf("Su saldo actual es de %2.3f pesos.\n", dinero);
}

float retirar(float dinero)
{
    float retiro;

    printf("Cuanto dinero desea retirar?\n");
    scanf("%f", &retiro);
    if(dinero>=retiro)
    {
        dinero-=retiro;
        printf("Se han retirado %2.3f pesos de su cuenta.\n", retiro);
        printf("Su saldo actual ahora es de %2.3f pesos.\n", dinero);
    }
    else
    {
        printf("Usted no cuenta con el dinero suficiente.\n");
    }
    return dinero;
}

int pantalla(void)
{
    int op;

    printf("1. Depositar dinero.\n");
    printf("2. Consultar saldo.\n");
    printf("3. Retirar dinero.\n");
    printf("4. Salir.\n\n");
    printf("Introduzca su opcion:\n");
    scanf("%d" ,&op);

    return op;
}

int main (void)
{
    float dinero=0;
    int op;

    printf("Hola, que desea realizar?\n\n");

    do
    {
        switch (pantalla())
        {
        case 1:
            dinero=depositar(dinero);
            break;
        case 2:
            consultar(dinero);
            break;
        case 3:
            dinero=retirar(dinero);
            break;
        case 4:
            printf("Hasta pronto!\n");
            return 0;
        default:
            printf("Opcion no valida\n");
            break;
        }
        printf("Desea hacer mas movimientos?\n");
        printf("1 - Si\n");
        printf("0 - No\n");
        scanf("%d" ,&op);
    } while (op==1);

    printf("Hasta pronto!\n");
    return 0;
}