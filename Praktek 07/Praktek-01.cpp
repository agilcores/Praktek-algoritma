#include <iostream>
using namespace std;

short nilai, i = 1;
string stb, nama;

int main(){
	
	char jawab = 'y';
	short max = 0;
	
	while(jawab == 'y'){
		cout << "Masukkan Data Mahasiswa Ke : " << i << endl;
		cout << " No. Pokok : ";getline(cin, stb);
		cout << " Nama : ";getline(cin, nama);
		cout << " Nilai Akhir (0 - 100) : "; cin >> nilai;
		
		if(nilai > max)
			max = nilai;
			i++;
			cout << "Masih ada data [y/t] : "; cin >> jawab;
			cin.ignore();
		
		
	}
	
	cout << "Nilai Akhir Tertinggi Adalah : " << max;
}
