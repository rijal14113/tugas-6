#include <iostream>

using namespace std;

int main()
{
    cout << "Nama : Alrijal Nur Ilham" << endl;
    cout << "NIM : A11.2022.14113" << endl;
    cout << "Kelompok : 4104" << endl;

    int pil, hargasatuan, uang = 5000, jumlah;

    cout << "1. Harga 500\n 2. Harga 1000\n 3. Harga 300" << endl;

    cout << " Masukan pilihan : ";
    cin >> pil;

    switch (pil){
        case 1 :
            hargasatuan = 500;
            jumlah = uang/hargasatuan-5;
            cout << "Dito mendapatkan" << jumlah << " buah permen. " << endl;
            break;
        case 2 :
            hargasatuan = 1000;
            jumlah = uang/hargasatuan;
            cout << "Dito mendapatkan " << jumlah << " buah permen. " << endl;
            break;
        case 3 :
            hargasatuan = 300;

            for (int i = 300; i <= uang; i += 300) {
                jumlah += 1;
            }
            cout << "Dito mendapatkan " << jumlah << " buah permen. " << endl;
            break;
    }
    return 0;
}
