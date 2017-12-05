/*
 * SimpsonRule.cpp
 *
 *  Created on: 5/12/2017
 *      Author: Sebastian
 */

#include "SimpsonRule.h"

SimpsonRule::SimpsonRule(double stepSize) :
		stepSize(stepSize) {
}

SimpsonRule::~SimpsonRule() {
}

double SimpsonRule::calculate(const Function& function, double a, double b) {
	double evenAddition = 0;
	for (int i = 1; i < ((int) (((b - a) / stepSize) / 2)); i++) {
		evenAddition += function.evaluate(a + 2 * i * stepSize);
	}
	double oddAddition = 0;
	for (int i = 1; i <= ((int) (((b - a) / stepSize) / 2)); i++) {
		oddAddition += function.evaluate(a + (2 * i - 1) * stepSize);
	}
	return ((stepSize / 3)
			* (function.evaluate(a) + 2 * evenAddition + 4 * oddAddition
					+ function.evaluate(b)));
}
