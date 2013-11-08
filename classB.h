#ifndef CLASSB_H_
#define CLASSB_H_
/*
 * classB has a copy constructor, and this
 * will trigger NRV
 * 
 * Let's see the efficiency with NRV
 */
#include <cstring>

class classB {
public:
	classB(void);
	classB(const classB&);
	static classB function(void);
	double val[100];
};



#endif
