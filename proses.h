#ifndef _PROSES_H
#define _PROSES_H

#include "input.h"

void rm::deklarasiMenu() {
    nama[0] = "Ayam Geprek";
	nama[1] = "Ayam Goreng";
	nama[2] = "Udang Goreng";
    nama[3] = "Cumi Goreng";
    nama[4] = "Ayam Bakar";
    
    harga[0] = 21000;
    harga[1] = 17000;
    harga[2] = 19000;
    harga[3] = 20000;
    harga[4] = 25000;
    
    for (int i = 0; i < 5; i++) {
    	jumlah[i] = 0;
	}
}

void rm::hitungHarga() {
	total = 0;
	
 	if (jarak < 3) {
  		ongkir = 15000;
  	} else {
  		ongkir = 25000;
  	}
  	
  	//Akumulasi jumlah
  	for (int i = 0; i < 5; i++) {
  		total += jumlah[i] * harga[i];
  	}
  	
  	//Hitung diskon
  	if (total > 150000) {
  		disk_ongkir = 8000;
  		diskon = 0.35 * total;
  	} else if (total > 50000) {
  		disk_ongkir = 5000;
  		diskon = 0.15 * total;
  	} else if (total > 25000) {
  		disk_ongkir = 3000;
  	}
  	
  	b_ongkir = ongkir - disk_ongkir;
	b_menu = total - diskon;
}

#endif
