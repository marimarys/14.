#include <iostream>
#include <ctime>
using namespace std;
int main() {
	//������� 2
	//1 ����� ������ �, ���������� 12 ����� ��������� ����� �� -5 �� 5. ����� ����� ��������� ������� 
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
	//2 ����� ������, ������� �������� 13 ��������� ����� ����� �� -12 �� 12. ����� ������������ ������������� ��������� ������� 
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
	//3 ����� ������, ������� �������� 11 ��������� ����� ����� �� 0 �� 20. ����� ���-�� ��������� �������,
	//������� ������� �� 3 ��� �� 5 ��� �� 7 
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
	//4 ����� ������ �� 15 ����� ����� �� 0 �� 25. ����� ����� ��������� �������, ������� �������� ��������� �������
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