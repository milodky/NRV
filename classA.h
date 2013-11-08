#ifndef CLASSA_H_
#define CLASSA_H_
/*
 * classA doesn't have a copy constructor,
 * then the compiler will generate a trival
 * default copy constructor for it
 * 
 * Let's see the efficiency without NRV
 */
#include <cstring>

class classA {
public:
	classA(void);
	static classA function(void);
	double val[100];
};



#endif
