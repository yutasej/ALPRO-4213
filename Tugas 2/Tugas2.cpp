#include <iostream>
using namespace std;

bool isEven(int x);
bool isOdd(int x);
bool isFactor(int x, int y);
int maxArray(int x[100], int N);
int minArray(int x[100], int N);
int compareMax(int x, int y);
int compareMin(int x, int y);
int sumEven(int x[100],int N);
int sumOdd(int x[100],int N);
void Swap(int x, int y);

int main() {
    bool jawaban = true;
    string pilihan;
    int x,y,N,i,A[100],hasil;

  while (jawaban == true)
  {
    cout << "1. Even Number\n" ;
    cout << "2. Odd Number\n" ;
    cout << "3. Factor\n" ;
    cout << "4. Max Array\n" ;
    cout << "5. Min Array\n" ;
    cout << "6. Compare Max\n" ;
    cout << "7. Compare Min\n" ;
    cout << "8. Summary Even\n" ;
    cout << "9. Summary Odd\n" ;
    cout << "10. Swap Number\n" ;
    cout << "Masukkan angka : " ;
    cin >> pilihan ;

    if (pilihan == "1")
    {
        cout << "Masukkan Angka : ";
        cin >> x;
        bool answer = isEven(x);
        cout << answer << "\n";
        jawaban = true;
    }

    else if (pilihan == "2")
    {
        cout << "Masukkan Angka : ";
        cin >> x;
        bool answer = isOdd(x);
        cout << answer << "\n";
        jawaban = true;
    }

    else if (pilihan == "3")
    {
        cout << "Masukkan Angka : ";
        cin >> x;
        cout << "Masukkan Angka Pemfaktor : ";
        cin >> y;
        bool answer = isFactor(x,y);
        cout << answer << "\n";
        jawaban = true;
    }

    else if (pilihan == "4")
    {
        cout << "Masukkan Array : ";
        cin >> N;
        for ( i = 0; i < N; i++)
        {
            cout << "Masukkan angka : ";
            cin >> A[i];
        }
        hasil = maxArray(A, N);
        cout << "Angka maksimalnya adalah : " << hasil <<  endl;
    }

    else if (pilihan == "5")
    {
        cout << "Masukkan Array : ";
        cin >> N;
        for ( i = 0; i < N; i++)
        {
            cout << "Masukkan angka : ";
            cin >> A[i];
        }
        hasil = minArray(A,N);
        cout << "Nomor minimalnya adalah : " << hasil <<  endl;
    }

    else if (pilihan == "6")
    {
        cout << "Masukkan angka X : ";
        cin >> x;
        cout << "Masukkan angka Y : ";
        cin >> y;
        int hasil = compareMax(x,y);
        cout << "Lebih besar " << hasil << endl;
        jawaban = true;
    }

    else if (pilihan == "7")
    {
        cout << "Masukkan angka X : ";
        cin >> x;
        cout << "Masukkan angka Y : ";
        cin >> y;
        int hasil = compareMin(x,y);
        cout << "Lebih kecil " << hasil << endl;
        jawaban = true;
    }

    else if (pilihan == "8")
    {
        cout << "Masukkan panjang array : ";
        cin >> N;
        for ( i = 0; i < N; i++)
        {
            cout << "Masukkan angka : ";
            cin >> A[i];
        }
        hasil = sumEven(A,N);
        cout << "Hasilnya adalah : "<< hasil << endl;
        jawaban = true;
    }

    else if (pilihan == "9")
    {
        cout << "Masukkan panjang array : ";
        cin >> N;
        for ( i = 0; i < N; i++)
        {
            cout << "Masukkan angka : ";
            cin >> A[i];
        }
        hasil = sumOdd(A,N);
        cout << "Hasilnya adalah : "<< hasil << endl;
        jawaban = true;
    }

    else if (pilihan == "10")
    {
        cout << "Masukkan nomor pertama (X) : ";
        cin >> x;
        cout << "Masukkan nomor Kedua (Y): ";
        cin >> y;
        Swap(x,y);
        jawaban = true;
    }

    else {
        jawaban = false;
    }
  }

  return 0;
}

bool isEven(int x){
    if (x % 2 == 0){
        return true;
    }

    else {
        return false;
    }

}
bool isOdd(int x){
    if (x % 2 == 1){
        return true;
    }

    else {
        return false;
    }

}

bool isFactor(int x, int y){
    if (x % y == 0){
        return true;
    } else {
        return false;
    }

}

int maxArray(int x[100], int N){
    int i, total;
    total = 0;
    for (i = 0; i < N ; i++)
    {
        if (x[i]>total){
            total = x[i];
        }
    }
    return total;

}

int minArray (int x[100], int N){
    int i, total;
    total = x[0];
    for (i = 1; i < N; i++)
    {
        if (total > x[i])
        {
            total = x[i];
        }
    }
    return total;
}

int compareMax(int x, int y){
    if (x > y)
    {
        return x;
    }
    else {
        return y;
    }

}

int compareMin(int x, int y){
    if (x < y)
    {
        return x;
    }
    else {
        return y;
    }

}

void Swap (int x, int y){
    int temp;
    temp = x;
    x = y;
    y = temp;
    cout << "X menjadi : "<< x << "\n";
    cout << "Y menjadi : "<< y << "\n";
}

int sumEven(int x[100], int N){
    int i, total;
    total = 0;
    for (i = 0; i < N; i++)
    {
        if (x[i]%2==0)
        {
            total += x[i];
        }

    }
    cout << endl;
    return total;
}
int sumOdd(int x[100], int N){
    int i, total;
    total = 0;
    for (i = 0; i < N; i++)
    {
        if (x[i]%2==1)
        {
            total += x[i];
        }

    }
    cout << endl;
    return total;
}
