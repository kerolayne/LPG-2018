#include <stdlib.h>
#include <stdio.h>


int main() {
int a  = 3, b = 5, c;
int *p1 = &a, *p2 = &b, *p3 = &c;
*p3 = *p1 * *p2;
printf("%d\n", c);  
  return 0;
}
