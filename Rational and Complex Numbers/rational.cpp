#include "rational.h"
#include <iostream>
#include <cmath>
#include <vector>

//constructors
Rational::Rational() {
    setZahler(1);
    setNenner(1);

}

Rational::Rational(int z, int n) {
    Zahler = z;
    Nenner = n;
}

//getters
int Rational::getZahler() {
    return Zahler;
}

int Rational::getNenner() {
    return Nenner;
}

double Rational::getValue() {
    return (double)(Zahler) / Nenner;
}

//setters
void Rational::setZahler(int newZ) {
    Zahler = newZ;
}

void Rational::setNenner(int newN) {
    Nenner = newN;
}

Rational Rational::add(const Rational obj)//Addition
{
    Rational sum;
    sum.Zahler = ((Zahler * obj.Nenner) + (Nenner * obj.Zahler));
    sum.Nenner = Nenner * obj.Nenner;
    sum.simplify();
    return sum;
}

Rational Rational::mul(const Rational obj)//Multiplikation
{
    Rational prod;
    prod.Zahler = Zahler * obj.Zahler;
    prod.Nenner = Nenner * obj.Nenner;
    prod.simplify();
    return prod;
}

Rational Rational::div(const Rational obj)//Divison
{
    Rational quot;
    quot.Zahler = Zahler * obj.Nenner;
    quot.Nenner = Nenner * obj.Zahler;
    quot.simplify();
    return quot;
}

int ggt(int a, int b) // Grossten gemeinsamen Teiler
{
    if (a < 0)
        a = a - (2 * a);
    if (b < 0)
        b = b - (2 * b);
    if (a == b)
        return a;
    if ((a == 1) || (b == 1))
        return 1;
    if (a == 0)
        return b;
    if (b == 0)
        return a;
    while (a != b)
    {
        if (a > b)
        {
            a = a - b;
        }
        else
        {
            b = b - a;
        }
    };
    return a;
}

void Rational::simplify() //reduziert
{
    int d = ggt(Zahler, Nenner);
    Zahler = Zahler / d;
    Nenner = Nenner / d;
}

void Rational::show_rat() const //Print Rational Number on standard output stream 
{

    if (Nenner == 1)
    {
        std::cout << "Der Nummer ist = " << Zahler << std::endl;
    }
    else if (Nenner == -1)
    {
        int positiv = -Zahler;
        std::cout << "Der Nummer ist = " << positiv << std::endl;
    }
    else if ((Nenner < 0) && (Zahler > 0))
    {
        int negativ = -Zahler;
        int pozitiv = -Nenner;
        std::cout << "Die Summe ist = " << negativ << "/" << pozitiv << std::endl;
    }
    else
    {
        std::cout << "Die Summe ist = " << Zahler << "/" << Nenner << std::endl;
    }
}

