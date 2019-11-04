#include <stdio.h>
#include <stdlib.h>

int main()
{



    int sayi,i; // değişkenler
    printf("sayi giriniz"); // kullanıcıdan bir sayı alınıyor
    scanf("%d",&sayi); // alınan sayı 'sayi' isimli değişkene aktarıldı



if(sayi==2) // sayının 2 olup olmadığı kontrol ediliyor. 
    printf("2 cift olan tek asal sayidir."); // 2 ise ekrana bu çıktı yazacak

    else  // 2 değil ise aşağıdaki kod bloğu çalışmaya başlayacak.
    {
           for(i=2;i<sayi;i++) // 2 den başlayıp sayının bir eksiğine kadar giden döngü yaratıyoruz
    {

        if(sayi%i==0) // sayımızın, 2'den başlayıp kendi değerinin bir eksiğine kadar olan tüm sayıların bölümünü deniyoruz. bölümünden kalan 0 ise asal değildir.
        {
            printf("sayi asal degildir"); // eğer bölünen bir sayı olursa sayının asal olmadığını ekrana yazdırıyoruz
            break; // döngüyü kırıyor.

        }

        else if (sayi-1==i) // bu kontrol, sayının bir eksiğine kadar tüm sayıların bölümünün denenip denenmediğini kontrol ediyor. 
        {
            printf("asal sayidir"); // girilen sayının bir eksiğine kadar tüm sayıların bölümü denenmiş ve hiçbir sayı, sayımızı bölememiş ise asal sayıdır. 
        }


    }
    }


    return 0;
}
