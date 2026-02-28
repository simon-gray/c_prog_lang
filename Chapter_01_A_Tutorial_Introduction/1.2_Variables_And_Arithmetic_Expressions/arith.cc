#include <stdio.h>

/* print Fahrenheit_Celsius table for fahr = 0, 20, ...., 300 */
int main()
{

  float fahr, celsius;
  float lower, upper, step;

  lower = 0;
  upper = 300;
  step = 20;
  fahr = lower;
  printf("This is a Fahrenheit to Celsius table\n");
  while (fahr <= upper) {
    celsius = 5 * (fahr-32) / 9;
    printf("%3.0f %6.1f\n", fahr, celsius);
    fahr = fahr + step;
  }
  celsius = lower;
  printf("This is a Celsius to Fahrenheit Table\n");
  while (celsius <= upper){
    fahr = 9 * (celsius+32) / 5;
    printf("%3.1f\t%3.0f\n", celsius, fahr);
    celsius+=step;
  }
}
