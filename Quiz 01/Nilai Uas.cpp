#include <iostream>
using namespace std;

int main() {
	
	string namaSiswa;
	float keaktifanSiswa;
	float nilaiTugas;
	float nilaiUjian;
	
	// input nilai; 
	cout << "Masukkan Nama Siswa 		: ";
	getline(cin, namaSiswa);
	
	cout << "Masukkan Nilai Keaktifan 	: ";
	cin >> keaktifanSiswa;
	
	cout << "Masukkan Nilai Tugas 		: ";
	cin >> nilaiTugas;
	
	cout << "Masukkan Nilai Ujian 		: ";
	cin >> nilaiUjian;
	
	
	
	int nilaiMurniKeaktifan = keaktifanSiswa * 20 / 100;
	int nilaiMurniTugas = nilaiTugas * 30 / 100;
	int nilaiMurniUjian = nilaiUjian * 50 / 100;
	int nilaiAkhir = nilaiMurniKeaktifan + nilaiMurniTugas + nilaiMurniUjian;
	
	cout << "\n \n";
	
	cout << "======= TOTAL NILAI ======= \n \n";
	cout << "Nama Siswa 			: " << namaSiswa << "\n";
	cout << "nilai Murni Keaktifan		: " << nilaiMurniKeaktifan << "\n";
	cout << "Nilai Murni Tugas 		: " << nilaiMurniTugas << "\n";
	cout << "Nilai Murni Ujian 		: " << nilaiMurniUjian << "\n";
	cout << "Nilai AKhir 			: " << nilaiAkhir << "\n";
	
	return 0;
}
