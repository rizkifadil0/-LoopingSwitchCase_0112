#include <iostream>
using namespace std;

float luaspersegipanjang(float a,float b){
    return a * b;
}

float luaslingkaran(float a){
    return 3.14 * a * a;
}

int main(){
    int pilihan;
    float panjang, lebar;
    float jejari;
    do
    {
        cout << "====Menu====" << endl;
        cout << "1. Luas Persegi Panjang" << endl;
        cout << "2. Luas Lingkaran" << endl;
        cout << "3. Keluar" << endl;
        
        cout << "Plihan 1/2/3 = ";
        cin >> pilihan;

        switch (pilihan)
        {
            case 1:
            cout << "Hitung Luas Persegi Panjang" << endl;
            cout <<  "Masukkan Panjang : ";
            cin >> panjang;
            cout << "Masukkan Lebar : ";
            cin >> lebar;
            cout << "Luas Persegi Panjang = " << luaspersegipanjang(panjang, lebar) << endl;
            break;

            case 2: 
            cout << "Hitung Luas Lingkaran" << endl;
            cout << "Masukkan Jari Jari = " ;
            cin >> jejari;
            cout << "Luas Lingkaran = " << luaslingkaran(jejari) << endl;
            break; 

            case 3:
            break;

            default:
            cout << "Pilihan Salah, pilihan harus di antara 1-3." << endl;
            break;



        }
    } while (pilihan != 3);
    

}