#include <iostream>

using namespace std;

//deklarasi konversi total detik ke jam, menit, detik
int jam(int td);
//deklarasi konversi jam, menit, detik ke total detik 
int total_detik(int j,int m, int d);
//deklarasi header
void biodata();

int main() {
    int j, m, d,td, sm, hasil_konvers; 
    biodata();
    
    td = total_detik(j,m,d);
    hasil_konvers = jam(td);
    return 0;
}

void biodata(){
	//header
	cout <<"Nama 		: Muhamad Dendi Purwanto" << endl;
	cout <<"NPM		: 20.14.1.0001"<< endl;
	cout <<"Kelas		: 1A"<< endl;
	cout <<"Tugas 		: 7"<< endl;
	cout <<"-------------------------------------------------------" << endl;
    cout <<"Membuat Function total detik \n";
	cout <<"Function konversi total detik ke jam, menit, detik " << endl;
    cout <<"-------------------------------------------------------" << endl;
}
//function konversi total detik ke jam, menit, detik
int jam(int td) {
    int j, m, d, sm;
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
int total_detik(int j,int m,int d) {
    int td;
    cout << "Masukan Jam    :  " ; cin >> j;
   	cout <<"-------------------------------------------------------" << endl;
    cout << "Masukan menit   :  " ; cin >> m;
    cout <<"-------------------------------------------------------" << endl;
    cout << "Masukan detik    :  "; cin >> d;
    cout <<"-------------------------------------------------------" << endl;
    td = j * 3600 + m * 60 + d;
    cout << "Hasil konversi ke total detik : " << td <<" Second/Detik"<< endl;
    cout <<"-------------------------------------------------------" << endl;
    return td;
}
