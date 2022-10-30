#include <iostream>
using namespace std;

int main(){
	
	int siswa, bus, minibus;
	
	cout << "Masukkan Jumlah Siswa 	: "; cin >> siswa;
	cout << "========================================= \n \n";
	
	if(siswa > 30){
		bus = siswa / 30;
		minibus = (siswa % 30) / 7;
		
		cout << "Jumlah bus : " << bus << "		Jumlah Siswa : " << bus * 30 << "\n";
		cout << "Jumlah minibus : " << minibus<<"		Jumlah Siswa : "<< minibus * 7 << "\n";
		cout << "Siswa Tertinggal : " << minibus % 7;
		return false;
		
	} else {
		bus = siswa / 30;
		minibus = siswa / 7;
		
		cout << "Jumlah bus : " << bus << "		Jumlah Siswa : " << bus * 30 << "\n";
		cout << "Jumlah minibus : " << minibus<<"		Jumlah Siswa : "<< minibus * 7 << "\n";
		cout << "Siswa Tertinggal : " << siswa % 7;
		return false;
	}
		
	return 0;
}
