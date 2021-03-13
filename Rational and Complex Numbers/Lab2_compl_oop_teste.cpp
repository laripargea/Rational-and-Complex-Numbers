#include "Lab2_compl_oop_teste.h"

//Test für add
void add_test()
{
	Complex c1 = Complex(1, 2);
	Complex c2 = Complex(3, 4);
	c1.add(c2).show_compl();
	cout << '=';
	Complex(4, 6).show_compl();

}

//Test für mult
void mult_test()
{
	Complex c1 = Complex(1, 2);
	Complex c2 = Complex(3, 4);
	c1.mult(c2).show_compl();
	cout << '=';
	Complex(-5, -2).show_compl();
}

//Test für quot
void quot_test()
{
	Complex c1 = Complex(1, 2);
	Complex c2 = Complex(2, 4);
	c1.quot(c2).show_compl();
	cout << '=';
	Complex(0.5, 0.4).show_compl();
}

//Test für abs
void abs_test()
{
	Complex c1 = Complex(3, 4);
	assert(c1.abs(c1) == float(5));
}

//Test für compute_polar
void compute_polar_test()
{
	Complex c1 = Complex(1, 2);
	c1.compute_polar(c1);
}