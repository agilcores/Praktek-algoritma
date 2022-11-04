#include <iostream>
using namespace std;

int main(){
	
	char nilai;
	cout << "\n Masukkan Nilai anda (A, B, C, D, E, K) : "; cin >> nilai;
	switch(nilai){
		case 'A' : cout << "Nilai Anda Baik Sekali " << endl; break;
		case 'B' : cout << "Nilai Anda Baik " << endl; break;
		case 'c':
		case 'C' : cout << "Nilai Anda Cukup " << endl; break;
		case 'D' : cout << "Nilai Anda Baik Kurang " << endl; break;
		case 'E' : cout << "Nilai Anda Baik Kurang Sekali " << endl; break;
		case 'K' : cout << "Tidak Lulus" << endl; break;
		default : cout << "Anda Salah Input"<< endl;
	}	
	
	return 0;
}
