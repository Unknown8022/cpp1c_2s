#include "Lab01.1.hpp"

using std::cout;
using std::endl;
using std::pow;
using std::exp;
using std::cos;

int main()
{
	cout << "==================" << endl;
	cout << "\t Lab01.1 \t" << endl;
	cout << "==================" << endl;
	double a = 2.61, b = 3.43, x = 5.54;
	double y = pow(2 - x, 1.0 / 4);
	double z = b * log(2 * x);
	auto r = pow(a, y) + exp(z) + cos(a * x);
	cout << "==================" << endl;
	cout << "Result" << r << endl;
	cout << "==================" << endl;
	return 0;
}