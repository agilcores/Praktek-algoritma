#include <iostream>
using namespace std;

int main() {
	int Nilai1, Nilai2, a;
	float b;
	cout<<"Masukkan Bilangan Pertama : "; 
	cin>>Nilai1;
	
	cout<<"Masukkan Bilangan Kedua : "; 
	cin>>Nilai2;
	// penjumlahan
	a = Nilai1 + Nilai2;
	cout << "Hasil : " << Nilai1 << " + " << Nilai2<< "=" << a << endl;
	a= Nilai1 - Nilai2;
	cout << "Hasil : " << Nilai1 << " - " << Nilai2<< "=" << a << endl;
	b =  Nilai1 * Nilai2;
	cout << "Hasil : " << Nilai1 << " * " << Nilai2<< "=" << b << endl;
	b = float(Nilai1) / float(Nilai2);
	cout << "Hasil : " << Nilai1 << " / " << Nilai2<< "=" << b << endl;
	b =  Nilai1 % Nilai2;
	cout << "Hasil : " << Nilai1 << " MOD " << Nilai2<< "=" << b << endl;
	a =  Nilai1 / Nilai2;
	cout << "Hasil : " << Nilai1 << " DIV " << Nilai2<< "=" << a << endl;
}
