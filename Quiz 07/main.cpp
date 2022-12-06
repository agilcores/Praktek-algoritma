#include <iostream>
#include <stdio.h>
#include <iomanip>
using namespace std;

int count = 0, a, b, c, d, e, maxN, minN, maxS, minS;
int stanbuk[999], nilai[999], total;
string lanjut = "y", nama[999];
string maxNama, minNama; 

char nilaiHuruf(int nilai)
{
	if(nilai >= 80 && nilai <= 100){
		a++;
		return 'A';
	} else if(nilai >= 65 && nilai <= 79){
		b++;
		return 'B';
	} else if(nilai >= 50 && nilai <= 64){
		c++;
		return 'C';
	} else if(nilai >= 35 && nilai <= 49){
		d++;
		return 'D';
	} else {
		e++;
		return 'E';
	}
}

void inputBreaks(int &input)
{
	cout << "Masukkan Nilai [100 - 0] : "; cin >> input;
	while(input >= 101 || input < 0){
		cout << "Input Anda Lebih Dari 100 Atau Kurang Dari 0 \n";
		cout << "Masukkan Nilai [100 .. 0]";
		cin>> input;
	}
}

void initialize()
{
	cout << "------------------------------ \n";
	cout << "Masukkan Stanbuk : "; cin >> stanbuk[count];
	cout << "Masukkan Nama : "; cin >> nama[count];
	inputBreaks(nilai[count]);
	cout << "Nilai Huruf : " << nilaiHuruf(nilai[count]) << endl;
	total = total + nilai[count];
	count ++;
}

int main()
{
	while(lanjut == "y"){
		initialize();
		cout << "Masih Ada Mahasiswa Lain ? y/n : ";
		cin >> lanjut;
	}
	
	int rata = total / count;
	system("cls");
	cout << "--------------- \n";
	cout << "Hasil Rekapitulasi \n";
	cout << "Rata - Rata : " << rata << endl;
	cout << "\tA : " << a << endl;
	cout << "\tB : " << b << endl;
	cout << "\tC : " << c << endl;
	cout << "\tD : " << d << endl;
	cout << "\tE : " << e << endl;
	cout << endl;
	
	cout << "Daftar Nilai Mahasiswa \n";
	
	cout << "| No | Stanbuk | Nama Mahasiswa | Nilai | N.Huruf |" << endl;
	
	cout << "------ \n";
	
	for(int i = 0; i < count; i++){
		if(nilai[i] <= minN || minN <= 0){
			minNama = nama[i];
			minS = stanbuk[i];
			minN = nilai[i];
		}
		
		if(nilai[i] > maxN){
			maxN = nilai[i];
			maxS = stanbuk[i];
			maxNama = nama[i];
		}
		
		cout << "| " << setiosflags(ios::left) << setw(3) << i + 1 << "|";
		cout << " " << setiosflags(ios::left) << setw(8) << stanbuk[i] << "|";
		cout << " " << setiosflags(ios::left) << setw(15) << nama[i] << "|";
		cout << " " << setiosflags(ios::left) << setw(6) << nilai[i] << "|";
		cout << " " << setiosflags(ios::left) << setw(8) << nilaiHuruf(nilai[i]) << "|" << endl;  
	}
	
	cout << "---------------------- \n";
	cout << "\n";
	cout << "Nilai Tertinggi : "<<maxN << endl;
	cout << "\t Stanbuk : " << maxS << endl;
	cout << "\t Nama : " << maxNama << endl;
	
	cout << "------------------------------ \n";
	
	cout << "Nilai Terendah : " << minN << endl;
	cout << "\t Stambuk : " << minS << endl;
	cout << "\t Nama : " << minNama << endl;
	
	return 0;
	
	
}


