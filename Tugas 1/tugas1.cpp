#include <iostream>
using namespace std;

void Plus();
void Minus();
void TotalArray();
void AvgArray();

int main() {
  int ask;
  cout << "1. Fungsi Penjumlahan 2 bilangan \n";
  cout << "2. Fungsi Pengurangan 2 bilangan \n";
  cout << "3. Fungsi Menghitung total array\n";
  cout << "4. Fungsi Menghitung rata rata array\n";
  cout << "Pilih fungsi ";
  cin >> ask;
  if (ask == 1){
   Plus();
  }else if (ask == 2){
    Minus();
  }else if (ask == 3){
    TotalArray();
  }else if (ask == 4){
    AvgArray();
  }else
  {
    cout << "Error";
  }
  return 0;
}

void Plus(){
    int a, b, c;
    cout << "Masukkan angka : ";
    cin >> a;
    cout << "Masukkan angka : ";
    cin >> b;
    c = a+b;
    cout << "Hasilnya adalah : " << c;
}

void Minus(){
  int a, b, c;
    cout << "Masukkan angka : ";
    cin >> a;
    cout << "Masukkan angka : ";
    cin >> b;
    c = a-b;
    cout << "Hasilnya adalah : " << c;
}

void TotalArray(){
  int x[100],i,n,total;
  i = 0;
  total = 0;
  cout << "Masukkan Jumlah Array : ";
  cin >> n;
  for ( int i = 0; i < n; i++)
  {
    cout << "Masukkan angka : ";
    cin >> x[i];
    total += x[i];
  }
  cout << "total : " << total ;
}

void AvgArray(){
  int x[100],i,n;
  float total, hasil;
  i = 0;
  total = 0;
  cout << "Masukkan Jumlah Array : ";
  cin >> n;
  for ( int i = 0; i < n; i++)
  {
    cout << "Masukkan angka : ";
    cin >> x[i];
    total += x[i];
  }
  hasil = total / n;
  cout << "Hasil Rata - Rata : " << hasil ;
}
