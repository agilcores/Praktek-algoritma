#include <iostream>
using namespace std;

int main(){
	short bil, total = 0;
	
	cout << "\n Masukkan 5 Data Bilangan Bulat : " << endl;
	for(short a = 0; a < 5; a++){
		cout << "Bilangan ke - "<< a+1 << " : ";
		cin>>bil;
		total += bil;
	}
	cout << endl << "Total Akumulasi Bilangan : " << total << endl;
} 
