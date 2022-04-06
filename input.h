#ifndef _INPUT_H
#define _INPUT_H

#include <iostream>

using namespace std;

class rm {
	friend ostream& operator << (ostream&, const rm&);
	friend istream& operator >> (istream&, rm&);

private:
	int harga[5], jumlah[5], jarak, total, diskon, disk_ongkir, ongkir, b_ongkir, b_menu;
	string nama[5], namaOrang;
		
public:
	void deklarasiMenu();
	void hitungHarga();
};

istream& operator >> (istream& in, rm& a) {
    int pil;
    
	cout << "========================================\n";
	cout << "Masukkan Nama Pembeli : ";
	in >> a.namaOrang;
	cout << "Masukkan Jarak Rumah (dalam km) : ";
	in >> a.jarak;
	
	cout << "========================================\n";
	cout << "Menu:\n";
	cout << "0. Keluar dan Cetak Struk\n";
	for (int i = 0; i < 5; i++) {
		cout << i + 1 << ". " << a.nama[i] << " Rp" << a.harga[i] << endl;
	}

	do {
		cout << "Pilihan Menu: ";
		in >> pil;
		
		if (pil == 0) {
			break;
		}
		
		for (int i = 0; i < 5; i++) {
			if (pil == i + 1) {
				cout << a.nama[i] << " telah ditambah di dalam pesanan anda\n";
				a.jumlah[i] += 1;
				continue;
			}
		}
	} while (pil != 0);
	
}

#endif
