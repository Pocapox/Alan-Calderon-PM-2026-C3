#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define SALIR 0
#define SUMAR 1
#define DIVICION 2
#define ERR_OK 0
#define ERR_DivByZero 789
#define RESTAR 3
#define MULTIPLICAR 4
#define CUADRADO 5
#define RAIZ 6
#define ERR_R

//ciclo de vida de la variable
//pasar las variables por valor
//Ambito de la variable
//pasar las variables por referencia - por puntero
// * operador de indireccion
// & operador de direccion
int suma(double num1, double num2, double *result);//declaracion de funcion
int dividir(double divisor, double denominador, double *result);
int resta(double rest1, double rest2, double *result);
int mult(double mult1, double mult2, double *result);
int cua(double cua1, double *result);
int raiz(double radicando, double *result);
//variable global
int main()
{
    int menu = -1;
    int err = ERR_OK;
    double n1 = 0.0;
    double n2 = 0.0;
    double r = 0.0;

    do
    {
        printf("\n\n\n0-SALIR\n1-SUMAR\n2-DIVIDIR\n3-RESTAR\n4-MULTIPLICAR\n5-CUADRADO\n6-RAIZ");
        scanf("%i",&menu);

        if(menu == SUMAR)
        {
            printf("\nIngresa el primer sumando:");
            scanf("%lf",&n1);
            printf("\nIngresa el segundo sumando:");
            scanf("%lf",&n2);
            err = suma(n1,n2,&r);
            if(err == ERR_OK)
            {
                printf("\nSuma de %lf mas %lf e %lf",n1,n2,r);
            }
            else
            {
                printf("\nError de operacion suma");
            }
        }
        if(menu == DIVICION)
        {
            printf("\nIngresa el dividendo:");
            scanf("%lf",&n1);
            printf("\nIngresa el denominador:");
            scanf("%lf",&n2);
            err = dividir(n1,n2,&r);
            if(err == ERR_OK)
            {
                printf("\nDivicion de %lf entre %lf e %lf",n1,n2,r);
            }
            else
            {
                if(err == ERR_DivByZero)
                {
                    printf("\nError no se puede dividir entre cero");
                }
                else
                {
                    printf("\nError inesperado");
                }
            }
        }
        if (menu == RESTAR)
        {
            printf("\nIngresa el primer numero:");
            scanf("%lf",&n1);
            printf("\nIngresa el segundo numero:");
            scanf("%lf",&n2);
            err = resta(n1,n2,&r);
            if(err == ERR_OK)
            {
                printf("\nResta de %lf menos %lf es %lf",n1,n2,r);
            }
            else
            {
                printf("\nError de operacion resta");
            }
        }
        if (menu == MULTIPLICAR)
        {
            printf("\nIngresa el primer numero:");
            scanf("%lf",&n1);
            printf("\nIngresa el segundo numero:");
            scanf("%lf",&n2);
            err = mult(n1,n2,&r);
            if(err == ERR_OK)
            {
                printf("\nLa multiplicacion de %lf por %lf es %lf",n1,n2,r);
            }
            else
            {
                printf("\nError de operacion multiplicacion");

            }

        }
        if (menu == CUADRADO)
        {
            printf("\nIngresa el numero:");
            scanf("%lf",&n1);
            printf("\nIngresa el segundo numero:");

            err = cua(n1,&r);
            if(err == ERR_OK)
            {
                printf("\n%lf al cuadrado es: %lf ",n1,r);
            }
            else
            {
                printf("\nError de operacion multiplicacion");

            }
        }
        if (menu == RAIZ)
        {
            printf("\nIngresa el numero:");
            scanf("%lf", &n1);
            err = raiz(n1, &r);
            if (err == ERR_OK)
            {
                printf("\nLa raiz cuadrada de %lf es: %lf", n1, r);
            }
            else if (err == ERR_R)
            {
                printf("\nError: no existe raiz cuadrada de un numero negativo");
            }
            else
            {
              printf("\nError de raiz")
            }
        }

    }
    while(menu != SALIR);


    return 0;
}

int suma(double num1, double num2, double *result)
{
    *result = num1 + num2;
    return 0;
}

int dividir(double divisor, double denominador, double *result)
{
    if(denominador == 0.0)
    {
        return ERR_DivByZero;
    }
    else
    {
        *result = divisor / denominador;
        return ERR_OK;
    }
}
int resta(double rest1, double rest2, double *result)
{
    *result = rest1 - rest2;
    return ERR_OK;
}

int mult(double mult1, double mult2, double *result)
{
    *result = mult1 * mult2;
    return ERR_OK;
}
int cua(double cua1, double *result)
{
    *result = pow(cua1,2);
    return ERR_OK;
}
int raiz(double rad1 = 0,rad2 = 0 double *result)
{
    if(radicando < 0)
    {
        return ERR_R;
    }
    if (radicando == 0)
        *result = 0.0;
        return ERR_OK;
        rad1 = rad 2;
        while ((rad2 == (rad1/rad2)))
        {
            rad2 = 0.5 * ((rad1/rad2)+rad2)
        }

}





