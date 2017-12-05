#ifndef TRAPEZOIDALRULE_H_
#define TRAPEZOIDALRULE_H_

#include "CalculationStrategy.h"

/**
 * In mathematics, and more specifically in numerical analysis, the trapezoidal rule
 * (also known as the trapezoid rule or trapezium rule) is a technique for approximating
 * the definite integral.
 * The trapezoidal rule may be viewed as the result obtained by averaging the left and right
 * Riemann sums, and is sometimes defined this way.
 */
class TrapezoidalRule: public CalculationStrategy {

private:

	double stepSize;

public:

	TrapezoidalRule(double stepSize);

	double calculate(const Function& function, double lowerLimit, double upperLimit);

	virtual ~TrapezoidalRule();

};

#endif /* TRAPEZOIDALRULE_H_ */
