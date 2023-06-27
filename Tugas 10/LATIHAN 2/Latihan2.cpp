#include <iostream>

using namespace std;

struct sepeda{
    string merk;
    string type;
    int tahun;
    long harga;
};
struct sepeda mySepeda;

int main()
{
    mySepeda.merk = "Polygon";
    mySepeda.type = "Sepeda Gunung";
    mySepeda.tahun = 2013;
    mySepeda.harga = 2000000;
    cout << "Merk : " << mySepeda.merk << endl;
    cout << "Type : " << mySepeda.type << endl;
    cout << "Tahun : " << mySepeda.tahun << endl;
    cout << "Harga : " << mySepeda.harga << endl;

    return 0;
}
