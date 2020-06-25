#include <stdio.h>

#define HARGA_PERJAM 2000

float hitungHargaYangHarusDibayar(float bermain);

int isDapatDiskon(float bermain);

int main() {
    float durasiBermain, totalBiaya;
    printf("\nMasukkan durasi anda akan bermain (dalam jam):");
    scanf("%f", &durasiBermain);

    totalBiaya = hitungHargaYangHarusDibayar(durasiBermain);
    printf("\nTotal jam bermain anda %.2f jam", durasiBermain);

    if (isDapatDiskon(durasiBermain)){
        printf("\nSelamat anda mendapat potongan diskon 20 persen!");
    }

    printf("\nTotal biaya yang harus anda bayar: Rp %.0f", totalBiaya);

    return 0;
}

int isDapatDiskon(float bermain) {
    return bermain > 5;
}

float hitungHargaYangHarusDibayar(float bermain) {
    float total;

    total = bermain * HARGA_PERJAM;

    if(isDapatDiskon(bermain)){
        total = total - 0.8;
    }

    return total;
}