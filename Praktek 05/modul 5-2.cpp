#include <iostream>
using namespace std;

int main(){
	
	float Bil1, Bil2, Hasil;
	short pilihan;
	
		cout << "Masukkan Bilangan Pertama : "; cin >> Bil1;
		cout << "Masukkan Bilangan Kedua : "; cin >> Bil2;
		cout << "\n Pilihlah Operasi Bilangan Berikut Ini : ";
		cout << " 1. Penjumlahan \n";
		cout << " 2. Pengurangan \n";
		cout << " 3. Perkalian \n";
		cout << " 4. Pembagian \n";
		cout << " 5. Sisa Pembagian \n";
		cout << "Masukkan Pilihan Anda : "; cin >> pilihan;
		
		if(pilihan == 1){
			Hasil = Bil1 + Bil2;
		} else if(pilihan == 2){
			Hasil = Bil1 - Bil2;
		} else if(pilihan == 3){
			Hasil = Bil1 * Bil2;
		} else if((pilihan == 4) || (pilihan == 5)){
			if(Bil2 == 0.0){
				cout << "Operasi Pembagian Di Batalkan \n";
				cout << "Bilangan Kedua = 0 \n";
				Hasil = 0.0;
			} else if(pilihan == 5){
				Hasil = (int)Bil1 % (int)Bil2;
			} else {
				Hasil = Bil1 / Bil2;
			}
		}
		
		if((pilihan < 6) && (pilihan > 0)){
			cout << "Hasil Operasi = " << Hasil<< endl;
		}

	
	return 0;
}
