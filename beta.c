#include <stdio.h>

float transferencia(float total)
{
    float cantidad_a_tranferir;
    int numero_de_tarjeta[16];
    int op;
    
    printf("%cCu%cnto dinero desea transferir?\n", 168, 160);
    scanf("%f" ,&cantidad_a_tranferir);

    if(total>=cantidad_a_tranferir)
    {
        do
        {
            printf("Introduzca cada numero de tarjeta 1 por 1: \n");
            for (int i = 0; i < 16; i++)
            {
                scanf("%d" ,&numero_de_tarjeta[i]);
            }

            printf("El numero es: ");

            for (int i = 0; i < 16; i++)
            {
                printf("%d " ,numero_de_tarjeta[i]);
            }

            printf("\n\nEs correcto?\n");
            printf("1. Si.\n");
            printf("0. No.\n");
            scanf("%d" ,&op);

        }while (op==0);

        total-=cantidad_a_tranferir;

        printf("Se han transferido %2.3f pesos de su cuenta al numero de tarjeta: ", cantidad_a_tranferir);
        for (int i = 0; i < 16; i++)
        {
            printf("%d " ,numero_de_tarjeta[i]);
        }
        printf("\nSu saldo actual ahora es de %2.3f pesos.\n", total);
        
    }
    else
    {
        printf("Usted no cuenta con el dinero suficiente.\n");
    }

    return total;
}
////////////////////////////////////////////////////
float depositar(float dinero)
{
    float depositado;
    
    printf("%cCu%cnto dinero desea depositar?\n\n", 168, 160);
    scanf("%f" ,&depositado);
    dinero+=depositado;
    printf("Se han depositado %2.3f pesos a su cuenta.\n", depositado);
    printf("Su saldo actual ahora es de %2.3f pesos.\n\n", dinero);

    return dinero;
}
///////////////////////////////////////////////////
void consultar(float dinero)
{
    printf("Su saldo actual es de %2.3f pesos.\n", dinero);
}
///////////////////////////////////////////////////
float retirar(float dinero)
{
    float retiro;

    printf("%cCu%cnto dinero desea retirar?\n", 168, 160);
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
///////////////////////////////////////////////////
int pantalla(void)
{
    int op;

    printf("1. Depositar dinero.\n");
    printf("2. Consultar saldo.\n");
    printf("3. Retirar dinero.\n");
    printf("4. Trasnferencia.\n");
    printf("5. Salir.\n\n");
    printf("Introduzca su opci%cn:\n", 162);
    scanf("%d" ,&op);

    return op;
}
//MAIN/MAIN/MAIN/MAIN/MAIN/MAIN/MAIN/MAIN/MAIN/MAIN
int main (void)
{
    float dinero=0;
    int op;

    printf("Hola, %cqu%c desea realizar?\n\n", 168, 130);

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
            dinero=transferencia(dinero);
            break;
        case 5:
            printf("%cHasta pronto!\n", 173);
            return 0;
        default:
            printf("Opci%cn no valida.\n", 162);
            break;
        }
        printf("%cDesea hacer m%cs movimientos?\n", 168, 160);
        printf("1 - S%c\n", 161);
        printf("0 - No\n");
        scanf("%d" ,&op);
    } while (op==1);

    printf("%cHasta pronto!\n", 173);
    return 0;
}