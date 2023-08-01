#include<iostream>
#include<iomanip>      // std::fixed
using namespace std;

class Balok{
    private:
        double panjang;
        double lebar;
        double tinggi;

        double volume(){
            return panjang*lebar*tinggi;
        }
        
    public:
        //atribut statis
        static int jumlahObjek;

        Balok(double panjang,double lebar, double tinggi){
            this->panjang = panjang;
            this->lebar = lebar;
            this->tinggi = tinggi;

            //menaikkan jumlah objek
            jumlahObjek++;
        }

        void setPanjang(double panjang){
            this->panjang = panjang;
        }

        double getPanjang(){
            return panjang;
        }

        void setLebar(double lebar){
            this->lebar = lebar;
        }

        double getLebar(){
            return lebar;
        }

        void setTinggi(double tinggi){
            this->tinggi = tinggi;
        }

        double getTinggi(){
            return tinggi;
        }

        void cetakVolume(string nama){
            cout << fixed;
            cout << "Volume " << nama << " = "
                 << volume()  << endl;
        }

};

/*deklarasi atribut statis agar dikenal dari luar kelas
  dan mengisinya dengan nilai awal 0 */
int Balok::jumlahObjek = 0;

int main() {

    //menampilkan jumlah objek balok sebelum objek dibuat
    cout << "Keadaan Awal" << endl;
    cout << "Jumlah balok: " << Balok::jumlahObjek
         << endl << endl;
    
    Balok *obj1 = new Balok(10,9,8);
    Balok *obj2 = new Balok(8,6,4);
    
    //menampilkan volume balok
    obj1->cetakVolume("obj1");
    obj2->cetakVolume("obj2");

    delete obj1;
    delete obj2;

    //menampilkan jumlah objek balok setelah objek dibuat
    cout << "\nKeadaan Akhir" << endl;
    cout << "Jumlah balok : " << Balok::jumlahObjek << endl;
    
    return 0;
}
