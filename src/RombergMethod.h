/*
 * RombergMethod.h
 *
 *  Created on: 5/12/2017
 *      Author: Sebastian
 */

#ifndef ROMBERGMETHOD_H_
#define ROMBERGMETHOD_H_

#include "CalculationStrategy.h"

/**
 * In numerical analysis, Romberg's method (Romberg 1955) is used to estimate the definite integral.
 * by applying Richardson extrapolation (Richardson 1911) repeatedly on the trapezium rule or the
 * rectangle rule (midpoint rule). The estimates generate a triangular array. Romberg's method is a
 * Newton–Cotes formula – it evaluates the integrand at equally spaced points. The integrand must have
 * continuous derivatives, though fairly good results may be obtained if only a few derivatives exist.
 * The method is named after Werner Romberg (1909–2003), who published the method in 1955.
 */
class RombergMethod: public CalculationStrategy {

private:

	int maxSteps;

	double accuracy;

public:

	static const int DEFAULT_MAX_STEPS = 100;

	RombergMethod(double accuracy, double maxSteps);

	RombergMethod(double accuracy);

	double calculate(const Function& function, double lowerLimit, double upperLimit);

	virtual ~RombergMethod();

};

#endif /* ROMBERGMETHOD_H_ */
