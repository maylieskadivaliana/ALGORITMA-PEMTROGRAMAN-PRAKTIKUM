#include <iostream>
#include <conio.h>
using namespace std;
int main() {
	int pil, m1 = 0, m2 = 0, total = 0;
	string breakl = "===========================\n";
			cout << "        KEDAI AYAM           \n";
			cout << "  BUKA PUKUL 09.00-18.00     \n";
			cout << "Menu:\n";
			cout << "0. Keluar dan Cetak Struk\n";
			cout << "1. Ayam Goreng Rp17.000\n";
			cout << "2. Ayam Bakar Rp21.000\n";
			cout << breakl;
	do {
		cout << "Pilihan Menu: ";
		cin >> pil;
		
		if (pil == 1) {
			cout << "Ayam Goreng telah ditambah di dalam pesanan anda\n";
			m1 += 1;
			continue;
		} else if (pil == 2) {
			cout << "Ayam Bakar telah ditambah di dalam pesanan anda\n";
			m2 += 1;
			continue;
		} else if (pil == 0) {
			break;
		} else {
			cout << "Pilihan tidak valid\n";
			continue;
		}
	} while (pil != 0);
	
	if (m1 != 0 && m2 != 0) {
		for (int i = 0; i < m1; i++) {
			total += 17000;
		}
		for (int i = 0; i < m2; i++) {
			total += 21000;
		}
		cout << breakl;
		cout << "Hasil Pesanan:\n";
		cout << m1 << " Ayam Goreng\n";
		cout << m2 << " Ayam Bakar\n";
		if (total > 45000) {
			cout << "(Diskon 10% = Rp" << 0.1 * total << ")\n";
			total *= 0.9;
		}
		cout << "Total Harga = Rp" << total;
	} else {
		cout << "Tidak ada yang dibeli";
	}
	
	return 0;
	
	
}
