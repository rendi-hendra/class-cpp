#include <iostream>
using namespace std;

class Mahasiswa {
	public:
		int nim;
		string nama, prodi;
		
		void print () {
			cout << "NIM \t: " << nim << endl;
			cout <<  "Nama \t: " << nama << endl;
			cout << "Prodi \t: " << prodi << endl;
		} 
};
