#include <iostream>
using namespace std;

int main(){
	
	int jumlah, bayar;
	float discon;
	
	cout << "\n \t Masukkan Jumlah Pembelian Rp. "; cin>>jumlah;
	cout << "\t ================================ \n";
	
	if(jumlah > 50000){
		discon = 0.1 * jumlah;
	} else {
		discon = 0;
	}
	
	bayar = jumlah - discon;
	cout << "\t Jumlah Pembelian Rp. " << jumlah << endl;
	cout << "\t Jumlah Discount Rp. " << discon <<"\n";
	cout << "\t---------------------------------------\n";
	cout << "\t Jumlah Pembayaran Rp. "<<bayar<<endl;
	
	return 0;
}
