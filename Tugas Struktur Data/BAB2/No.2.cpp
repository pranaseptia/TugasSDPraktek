#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
int main(){
	int n;
	float x[n],tot=0,bil,pangkat,varian;
		cout << " Program Menghitung Standar Deviasi  "<<endl;
		cout << " ================================== "<<endl;
		cout<<" Masukan Jumlah data yang anda inginkan = ";cin>>n;
	for(int i=0;i<n;i++){
		cout<<" Masukan Nilai ke- "<<i+1<<" = ";cin>>x[n];
		pangkat+=(pow(x[n], 2));
		tot+=x[n];
	}
	bil=pow(tot, 2);
	varian=((n*pangkat)-bil)/(n*(n-1));
	cout<<" jadi Standar Deviasinya = "<<sqrt(varian)<<endl;
	
return 0;
}
