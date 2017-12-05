#include <iostream>

#include "src/CosineFunction.h"
#include "src/SineFunction.h"

#include "src/TrapezoidalRule.h"
#include "src/SimpsonRule.h"
#include "src/RombergMethod.h"

const double ACCURACY = 1e-4;

const double STEP_SIZE = 1e-4;

int main() {

	double a = 0;
	double b = 0.1;

	std::cout << std::endl << "COSINE" << std::endl << std::endl;

	CosineFunction cosine;

	for (int i = 0; i < 10; i++) {
		std::cout << "a = 0" << std::endl;
		std::cout << "b = " << b << std::endl;

		TrapezoidalRule trapezoidalRule(STEP_SIZE);
		SimpsonRule simpsonRule(STEP_SIZE);
		RombergMethod rombergMethod(ACCURACY);

		std::cout << "Trapezoidal Rule == ";
		std::cout << trapezoidalRule.calculate(cosine, a, b) << std::endl;
		std::cout << "Simpson's Rule   == ";
		std::cout << simpsonRule.calculate(cosine, a, b) << std::endl;
		std::cout << "Romberg's Method == ";
		std::cout << rombergMethod.calculate(cosine, a, b) << std::endl;

		std::cout << std::endl;
		b += 0.1;
	}

	b = 0.1;

	std::cout << std::endl << "SINE" << std::endl << std::endl;

	SineFunction sine;

	for (int i = 0; i < 10; i++, b += 0.1) {
		std::cout << "a = 0" << std::endl;
		std::cout << "b = " << b << std::endl;

		TrapezoidalRule trapezoidalRule(STEP_SIZE);
		SimpsonRule simpsonRule(STEP_SIZE);
		RombergMethod rombergMethod(ACCURACY);

		std::cout << "Trapezoidal Rule == ";
		std::cout << trapezoidalRule.calculate(sine, a, b) << std::endl;
		std::cout << "Simpson's Rule   == ";
		std::cout << simpsonRule.calculate(sine, a, b) << std::endl;
		std::cout << "Romberg's Method == ";
		std::cout << rombergMethod.calculate(sine, a, b) << std::endl;

		std::cout << std::endl;
	}

	return 0;

}
