#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

int main(){

	// OPERASI LARIK
	// PROGRAM MENJUMLAHKAN LARIK

	int A[6]={1,2,3,5,6,8};
	int B[6]={4,6,1,5,2,8};
	int C[6];

	cout << "A = (1,2,3,5,6,8)" << endl;
	cout << "B = (4,6,1,5,2,8)" << endl;

	for(int i=0; i<=5; i++){

		C[i] = A[i] + B[i];

		cout << setw(4) << C[i];
	}






	getch();
	return 0;
}
