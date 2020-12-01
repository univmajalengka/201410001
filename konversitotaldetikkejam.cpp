//konversi total detik ke jam, menit dan detik 
#include <iostream>
using namespace std;

int main(){
	/* 
	Keterangan : 
	j = Jam
	m = menit
	d = detik
	td= total detik
	sm= second/menit 
	*/
	int j,m,d,td,sm;
	cout <<"Nama 		: Muhamad Dendi Purwanto" << endl;
	cout <<"NPM		: 20.14.1.0001"<< endl;
	cout <<"Kelas		: 1A"<< endl;
	cout <<"Tugas 5"<< endl;
	cout <<"Belajar konversi total detik ke jam, menit dan detik " << endl;
	cout <<"Masukan Total Detik     :";
	cin>>td;
	j=td/3600;
	sm=td%3600;
	m=sm/60;
	d=sm%60;
	cout <<"Hasil  >> "<<j <<":"<<m<<":"<<d;
	
	return 0;
	
}
