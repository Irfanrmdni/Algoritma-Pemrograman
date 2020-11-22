#include <stdio.h>
#include <iostream>
#include <conio.h>

using namespace std;

int main(){

	// OPERASI PENGULANGAN DENGAN FOR LOOP
	// PROGRAM MEMBUAT DERET FIBONACCI
	// RUMUS F_N = F_N1 + F_N2

	int n, f_n, f_n1=1, f_n2=0;

	cout << "Masukan Deret Fibonacci: ";
	cin >> n;

	f_n = f_n1 + f_n2;
	cout << f_n << " ";
	for(int i=1; i<n; i++){

		f_n = f_n1 + f_n2;
		f_n2 = f_n1;
		f_n1 = f_n;
		cout << f_n << " ";
	}
	cout << endl;




	getch();
	return 0;
}
