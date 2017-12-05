#ifndef FUNCTION_H_
#define FUNCTION_H_

class Function {

public:

	Function() {}

	virtual double evaluate(double x) const = 0;

	virtual ~Function() {}

};

#endif /* FUNCTION_H_ */
