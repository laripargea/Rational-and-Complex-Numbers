#pragma once
#include <iostream>
#include <cmath>
#include <vector>

class Rational
{
private:
	int Zahler;
	int Nenner;
public:
	Rational(); //default Konstructor
	Rational(int z, int n); //Konstructor mit Param

	//getters
	int getZahler();
	int getNenner();

	double getValue();

	//setters
	void setZahler(int newZ);
	void setNenner(int newN);


	void simplify(); //Simplify form of the Rational Number

	Rational add(const Rational obj); //Addition

	Rational mul(const Rational obj); //Multiplikation

	Rational div(const Rational obj); //Division

	void show_rat()const;

	};