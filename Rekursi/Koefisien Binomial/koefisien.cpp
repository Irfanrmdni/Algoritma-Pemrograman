#include <stdio.h>
#include <iostream>
#include <conio.h>

using namespace std;

	int binom(int n, int k){

		if(n==0){

			return 1;
		}else if(k==n){

			return 1;
		}else{

			return binom(n-1,k-1) + binom(n-1,k);
		}

	}

int main(){

	// REKURSI
   // KOEFISIEN BINOMIAL (n 0) = 1, (n n) = 1, (n k) = (n-1, k-1)+(n-1,k)

	cout << binom(1,1) << endl;
	cout << binom(5,3) << endl;


	getch();
	return 0;
}
