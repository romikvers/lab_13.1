#include <math.h>
#include "dod.h"
#include "sum.h"
#include "var.h" // ��������� ������ ���������� ������

using namespace nsDod;
using namespace nsVar;

void nsSum::sum() {
	n = 0;
	a = 1;
	s = a;
	k = 1;
	do {
		n += 2;
		dod(); // ������ ��������� ���������� �������
		s += a;
	} while (fabs(a) > e);
}
