#include "TrapezoidalRule.h"

TrapezoidalRule::TrapezoidalRule(double stepSize) :
		stepSize(stepSize) {
}

TrapezoidalRule::~TrapezoidalRule() {
}

double TrapezoidalRule::calculate(const Function& function, double a,
		double b) {
	double addition = 0;
	for (int i = 1; i <= ((int) ((b - a) / stepSize) - 1); i++) {
		addition += function.evaluate(a + i * stepSize);
	}
	return ((stepSize / 2)
			* (function.evaluate(a) + 2 * addition + function.evaluate(b)));
}

