#include "Lab2_compl_oop_functii.h"

double Complex::get_real()
{
	return real;
}

double Complex::get_imag()
{
	return imag;
}

void Complex::set_real(double r)
{
	real = r;
}

void Complex::set_imag(double i)
{
	imag = i;
}

void Complex::show_compl()
{
	cout << real << "+" << imag << "i";
}

//Default Konstruktor
Complex::Complex()
{
	real = 0;
	imag = 0;
}

//Konstruktor mit reelen und imaginären Teil Werte
Complex::Complex(double r, double i)
{
	real = r;
	imag = i;
}

//Funktion für Addieren 2 komplexen Zahlen
Complex Complex::add(Complex o)
{
    Complex ergebnis;
    ergebnis.real = real + o.real;
    ergebnis.imag = imag + o.imag;
    return ergebnis;
}

//Funktion für Multiplizieren 2 komplexen Zahlen
Complex Complex::mult(Complex o)
{
    Complex ergebnis;
    ergebnis.real = real * o.real - imag * o.imag;
    ergebnis.imag = real * o.imag - o.real * imag;
    return ergebnis;
}

//Funktion für Division bei 2 komplexen Zahlen
Complex Complex::quot(Complex o)
{
    Complex ergebnis;
    ergebnis.real = (real * o.real + imag * o.imag) / (o.real * o.real + o.imag * o.imag);
    ergebnis.imag = (imag * o.real + real * o.imag) / (o.real * o.real + o.imag * o.imag);
    return ergebnis;
}

//Funktion für Betrag bei 2 komplexen Zahlen
float Complex::abs(Complex nr)
{
	float z = 0;
	z = sqrt(nr.real * nr.real + nr.imag * nr.imag);
	return z;
}

//Funktion für trigonometrische Formel bei 2 komplexen Zahlen
void Complex::compute_polar(Complex nr)
{
	float r = abs(nr);
	double t;
	if (nr.real > 0)
		t = atan(nr.imag / nr.real);
	if (nr.real < 0)
		t = atan(nr.imag / nr.real) + 3.14;
	cout << r << "*(cos(" << t << ")+i*sin(" << t << "))";
}