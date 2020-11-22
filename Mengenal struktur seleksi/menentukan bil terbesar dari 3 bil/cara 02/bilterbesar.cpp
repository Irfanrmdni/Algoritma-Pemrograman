#include <stdio.h>
#include <iostream>
#include <conio.h>

using namespace std;

int main(){

	int x,y,z,terbesar;

	cout << "Masukan bilangan x = ";
	cin >> x;
	cout << "Masukan bilangan y = ";
	cin >> y;
	cout << "Masukan bilangan z = ";
	cin >> z;

	if(x>y && x>z){

		terbesar = x;
	}
	else if(y>x && y>z){

		terbesar = y;
	}
	else if(z>x && z>y){

		terbesar = z;
	}

	cout << "BILANGAN TERBESAR = " << terbesar << endl;



	getch();
	return 0;
}
