#ifndef NORMALIZACJA_H
#define NORMALIZACJA_H

#include <fann.h>
// Tutaja są deklaracje funkcji normalizujących dane wejsciowe do sieci neuronowej
// Normalizacja odbywa sie przez sprowadzenie danych do zakresu <-1;1>
// funkcje INV_ powodują zamianę znormalizowanej wartości parametru na czytelną wartosć dla człowieka
// normalizacja odbywa się na podstawie przedziałów podanych w pdf (strona 7 tabela 1)

double N_angle_pole(double kat);
double N_veloc_angle(double v_katowe);
double N_pos_cart(double pos);
double N_veloc_cart(double veloc);
double N_force(double sila);

double Inver_angle_pole(double kat);
double Inver_veloc_angle(double v_katowe);
double Inver_pos_cart(double pos);
double Inver_veloc_cart(double veloc);
double Inver_force(double sila);


#endif // NORMALIZACJA_H
