#include <iostream>
#include <cstdlib>

using namespace std;

int no_menu;
int main(){
	do {
		
		system("cls");
		cout << "\n \t MENU HARI INI \N";
		cout << "\t ------------------------- \n";
		cout << "\t 1. Nasi Goreng	\n";
		cout << "\t 2. Nasi Soto Ayam \n";
		cout << "\t 3. Gado - Gado \n";
		cout << "\t 4. Bubur Ayam \n";
		cout << "\t 5. Nasi Rawon \n";
		cout << "\t Masukkan Pesanan anda [0=selesai] : ";
		cin >> no_menu;
		
		switch(no_menu){
			case 1 : cout << "\n \t Nasi Goreng Rp. 7.500, -"; break;
			case 2 : cout << "\n \t Nasi Soto Ayam Rp. 8.000, -"; break;
			case 3 : cout << "\n \t Gado - Gado Rp. 6.000, -"; break;
			case 4 : cout << "\n \t Bubur Ayam Rp. 5.000, -"; break;
			case 5 : cout << "\n \t Nasi Rawon Rp. 9.000, -"; break;
			case 0 : cout << "\n \t Terima Kasih ...."; break;
			default : cout << "\n \t Maaf Menu tidak Tersedia !!!";
		}
		cin.ignore(); cin.get();
			
	} while(no_menu != 0);
}
