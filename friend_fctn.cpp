#include<iostream>
using namespace std;

class Contoh{
    private:
        int x; //x bersifat private
    public:
        //mendeklarasikan dua buah fungsi teman
        friend void setNilaiX(Contoh& obj, int nilai);
        friend int getNilaiX(Contoh& obj);
};

//implementasi fugnsi teman
void setNilaiX(Contoh& obj, int nilai){
    obj.x = nilai; // benar
}

int getNilaiX(Contoh& obj){
    return obj.x;
}

int main(){

    //membuat objek dari kelas contoh
    Contoh obj;

    /*Mengisi nilai ke dalam atribut x milik obj
    melalui fungsi setNilaiX()*/
    setNilaiX(obj,99);

    /*Mengakses nilai atribut x milik obj
    melalui fungsi getNilaiX()*/
    cout << "Nilai atribut x: " << getNilaiX(obj);
    
    return 0;
}
