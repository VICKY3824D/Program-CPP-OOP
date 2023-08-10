#include<iostream>
using namespace std;

class Pertama{
    private:   
        int x;  
    public:
        Pertama(int x){
            this->x = x;
        }

        //mendeklarasikan kelas teman
        friend class Kedua;
};

class Kedua{
    public:
        void setNilaiX(Pertama& obj,int nilai){
            obj.x = nilai; /*mengakses atribut Pertama::x yang bersifat private */  
        }

        int getNilaiX(Pertama& obj){
            return obj.x; // benar
        }
};


int main(){

    //membuat objek dari kelas Pertama
    Pertama obj1(0); // mula-mula obj1.x bernilai 0

    //membaut objek dari kelas Kedua
    Kedua obj2;

    /*Mengisi nilai ke dalam atribut x milik obj1
    melalui fungsi Kedua::setNilaiX()*/
    obj2.setNilaiX(obj1, 99);

    /*Mengakses nilai atribut x milik obj1
    melalui fungsi Kedua::getNilaiX()*/
    cout << "Nilai atribut x pada obj1: "
         << obj2.getNilaiX(obj1);
    
    return 0;
}

