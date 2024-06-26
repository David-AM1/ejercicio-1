#include <iostream>
#include <cmath>
using namespace std;

int main () {
	double a, b, c, D, x1, x2;
	cout << "Ingrese el valor de 'a' ";
	cin >> a;
	cout << "Ingrese el valor de 'b' ";
	cin >> b;
	cout << "Ingrese el valor de 'c' ";
	cin >> c;
	D = pow (b,2) - 4*a*c;
	if (D>0) {
		x1 = (-b + sqrt(D))/(2*a);
		x2 = (-b - sqrt(D))/(2*a);
		cout << x1 << " ; " << x2;
	} else {
		
	} 
	return 0;
}