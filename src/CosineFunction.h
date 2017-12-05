#ifndef COSINEFUNCTION_H_
#define COSINEFUNCTION_H_

#include "Function.h"

class CosineFunction: public Function {

public:

	CosineFunction();

	double evaluate(double x) const;

	virtual ~CosineFunction();

};

#endif /* COSINEFUNCTION_H_ */
