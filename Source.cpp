//Variant 2
//1
#include <iostream>
#include <ctime>
using namespace std;
int main() {
	//	const int n = 12;
	//	int mas[n];
	//	int sum = 0;
	//	srand(time(nullptr));
	//	for (int i = 0; i < n; i++) {
	//		mas[i] = rand() % 11 - 5;
	//		cout << mas[i] << " ";
	//		sum = mas[i] + sum;
	//	}
	//	cout << endl;
	//	cout << sum;

		//2
	const int n = 13;
	int mas[n];
	srand(time(nullptr));
	long long pr = 1;
	for (int i = 0; i < n; i++) {
		mas[i] = rand() % -25 - 12;
		cout << mas[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < n; i++) {
		if (mas[i] < 0) {
			pr = pr * mas[i];
		}
		cout << pr << endl;
	}
	//3
	//const int n = 11;
	//int mas[n];
	//int kolvo = 0;
	//srand(time(nullptr));
	//for (int i = 0; i < n; i++) {
	//mas[i] = rand() % 21;
	//cout << mas[i] << " ";
	//}
	//cout << endl;
	//for (int i = 0; i < n; i++)
	//if (((mas[i] % 3 == 0)||(mas[i] % 5 == 0)||(mas[i] % 7 == 0))) {
	//	kolvo++;
	//}
	//cout << kolvo << endl;

	//4
	/*const int n = 15;
	int mas[n];
	int sum = 0;
	srand(time(nullptr));
	for (int i = 0; i < n; i++) {
	mas[i] = rand() % 26;
	cout << mas[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < n; i++)
	if (mas[i] % 2 != 0) {
		sum = mas[i] + sum;
	}
	cout << sum << endl;*/
}

