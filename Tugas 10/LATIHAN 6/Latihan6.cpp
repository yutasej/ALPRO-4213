#include <iostream>

using namespace std;

enum Nilai {
    SANGATBAGUS,
    BAGUS,
    BURUK,
    SANGATBURUK
};
enum Nilai myNilai;

int main()
{
    myNilai = BAGUS;

     if (myNilai == SANGATBAGUS) {
        cout << "Nilai saya diatas 90." << endl;
    } else if (myNilai == BAGUS) {
        cout << "Nilai saya diatas 75" << endl;
    } else if (myNilai == BURUK) {
        cout << "Nilai saya diatas 50." << endl;
    } else if (myNilai == SANGATBURUK) {
        cout << "Nilai saya dibawah 50." << endl;
    }

    return 0;
}

