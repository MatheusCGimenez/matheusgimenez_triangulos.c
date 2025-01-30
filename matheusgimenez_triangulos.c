#include <stdio.h>
#include <stdlib.h>

int
main()
  {
  int lado1, lado2, lado3;

  printf("DIGITE OS 3 LADOS DO TRIANGULO: ");
  scanf("%d %d %d", &lado1, &lado2, &lado3);

  if ((((lado1 < lado2 + lado3) && (lado1 > abs(lado2 - lado3))) && ((lado2 < lado1 + lado3) && (lado2 > abs(lado1 - lado3)))) && (((lado3 < lado1 + lado2) && (lado3 > abs(lado1 - lado2)))))
    {

    if ((lado1 == lado2) && (lado2 == lado3))
      {
      printf("EQUILATERO.\n");
      }

    if ((((lado1 != lado2) && (lado2 != lado3)) && (lado3 != lado1)))
      {
      printf("ESCALENO.\n");
      }

    if ((((lado1 == lado2) && (lado1 != lado3)) || ((lado2 == lado3) && (lado2 != lado1))) || (((lado1 == lado3) && (lado2 != lado3))))
      {
      printf("ISOSCELES.\n");
      }

    }
  else
    {
    printf("NAO EH TRIANGULO.\n");
    }

  return 0;
  }
