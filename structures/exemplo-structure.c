#include <stdio.h>

typedef struct
{
  int dia;
  int mes;
  int ano;
} Data;

int
extraiDia (Data data)
{
  return data.dia;
}

int main ()
{
  Data data;
  data.dia = 03;
  data.mes = 04;
  data.ano = 2023;

  printf ("Dia em data C) %i", extraiDia (data));
  return 0;
}
