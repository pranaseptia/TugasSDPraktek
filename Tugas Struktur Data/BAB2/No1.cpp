#include <iostream>
#include <conio.h>
using namespace std;

main(){
    float angka,total=0,rata;
    int jumlah;;

    cout<<" Masukan Jumlah angka = ";cin>>jumlah;
    cout<<endl;
    
    for(int i=1;i<=jumlah;i++){
        cout<<" Masukan angka = ";cin>>angka;
        total=total+angka;
    }
    cout<<endl;
    cout<<" total = "<<total<<endl;
    rata = total/jumlah;
    cout<<" Rata - Rata : "<<rata;
    getch();
}
