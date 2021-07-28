#include <iostream>
#include <conio.h>
#include <stdlib.h>

#define MAX 1000



using namespace std;

//deklarasi variable
int nomer[MAX];
int head=-1;
int tail=-1;

// fungsi untuk menunjukam jika tail =-1
bool IsEmpty(){
    if (tail == -1){
        return true;
    }else{
        return false;
    }
}
// fungsi untuk menunjukam jika tail = MAX -1
bool IsFull (){
    if (tail == MAX -1) {
        return true;
    }else {
        return false;
    }
}

void AntrianMasuk(int no) {
    if (IsEmpty()){
        head=tail=0;
    }else{
        tail++;
    }
    nomer[tail] =no;
}

void AntrianKeluar(){
    if(IsEmpty()){
        cout << "Antrian Sudah Kosong !! ";
        getch();
    }else{
    for (int a=head; a<tail; a++){
        nomer[a]=nomer[a+1];
    }
    tail--;
    if (tail == -1){
        head = -1;
    }
    }
}
void Clear(){
head=tail=-1;
}

void view(){
    if(IsEmpty()){
        cout <<  "Antrian Kosong !";

    }else {
    system("cls");
    for (int a=head; a <= tail; a++){
        cout << "================================"
             << "\n >> No. Antri : [" << nomer[a] << "]"
             << "\n===============================" << endl;
    }
    }
}

int main()
{
    system("color 09");
    //deklarasi untuk pilihan user dan nomer urut antrian
    int choose, p=1, urut;
    do{
        system("cls");
        cout <<"\n\n======= Program Antrian =============="
             <<"\n========================================"
             <<"\n|1. Tambah Antrian                     |"
             <<"\n|2. Panggil Antrian                    |"
             <<"\n|3. Lihat Daftar Antrian               |"
             <<"\n|4. Format                             |"
             <<"\n|5. Exit                               |"
             <<"\n========================================";
        cout << "\nPilih ! = "; cin >> choose;
        cout << "\n\n";
        if (choose == 1){
            if(IsFull()){
                cout <<"Antrian Sudah Penuh, Mohon Tunggu Beberapa Saat Lagi ";
            }
            else{
                urut=p;
                AntrianMasuk(urut);
                cout <<"-----------------------------------------" << endl;
                cout <<"|               No. Antrian              |" << endl;
                cout <<"|                " << p << "                       | " << endl;
                cout <<"-----------------------------------------" << endl;
                cout <<"|             Silahkan Mengantri         |" << endl;
                cout <<"|       Menggungu " << tail << " Antrian              |" << endl;
                cout <<"-----------------------------------------" << endl;
                p++;
            }
        }
        else if(choose == 2){
            cout << "============================================" << endl;
            cout << "No. Antri : [" << nomer[head] << "]";
            cout << "\n==========================================" << endl;
            AntrianKeluar();
            cout << "Silahkan Dipanggil ! " << endl;
        }
        else if(choose == 3){
            view();
        }
        else if (choose == 4){
            Clear();
            cout <<"Antrian diKosongkan !" ;
        }
        else if (choose == 5){
        }else{
            cout << "Masukan anda Salah ! \n" << endl;
        }
        getch();
            }while(choose!=5);




return 0;
}
