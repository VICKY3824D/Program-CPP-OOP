#include<iostream>
#include<iomanip>

using namespace std;

class PrismaSegiempat{
    private:
        double panjang;
        double lebar;
        double tinggi;

        double volume(){
            return panjang * lebar * tinggi;
        }
    
    public:
        //konstruktor untuk balok(memiliki tiga parameter)
        PrismaSegiempat(double panjang, double lebar, double tinggi){
            this->panjang = panjang;
            this->lebar = lebar;
            this->tinggi = tinggi;
        }

        //konstruktor untuk kubus(memiliki satu parameter)
        PrismaSegiempat(double sisi) {
            this->panjang = this->lebar = this->tinggi = sisi;
        }

        //jika menggunakan private maka wajib menyertakan kode dibawah ini
        void setPanjang(double nilai) {panjang = nilai;}
        double getPanjang() {return panjang;}
        void setLebar(double nilai) {lebar = nilai;}
        double getLebar() {return lebar;}
        void setTinggi(double nilai) {tinggi = nilai;}
        double getTinggi() {return tinggi;}

        void cetakVolume(string namaBangun){
            cout << fixed;
            cout << "Volume " << namaBangun << " = ";
            cout << volume() << endl;
        }
};

int main(){

    PrismaSegiempat *obj1, *obj2;

    //membuat balok
    obj1 = new PrismaSegiempat(10.0, 9.0, 8.0);
    obj1->cetakVolume("Balok");

    //membuat kubus
    obj2 = new PrismaSegiempat(5.0);
    obj2->cetakVolume("Kubus");

    delete obj1;
    delete obj2;

    return 0;
}
