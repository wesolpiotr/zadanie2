#include <stdio.h>

int main(void) {
  int a, b;
  
  printf("Podaj bok a: ");
  scanf("%d", &a);
  printf("Podaj bok b: ");
  scanf("%d", &b);

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