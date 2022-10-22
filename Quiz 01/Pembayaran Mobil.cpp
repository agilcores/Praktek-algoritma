#include <iostream>
#include <iomanip>
using namespace std;


int main() {
	int hargaAlat;
	int ongkosKerja;
	
	cout << "Masukkan Harga ALat : "; 
	cin >> hargaAlat;
	cout << "Masukkan Ongkos Kerja : ";
	cin >> ongkosKerja;
	
	int totalPajak = (hargaAlat + ongkosKerja) * 10 / 100;
	int totalPembayaran = hargaAlat + ongkosKerja + totalPajak;
	
	
	cout << "\n \n";
	cout << "BENGKEL MOBIL MAJU MUNDUR \n";
	cout << "NOTA PEMBAYARAN \n \n \n";
	cout << "Harga Alat 		: " << setw(3) << setw(5) << right << "Rp. " << hargaAlat << "\n";
	cout << "Ongkos Kerja 		: " << setw(3) << setw(5) << right << "Rp. " << ongkosKerja << "\n";
	cout << "Total Pajak 		: " << setw(3) << setw(5) << right << "Rp. " << totalPajak << "\n";
	cout << "Total Pembayaran 	: " << setw(3) << setw(5) << right << "Rp. " << totalPembayaran << "\n";
		
	
	return 0;
}
