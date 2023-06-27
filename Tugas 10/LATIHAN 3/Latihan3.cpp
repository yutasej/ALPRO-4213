#include <iostream>

using namespace std;

struct fungsi{
    int p,l;
    float r;
    int t;
};
typedef struct fungsi myFungsi;

int luasPP(const myFungsi PP){
    int luas = PP.p * PP.l;
    return luas;
}

float luasLingkaran(const myFungsi Lingkaran){
    float luas = 3.14 * Lingkaran.r * Lingkaran.r;
    return luas;
}

float volumeLingkaran(const myFungsi VLingkaran){
    float volume = 1.3 * 3.14 * VLingkaran.r * VLingkaran.r * VLingkaran.r;
    return volume;
}

float volumeKerucut(const myFungsi Vkerucut){
    float volume = 0.3 * 3.14 * Vkerucut.r * Vkerucut.r * Vkerucut.t;
    return volume;
}
int main (){
    myFungsi PP;
    cout << "Luas Persegi Panjang" << endl;
    cout << "Masukkan Panjang : ";
    cin >> PP.p;
    cout << "Masukkan Lebar : ";
    cin >> PP.l;
    int luas = luasPP(PP);
    cout << "Hasilnya Adalah : " << luas << endl;

    myFungsi Lingkaran;
    cout << "\nLuas Lingkaran" << endl;
    cout << "Masukkan Jari - Jari : ";
    cin >> Lingkaran.r;
    float luasL = luasLingkaran(Lingkaran);
    cout << "Hasilnya Adalah : " << luasL << endl;

    myFungsi VKerucut;
    cout << "\nVolume Kerucut" << endl;
    cout << "Masukkan Jari - Jari : ";
    cin >> VKerucut.r;
    cout << "Masukkan Tinggi : ";
    cin >> VKerucut.t;
    float volumeK = volumeKerucut(VKerucut);
    cout << "Hasilnya Adalah : " << volumeK << endl;

    myFungsi VLingkaran;
    cout << "\nVolume Lingkaran" << endl;
    cout << "Masukkan Jari - Jari : ";
    cin >> VLingkaran.r;
    float volumeL = volumeLingkaran(VLingkaran);
    cout << "Hasilnya Adalah : " << volumeL << endl;

    return 0;
}
