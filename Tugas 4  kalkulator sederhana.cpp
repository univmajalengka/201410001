#include<iostream>
using namespace std;
int main()
{
    cout<<"Tugas 4 Membuat Kalkulator Sederhana" << endl;
    cout <<"--------------------------------\n";    
	cout<<"Pilih Menu Operator "<<endl;
    cout <<"--------------------------------\n";
	cout<<"|1. Pertambahan"<<endl;
	cout<<"|2. Pengurangan"<<endl;
	cout<<"|3. Perkalian"<<endl;
	cout<<"|4. Pembagian"<<endl;
	cout<<"|5. Sisa Hasil Bagi"<<endl;
    cout <<"--------------------------------\n";
        
    int  a,b;
    int menu;
    char status;
	float c,d,e,f;
	
    do{   
    //masukan pemilihan operasi
    cout <<"\nPilih/Masukan Menu Operator :  ";
	cin>>menu;
     //keluaran hasil  pemilihan operasi 
     cout <<"--------------------------------\n";
    cout <<"Anda Memilih Operator :  " << menu;
 
    
	if(menu==1){
         //Pertambahan
        cout<<"\n\nIni adalah Operasi pertambahan(+)" << endl;
        cout <<"Masukan Angka :  ";
		cin>>a;
         cout <<"Masukan Angka :  ";
		cin>>b;
         //operasi pertambahan
		c=a+b;
		cout<<"hasil >>"<<a<<"+"<< b <<"="<<c;
	}else if(menu==2){
        //pengurangan
        cout<<"\n\nIni adalah Operasi Pengurangan (-)" << endl;
        cout <<"Masukan Angka :  ";
		cin>>a;
        cout <<"Masukan Angka :  ";
		cin>>b;
       //proses pengurangan 
		c=a-b;
        //keluaran
			cout<<"hasil >> "<<a<<" - "<< b << "= " << c;
    }
      else if(menu==3){
         //perkalian
		cout<<"\n\nIni adalah Operasi Perkalian (*)" << endl;
        cout <<"Masukan Angka :  ";
		cin>>a;
        cout <<"Masukan Angka :  ";
		cin>>b;
         //proses perkalian
		c=a*b;
         //keluaran
	   cout<<"hasil >> "<<a<<"*"<< b <<"= " << c;
      }
      else if(menu==4){
         //pembagian
		cout<<"\n\nIni adalah Operasi pembagian (/)" << endl;
        cout <<"Masukan Angka :   ";
		cin>>d;
        cout <<"Masukan Angka :   ";
		cin>>e;
         //proses pembagian
		c=d/e;
         //keluaran
		cout<<"hasil >>  "<<d<<" / "<< e<<"= "<< c;
    }else if(menu==5){
         //sisa hasil bagi  
		cout<<"\n\nIni adalah Operasi Sisa Hasil Bagi (%)" << endl;
        cout <<"Masukan Angka :  ";
		cin>>a;
        cout <<"Masukan Angka :  ";
		cin>>b;
        //proses
		c=a%b;
         //keluaran
		cout<<"hasil >>  "<<a<<" % "<< b<<"= "<< c;
	}else{
		cout<<"\nMenu Tidak Ada!, Ulangi " << endl;
        }
        cout <<"\n--------------------------------\n";
        cout<<"\n\nLagi [Y/N]? ";
		cin>> status;
		cout <<"--------------------------------\n";
		}while(status=='Y'||status=='y');
		cout<<"\nTerimakasih"<<endl;
       return 1;
}
