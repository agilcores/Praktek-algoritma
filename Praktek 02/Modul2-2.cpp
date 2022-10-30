#include <iostream>
using namespace std;


int main(){
	int x;
	
	cout << "Masukkkan Sebuah Bilangan (X) : "; 
	cin>> x ;
	cout << "Masukkan nilai awal X = " << x << endl;
	cout << "Nilai X Setelah X++ : " << x++ << endl;
	cout << "Nilai X Setelah ++X : " << ++x << endl;
	cout << "Nilai X Setelah X-- : " << x-- << endl;
	cout << "Nilai X Setelah --X : " << --x << endl;
	return (0);
}
