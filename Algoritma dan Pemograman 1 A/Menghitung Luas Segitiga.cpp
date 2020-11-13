/* nama : Muhamad Dendi Purwanto
 kelas : 1 A 
 informatika semester 1 */
 
#include<iostream>  
#include<string>  
int a, t ;
float luas;

int main() 
{ 
   
    std::cout<<"Tugas 2 Algoritma dan Pemograman \n";
    std::cout<<"Nama : Muhamad Dendi Purwanto \n";
    std::cout<<"Kelas 1A \n";
    std::cout<<"Informatika \n";
    std::cout<<"semester 1 \n";
    std::cout<<"*******************************************\n";
    std::cout<<"Menghitung Luas Segitiga \n";
    std::cout<<"masukan panjang alas : "; 
    std::cin >> a;
    std::cout<<"masukan Tinggi  segitiga : "; 
    std::cin >> t;
    luas = 0.5*a*t;
    std::cout<<"luas segitiga adalah = "; 
	std::cout<<luas<<std::endl;
    
    return 0; 
}
