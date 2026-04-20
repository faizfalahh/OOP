#include <iostream>
using namespace std;

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
}