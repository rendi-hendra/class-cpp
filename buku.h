#include <iostream>
using namespace std;

class Buku {
	public:
		string b_nama, t_pinjam, t_pengembalian;
		
		void print () {	
			cout << "Nama Buku: " << b_nama << endl;
			cout <<  "Tanggal Meminjam: " << t_pinjam << endl;
			cout << "Tanggal Pengembalian: " << t_pengembalian << endl;
		} 
};
