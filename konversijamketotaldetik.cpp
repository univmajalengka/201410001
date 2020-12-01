//konversi jam, menit dan detik ke total detik
#include <iostream>
using namespace std;

int main(){
	/* 
	Keterangan : 
	j = Jam
	m = menit
	d = detik
	td= total detik
	*/
	int j,m,d,td;
	cout <<"Nama 		: Muhamad Dendi Purwanto" << endl;
	cout <<"NPM		: 20.14.1.0001"<< endl;
	cout <<"Kelas		: 1A"<< endl;
	cout <<"Tugas 5"<< endl;
	cout <<"Belajar Konversi jam, menit dan detik ke total detik" << endl;
	cout <<"Masukan Jam     :";
	cin>>j;
	cout <<"Masukan Menit   :";
	cin >>m;
	cout <<"Masukan Detik   :";
	cin>>d;
	td = (j*3600)+(m*60)+d;
	cout <<"Total Detik		:" << td;
	
	return 0;
	
}
