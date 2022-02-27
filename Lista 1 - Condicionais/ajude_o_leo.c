#include <stdio.h>
#include <math.h>

int main() {
  int x, y;
  int a, b, m, n, flag;

  scanf("(%d, %d)", &x, &y);
  scanf("%d*x^%d - %d*y^%d", &a, &n, &b, &m);

  flag = pow((a * x), n) - pow((b * y), m);

  if (flag)
    printf("a função está definida em (%d,%d)", x, y);
  else
    printf("a função está definida em (%d,%d) .-.", x, y);

  return 0;
}