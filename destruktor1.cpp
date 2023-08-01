#include<iostream>
#include<cstring>
using namespace std;

class Siswa{
	private:
		char *nim;   //pointer ke karakter
		char *nama;  //pointer ke karakter
		int umur;
	public:
		Siswa(){
			
			// alokasi memori untuk atribut nim,nama, umur
			this->nim = new char[4];
			this->nama = new char[25];
			this->umur = umur;
		}

		~Siswa(){

			//dealokasi memori untuk nim, dan nama
			delete [] nim;
			delete [] nama;
		}

		void setNim(const char *nim){
			strcpy(this->nim,nim);
		}

		char *getNim(){
			return nim;
		}

		void setNama(const char *nama){
			strcpy(this->nama,nama);
		}

		char *getNama(){
			return nama;
		}

		void setUmur(int umur){
			this->umur = umur;
		}

		double getUmur(){
			return umur;
		}

		void cetakSiswa(){
			cout << "NIM\t: " << nim << endl;
			cout << "Nama\t: " << nama << endl;
			cout << "Umur\t: " << umur << endl;
		}

};

int main(){
	Siswa *obj;
	obj = new Siswa();

	//mengisi nilai-nilai atribut
	obj->setNim("123");
	obj->setNama("Muhammad Adam");
	obj->setUmur(20);

	obj->cetakSiswa();

	delete obj;

	return 0;

}
