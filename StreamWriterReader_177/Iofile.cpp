#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
	string baris;

	//membukan file dalam mode menulis
	ofstream outfile;
	//menunjukkan ke sebuah nama file
	outfile.open("contoh file.txt");

	cout << ">= Menulis file, \'q\' untuk keluar" << endl;

	//unlimited loop untuk menulis
	while (true) {
		cout << "- ";
		//mendapatkan setiap karakter dalam satu baris
		getline(cin, baris);
		//loop akan berhenti jika anda memasukkan karakter q
		if (baris == "q")break;
		//menulis dan memasukkan nilai dari 'baris' ke dalam file
		outfile << baris << endl;
	}
	//selesai dalam menulis sekarang tutup filenya
	outfile.close();

	//Membuka file dalam mode membaca
	ifstream infile;
	//Menunjuk ke sebuah file
	infile.open("contoh file.txt");

	cout << endl << ">= Membuka dan membaca file " << endl;
	//Jika file ada maka
	if (infile.is_open()) {
		//melakukan perulangan setiap baris
		while (getline(infile, baris)) {

		}
	}
}