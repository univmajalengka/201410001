#include <iostream>
#include <string>
#include <conio.h>

using namespace std;
//delklarasi global
const float persentunjangan = 0.2;
const float persenpajak = 0.15;

void garis();

int main() {
  	//deklarasi
    string namakaryawan;
	int gajibersih, gajipokok, pajak, tunjangan;
    //input
    cout << "               Program Menghitung Take Home Pay (Gaji Bersih)      " << endl;
    garis();
    cout << "Masukan Nama Karyawan : ";
    getline(cin,namakaryawan);
    cout << "Masukan Gaji Pokok Karyawan :  Rp. ";
    cin >> gajipokok;
    garis();
    //proses
    tunjangan =  persentunjangan * gajipokok;
    pajak = persenpajak * gajipokok;
    gajibersih = gajipokok + tunjangan - pajak;
    
    //ouput
	cout<<"|---------------------------------------------------------------------|\n";
	cout<<"| Perincian :" << endl;
    cout<<"| Nama Karyawan  : "  << namakaryawan << endl;
    cout<<"| Gaji Pokok     :  Rp. " << gajipokok << endl;
    cout<<"| Tunjangan      :  Rp. "  << tunjangan << endl;
    cout<<"| Pajak          :  Rp. "  << pajak << endl;
	cout<<"| Gaji Bersih yang diterima    Rp. " << gajibersih << endl;
    cout<<"|---------------------------------------------------------------------|" << endl;
    
    
    
    return 0;
}

void garis (){
 cout << "----------------------------------------------------------------------------------\n" << endl;
}

