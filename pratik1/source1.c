// CASE STUDY ÖRNEKLERİ MÜLAKAT SÜREÇLERİ İÇİN

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


// 1.SIRA FAKTÖRİYEL HESAPLAMA
// Kullanıcıdan bir sayı al ve bu sayının faktöriyelini hesapla.

int facHesapla(int x) {
    int sonuc = 1;
    for (int i = 1; i <= x; i++) {
        sonuc *= i;
    }
    return sonuc;
}

int main() {
    int sayi;
    char secim;

    do {
        printf("Faktoriyel hesaplama ekranina hos geldin!\n");
        printf("Bir sayi girin: ");
        scanf("%d", &sayi);

        if (sayi == 0)      // BURADA == YERİNE = KULLANILMAMASINA DİKKAT EDİNİZ.
            printf("0!=1\n");
        else if (sayi < 0)
            printf("Negatif sayilar icin faktoriyel tanimli degildir.\n");
        else
            printf("Sayinin sonucu: %d\n", facHesapla(sayi));

        printf("Tekrar denemek ister misiniz? ('e' veya 'h'): ");
        scanf(" %c", &secim); // Boşluk ekleyerek yeni satır karakterini yoksay

    } while (secim != 'h');

    printf("Programdan cikiliyor. Iyi gunler!\n");
    return 0;
}
