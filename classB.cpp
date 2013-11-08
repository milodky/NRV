#include "classB.h"

classB::classB(void)
{
	memset(val, 0, 100 * sizeof(double));
}

classB::classB(const classB& other)
{
	memcpy(val, other.val, 100 * sizeof(double));
}
classB classB::function(void)
{
	classB b;
	for (int i = 0; i < 100; i++) {
		b.val[i] = i;
	}
	return b;
}
