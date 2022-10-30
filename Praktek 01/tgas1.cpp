#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
	int harga,ongkos;
	float pajak,total;
	
	cout << "Harga Alat			:";
	cin >> harga;
	cout << "Ongkos Kerja			:";
	cin >> ongkos;
	
	pajak =(harga+ongkos)*10/100;
	total=harga+ongkos+pajak;
	
	cout << "NOTA PEMBAYARAN" << "\n";
	
	cout << "Harga Kerja			:" << harga << endl;
	cout << "Ongkos Kerja			:" << ongkos << endl;
	cout << "Pajak PPN 10%			:" << pajak << endl;
	cout << "Total Pembayaran		:" << total << endl;
	
	cout << "TERIMA KASIH ATAS KUNJUNGAN ANDA" << endl;

	return 0;
	
	
}
