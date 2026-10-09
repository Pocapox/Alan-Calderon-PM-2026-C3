#include <stdio.h>
#include <stdlib.h>

/* Parametros y funciones. */

void trueque(int *x, int *y)
{
  int tem;
  tem = *x;
  *x = *y;
  *y = tem;
}

int suma(int x)
{
  return (x + x);
}

void main(void)
{
  int x = 5, y = 10;
  printf("\nValores iniciales: x = %d, y = %d", x, y);

  printf("\nLlamada 3: suma(10) = %d", suma(10));
  y = suma(10);
  printf("\nLlamada 4: y = suma(10) -> y = %d", y);

  trueque(&x, &y);
  printf("\nLlamada 6: trueque(&x, &y) -> x = %d, y = %d\n", x, y);

}