#include <iostream>

using namespace std;

int main()
{
    cout << "Nama : Alrijal Nur Ilham" << endl;
    cout << "NIM : A11.2022.14113" << endl;
    cout << " " << endl;

    int a = 0, b = 1, c = 0, d = 2;
    int y[3][2][1];
    float avg;

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 2; j++){
            for(int k = 0; k < 2; k++){
                y[i][j][k] = d;
                d += 2;
                cout << d << " ";
                c += d;
                a += b;
                avg = (float)c/a;
            }
        }
    }
    cout << "\n";
    cout << "Sum Kelipatan 4 = " << c << endl;
    cout << "Rata-rata sum kelipatan 4 = " << avg << endl;
    return 0;
}
