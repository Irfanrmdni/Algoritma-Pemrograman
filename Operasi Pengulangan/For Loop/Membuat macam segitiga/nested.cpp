#include <stdio.h>
#include <iostream>
#include <conio.h>

using namespace std;

int main(){

	int n;

	cout << "Masukan n = ";
	cin >> n;

	cout << endl;
	cout << "loop 1" << endl;
	for(int i=1; i<=n; i++){

		for(int j=1; j<=i; j++){

			cout << "*";
		}
		cout << endl;
	}

	cout << "loop 2" << endl;

	for(int i=1; i<=n; i++){

		for(int j=n; j>=i; j--){

			cout << "*";
		}
		cout << endl;
	}

	cout << "loop 3" << endl;

	for(int i=1; i<=n; i++){

		for(int j=1; j<i; j++){

			cout << " ";
		}
		for(int j=n; j>=i; j--){

			cout << "*";
		}
		cout << endl;
	}

	cout << "loop 4" << endl;

	for(int i=1; i<=n; i++){

		for(int j=n; j>i; j--){

			cout << " ";
		}
		for(int j=1; j<=i; j++){

			cout << "*";
		}
		cout << endl;
	}

	cout << "loop 5" << endl;

	for(int i=1; i<=n; i++){


		for(int j=n; j>i; j--){


			cout << " ";
		}
		for(int j=1; j<=(i*2)-1; j++){

			cout << "*";

		}
		cout << endl;
	}

	cout << "loop 6" << endl;

	for(int i=1; i<=n; i++){

		for(int j=1; j<i; j++){

			cout << " ";
		}
		for(int j=n; j>=(2*i-n); j--){

			cout << "*";
		}
		cout << endl;
	}

	cout << "loop 7" << endl;

	for(int i=1; i<=n; i++){


		for(int j=n; j>i; j--){


			cout << " ";
		}
		for(int j=1; j<=(i*2)-1; j++){

			cout << "*";

		}
		cout << endl;
	}
	for(int i=2; i<=n; i++){

		for(int j=1; j<i; j++){

			cout << " ";
		}
		for(int j=n; j>=(2*i-n); j--){

			cout << "*";
		}
		cout << endl;
	}











	getch();
	return 0;
}
