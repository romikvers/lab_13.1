#include "dod.h"
#include "var.h" // ��������� ������ ���������� ������

using namespace nsVar;

void nsDod::dod() {
	if (k % 2 == 0) {
		a *= (x / n);   // ������� ����������� �� 
	}
	else
		a *= -(x / n);
	k++;
}