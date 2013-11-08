#include <iostream>
#include "classA.h"
#include "classB.h"
#include <cstddef>
using namespace std;



int main(int argn, char *argv[])
{
//	int Num = atoi(argv[1]);
	int Num = 10000;
	clock_t t1 = clock();
	for (int i = 0; i < Num; i++) {
		classA a = classA::function();
	}
	clock_t t2 = clock();

	for (int i = 0; i < Num; i++) {
		classB b = classB::function();
	}

	clock_t t3 = clock();

	cout << "Without NRV:\t" << (double) (t2 - t1) / CLOCKS_PER_SEC << endl;
	cout << "With NRV:\t" << (double) (t3 - t2) / CLOCKS_PER_SEC << endl;

	return 1;
}
