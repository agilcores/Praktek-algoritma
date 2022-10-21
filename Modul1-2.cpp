#include <iostream>
#include <cstdlib>
using namespace std;

int main (){
	char nama[21]; 
	char stambuk[7];
	char alamat[26];
	short umur;
	
	cout << "Masukkan Stanbuk Anda	:"; cin >> stambuk;
	cout << "Masukkan Nama Anda	:"; cin >> nama;
	cout << "Masukkan Alamat Anda	:"; cin >> alamat;
	cout << "Masukkan Umur Anda	:"; cin >> umur;
	// membersihkan layar	
	system("cls");
	
	// output
	
	cout << "Stanbuk anda adalah : " << stambuk << "\n";
	cout << "Nama anda adalah : " << nama << "\n";
	cout << "Alamat anda adalah : " << alamat << "\n";
	cout << "Umur anda adalah : " << umur << "\n";
	
	return 0;
	
	
}
