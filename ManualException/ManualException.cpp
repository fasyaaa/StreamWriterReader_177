#include <iostream>
using namespace std;

int main() {
	try {
		cout << "Selamat Belajar di Prodi TI UMY" << endl;
		/*throw 0.5; */  //melemparkan sebuah integer maka (bagian 3)
		//throw 1;   //melemparkan integer ke 2
		cout << "Pernyataan tidak akan di eksekusi" << endl;
	}
	catch (int a) {
		//blok ini akan di eksekusi
		cout << "Pengecualian akan dieksekusi" << endl;
	}
	catch (...) {
		//Jika selain integer maka block ini akan dieksekusi
		cout << "Default Pengecualian dieksekusi" << endl;
	}
	return 0;
}