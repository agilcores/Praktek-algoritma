#include <iostream>
using namespace std;

int main(){
	int tgl, bln;
	float thn;
	
	cout << "Masukkan Tanggal Kelahiran Anda (tlg) : ";
	cin >> tgl;
	cout << "Masukkan Bulan Kelahiran Anda (bln) : ";
	cin >> bln;
	cout << "Masukkan Tahun Lahir Anda (thn), isi 2 digit terakhir : ";
	cin >> thn;
	
	tgl += bln; 
	cout << "Nilai Tgl Setelah tgl += bln adalah : " << tgl << endl; 
	tgl -= bln; 
	cout << "Nilai Tgl Setelah tgl -= bln adalah : " << tgl << endl; 
	tgl %= bln; 
	cout << "Nilai Tgl Setelah tgl %= bln adalah : " << tgl << endl; 
	tgl *= bln; 
	cout << "Nilai Tgl Setelah tgl *= bln adalah : " << tgl << endl; 
	tgl /= bln; 
	cout << "Nilai Tgl Setelah tgl /= bln adalah : " << tgl << endl; 
	return 0;
}

