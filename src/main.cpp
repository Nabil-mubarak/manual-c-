#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    float a,b,hasil;
    char aritmatika;

    cout << "Selamat datang di program calculator \n \n" ;

    //memasukkan input dari user
    cout << "Masukkan nilai pertama: ";
    cin >> a;
    cout << "silakan pilih operator: ";
    cin >> aritmatika;
    cout << "masukkan nilai kedua: ";
    cin >> b;

    cout << "\nHasil perhitungan ";
    cout << a << " " << aritmatika << " "<< b;

    if (aritmatika == '+') {
        hasil = a + b;
    } else if (aritmatika == '-') {
        hasil = a - b;
    } else if (aritmatika == '/') {
        hasil = a / b;
    } else if (aritmatika == '*') {
        hasil = a * b;
    }

    cout << " = " << hasil << endl;
    cout << "selesai" << endl;
    cout << "jika anda ingin mengulangi lagi silakan tekan ctrl + shift + b";

    cin.get();
    return 0;
}
