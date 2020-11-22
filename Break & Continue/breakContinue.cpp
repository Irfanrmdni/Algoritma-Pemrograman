#include <stdio.h>
#include <iostream>
#include <conio.h>

using namespace std;

int main(){

	// BREAK & CONTINUE

	int a=10;
	int b=0;

	// DENGAN FOR LOOP
	for(int i=0; i<=a; i++){

		if(i==8){

			break;
		}
		if(i==4){

			continue;
		}
		cout << i << endl;


	}
	cout << endl << endl;
	// DENGAN WHILE
	while(b<=10){

		/*if(b==8){

			break;
		}
		cout << b << endl;
		b++;
		*/
		b++;
		if(b==4){

			continue;
		}
		cout << b << endl;


	}





	getch();
	return 0;
}
