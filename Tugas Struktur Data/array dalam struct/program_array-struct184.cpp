
#include<stdio.h>
#include<conio.h>
#include<iostream>
//5170411184(PRANA SEPTIA)
using namespace std;

main(){
	struct mhsw{
		long int nim;
		char nama[30];
		char alamat[20];
	};
	mhsw mhs[3];
	for(int i=0;i<3;i++){
		cout<<" Masukan NIM		: ";cin>>mhs[i].nim;
		cout<<" Masukan Nama		: ";cin>>mhs[i].nama;
		cout<<" Masukan Alamat		: ";cin>>mhs[i].alamat;
		cout<<" -------------------------------\n";
	}
	
	cout<<" Data yang sudah dimasukan : \n\n";
		for(int i=0;i<3;i++){
		cout<<" NIM		: "<<mhs[1].nim<<endl;
		cout<<" Nama		: "<<mhs[i].nama<<endl;
		cout<<" Alamat		: "<<mhs[i].alamat[i]<<endl;
		cout<<" -------------------------------\n";
	}
	getch();
}
