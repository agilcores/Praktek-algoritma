#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
	char nama[80];
	int n1,n2,n3;
	float m1,m2,m3,nilaiakhir;
	
	cout << "PROGRAM HITUNG NILAI AKHIR" << "\n";
	cout << "Nama Anda :";
	gets(nama);
	cout << "Nilai Keaktifan :";
	cin >> n1;
	cout << "Nilai Tugas :";
	cin >> n2;
	cout << "Nilai Ujian :";
	cin >> n3;
	
	m1 =20*n1/100;
	m2 =30*n2/100;
	m3 =50*n3/100;
	nilaiakhir =m1+m2+m3;
	
	cout << "Nama Siswa :" << nama << endl;
	cout << "Nilai Murni Keatifan :" << m1 << endl;
	cout << "Nilai Murni Tugas :" << m2 << endl;
	cout << "Nilai Murni Ujian :" << m3 << endl;
	cout << "Nilai Murni Akhir :" << nilaiakhir << endl;
	
return 0;
	
	
}
