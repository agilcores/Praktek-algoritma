#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;
main()
{
	int modal, n;
	double cicilan, bunga;
	int modal1;
	int modalbulanan,bungabulanan,modaltahunan,bungatahunan;
	int lama, thn,bln = 1;
	
	cout<<"Mauskkan Modal yang akan dipinjam : ";cin>>modal;
	cout<<"Mauskkan Bunga Pinjaman / tahun : ";cin>>bunga;
	cout<<"Berapa Tahun Akan Dipinjam : ";cin>>lama;
	
	bunga = bunga / 12;
	n = lama*12; 
	cicilan = (modal * bunga * (pow(bunga+1, n))) / (pow((bunga+1), n) - 1);
	
cout<<"Pembayaran Cicilan Setiap Bulan = Rp. "<<cicilan << "\n \n";

for(thn = 1; thn <= lama; thn++){
	bungatahunan=0.0;
	modaltahunan=0.0;
	
	cout << thn << "\n";
	
	for(bln = 1; bln <= 12; bln++){
		bungabulanan = bunga*modal;
		modalbulanan= cicilan-bungabulanan;
		bungatahunan = bungatahunan + bungabulanan;
		modaltahunan= bungatahunan + modalbulanan;
		cout<<"tahun : " << thn << "\n";
		cout << "Modal Bulanan ke : "<< bln << " : "<< modalbulanan << "\n";
		cout << "Bunga Bulanan : " << bungabulanan << "\n \n \n";
		modal1 = modal-modalbulanan;
	}
	
	cout << "Akhir tahun :- " << thn << "\n";
	cout << "Modal Terbayar = " << modaltahunan << "\n";
	cout << "Bunga Terbayar = " << bungatahunan << "\n";
	cout << "Sisa utang Modal = " << modal1 << "\n";
	
	
}
}
