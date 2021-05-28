#include "dod.h"
#include "var.h" // підключили зовнішні оголошення змінних

using namespace nsVar;

void nsDod::dod() {
	if (k % 2 == 0) {
		a *= (x / n);   // доданок домножується на 
	}
	else
		a *= -(x / n);
	k++;
}