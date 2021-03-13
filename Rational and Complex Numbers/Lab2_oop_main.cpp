#include"Lab2_compl_oop_main.h"
#include "rationalMain.h"
using std::cin;

int main()
{
	int opt;
	while (true)
	{
		cout << "\n1-Complex" << "\n2-Rational" << "\n3-exit" << "\nWaehle eine Option:";
		cin >> opt;
		if (opt == 1)
			main1();
		if (opt == 2)
		{
			main2();
		}
		if (opt == 3)
			break;
	}
	return 0;
}