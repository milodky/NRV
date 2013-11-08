#include "classA.h"

classA::classA(void)
{
	memset(val, 0, 100 * sizeof(double));
}
classA classA::function(void)
{
	classA a;
	for (int i = 0; i < 100; i++) {
		a.val[i] = i;
	}
	return a;
}
