#include<iostream>
using namespace std;

class Mahasiswa{
    public:
        string nama;
        double IPK;

        Mahasiswa(string nama, double IPK){
            this->nama = nama;
            this->IPK = IPK;
        }
        //method tanpa parameter dan tanpa return
        void tampilkanData(){
            cout << "Nama saya " << nama << ", IPK saya adalah ";
            cout << IPK << endl;
        }

        //method dengan paraeter dan tanpa return
        void ubahNama(const char* namaBaru){
            this->nama = namaBaru;
        }

        //method tanpa paramater dan dengan return
        string getNama(){
            return this->nama;
        }

        double getIPK(){
            return IPK;
        }

        //method dengan paramater dan dengan return
        double katorlIPK(const double &tambahanNilai){
            return this->IPK + tambahanNilai;
        }
};

int main(int argc, char const *argv[])
{
    Mahasiswa mahasiswa1 = Mahasiswa("ucup", 2.5);
    Mahasiswa mahasiswa2 = Mahasiswa("otong", 4.0);
    mahasiswa1.tampilkanData();
    mahasiswa2.tampilkanData();

    mahasiswa1.ubahNama("Mario");
    mahasiswa1.tampilkanData();

    string dataNama = mahasiswa1.getNama();
    cout << "dataNama = " << dataNama << endl;
    cout << "dataIPK = " << mahasiswa1.getIPK() << endl;
    cout << "nilai katrol = " << mahasiswa2.katorlIPK(-2.23) << endl;

    return 0;
}
