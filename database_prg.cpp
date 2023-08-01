#include<iostream>
#include<string>
#include<fstream>
#include<iomanip>
using namespace std;

//fungis bold
ostream& bold_on(ostream& os){
    return os << "\e[1m";
}
ostream& bold_off(ostream& os){
    return os << "\e[0m";
}

class Mahasiswa{
    public:
        string nama;
        string NIM;
        string jurusan;

         //constructor-nya
        Mahasiswa(string nama, string NIM, string jurusan){
            this->nama = nama;
            this->NIM = NIM;
            this->jurusan = jurusan;
        }

        string stringify(){
            return "\n" + nama + " " + NIM + " " + jurusan;
        }
};

class DBase{
    public:
        fstream in;
        ofstream out;
        string fileName;

        DBase(const char* fileName){
            this->fileName = fileName;
        }

        void save(Mahasiswa data){

            DBase::out.open(DBase::fileName,ios::app);
            DBase::out << data.stringify();
            DBase::out.close();
        }

        void showAll(){
            DBase::in.open(DBase::fileName,ios::in);
            string nama,NIM,jurusan;
            int index = 1;
            while (!DBase::in.eof()) {
                DBase::in >> nama;
                DBase::in >> NIM;
                DBase::in >> jurusan;
                cout << setw(3) << index++ << ".|";
                cout << setw(8) << nama << "|";
                cout << setw(8) << NIM << "|";
                cout << setw(15) << jurusan << "|" << endl;
            }
            DBase::in.close();
            
        }
};


int main(){

    DBase database = DBase("data.txt"); 

    cout << setw(5) << bold_on << "No."<< "|";
    cout << setw(8) << "NAMA" << "|";
    cout << setw(8) << "NIM" << "|";
    cout << setw(15) << "JURUSAN" << "|" << bold_off << endl;
    //menampilkan seluruh data di database
    database.showAll();
    
    int n;
    cout << "\nJUMLAH MAHASISWA: "; cin >> n;
    for (int i = 1; i <= n; i++) {
        //input pengguna
        string nama,NIM,jurusan;
        cout << bold_on << "\nMASUKKAN DATA MAHASISWA " << i; 
        cout << bold_off << endl;
    
        cout << "Nama       : "; cin >> nama;
        cout << "NIM        : "; cin >> NIM;
        cout << "Jurusan    : "; cin >> jurusan;

        //membuat objek objek yang diperlukan
        Mahasiswa *dataMahasiswa = new Mahasiswa(nama,NIM, jurusan);

        //save data ke database
        database.save(*dataMahasiswa);
        cout << endl;
    } 

    return 0;
}
