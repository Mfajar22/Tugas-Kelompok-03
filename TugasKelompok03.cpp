#include <iostream>
using namespace std;

void main() {
	string kata;
	cout << "---Check kata---\n\n";
	cout << "Input kata : ";
	cin >> kata;

	string kataBalik = kata;
	reverse(kataBalik.begin(), kataBalik.end());

	cout << "Hasil ; " << boolalpha << (kataBalik == kata);
}