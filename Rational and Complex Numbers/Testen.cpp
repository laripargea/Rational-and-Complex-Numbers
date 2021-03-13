#include "rational.h"
#include "Testen.h"
#include <vector>

void add_test1()
{
	Rational r1(2, 3);
	Rational r2(5, 8);
	r1.add(r2).show_rat();
	std::cout << "Es muss 31 / 24 sein \n" << std::endl;

	r1.setZahler(-3);
	r2.setNenner(-3);
	r2.setZahler(3);
	r1.add(r2).show_rat();
	std::cout << "Es muss -2 sein" << std::endl;
}

void mult_test1()
{
	Rational r1(2, 3);
	Rational r2(1, 4);
	r1.mul(r2).show_rat();
	std::cout << "Es muss 1/6 sein" << std::endl;
}

void div_test()
{
	Rational r1(5, 6);
	Rational r2(3, 2);
	r1.div(r2).show_rat();
	std::cout << "Es muss 5/9 sein" << std::endl;
}

void getValue_test()
{
	Rational r1(2, 3);
	Rational r2(6, 2);
	std::cout << r1.getValue() << ", muss 0.666667 sein\n";
	std::cout << r2.getValue() << ", muss 3 sein \n";
}