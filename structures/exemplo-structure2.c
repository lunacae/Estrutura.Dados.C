#include <stdio.h>

typedef struct
{
  double numerador;
  double denominador;
} Fraction;

Fraction setFraction (double numerador, double denominador)
{
  Fraction f;
  f.numerador = numerador;
  f.denominador = denominador;
  return f;
}

Fraction multFraction(Fraction f1, Fraction f2){
    Fraction f;
    f.numerador = f1.numerador * f2.numerador;
    f.denominador = f1.denominador * f2.denominador;
    return f;
}

int main ()
{
    Fraction f1 = setFraction(1,3);
    Fraction f2 = setFraction(1,3);
    
    Fraction mult = multFraction(f1, f2);
    
    printf ("(%.2f / %.2f) * (%.2f / %.2f) = %.2f / %.2f", f1.numerador, f1.denominador, f2.numerador, f2.denominador, mult.numerador, mult.denominador);
    return 0;
}
