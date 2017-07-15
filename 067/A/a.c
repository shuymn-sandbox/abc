#include<stdio.h>

int main(void) {
  int a,b;
  int is_a, is_b, is_a_and_b;

  scanf("%d %d", &a, &b);

  is_a = (a % 3 == 0) ? 1 : 0;
  is_b = (b % 3 == 0) ? 1 : 0;
  is_a_and_b = ((a + b) % 3 == 0) ? 1 : 0;

  if (is_a || is_b || is_a_and_b)
    puts("Possible");
  else
    puts("Impossible");

  return 0;
}
