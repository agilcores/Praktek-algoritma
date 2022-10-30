#include <iostream>
using namespace std;

int main() {
	
	
	int jam, menit, detik;
	int jamSelesai, menitSelesai, detikSelesai;
	
	cout << " ========= Menghitung Durasi Waktu Perkuliahan ========= " << "\n \n \n";
	cout << " ========= Masukkan Jam Masuk ========= "  << "\n \n";
	
	cout << "Masukkan Jam 	: "; cin >> jam;
	cout << "Masukkan Menit 	: "; cin >> menit;
	cout << "Masukkan Detik 	: "; cin >> detik;
	
	cout << " ========= Masukkan Jam Selesai ========= "  << "\n \n";
	
	cout << "Masukkan Jam 	: "; cin >> jamSelesai;
	cout << "Masukkan Menit 	: "; cin >> menitSelesai;
	cout << "Masukkan Detik 	: "; cin >> detikSelesai;
	
	// validasi angka jam	
	if(jam && jamSelesai > 24){
		cout << "Salah Jam!!! \n";
		return false;
	} else if(menit && menitSelesai > 60){
		cout << "Salah Jam!!! \n";
		return false;
	} else if(detik && detikSelesai > 60){
		cout << "Salah Jam!!! \n";
		return false;
	}
	
	cout << "Durasi Waktu Perkuliahan Adalah : \n \n";
	int totalJam = (jamSelesai - jam);
	int totalMenit = (menitSelesai - menit);
	int totalDetik = (detikSelesai - detik);
	
	cout << "Jam 		: " << totalJam << "Jam \n";
	cout << "Menit 		: " << totalMenit << "Menit \n";
	cout << "Detik 		: " << totalDetik << "Detik \n";
	
	return 0;
}
