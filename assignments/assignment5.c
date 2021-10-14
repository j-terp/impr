#include <stdio.h>
#include <math.h>

void solveQuadraticEquation(double, double, double),
     print_root1(double, double, double),
     print_root2(double, double, double);
double calc_disc(double, double, double);

int main(void) {
  double a = 1.0, b = -8.0, c = 15.0,
         d = 2.0, e =  8.0, f =  2.0,
         g, h, i;

  /* First call - coefficents are values of variables */
  solveQuadraticEquation(a, b, c);  

  /* Second call - coefficents are values of expressions */
  solveQuadraticEquation(d - 1, -e, 7 * f + 1); 

  /* Third call - coefficents are entered by user outside solveQuadraticEquation */
  do {
  printf("Enter coeficients a, b, and c: ");
  scanf("%lf %lf %lf", &g, &h, &i);
  solveQuadraticEquation(g, h, i);
  } while (g == 0 && h == 0 && i == 0);

  return 0;
}

/* Prints roots of the quadratic equation a * x*x + b * x + c = 0 */
void solveQuadraticEquation(double a, double b, double c){
  double discriminant = calc_disc(a, b, c),
         root1,
         root2;

  if (discriminant < 0)
    printf("No roots\n");
  else if (discriminant == 0)
    printf("One root: ");
  else 
    printf("Two roots:");

  print_root1(discriminant, a, b);
  print_root2(discriminant, a, b);
}

double calc_disc(double a, double b, double c) {
  return b * b - 4 * a * c;
}

void print_root1(double d, double a, double b) {
  if (d >= 0)
    printf("%f ", ((d == 0) ? -b/(2*a) : (-b + sqrt(d))/(2*a)));
}
void print_root2(double d, double a, double b) {
  if (d > 0)
    printf(" and %f", (-b - sqrt(d))/(2*a));
  printf("\n");
}