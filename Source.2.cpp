#include <iostream>
using namespace std;


int main() {
	float kg, m, bmi;

		cout << "Zadaj vysku=m: " << endl;
		cin >> kg;

		cout << "zadajte vahu=kg:" << endl;
		cin >> m;

	bmi = (kg / (m * m) * 10000);
	cout << bmi << endl;

	if (bmi < 18.49) {
	cout << "Podvyziva" << endl;
	}

	else if (18.5 < bmi < 25) {
	cout << "Normalna vaha" << endl;
	}

	else if (bmi > 25) {
	cout << "Nadvaha" << endl;
	}

	else if (bmi > 30) {
	cout << "Obezita" << endl;
	}

}