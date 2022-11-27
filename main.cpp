#include <iostream>


/*
    Program Persegi Panjang
    Ket : Program mencari luas dan keliling persegi panjang
    By  : Yudha Rizqia Grafer
    Tgl : 28 September 2022

*/

using namespace std;

int main()
{
    //Kamus
    int p, l, Hasil_keliling, Hasil_luas;

    //Algoritma
    cout << "Masukan Panjang : ";
    cin >> p;
    cout << "Masukan Lebar : ";
    cin >> l;
    Hasil_keliling = 2 * (p+l);
    Hasil_luas = p * l;
    cout << "Hasil Keliling : " << Hasil_keliling << endl;
    cout << "Hasil Luas : " << Hasil_luas;
    return 0;
}
