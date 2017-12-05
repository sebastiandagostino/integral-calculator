#include "CosineFunction.h"

#include <cmath>

CosineFunction::CosineFunction() {
}

CosineFunction::~CosineFunction() {
}

double CosineFunction::evaluate(double x) const {
	return cos(x);
}
