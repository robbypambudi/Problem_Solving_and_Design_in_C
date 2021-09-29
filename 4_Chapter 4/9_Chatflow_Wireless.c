/*
Chatflow Wireless offers customers 600 weekday minutes for a flat rate of 
39.99. Night (8 p.m. to 7 a.m.) and weekend minutes are free, but additional 
weekday minutes cost 0.40 each. There are taxes of 5.25% on all charges. 
Write a program that prompts the user to enter the number of weekday 
minutes, night minutes, and weekend minutes used, and calculates the 
monthly bill and average cost of a minute before taxes. The program should 
display with labels all the input data, the pretax bill and average minute 
cost, the taxes, and the total bill. Store all monetary values as whole cents 
(rounding the taxes and average minute cost), and divide by 100 for display 
of results.
*/

#include <stdio.h>
#define waktu_kerja 600
#define tarif 39.99
#define tambahan_kerja 0.40
#define pajak 5.

void cetak(int day, int waktu_dihabiskan, float tagihan);

int main (){
    int day, menit_awal, menit_akhir;
    float tagihan;

    printf("Masukan Tanggal : ");
    scanf("%d", &day);
    printf("Masukan Menit Awal : ");
    scanf("%d", &menit_awal);
    printf("Masukan Menit Akhir :");
    scanf("%d", &menit_akhir);

    // Tagihan Bulanan.
    int waktu_dihabiskan = (menit_akhir - menit_awal);


    if (waktu_dihabiskan > 600){
        float tagihan_tambahan = (waktu_dihabiskan-waktu_kerja)*tambahan_kerja;
        tagihan    = tarif + tagihan_tambahan;
    } else {
        if (day == 7 || day == 6){
            tagihan = 0;
        }
        else {
            tagihan = (waktu_kerja/tarif)*waktu_dihabiskan;
        }
    }
    cetak(day, waktu_dihabiskan, tagihan );
}
   

void cetak(int day, int waktu_dihabiskan, float tagihan){

    printf("\nTagihan Pada Hari ke \t: %d\n", day);
    printf("Waktu yang dihabiskan \t: %d\n", waktu_dihabiskan);
    float biaya_rata_satu_menit = (tagihan)/waktu_dihabiskan;
    float tagihan_pajak     = tagihan + (tagihan*pajak/100);

    if ( tagihan == 0){
        printf("Tagihan \t: Gratis\n");
    }
    else {
        printf("Biaya Rata Per Menit\t: %.2f\n", biaya_rata_satu_menit);
        printf("Biaya Sebelum Pajak \t: %.2f\n", tagihan);
        printf("Biaya Dengan pajak \t: %.2f\n", tagihan_pajak);
    }
}
