#include <iostream>
#include <conio.h>
#include <iomanip>
//5170411184 (PRANA SEPTIA)
using namespace std;
int main()
{
       int dataku[10] = {7,9,2,5,15,2,5,6,13,11};
       int caridata, i, flag = 0;
       int simpanindex[10];
       int jum_index=0;

       cout<<"PENCARIAN DENGAN METODE SEQUENTIAL SEARCH"<<endl;
       cout<<"----------------------------------"<<endl;
       cout<<"Data   : ";
              for(int n=0; n<10; n++)
                     cout<<setw(4)<<dataku[n];
       cout<<endl;

       cout<<"\nMasukkan data yang ingin Anda cari : ";
       cin>>caridata;

       //cari dengan metode sequential search()
       for(i = 0; i<10; i++)
       {
              while(dataku[i]==caridata)
              {
                     flag = 1;
                     simpanindex[jum_index] = i;
                     jum_index++;
                     break;
              }
       }

       //cetak hasil
       if(flag==1)
       {
              for( int y = 0; y < jum_index; y++ )
              cout<<"Data ditemukan pada index ke-"<<simpanindex[y]<<endl;
       }
       else
              cout<<"Data tidak ditemukan"<<endl;
      
       getche();
    
}
