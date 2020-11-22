#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

int main(){

	// OPERASI LARIK 2 DIMENSI
	// PROGRAM MENJUMLAHKAN MATRIKS A + B

	int a[2][2] = {{6,7},{5,8}};
	int b[2][2] = {{1,3},{4,-1}};
	int c[2][2];

	for(int i=0; i<2; i++){

		for(int j=0; j<2; j++){

			c[i][j] = a[i][j] + b[i][j];
		}
	}

	for(int i=0; i<2; i++){

		for(int j=0; j<2; j++){

			cout << setw(3) << c[i][j] << " ";
		}
		cout << endl;
	}





	getch();
	return 0;
}
