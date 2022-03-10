#include <stdio.h>

int main(void) {
  int a = 10;
  int b = 5;
  int pole = a*b;

  printf("Pole jest równe: %i", pole);
  printf("\n");

  if(a==b) {
    printf("Prostokąt jest kwadratem");
  } else {
    printf("Prostokąt nie jest kwadratem");
  }
  return 0;
}