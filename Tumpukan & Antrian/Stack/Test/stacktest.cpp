#include <stdio.h>
#include <iostream>
#include <conio.h>

using namespace std;

// MEMBUAT DATA PADA STACK YANG AKAN DIMASUKAN TERLEBIH DAHULU KE STRUCT
	struct STACK{

		int data[10];
		int top;
	};

	STACK tumpuk;

	void push(int input_data){

		tumpuk.top++;
		tumpuk.data[tumpuk.top] = input_data;
	}

	int pop(){

		return tumpuk.data[tumpuk.top];
	}

	void set_awal(){

		tumpuk.top = -1;
	}

	bool is_Empty(){

		if(tumpuk.top == -1){

			return 1;
		}else{

			return 0;
		}
	}

	bool is_Full(){

		if(tumpuk.top==9){

			return 1;
		}else{

			return 0;
		}
	}

	void cetak_stack(){

		cout << "Data: " << endl;
		for(int i=0; i<=tumpuk.top; i++){

			cout << tumpuk.data[i] << " ";
		}
	}




int main(){

	// PROGRAM STACK
	set_awal();
	int pilih, input;

	do{
		cout <<"\n";
		cout << "1.Push Data: " << endl;
		cout << "2.Pop Data: " << endl;
		cout << "3.Print Data: " << endl;
		cout << "4.Clear Data: " << endl;
		cout << "5.Exit Data: " << endl;
		cout << "Pilih : ";
		cin >> pilih;

			switch(pilih){

			case 1:
				{
					if(is_Full() == 1){

						cout << "Tumpukan Penuh" << endl;
					}else{

						cout << "Masukan Data yang ingin di Push: ";
						cin >> input;
						cout << endl;
						push(input);
					}
				}
					break;
			case 2:
				{
					if(is_Empty() == 1){

						cout << "Tumpukan Kosong" << endl;
					}else{

						cout << "Data yang di pop " << pop << endl;
					}

				}
					break;
			case 3:
				{
					if(is_Empty() == 1){

						cout << "Tumpukan Kosong" << endl;
					}else{

						cetak_stack();
					}
				}
					break;
			case 4:
				{
					set_awal();
					break;
				}

			}

	}while(pilih>=1 && pilih <=4);


	getch();
	return 0;
}






