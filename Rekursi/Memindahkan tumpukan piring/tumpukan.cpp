#include <stdio.h>
#include <iostream>
#include <conio.h>

using namespace std;

	int hanoi(int n, int a, int b, int c){

		if(n==1){

			cout << "Memindahkan piring dari " << a << " ke " << c << endl;
		}else{
			// MEMINDAHKAN N-1 PIRING DARI A KE B DENGAN C SEBAGAI PERANTARA
			hanoi(n-1,a,c,b);
			// MEMINDAH 1 PIRING TERSISA DARI A KE C
			hanoi(1,a,b,c);
			// MEMINDAH N-1 DARI B KE C DENGAN A SEBAGAI PERANTARA
			hanoi(n-1,b,a,c);
		}
	}


int main(){

	// REKURSI
	// PROGRAM MEMINDAHKAN PIRING
	int jum_piring;

	cout << "Jumlah piring = ";
	cin >> jum_piring;

	hanoi(jum_piring,'A','B','C');

	getch();
	return 0;
}
