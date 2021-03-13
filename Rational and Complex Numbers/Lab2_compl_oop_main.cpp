#include "Lab2_compl_oop_main.h"
#include "Lab2_compl_oop_teste.h"

//Sortieren nach dem Betrag
void sortieren(vector <Complex> v)
{
	Complex aux;
	int i, j;
	for (i = 0; i < v.size() - 1; i++)
		for (j = i+1; j < v.size(); j++)
			if (v[i].abs(v[i]) > v[j].abs(v[j]))
			{
				aux = v[i];
				v[i] = v[j];
				v[j] = aux;
			}
	for (i = 0; i < v.size(); i++)
	{
		v[i].show_compl();
		cout << " ";
	}
}

//Summe aller Zahlen
void summe(vector <Complex> v)
{
	Complex s = Complex(0, 0);
	for (int i = 0; i < v.size(); i++)
		s = s.add(v[i]);
	s.show_compl();
}

int main1()
{
	int i, j;
	Complex c1 = Complex(1, 2);
	Complex c2 = Complex(4, 5);
	Complex c3 = Complex(3, 0);
	Complex c4 = Complex(2, 10);
	vector <Complex> v = { c1,c2,c3,c4 };
	cout << "\nTest add succeded:";
	add_test();
	cout << "\nTest mult succeded:";
	mult_test();
	cout << "\nTest quot succeded:";
	quot_test();
	abs_test();
	cout << "\nTest compute_polar succeded:";
	compute_polar_test();
	cout << "\n";
	cout << "\nSortiert:";
	sortieren(v);
	cout << "\nSumme:";
	summe(v);
	return 0;
}