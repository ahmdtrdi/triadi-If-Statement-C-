#include <iostream>

using namespace std;

int main()
{ 
   typedef struct {int HH, MM, SS ;} jam;

   jam j1; //awal waktu menelpon
   jam j2; //waktu akhir menelpon
   jam j3; //total durasi

   cout << "Masukan waktu awal Anda menelpon" << endl;

   cout << "Jam awal :" ;
   cin >> j1.HH;
   cout << "Menit awal: ";
   cin >> j1.MM;
   cout << "Detik Awal: ";
   cin >> j1.SS;

   cout << "Masukan waktu akhir Anda menelpon " <<  endl;

   cout << "Jam akhir: " ;
   cin >> j2.HH ;
   cout << "Menit Akhir: ";
   cin >> j2.MM ;
   cout << "Detik akhir: ";
   cin >> j2.SS;
  
   cout << endl;

   //Pengurangan Detik
   if (j2.SS <= j1.SS) {
   	j3.SS = j2.SS - j1.SS;
   } else if (j2.SS < j1.SS) {
   j3.SS = (j2.SS = 60 ) - j1.SS;
   j2.MM = j2.MM - 1; }

   //pengurangan menit

   if (j2.MM >= j1.MM) 
   	{j3.MM = j2.MM - j1.MM;
   } else if (j2.MM < j1.MM)
   {j3.MM = (j2.MM + 60) - j1.MM;
   j2.HH = j2.HH - 1;}

   //Pengurangan Jam

   if (j2.HH >= j1.HH) {
   	j3.HH = j2.HH - j1.HH;
   } else {j3.HH = (j2.HH + 24)- j1.HH;
   }

    cout << "Durasi Anda Menelpon: ";
    cout << j3.HH;
    cout << "Jam ";
    cout << j3.MM;
    cout << " menit ";
    cout << j3.SS;
    cout << " Detik";
return 0;
} 