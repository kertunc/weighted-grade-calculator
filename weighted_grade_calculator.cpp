//Kullanicidan 3 sinav notu alip, vizenin %30, projenin %20, finalin %50'sine gore notlarin ortalamasini hesaplayip, gecip gecmedigini yazdiran program.

#include <iostream.h>
#include <conio.h>

main()
{
   int vize , proje , final , ortalama;

   cout<<"Ogrencinin vize notu:";
   cin>>vize;

   cout<<"Ogrencinin proje notu:";
   cin>>proje;

   cout<<"Ogrencinin final notu:";
   cin>>final;

   const int gecmeNotu = 60;

   ortalama = (vize * 0.3) + (proje * 0.2) + (final * 0.5);

   if (ortalama < gecmeNotu)
   {
    cout<<"Ogrenci dersten gecemez.";
   }
   else
   {
   cout<<"Ogrenci dersten gecer.";
   }

   getch();
}
