#include <stdio.h>
#include <conio.h>
#include <iostream>
using namespace std;
main()
{
    float pendptan, jasa = 0, komisi = 0, total = 0;  
    cout << "Pendapatan Hari ini Rp. "; 
    cin >> pendptan; 0;
    if (pendptan >= 0 && pendptan <= 200000) { 
        jasa = 10000; 
        komisi = 0.1 * pendptan;
    }
    else {
        if (pendptan <= 500000) {
            jasa = 20000;
            komisi = 0.15 * pendptan;
        }
        else {
            jasa = 30000;
            komisi = 0.2 * pendptan;
        }
    }

        /* menghitung total */
        total = komisi + jasa;
        cout << "Uang jas Rp. " << jasa << endl;
        cout << "Uang komisi Rp. " << komisi << endl;
        cout << "=============================" << endl;
        cout << "Hasil Total Rp. " << total << endl;
        getch();
}