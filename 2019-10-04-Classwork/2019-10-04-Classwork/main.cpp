// Name:Alexander Escobar
// Intro to	CS
// Periodd 1
// Mr. Williams
// 2019-10-04-Classwork

#include <iostream>
using namespace std;

int main()
{
	// 3
	float pi = 4.0 * (1.0 - (1.0 / 3.0) + (1.0 / 5.0) - (1.0 / 7.0) + (1.0 / 9.0) - (1.0 / 11.0));
	float pi2 = 4.0 * (1.0 - (1.0 / 3.0) + (1.0 / 5.0) - (1.0 / 7.0) + (1.0 / 9.0) - (1.0 / 11.0) + (1.0 / 13.0));
	cout << "pi = " << pi << endl;
		cout << "pi2 = " << pi2 << endl;

		//4
		float c;
		cout << "Enter a degree in celsuis: ";
			cin >> c;
		float f = (9 / 5) * c + 32;
		cout << c << " in Farenheit is " << f << endl;

		//homework
		//circle
		float r = 5.5;
		float p = 22 / 7;
			float perimeter = 2 * r * p;
			float area = r * r * p;
			cout << "perimeter = " << perimeter << endl;
			cout << "area = " << area << endl;
			//rectangle
			float w = 4.5;
			float h = 7.9;
			float perimeter2 = (2 * w) + (2 * h);
				float area2 = w * h;
				cout << "perimeter2 = " << perimeter2 << endl;
			cout << "area2 = " << area2 << endl;

}