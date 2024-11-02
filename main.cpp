#include <iostream>
#include "mahasiswa.h"
#include "buku.h"
using namespace std;

int main () {
	
	Mahasiswa mhs1;
	mhs1.nim = 10;
	mhs1.nama = "Rendi Hendra S.";
	mhs1.prodi = "S1 RPL";
	mhs1.print();	
	
	Buku pbo;
	pbo.b_nama = "Pemrograman berorientasi objek";
	pbo.t_pinjam = "11/3/2024";
	pbo.t_pengembalian = "11/11/2024";
	pbo.print();
	
	
	return 0;
}
