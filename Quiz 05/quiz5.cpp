#include <string>
#include <iostream>
using namespace std;
string namaBarang, jenisBarang, tanya = "y", besaranPajakImport;
int hargaBarang, jumlahBarang, kelasBarang, totalHargaBarang, TotalNilaiPajak;

// fungsi makanan
void makanan()
{
    jenisBarang = __func__;
    besaranPajakImport = "5%";
    totalHargaBarang = (jumlahBarang * hargaBarang);
    TotalNilaiPajak = totalHargaBarang * 0.05;
    cout << "\n \n";
}


// fungsi pakaian
void pakaian()
{
    jenisBarang = __func__;
    besaranPajakImport = "10%";
    totalHargaBarang = (jumlahBarang * hargaBarang);
    TotalNilaiPajak = totalHargaBarang * 0.1;
    cout << "\n \n";
}


// fungsi mesin
void mesinMesin()
{
    jenisBarang = __func__;
    besaranPajakImport = "20%";
    totalHargaBarang = (jumlahBarang * hargaBarang);
    TotalNilaiPajak = totalHargaBarang * 0.2;
    cout << "\n \n";
}



// main  function
int main()
{
    cout << "SISTEM PERDAGANGAN \n" << endl;
    do
    {
        cout << "Masukan Nama Barang: ";
        cin >> namaBarang;
        cout << "Masukan Harga Barang: ";
        cin >> hargaBarang;
        cout << "Masukan Jumlah Barang: ";
        cin >> jumlahBarang;
        cout << "Masukan Kelas Barang\n1. Makanan 5%\n2. Pakaian 10%\n3. Mesin - Mesin 20%\nPilihan [1/2/3]: ";
        cin >> kelasBarang;
        switch (kelasBarang)
        {
        case 1:
            makanan();
            break;
        case 2:
            pakaian();
            break;
        case 3:
            mesinMesin();
            break;
        default:
            cout << "Pilihan " << kelasBarang << " Tidak Tersedia Mohon Memasukan Data Kembali!";
        }
        cout << "Jenis Barang: " << jenisBarang << "\n";
        cout << "Besaran Pajak Import: " << besaranPajakImport << "\n";
        cout << "Total Harga Barang: Rp. " << totalHargaBarang << "\n";
        cout << "Total Nilai Pajak : Rp. " << TotalNilaiPajak << "\n";
        cout << "Masih Ingin Menginput Kembali Data? <y/n> : ";
        cin >>tanya;
        if(tanya == "n"){
        	cout << "\n \n ";
        	cout << "Terima Kasih Sudah Mengisi Data Di Sini. Kami Tunggu Di Gunakan Kembali \n \n";
		}
    } while (tanya == "y");
}
