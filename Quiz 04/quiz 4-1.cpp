
#include <iostream>
using namespace std;

int main(){
	
//	deklarasi tipe data
	int noRegis, noRegisPascal = 0, noRegisBasic = 0, noRegisCpp = 0, noBhs, nilaiUjian;
	int nilaiBasic = 0, nilaiPascal = 0, nilaiCpp = 0;
	string jawaban;
	string nama, namaPascal = " ", namaBasic = " ", namaCpp = " ";
	

	while(true){
		cout << "PUSAT PENDIDIKAN INFORMATIKA \n \n";
		cout << "Masukkan No Registrasi : "; cin>>noRegis;
		cout << "Nama Peserta : ";cin>>nama;
		cout << "\n";
		cout << "Pilih Bahasa Pemrograman \n";
		cout << "1. Basic \n";
		cout << "2. Pascal \n";
		cout << "3. C++ \n \n";
		
		cout << "Kode Input Bahasa [1/2/3] : "; cin >> noBhs;
		
		// mengecek nilai agar tidak lebih dari 3 
		if(noBhs >= 4){
			cout << "Kode Bahasa Tidak Di Kenali :)";
			return false;
		}
		
		cout << "Input Nilai Ujian [0.100] : "; cin >> nilaiUjian; 
		
		// mengecek agar nilai ujian tidak lebih dari 100 dan kurang dari 0
		if(nilaiUjian > 100 || nilaiUjian < 0){
			cout << "Nilai tidak dalam kriteria";
			return false;
		}	
		
		switch(noBhs){
				case 1 : 
				if(nilaiUjian > nilaiBasic){
				noRegisBasic = noRegis;
				namaBasic = nama;
				nilaiBasic = nilaiUjian;
				}
				break;
				
				case 2 : 
				if(nilaiUjian > nilaiPascal){
				noRegisPascal = noRegis;
				namaPascal = nama;
				nilaiPascal = nilaiUjian;
				}
				break;
				
				case 3 : 
				if(nilaiUjian > nilaiCpp){
				noRegisCpp = noRegis;
				namaCpp = nama;
				nilaiCpp = nilaiUjian;
				}
				break;
				
			}	
			
			nilaiUjian = 0;
			
		cout << "Masih ada yang lain y/t : "; cin >> jawaban;
		
		
		
		if(jawaban == "t"){
			cout << "Nilai Tertinggi Pada Bahasa Basic : \n \n";
			
			cout << "Nilai Tertinggi Pada Basic : \n ";
			cout << "Nomor Registrasi : " << noRegisBasic << "\n";
			cout << "Nama Peserta : " << namaBasic << "\n";
			cout << "Nilai Basic : " << nilaiBasic << "\n \n";
			
			cout << "Nilai Tertinggi Pada Pascal : \n";
			cout << "Nomor Registrasi : " << noRegisPascal << "\n";
			cout << "Nama Peserta : " << namaPascal << "\n";
			cout << "Nilai Pascal : " << nilaiPascal << "\n \n";
			
			cout << "Nilai Tertinggi Pada C++ : \n";
			cout << "Nomor Registrasi : " << noRegisCpp << "\n";
			cout << "Nama Peserta : " << namaCpp << "\n";
			cout << "Nilai C++ : " << nilaiCpp << "\n";
			
			break;
		} 
		
		if(jawaban != "y" && "t"){
			cout << "kode salah";
			break;
		}
		
		
	}
	
	
	
	return 0;
}
