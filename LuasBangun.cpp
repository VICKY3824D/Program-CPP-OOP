#include <iostream>
using namespace std;

int main()
{
    int choice;
    float width, length, base, height, radius, area;

    cout << "Pilih bangun geometri yang ingin dihitung luasnya:" << endl;
    cout << "1. Persegi" << endl;
    cout << "2. Persegi panjang" << endl;
    cout << "3. Segitiga" << endl;
    cout << "4. Lingkaran" << endl;
    
    while(true){
    	cout << "Masukkan pilihan Anda (1-4): ";
    	cin >> choice;

    	switch (choice)
    	{
        	case 1:
            	cout << "Masukkan panjang sisi persegi: ";
            	cin >> width;
            	area = width * width;
            	cout << "Luas persegi tersebut adalah " << area << endl;
            	break;
       		case 2:
            	cout << "Masukkan panjang persegi panjang: ";
            	cin >> length;
            	cout << "Masukkan lebar persegi panjang: ";
            	cin >> width;
            	area = length * width;
            	cout << "Luas persegi panjang tersebut adalah " << area << endl;
            	break;
        	case 3:
            	cout << "Masukkan alas segitiga: ";
            	cin >> base;
            	cout << "Masukkan tinggi segitiga: ";
            	cin >> height;
            	area = 0.5 * base * height;
            	cout << "Luas segitiga tersebut adalah " << area << endl;
            	break;
        	case 4:
            	cout << "Masukkan jari-jari lingkaran: ";
            	cin >> radius;
            	area = 3.14159 * radius * radius;
            	cout << "Luas lingkaran tersebut adalah " << area << endl;
            	break;
       		default:
            cout << "Pilihan tidak valid!" << endl;
            break;
    	}
	}
   

    return 0;
}
