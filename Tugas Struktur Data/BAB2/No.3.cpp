#include <iostream>
//5170411184 (PRANA SEPTIA)
using namespace std;
int main(){
	string nama;
	cout<<" Masukan Nama Anda = ";cin>>nama;
	cout<<endl;
	int i=nama.length()-1;
	for(i;i>=0;i--){
		for(int a=0;a<=i;a++){
			cout<<nama[a];
		}
		cout<<endl;
	}
	return 0;
}
