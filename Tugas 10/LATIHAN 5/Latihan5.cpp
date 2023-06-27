#include <iostream>

using namespace std;

struct sepeda{
    string Merk;
    string type;
    int Tahun;
    long Harga;

};
struct sepeda mySepeda;

int main(){
    mySepeda.Merk = "Polygon";
    mySepeda.type = "Sepeda Gunung";
    mySepeda.Tahun = 2013;
    mySepeda.Harga = 2000000;

    sepeda *pointerSepeda;
    pointerSepeda = &mySepeda;

    cout << "Merk : " << pointerSepeda->Merk << endl;
    cout << "Type : " << pointerSepeda->type << endl;
    cout << "Tahun : " << pointerSepeda->Tahun << endl;
    cout << "Harga : " << pointerSepeda->Harga << endl;

    return 0;
}
