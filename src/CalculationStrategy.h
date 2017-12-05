#ifndef CALCULATIONSTRATEGY_H_
#define CALCULATIONSTRATEGY_H_

#include "Function.h"

class CalculationStrategy {

public:

	CalculationStrategy() {}

	virtual double calculate(const Function& function, double lowerLimit, double upperLimit)=0;

	virtual ~CalculationStrategy() {}

};

#endif /* CALCULATIONSTRATEGY_H_ */
