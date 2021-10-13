// På mange måder er funktionen solveQuadraticEquation fra programmet på den tilhørende slide en god løsning på at finde rødderne i den generelle andengradsligning a x2 + b x + c = 0. Dog udestår, som omtalt på tilhørende slide, en tilfredsstillende løsning på aflevering af outputtet: Antallet af rødder og rødderne selv. Men det kommer lidt senere i kurset.

// I denne opgave vil vi nedbryde problemløsningen endnu mere, og vi vil på systematisk vis programmere C funktioner som løser disse delproblemer. Målet med opgaven er altså primært på at anvende ideerne om trinvis forfinelse og top-down programmering. Dette indebærer delmål om programmering af funktioner med inputparametre, brug af prototyper af funktioner, og brug af return til formidling af output fra en funktion.

// Programmer hvert af følgende delproblemer som en separat funktion:
/* 
    Beregning af diskriminanten.
    Beregningen af første rod, under forudsætning af at den findes.
    Beregningen af anden rod, under forudsætning af at den findes.
*/
// Hvis der kun er én rod, anses første og anden rod for at være ens. Hvis der ikke findes rødder må de to sidstenævnte funktioner ikke kaldes.

// Find gode navne til funktionerne, der løser ovenstående tre delproblemer, og forsyn funktionerne med relevante input parametre. Funktionernes output skal formidles via funktionernes returværdi.

// Omskriv programmet så det kalder de tre funktioner. Vær sikker på at du bibeholder funktionen solveQuadraticEquation.

// Programmer endvidere main således at solveQuadraticEquation kaldes i en løkke. I denne løkke skal de tre koeficienter a, b og c indlæses. Afslut løkken når alle de tre indlæste koeficienter a, b og c er lig med 0. Dette kan gøres med en sentinel-controlled loop. Løs ligningen (inden i løkken) i de tilfælde, hvor det giver mening.

// Vær sikker på at du organiserer dit C program ud fra de anbefalinger vi har set om top-down programmering ved trinvis forfinelse.

// I denne opgave bedes du programmere det hele i én C fil. Der skal således ikke laves en header fil med prototyper.

#include <stdio.h>
#include <math.h>

void solveQuadraticEquation(double, double, double);

int main(void) {
  double a = 1.0, b = -8.0, c = 15.0,
         d = 2.0, e =  8.0, f =  2.0,
         g, h, i;

  /* First call - coefficents are values of variables */
  solveQuadraticEquation(a, b, c);  

  /* Second call - coefficents are values of expressions */
  solveQuadraticEquation(d - 1, -e, 7 * f + 1); 

  /* Third call - coefficents are entered by user outside solveQuadraticEquation */
  printf("Enter coeficients a, b, and c: ");
  scanf("%lf %lf %lf", &g, &h, &i);
  solveQuadraticEquation(g, h, i);  

  return 0;
}

/* Prints roots of the quadratic equation a * x*x + b * x + c = 0 */
void solveQuadraticEquation(double a, double b, double c){
  double discriminant = b * b - 4 * a * c,
         root1,
         root2;
  
  if (discriminant < 0)
    printf("No roots\n");
  else if (discriminant == 0){
    root1 = -b/(2*a);
    printf("One root: %f\n", root1);
  }
  else {
    root1 = (-b + sqrt(discriminant))/(2*a);
    root2 = (-b - sqrt(discriminant))/(2*a);
    printf("Two roots: %f and %f\n", root1, root2);
  }
}