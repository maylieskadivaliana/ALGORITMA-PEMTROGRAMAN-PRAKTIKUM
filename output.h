#ifndef _OUTPUT_H
#define _OUTPUT_H

#include "input.h"
#include "proses.h"

ostream& operator << (ostream& out, const rm& b) {
	out << "Hasil Pesanan:\n";
	for (int i = 0; i < 5; i++) {
		if (b.jumlah[i] != 0) {
			out << b.jumlah[i] << " " << b.nama[i] << "\tRp" << b.jumlah[i] * b.harga[i] << endl;
		}
	}
	
	out << "Total Harga:\n";
	out << "Biaya Ongkir (" << b.ongkir << " - " << b.disk_ongkir << ") = Rp" << b.b_ongkir << endl;
	out << "Biaya Makanan (" << b.total << " - " << b.diskon << ") = Rp" << b.b_menu << endl;
	
	out << "Total Biaya Keseluruhan = Rp" << b.b_ongkir + b.b_menu;
}

#endif
