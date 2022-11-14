#include <iostream>
using namespace std;

int main()
{
	float ppn=0.10;
	float total;
	char code;
	int jenis, uang, hargapulsa, kembalian;
	string codepulsa;
	
	cout<<"Counter Pulsa Maju Mundur"<<endl;
	cout<<"--------------------------"<<endl;
	cout<<"Masukkan Kode Operator : ";cin>>code;
	switch(code){
		case 'T':
			codepulsa="Telkomsel";
			break;
		case 'X':
			codepulsa="XL";
			break;
		case 'I':
			codepulsa="IM3";
			break;
		default : 
			cout << "Tidak Kenal";
			return false;
	}
	
	cout<<"Nama Operator : "<<codepulsa<<endl;
	cout<<"Masukkan Jenis Pulsa : ";cin>>jenis;
	switch(jenis){
		case 20:
			if (code=='T'){
				hargapulsa=21000;
			}else if (code=='X'){
				hargapulsa=21000;
			}else if (code=='I'){
				hargapulsa=20000;
			}
			break;
		case 10:
			if (code=='T'){
				hargapulsa=12000;
			}else if (code=='X'){
				hargapulsa=12000;
			}else if (code=='I'){
				hargapulsa=11000;
			}
			break;
		case 5:
			if (code=='T'){
				hargapulsa=7000;
			}else if (code=='X'){
				hargapulsa=7000;
			}else if (code=='I'){
				hargapulsa=6000;
			}
			break;
				default:
				cout<<"Salah Code"<<endl;
				return false;
				break; 
	}
	ppn=hargapulsa*0.10;
	
	cout<<"Harga Pulsa Rp. "<<hargapulsa<<endl;
	cout<<"PPN 10% Rp. "<<ppn<<endl;
	cout<<"Total Bayar Rp. "<<hargapulsa+ppn<<endl;
	cout<<"Masukkan Jumlah Uang : ";cin>>uang;
	if(uang < 6000){
		cout << "Uang Anda Kurang!";
		
	} else {
		cout<<"Kembalian : "<<uang-hargapulsa-ppn;
	}
}
