#include <iostream>

using namespace std;

int main()
{
	int n;
	
	cout << "Masukan Nilai n:  ";
	cin >> n;
	
	cout << "Segitiga Piramida menggunakan Inputan\n";
	cout << "-----------------------------------" << endl;
	for (int i = 1; i <= n; i++){
		for(int j = 1; j <= i; j++){
			cout << "*";
		}
		cout << endl;
	}
	cout << "-----------------------------------" << endl;
	
	cout << "\nSegitiga Piramida\n";
	int m = 9;
		for (int i = 1; i <= m; i++){
		for(int j = 1; j <= i; j++){
			cout << "*";
		}
		cout << endl;
	}
	cin.get();
	return 0;
}
