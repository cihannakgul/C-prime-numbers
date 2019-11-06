#include <stdio.h>
#include <stdlib.h>

int main()
{

    int i,sayi,kontrol=0; // i, sayı ve kontrol adında üç değişken atadık
    scanf("%d",&sayi); // sayi değişkenini kullanıcıdan aldık
   for(i=2;i<sayi;i++) // 2'den başlayan bir for döngüsü tanımladık. 1 den başlayamaz çünkü asal sayının tanımına aykırı. 
   {

        if(sayi%i==0) // sayımız kendisine kadar olan herhangi bir sayıya bölünüyor ise bu blok çalışacak
          {
             kontrol=1; //  kontrol değişkenini 1 yaptık. bu, sayımızın asal olmadığını gösterir
              break; // döngüden çıkıldı
           }
    }

   if(kontrol==1) // kontrol 1 ise bu durumda sayımız, herhangi bir değere bölünmüş demektir. bu yüzden asal olmadığını ekrana yazdırdık.
   {
       printf("asal degildir");

   }

   else // kontrol 1 ise sayımız asal demektir.
    printf("asaldir");


    return 0;
}
