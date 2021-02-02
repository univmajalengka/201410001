#include<iostream>

using namespace std;

void biodata();
 int main()
 {
 	int pembelian, diskon,jumtot,bayar;
 	char status;
 	biodata();
 	cout << "-------------------------------------------------" << endl;
 	cout << "|          Program menghitung Diskon            |" << endl;
 	cout << "-------------------------------------------------" << endl;
    cout << "|Diskon :                                       |" << endl;
    cout << "|Pembelian Rp. 0 sampai 25.000 = 0 %            |" << endl;
    cout << "|Pembelian Rp. 25.000 sampai 50.000 = 10%       |" << endl;
    cout << "|Pembelian Rp. 50.000 sampai 100.000 = 12.5%    |" << endl;
    cout << "|Pembelian Lebih dari Rp. 100.000  = 15%        |" << endl;
    cout << "-------------------------------------------------\n" << endl;
    do{
	
    cout << "Masukan Total Pembelian		: Rp. ";
    cin >> pembelian;
    if (pembelian <= 25000) 
	{
        diskon = pembelian * 0;
        jumtot = pembelian - diskon;
        cout << "-------------------------------------------------" << endl;
        cout<<"Diskon  0 %                : Rp. "<<diskon<<endl; //Menampilkan diskon
        cout <<"Total yang harus di bayar  : Rp. " << jumtot << endl;  //Menampilkan total harga yang harus dibayar
        cout <<"Bayar                      : Rp. ";
        cin>>bayar; // Input dari user untuk jumlah yang dibayar
		cout<<"Kembali                    : Rp. "<<bayar-jumtot<<endl; // Menampilkan uang kembali
        cout << "-------------------------------------------------" << endl;
    }
    else if (pembelian <= 50000)
	{
        diskon = pembelian * 0.10;
        jumtot = pembelian - diskon;
        cout << "-------------------------------------------------" << endl;
        cout<<"Diskon  10 %               : Rp. "<<diskon<<endl; //Menampilkan diskon
        cout << "Total yang harus di bayar  : Rp. " << jumtot << endl;  //Menampilkan total harga yang harus dibayar
        cout << "Bayar                      : Rp. ";
        cin>>bayar; // Input dari user untuk jumlah yang dibayar
		cout<<"Kembali                    : Rp. "<<bayar-jumtot<<endl; // Menampilkan uang kembali
        cout << "-------------------------------------------------" << endl;
    }
    else if (pembelian <= 100000) 
	{
        diskon = pembelian * 0.125;
        jumtot = pembelian - diskon;
        cout << "-------------------------------------------------" << endl;
        cout << "Diskon   12,5 %            : Rp."<<diskon<<endl; //Menampilkan diskon
        cout << "Total yang harus di bayar   : Rp. " << jumtot << endl;  //Menampilkan total harga yang harus dibayar
        cout << "Bayar                       : Rp. ";
        cin>>bayar; // Input dari user untuk jumlah yang dibayar
		cout << "Kembali                    : Rp. "<<bayar-jumtot<<endl; // Menampilkan uang kembali
        cout << "-------------------------------------------------" << endl;
    }
    else if (pembelian >= 100000)
	{
        diskon = pembelian * 0.15;
        jumtot = pembelian - diskon;
        cout << "-------------------------------------------------" << endl;
        cout << "Diskon     15 %           : Rp. "<<diskon<<endl; //Menampilkan diskon
		cout << "Total yang harus di bayar  : Rp. " << jumtot << endl;  //Menampilkan total harga yang harus dibayar
		cout << "Bayar                      : Rp. ";
		cin>>bayar; // Input dari user untuk jumlah yang dibayar
		cout << "Kembali                   : Rp. "<<bayar-jumtot<<endl; // Menampilkan uang kembali
        cout << "-------------------------------------------------" << endl;
	}
	else {
		cout << "Masukan Jumlah Belanja" << endl;
	}
        cout<<"\nLagi [Y/N]? ";
		cin>> status;
		cout <<"--------------------------------\n";
	}while(status=='Y'||status=='y');
		cout<<"\nTerimakasih"<<endl;

	cin.get();
	return 0;
 	
 }
void biodata()
{
	cout <<"Nama : Muhamad Dendi Purwanto" << endl;
	cout <<"Kelas 1 A Semester 1" << endl;
	cout <<"Informatika" << endl;
}
