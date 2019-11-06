#include <iostream>
#include <string>
#include <windows.h>
#include <conio.h>
#define max 10

using namespace std;

void setcolor(unsigned short color)
{
HANDLE hCon = GetStdHandle(STD_OUTPUT_HANDLE);

SetConsoleTextAttribute(hCon,color);
}
//Struct Yang Berisi Info Mahasiswa
struct MahaSiswa {
	int id;
	string nama;
	string nim;
	string s_data;
	string jarkom;
	string kalkulus;
};
//Stack Berisi Mahasiswa
struct StackMA {
	int top;
	struct MahaSiswa MahaSiswa[max];
}MA;
//inisialisasi semua fungsi
void pembuka();
void tampiMA();
int isEmptyKA();
void pushMA(string nama, string nim, string s_data, string jarkom, string kalkulus);
void sortMA();
void initMA();
void cariMA();
void exit();

void pembuka()
{
	int pill;
	string nama, nim, s_data, jarkom, kalkulus;
	do 
	{
		cout<<" ________________________"<<endl;
		cout<<" |                      |"<<endl;
		cout<<" |RESPONSI MID SEMESTER |"<<endl;
		cout<<" |Nama   : Prana Septia |"<<endl;
		cout<<" |NIM    : 5170411184   |"<<endl;
		cout<<" |______________________|"<<endl;
		cout<<""<<endl;
		cout<<"1. Input Data"<<endl
			<<"2. Menampilkan Data"<<endl
			<<"3. Mengurutkan Data"<<endl
			<<"4. Mencari Data"<<endl
			<<"5. Keluar"<<endl
			<<"Pilihan anda :";
		cin>>pill;
		
		switch(pill)
		{
			case 1:
				system ("CLS");
				cout<<"Lengkapi Data Berikut !"<<endl<<"-----------------------"<<endl;
				cout<<"Nama Mahasiswa : "; cin >> nama;
				cout<<"NIM : "; cin >> nim;
				cout<<"Nilai Struktur Data : "; cin >>s_data;
				cout<<"Nilai Jaringan Komputer : "; cin >>jarkom;
				cout<<"Nilai Kalkulus : "; cin >>kalkulus;
				pushMA(nama,nim,s_data,jarkom,kalkulus);
				break;
			case 2:
				
				tampiMA();
				break;
			case 3:
				system("CLS");
				sortMA();
				break;
			case 4:
				system("CLS");
			cariMA();
			break;
			case 5:
				exit();
				
		}
			
	} while(pill!=6);
	{
		cout<<"Mohon Masukan Pilihan Dengan Benar";
	}
}
//Inilisiasi stack Mahasiswa
void initMA()
{
	MA.top = -1;
}
//Mengisi STack dan Info Mahasiswa
void pushMA(string nama, string nim, string s_data, string jarkom, string kalkulus)
{
	MA.top++;
	MA.	MahaSiswa[MA.top].id =MA.top;
	MA.MahaSiswa[MA.top].nim = nim;
	MA.MahaSiswa[MA.top].nama = nama;
	MA.MahaSiswa[MA.top].jarkom = jarkom;
	MA.MahaSiswa[MA.top].s_data = s_data;
	MA.MahaSiswa[MA.top].kalkulus = kalkulus;
	system("CLS");
	cout<<""<<endl;
	cout<<"   __________________________________________"<<endl;
	cout<<"   |Notice                                   |"<<endl;
    cout<<"   |Data Mahasiswa yang Bernama :            |"<<endl;
    Sleep(200);
	cout<<"   |"<<MA.MahaSiswa[MA.top].nama<<"                                    |"<<endl;
	Sleep(200);
	cout<<"   |Dengan NIM :                             |"<<endl;;
	Sleep(200);
	cout<<"   |"<<MA.MahaSiswa[MA.top].nim<<"                               |"<<endl; 
	Sleep(400);
	cout<<"   |              Berhasil                   |"<<endl;
	Sleep(400);
	setcolor(10);
	cout<<"   |            DITAMBAHKAN !                |"<<endl;
	setcolor(7);
	cout<<"   |_________________________________________|"<<endl;
	Sleep(1000);
	system("CLS");
	
}
//menampilkan seluruh Mahasiswa
void tampiMA()
{
		system("CLS");
	
		cout << "__________________________________________________________________________" << endl;
		cout << "|                            DAFTAR NAMA MAHASISWA                        |" << endl;
		cout << "|                       UNIVERSITAS TEKNOLOGI YOGYAKATA                   |" << endl;
		cout << "|_________________________________________________________________________|" << endl;
		cout<<"-----------------------------------------------------------------------\n";
		cout<<"No.	|Nama	|NIM		|Jarkom		|Struktur Data	|Kalkulus"<<endl;
		for(int i = 1; i<=MA.top;i++)
		{
			cout<<i<<"\t|"<<MA.MahaSiswa[i].nama<<"\t|"<<MA.MahaSiswa[i].nim<<"\t|"<<MA.MahaSiswa[i].jarkom<<"\t\t|"<<MA.MahaSiswa[i].s_data<<"\t\t|"<<MA.MahaSiswa[i].kalkulus<<endl;
		}	
		cout<<"_____________________________________________________________________"<<endl;
		char yt;
		cout<<"Press any key to continue ";
		cin>>yt;
    cout<<endl;
    if(yt=='Y'||yt=='y'){
    	system("CLS");
        pembuka();
    }else
    system("CLS");
        pembuka();


}
//menyorting mahasiswa menurut NIM
void sortMA()
{
	StackMA tempMA;
	
	//coppy data dari struct ke temporary
	tempMA.top = -1;
	for (int i = 0; i<= MA.top;i++)
	{
		tempMA.top++;
		tempMA.MahaSiswa[i].id = MA.MahaSiswa[i].id;
		tempMA.MahaSiswa[i].nama = MA.MahaSiswa[i].nama;
		tempMA.MahaSiswa[i].nim = MA.MahaSiswa[i].nim;
		tempMA.MahaSiswa[i].jarkom = MA.MahaSiswa[i].jarkom;
		tempMA.MahaSiswa[i].s_data = MA.MahaSiswa[i].s_data;
		tempMA.MahaSiswa[i].kalkulus = MA.MahaSiswa[i].kalkulus;
		
	}
	string nama[max],nim[max],jarkom[max],s_data[max],kalkulus[max];
	
	//short menggunakan bubble short
	for (int i=1;i<=MA.top;i++)
	{
		for(int j = 0; j <=MA.top - i; j++)
		{
			if(tempMA.MahaSiswa[j].nim < tempMA.MahaSiswa[j+1].nim)
			{
			
			//Proses Pertukaran Data
				nama[j]=tempMA.MahaSiswa[j].nama;
				nim[j]=tempMA.MahaSiswa[j].nim;
				jarkom[j]=tempMA.MahaSiswa[j].jarkom;
				s_data[j]=tempMA.MahaSiswa[j].s_data;
				kalkulus[j]=tempMA.MahaSiswa[j].kalkulus;
			
				tempMA.MahaSiswa[j].nama = tempMA.MahaSiswa[j+1].nama;
				tempMA.MahaSiswa[j].nim = tempMA.MahaSiswa[j+1].nim;
				tempMA.MahaSiswa[j].jarkom = tempMA.MahaSiswa[j+1].jarkom;
				tempMA.MahaSiswa[j].s_data = tempMA.MahaSiswa[j+1].s_data;
				tempMA.MahaSiswa[j].kalkulus = tempMA.MahaSiswa[j+1].kalkulus;
			
				tempMA.MahaSiswa[j+1].nama = nama[j];
				tempMA.MahaSiswa[j+1].nim = nim[j];
				tempMA.MahaSiswa[j+1].jarkom = jarkom[j];
				tempMA.MahaSiswa[j+1].s_data = s_data [j];
				tempMA.MahaSiswa[j+1].kalkulus = kalkulus[j];
			}
		}
	}
	//menampilkan hasil sorting
	cout<<"HASIL SORTING BERDASARKAN NIM"<<endl;
	cout<<"Nama		NIM			Jarkom		Struktur Data	Kalkulus"<<endl;
	for (int i = MA.top; i >= 0; i--)
	{
		cout<<tempMA.MahaSiswa[i].nama<<"\t\t";
		cout<<tempMA.MahaSiswa[i].nim<<"\t\t";
		cout<<tempMA.MahaSiswa[i].jarkom<<"\t\t";
		cout<<tempMA.MahaSiswa[i].s_data<<"\t\t";
		cout<<tempMA.MahaSiswa[i].kalkulus<<"\t\t";
		cout<<endl;
		
		
	}
	char yt;
	cout<<endl;
		cout<<"Press any key to continue ";
		cin>>yt;
    cout<<endl;
    if(yt=='Y'||yt=='y'){
    	system("CLS");
        pembuka();
    }else
    system("CLS");
        pembuka();
	
}
//Searching 
void cariMA()
{
	string nim;
	int j = 0;
	int index [max];
	
	cout<<"masukan nim :";
	cin >>nim;
	for (int pr = 0; pr <=MA.top;pr++)
	{
		if (MA.MahaSiswa[pr].nim == nim)
		{
			index[j]=pr;
			j++;
		}
	}
	if (j>0)
	{
		cout<<"Terdapat "<<j<<" orang " <<endl;
		cout<<"Nama		Nim		Jarkom		StrukturData		Kalkulus"<<endl;
		for (int pr = 0;pr<j;pr++)
		{
				cout<<MA.MahaSiswa[index[pr]].nama<<"\t\t";
				cout<<MA.MahaSiswa[index[pr]].nim<<"\t\t";
				cout<<MA.MahaSiswa[index[pr]].jarkom<<"\t\t";
				cout<<MA.MahaSiswa[index[pr]].s_data<<"\t\t";
				cout<<MA.MahaSiswa[index[pr]].kalkulus<<"\t\t\t";
		}
	
		
	}
	cout<<endl;
	char yt;
		cout<<"Press any key to continue ";
		cin>>yt;
    cout<<endl;
    if(yt=='Y'||yt=='y'){
    	system("CLS");
        pembuka();
    }else
    system("CLS");
        pembuka();
}
void exit()
{
	system("CLS");
	cout<<endl<<endl;
	cout<<"		Terima Kasih";
	Sleep(400);
	cout<<"Telah Membuka Aplikasi Saya ";
	cout<<endl;
	Sleep(400);
	cout<<"		Program ini untuk memenuhi salah satu tugas Struktur Data"<<endl;
	cout<<endl;
	Sleep(400);
	cout<<"		Dosen Pengampu : ";Sleep(200);
	cout<<"MUCHAMAD KUKUH TRI HARYANTO M.Kom, C.EH, C,HFI"<<endl;
	cout<<endl;
	Sleep(400);
	cout<<"		Prana Septia ";
	Sleep(400);
	cout<<"	5170411184"<<endl;
	cout<<endl;
	cout<<"		Copyright 2019"<<endl;
	cout<<endl;
	Sleep(400);
	
	
	exit(0);
	
}

int main()
{

	pembuka();

}

