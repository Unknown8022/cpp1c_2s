#include "LAB01.2.hpp"

using std::cout;
using std::cin;
using std::endl;
using std::pow;
using std::exp;
using std::cos;

int main()
{
	cout << "==================" << endl;
	cout << "\t LAB01.2 \t" << endl;
	cout << "==================" << endl;
	double a, b, x;
	cout << "Enter a, b, x" << endl;
	cin >> a >> b >> x;
	double y = pow(2 - x, 1.0 / 4);
	double z = b * log(2 * x);
	auto r = pow(a, y) + exp(z) + cos(a * x);
	cout << "==================" << endl;
	cout << "Result" << r << endl;
	cout << "==================" << endl;
	return 0;
}