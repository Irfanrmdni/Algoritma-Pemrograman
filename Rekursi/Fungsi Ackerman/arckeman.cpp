#include <stdio.h>
#include <iostream>
#include <conio.h>

using namespace std;

	/*cout << a(0,5) << endl;
	cout << a(1,0) << endl;
	cout << a(3,1) << endl;*/

	int a(int m, int n){

		if (m == 0){

			return n + 1;
		}else if(m != 0 && n == 0){


			return a(m-1,1);
		}else{

			return a(m-1,a(m,n-1));
		}
	}

int main(){

	// REKURSI
	// PROGRAM FUNGSI ACKERMAN
	/*
		a(m,n) = n + 1 jika m = 0
		a(m,n) = a(m-1,1) jika m != 0 dan n = 0
		a(m,n) = a(m-1,a(n,n-1)) jika m != 0 dan n != 0
	*/

	cout << a(0,5) << endl;
	cout << a(1,0) << endl;
	cout << a(3,1) << endl;
	cout << a(2,4) << endl;

	getch();
	return 0;
}
