#include <stdio.h>

// en buyuk sayiyi dondurur
int enBuyuk(int dizi[])
{

    int temp;
    temp = dizi[0];

    for (int i = 0; i < 5; i++)
    {
        if (dizi[i] > temp)
        {
            temp = dizi[i];
        }
    }
    return temp;
}
// en kucuk sayiyi dondurur
int enKucuk(int dizi[])
{

    int temp;
    temp = dizi[0];

    for (int i = 0; i < 5; i++)
    {
        if (dizi[i] < temp)
        {
            temp = dizi[i];
        }
    }
    return temp;
}
// ikinci buyuk sayiyi dondurur
int ikinciBuyuk(int dizi[])
{

    int ikinciBuyukSayi;
    int temp;
    temp = dizi[0];
    ikinciBuyukSayi = dizi[0];
    // en buyuk sayiyi buluyoruz
    for (int i = 0; i < 5; i++)
    {
        if (dizi[i] > temp)
        {
            temp = dizi[i];
        }
    }
    // en buyuk sayiyi sifirlayip ikinci buyuk sayiyi buluyoruz
    for (int i = 0; i < 5; i++)
    {
        if (dizi[i] == temp)
        {
            dizi[i] = 0;
        }
        if (dizi[i] > ikinciBuyukSayi)
        {
            ikinciBuyukSayi = dizi[i];
        }
    }

    return ikinciBuyukSayi;
}
// dizinin ortalamasindan buyuk sayilari dondurur
int ortDegerBuyuk(int dizi[])
{
    int toplam = 0;
    int ortalama = 0;

    for (int i = 0; i < 5; i++)
    {
        toplam += dizi[i];
    }

    ortalama = toplam / 5;

    for (int i = 0; i < 5; i++)
    {
        if (dizi[i] > ortalama)
        {
            return dizi[i];
        }
    }
}
// dizinin ortalamasindan buyuk sayilari dondurur
int ortDegerKucuk(int dizi[])
{
    int toplam = 0;
    int ortalama = 0;

    for (int i = 0; i < 5; i++)
    {
        toplam += dizi[i];
    }

    ortalama = toplam / 5;

    for (int i = 0; i < 5; i++)
    {
        if (dizi[i] < ortalama)
        {
            return dizi[i];
        }
    }
}
//dizinin icinde girilen sayidan buyuk olan sayilarin toplamini dondurur
int sayiKontrolToplam(int sayi, int dizi[])
{
    int toplam = 0;

    for (int i = 0; i < 5; i++)
    {
        if (dizi[i] > sayi)
        {
            toplam += dizi[i];
        }
    }

    return toplam;
}
//dizinin icinde girilen sayidan buyuk olan sayilarin ortalamasini dondurur
int sayiKontrolOrtalama(int sayi, int dizi[])
{
    int toplam = 0;
    float ort = 0;

    for (int i = 0; i < 5; i++)
    {
        if (dizi[i] > sayi)
        {
            toplam += dizi[i];
        }
    }
    ort = toplam / 5;

    return ort;
}

int main()
{

    int dizi[5];
    int sayi;
    int enBuyukSayi;
    int enKucukSayi;
    int ikinciBuyukSayi;
    int ortDegerdenBuyukSayi;
    int sayiKontrolToplam;

    for (int i = 0; i < 5; i++)
    {
        printf("sayi giriniz: ");
        scanf("%d", &sayi);
        dizi[i] = sayi;
    }

    enBuyukSayi = enBuyuk(dizi);
    printf("dizideki en buyuk sayi = %d\n",enBuyukSayi);

    enKucukSayi = enKucuk(dizi);
    printf("dizideki en kucuk sayi = %d\n",enKucukSayi);

    ikinciBuyukSayi = ikinciBuyuk(dizi);
    printf("dizideki ikinci buyuk sayi = %d\n",ikinciBuyukSayi);

    ortDegerdenBuyukSayi = ortDeger(dizi);
    printf("dizinin ortalamasindan buyuk olan sayilar %d\n", ortDegerdenBuyukSayi);

    return 0;
}