// lab_03_02.cpp: определяет точку входа для консольного приложения.
//

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int n;
	cout << "n = "; cin >> n;
	double S=0;
	for (int k = 1; k <= n; k++){
		S += 1. / (k* pow((2 * k + 1), 2));
	}
	cout << S << endl;
	system("pause");
	return 0;
}

