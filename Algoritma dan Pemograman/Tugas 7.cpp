#include <iostream>
//menerapkan fungsi matematika dasar
#include <cmath>

using namespace std;

//deklarasi konversi total detik ke jam, menit, detik
int jam();
//deklarasi konversi jam, menit, detik ke total detik
int total_detik();
//deklarasi header
void header();

int main() {
    int j, m, d,td, sm; 
    header();
    
    total_detik();
    jam();
    return 0;
}

void header(){
	//header
	cout <<"Nama 		: Muhamad Dendi Purwanto" << endl;
	cout <<"NPM		: 20.14.1.0001"<< endl;
	cout <<"Kelas		: 1A"<< endl;
	cout <<"Tugas 		: 7"<< endl;
	cout <<"-------------------------------------------------------" << endl;
    cout <<"Function Konversi jam , menit menjadi  total detik \n";
	cout <<"& function konversi total detik ke jam, menit, detik " << endl;
    cout <<"-------------------------------------------------------" << endl;
}
//function konversi total detik ke jam, menit, detik
int jam() {
    int j, m, d, td, sm;
    cout <<"-------------------------------------------------------" << endl;
	cout << "Masukan Waktu total Detik :  ";  cin >> td;
    cout <<"-------------------------------------------------------" << endl;
    //rumus konversi
    j = (double) td / 3600;
    sm = td % 3600;
    m = (double) sm / 60;
    d = sm % 60;
    cout <<"-------------------------------------------------------" << endl;
    cout << "hasil konversi detik ke jam : " << j << " jam  " << " : " << m << " menit  " << " : " << d << "  detik" << endl;
    cout <<"-------------------------------------------------------" << endl;
    return td;
}
//function konversi jam,menit,detik , ke total detik
int total_detik() {
    int j, m, d, td;
    cout <<"-------------------------------------------------------" << endl;
    cout << "Masuka Jam    :  " ;
    cin >> j;
   	cout <<"-------------------------------------------------------" << endl;
    cout << "Masuka menit   :  " ;
    cin >> m;
    cout <<"-------------------------------------------------------" << endl;
    cout << "Masuka detik    :  ";
    cin >> d;
    cout <<"-------------------------------------------------------" << endl;
    td = j * 3600 + m * 60 + d;
    cout << "Hasil konversi ke total detik : " << td << endl;
    cout <<"-------------------------------------------------------" << endl;
    return td;
}
