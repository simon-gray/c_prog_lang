#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEPS 20

/* print Fahrenheit-Celsius table */
int main()
{
  int fahr;
  for (fahr = LOWER; fahr <= UPPER; fahr+=STEPS)
    printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
}
