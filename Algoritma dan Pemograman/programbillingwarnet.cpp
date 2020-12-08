#include <iostream>
#include <windows.h>
using namespace std;
struct billing{
	char nama[30];
	char no[30];
};

int main(){
	int j1,m1,d1,td1;
	int j2,m2,d2,td2;
	int j3,m3,d3,td3;
	int sm;
	billing bling;
	system ("color f0");
	cout <<"Nama 		: Muhamad Dendi Purwanto" << endl;
	cout <<"NPM		: 20.14.1.0001"<< endl;
	cout <<"Kelas		: 1A"<< endl;
	cout <<"Tugas 6"<< endl;
	cout <<"----------------------------------------"<< endl;  
	cout <<"Membuat Program Billing Warnet / telepon"<< endl;
	cout <<"----------------------------------------"<< endl; 
	
	cout <<"\n";
	cout <<"Masukan Nama : " ;
	cin.getline(bling.nama,30);
	cout <<"Masukan No. Komputer : " ;
	cin.getline(bling.no,30);	
	cout <<"========================================" << endl;
	cout <<"Masukan Waktu Awal main di bawah " << endl;
	//waktu awal main
	cout <<"Masukan Jam     :";
	cin>>j1;
	cout <<"Masukan Menit   :";
	cin >>m1;
	cout <<"Masukan Detik   :";
	cin>>d1;
	cout <<"========================================" << endl;
	cout <<"Masukan Waktu akhir main di bawah " << endl;
	//waktu akhir main
	cout <<"Masukan Jam     :";
	cin>>j2;
	cout <<"Masukan Menit   :";
	cin >>m2;
	cout <<"Masukan Detik   :";
	cin>>d2;
	
	
	//proses konversi waktu ke detik
	td1= (j1*3600)+(m1*60)+d1;
	td2= (j2*3600)+(m2*60)+d2;
	
	//operasi pengurangan
	td3 = td2-td1;
	//konversi total detik ke j3,m3,d3
	j3=td3/3600;
	sm=td3%3600;
	m3=sm/60;
	d3=sm%60;
	cout <<"========================================" << endl;
	cout <<"Anda Bermain selama :  >> "<<j3<<":"<<m3<<":"<<d3;
	cout <<"\n========================================" << endl;
	return 0;
	
}
	
