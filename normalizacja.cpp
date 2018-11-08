#include "normalizacja.h"

double N_force(double sila)
{
    double norm = 0;
    norm = 0.02 * sila;
    return norm;
}

double N_angle_pole(double kat)
{
    double norm = 0;
    norm = kat/180;
    return norm;
}

double N_veloc_angle(double v_katowe)
{
    double norm = 0;
    norm = v_katowe/180;
    return norm;
}

double N_pos_cart(double pos)
{
    double norm = 0;
    norm = pos / 2.5;
    return norm;
}

double N_veloc_cart(double veloc)
{
    double norm = 0;
    norm = veloc/30;
    return norm;
}

double Inver_angle_pole(double kat)
{
    double Inv = 0;
    Inv = kat * 180;
    return Inv;
}

double Inver_veloc_angle(double v_katowe)
{
    double Inv = 0;
    Inv = v_katowe * 180;
    return Inv;
}

double Inver_pos_cart(double pos)
{
    double Inv = 0;
    Inv = pos * 2.5;
    return Inv;
}

double Inver_veloc_cart(double veloc)
{
    double Inv = 0;
    Inv = veloc * 30;
    return Inv;
}

double Inver_force(double sila)
{
    double Inv = 0;
    Inv = sila * 50;
    return Inv;
}
