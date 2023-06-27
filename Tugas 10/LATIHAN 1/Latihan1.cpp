#include <iostream>
#include <cmath>
using namespace std;

struct fungsi{
    // Luas Persegi Panjang
    int p,l;
    int luasP;
    // Luas Lingkaran
    float r;
    float luasL;
    //Volume Kerucut
    int t;
    float Vkerucut;
    //Volume Bola
    float Vbola;
};
struct fungsi myFungsi;


    int main()
{
    cout << "Luas Persegi Panjang" << endl;
    cout << "Masukkan Panjang : ";
    cin >> myFungsi.p;
    cout << "Masukkan lebar : ";
    cin >> myFungsi.l;
    myFungsi.luasP = myFungsi.p * myFungsi.l;
    cout << "Hasilnya Adalah : " << myFungsi.luasP << endl;

    cout << "\nLuas Lingkaran" << endl;
    cout << "Masukkan Jari - Jari : ";
    cin >> myFungsi.r;
    myFungsi.luasL = 3.14 * myFungsi.r * myFungsi.r;
    cout << "Hasilnya Adalah : " << myFungsi.luasL << endl;

    cout << "\nVolume Kerucut" << endl;
    cout << "Masukkan Jari - Jari : ";
    cin >> myFungsi.r;
    cout << "Masukkan Tinggi : ";
    cin >> myFungsi.t;
    myFungsi.Vkerucut = 0.3 * 3.14 * pow(myFungsi.r,2) * myFungsi.t;
    cout << "Hasilnya Adalah : " << myFungsi.Vkerucut << endl;

    cout << "\nVolume Bola" << endl;
    cout << "Masukkan Jari - Jari : ";
    cin >> myFungsi.r;
    myFungsi.Vbola = 1.3 * 3.14 * pow(myFungsi.r,3);
    cout << "Hasilnya Adalah : " << myFungsi.Vbola << endl;


    return 0;
}

