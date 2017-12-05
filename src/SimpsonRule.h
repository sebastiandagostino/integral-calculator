/*
 * SimpsonRule.h
 *
 *  Created on: 5/12/2017
 *      Author: Sebastian
 */

#ifndef SIMPSONRULE_H_
#define SIMPSONRULE_H_

#include "CalculationStrategy.h"

/**
 * In numerical analysis, Simpson's rule is a method for numerical integration,
 * the numerical approximation of definite integrals.
 * The method is credited to the mathematician Thomas Simpson (1710–1761) of
 * Leicestershire, England. Johannes Kepler used similar formulas over 100 years prior.
 */
class SimpsonRule: public CalculationStrategy {

private:

	double stepSize;

public:

	SimpsonRule(double stepSize);

	double calculate(const Function& function, double lowerLimit, double upperLimit);

	virtual ~SimpsonRule();

};

#endif /* SIMPSONRULE_H_ */
