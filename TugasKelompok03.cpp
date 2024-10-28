#include <iostream>
using namespace std;

void main() {
	string kata;
	string kataBalik;
	cout << "---Check kata---\n\n";
	cout << "Input kata : ";
	cin >> kata;

	for (int i = kata.length() - 1; i >= 0; i--) {
		kataBalik += kata[i];
	}

	cout << "Hasil : " << boolalpha << (kataBalik == kata);
}
