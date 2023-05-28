#include <iostream>

using namespace std;

int tambah(int a, int b){
    if(b==0)
        return a;
    else
        return 1 + tambah(a, b-1);
}

int kali(int a, int b){
    if(b==0)
        return 0;
    else
        return a + kali(a, b-1);
}

int kurang(int a, int b){
    if(b==0)
        return a;
    else
        return kurang(a-1, b-1);
}

int bagi(int a, int b){
    if(a<b)
        return 0;
    else
        return 1 + bagi(a-b, b);
}

int pangkat(int a, int b){
    if(b==0)
        return 1;
    else
        return a * pangkat(a, b-1);
}

int main()
{
    int a,b;

    cout << "Penjumlahan dari:" << endl;
    cin >> a;
    cin >> b;
    cout << "-------- +" << endl;
    cout << tambah(a,b) << endl;
    cout << "Perkalian dari:" <<endl;
    cin>> a;
    cin>> b;
    cout << "-------- *" << endl;
    cout << kali(a,b) << endl;
    cout << "Perkurangan dari:" <<endl;
    cin>> a;
    cin>> b;
    cout << "-------- -" << endl;
    cout << kurang(a,b) << endl;
    cout << "Pembagian dari:" <<endl;
    cin>> a;
    cin>> b;
    cout << "-------- /" << endl;
    cout << bagi(a,b) << endl;
    cout << "Pangkat dari:" <<endl;
    cin>> a;
    cin>> b;
    cout << "-------- **" << endl;
    cout << pangkat(a,b) << endl;
}
