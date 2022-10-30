#include <iostream>
#include <conio.h>
using namespace std;

int main() {
	int i, j, k;
	
	cout << "Masukkan nilai i : ";  cin >> i;
	cout << "Masukkan nilai j : ";  cin >> j;
	cout << "Masukkan nilai k : ";  cin >> k;
	
	cout << "Hasil " << i << " > " << j << " --> " << (i > j) << endl;
	cout << "Hasil " << i << " >= " << k << " --> " << (i >= k) << endl;
	cout << "Hasil " << j << " < " << k << " --> " << (j < k) << endl;
	cout << "Hasil " << j << " <= " << k << " --> " << (j <= k) << endl;
	cout << "Hasil " << i << " == " << j << " --> " << (i == j) << endl;
	cout << "Hasil " << i << " != " << k << " --> " << (i != k) << endl;
	
	cin.ignore();
	cin.get();
	cout << endl;
	
	cout << "Hasil ! " << i << " < " << j << " --> " << (!(j < j)) << endl;
	cout << "Hasil (" << i << " < " << j << ") && (" << j << " < " << k << ") --> " << ((i < j) && (j > k)) << endl;
	cout << "Hasil (" << i << " < " << j << ") || (" << j << " < " << k << ") --> " << ((i < j) || (j > k)) << endl;
	
}

