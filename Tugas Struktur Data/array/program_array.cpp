#include<conio.h>
#include<stdio.h>
#include<iostream.>
#include<iomanip>
//5170411184 (PRANA SEPTIA)
using namespace std;
main()
{
int i,kode;
char nama[5][20];
float uts[5],uas[5],hasil[5];

cout<<"input jumlah data : "; cin>>kode;
//input-(dengan perulangan array)
for(i=1;i<=kode;i++)
{
cout<<"Data Ke - "<<i;
cout<<endl;
cout<<"Nama Siswa : ";cin>>nama[i];
cout<<"Nilai UTS : "; cin>>uts[i];
cout<<"Nilai UAS : "; cin>>uas[i];
//proses
hasil[i]=(uts[i]*0.40)+ (uas[i]*0.60);
cout<<endl;
}
//judul
cout<<"-----------------------------------------"<<endl;
cout<<"No. Nama Siswa Nilai Nilai Hasil"<<endl;
cout<<"                UTS   UAS  Ujian"<<endl;
cout<<"-----------------------------------------"<<endl;

//output-(dengan perulangan)
for (i=1;i<=kode;i++)
{
cout<<setiosflags(ios::left)<<setw(2)<<i;
cout<<setiosflags(ios::left)<<setw(13)<<nama[i];
cout<<setprecision(3)<<setw(8)<<uts[i];
cout<<setprecision(3)<<setw(5)<<uas[i];
cout<<setprecision(3)<<setw(5)<<hasil[i]<<endl;
}
cout<<"------------------------------------------"<<endl;
getch();
}
