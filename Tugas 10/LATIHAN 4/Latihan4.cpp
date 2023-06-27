#include <iostream>

using namespace std;

struct AOS{
    string nim;
    string nama;
    string jurusan;
    int tahun;
};

int main()
{
    const int jumlahArray = 4;
    AOS myAOS[jumlahArray];

    myAOS[0].nim = "A11.2020.01234";
    myAOS[0].nama = "Andi";
    myAOS[0].jurusan = "Broadcasting";
    myAOS[0].tahun = 2023;

    myAOS[1].nim = "A11.2010.01234";
    myAOS[1].nama = "Budi";
    myAOS[1].jurusan = "Sistem Informasi";
    myAOS[1].tahun = 2013;

    myAOS[2].nim = "A11.2000.01234";
    myAOS[2].nama = "Ali";
    myAOS[2].jurusan = "DKV";
    myAOS[2].tahun = 2003;

    myAOS[3].nim = "A11.1990.01234";
    myAOS[3].nama = "Siti";
    myAOS[3].jurusan = "Kesehatan";
    myAOS[3].tahun = 1993;

    for (int i = 0; i < jumlahArray; i++) {
        cout << "NIM: " << myAOS[i].nim << endl;
        cout << "Nama: " << myAOS[i].nama << endl;
        cout << "Jurusan: " << myAOS[i].jurusan << endl;
        cout << "Tahun Lulus: " << myAOS[i].tahun << endl;
        cout << endl;
    }

    return 0;
}

