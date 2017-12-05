#ifndef SINEFUNCTION_H_
#define SINEFUNCTION_H_

#include "Function.h"

class SineFunction: public Function {

public:

	SineFunction();

	double evaluate(double x) const;

	virtual ~SineFunction();

};

#endif /* SINEFUNCTION_H_ */
