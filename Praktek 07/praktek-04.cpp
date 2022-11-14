#include <iostream>
using namespace std;

int main(){
	float pencacah, nilai, total;
	
	cout << "\n \t Menghitung Nilai Rata-Rata (Nilai 0 s/d 100) " << endl;
	cout << "\t Akhiri Dengan Memasukkan Nilai Negatif"<<endl;
	pencacah = 0;
	total = 0;
	
	while(1){
		cout << "\n \t Nilai ke - "<< pencacah+1 << " = "; cin >> nilai;
		if(nilai > 100){
			cout << "\t Nilai Di Atas Di Abaikan "<< endl;
			continue;
		}
		
		if(nilai < 0)
			break;
			pencacah++;
			total += nilai;
		
		
		cout << "\n \t Jumlah Nilai = " << pencacah << endl;
		cout << "\t total Nilai = " << total << endl;
		cout << "\t Nilai Rata-Rata = " << (total/pencacah)<<endl;
	}
}
