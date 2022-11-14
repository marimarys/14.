#include <iostream>
#include <ctime>
using namespace std;
int main() {
	//вариант 2
	//1 задан массив ј, содержащий 12 целых случайных чисел от -5 до 5. Ќайти сумму элементов массива 
	/*const int n = 12;
	int s = 0;
	int mas[n];
	srand(time(nullptr));
	for (int i = 0; i < n; i++) {
		mas[i] = rand() % 11 - 5;
		cout << mas[i] << ' ';
		s += mas[i];
	}
	cout<< "s=" << s << endl;
	cout << endl;*/
	//2 задан массив, который содержит 13 случайных целых чисел от -12 до 12. Ќайти произведение отрицательных элементов массива 
	/*const int n = 13;
	int mas[n];
	srand(time(nullptr));
	for (int i = 0; i < n; i++) {
		mas[i] = rand() % 25 - 12;
		cout << mas[i] << ' ';
		}
	cout << endl;
	long long p = 1;
	for (int i = 0; i < n; i++) {
		if (mas[i] < 0) {
			p *= mas[i];
		}
	}
	cout << "p=" << p << endl;*/
	//3 задан массив, который содержит 11 случайных целых чисел от 0 до 20. Ќайти кол-во элементов массива,
	//которые дел€тс€ на 3 или на 5 или на 7 
	/*const int n = 11;
	int mas[n];
	int k = 0;
	srand(time(nullptr));
	for (int i = 0; i < n; i++) {
		mas[i] = rand() % 21;
		cout << mas[i] << ' ';
	}
	cout << endl;
	for (int i = 0; i < n; i++) {
		if (mas[i] % 3 == 0 || mas[i] % 5 == 0 || mas[i] % 7 == 0) {
			k += 1;
		}
	}
	cout << "kol-vo=" << k << endl;*/
	//4 задан массив из 15 целых чисел от 0 до 25. Ќайти сумму элементов массива, которые €вл€ютс€ нечЄтными числами
	const int n = 15;
	int mas[n];
	int s = 0;
	srand(time(nullptr));
	for (int i = 0; i < n; i++) {
		mas[i] = rand() % 26;
		cout << mas[i] << ' ';
	}
	cout << endl;
	for (int i = 0; i < n; i++) {
		if (mas[i] % 2 != 0 ){
			s += mas[i];
		}
	}
	cout << "s=" << s << endl;
}