#include "rational.h"
#include "Testen.h"
#include <iostream>

void summe(std::vector <Rational> v) //Summe der Elemente eines Vektors
{
    Rational s(1, 1);
    for (int i = 0; i < v.size(); i++)
        s = s.add(v[i]);
    s.show_rat();
}

int main2() {
    std::cout << "Addtion Test:\n";
    add_test1();
    std::cout << "\nMultiplikation Test:\n";
    mult_test1();
    std::cout << "\nDivision Test:\n";
    div_test();
    std::cout << "\nTest:\n";
    getValue_test();


    Rational r1(2, 3);
    Rational r2(5, 8);
    Rational r3(1, 6);
    Rational r4(4, 7);
    Rational r5(3, 9);

    std::vector <Rational> v = { r1,r2,r3,r4,r5 };
    summe(v);
    return 0;
}
