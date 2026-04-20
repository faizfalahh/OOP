#include <iostream>
using namespace std;

class barang{
public:
    string NamaBarang;
    int jumlah;
    string kategori;
    string tanggalProduksi;

    void printdata(){
        cout << " nama barang : " << NamaBarang << endl;
        cout << " kategori : " << kategori << endl;
        cout << " tanggal produksi : " << tanggalProduksi << endl;
        cout << " jumlah : " << jumlah << endl;
    }
}; //Batas class

int main (){
    barang Elektronik;
    Elektronik.NamaBarang = " ac ";
    Elektronik.kategori = " elektronik ";
    Elektronik.tanggalProduksi = " 10-12-2024 ";
    Elektronik.jumlah = 3 ;

    barang Nonelektronik;
    Nonelektronik.NamaBarang = " kasur ";
    Nonelektronik.kategori = " nonelektronik ";
    Nonelektronik.tanggalProduksi = " 20-30-2021 ";
    Nonelektronik.jumlah = 5 ;

    Elektronik.printdata();
    Elektronik.printdata();
}