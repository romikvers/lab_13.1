//////////////////////////////////////////////////////////////////////////////
// Lab_13_1.cpp
// головний файл проекту – функція main
#include <iostream>
#include <math.h>
#include <iomanip>
#include "dod.h"
#include "sum.h"
#include "var.h"

using namespace std;

using namespace nsDod;
using namespace nsSum;
using namespace nsVar;

int main()
{
	cout << "x_p = "; cin >> x_p;
	cout << "x_k = "; cin >> x_k;
	cout << "dx = "; cin >> dx;
	cout << "e = "; cin >> e;
	cout << endl;
	x = x_p;
	while (x <= x_k) {
		sum(); // виклик процедури обчислення суми
		cout << "-----------------------------------------------------------------------------------" << endl;
		cout << "cos(" << x << ")|" << setw(11) << s << "|" << setw(11) << exp(x) << "|" << setw(11) << n << "|" << endl; // тут слід використовувати форматний вивід
		cout << "-----------------------------------------------------------------------------------" << endl;
		x += dx;
	}
	cin.get();
	return 0;
}