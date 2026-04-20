#include <iostream>
using namespace std;

class mahasiswa {
    private: // Data disembunyikan di sini
        int nim;
        string nama;
        float nilai;
      
}
class mahasiswa{
public :
    int nim;
    string nama;
    float nilai;

    void PrintData(){
        cout << "nim : " << nim << endl;
        cout << "nama :" << nama << endl;
        cout << "Nilai :" << nilai << endl;     
    }
}; //batas class

int main(){
    mahasiswa mhs;
    mhs.nim = 165;
    mhs.nama = "aldi taher";
    mhs.nilai = 90.5 ;
}