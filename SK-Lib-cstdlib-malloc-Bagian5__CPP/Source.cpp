#include <iostream>
#include <cstdlib>
#include <conio.h>

/*
    Source by Programiz (https://www.programiz.com)
    Modified For Learn by RK
    I.D.E : VS2022
*/

using namespace std;

int main() {

    // mengalokasikan 5 blok memori int
    int* ptr = (int*)malloc(5 * sizeof(int));

    // periksa apakah memori telah berhasil dialokasikan
    if (!ptr) {
        cout << "Memory Allocation Failed";
        exit(1);
    }

    cout << "Initializing values..." << endl << endl;

    for (int i = 0; i < 5; i++) {
        ptr[i] = i * 2 + 1;
    }
    
    cout << "Initialized values" << endl;

    // cetak nilai dalam memori yang dialokasikan
    for (int i = 0; i < 5; i++) {
        // ptr[i] dan *(ptr+i) dapat digunakan secara bergantian
        cout << *(ptr + i) << endl;
    }

    // membatalkan alokasi memori
    free(ptr);

    _getch();
    return 0;
}