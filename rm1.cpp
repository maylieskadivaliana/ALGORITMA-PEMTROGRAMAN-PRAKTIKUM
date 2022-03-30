#include <iostream>
#include<conio.h>
using namespace std;

class rm{
		friend istream& operator >> (istream&, rm& z);
	private:
		int makanan, x, harga, ongkir, y, total, jarak, age, ugo, ago, cugo, aba, ayamgeprek, ayamgoreng, udanggoreng, cumigoreng, ayambakar, jml;
		string nama;
		
	public:
	void hitung();
	void bebas();
	void mkn();

};

istream& operator >> (istream& in, rm&z){
	cout<<"=========================================================";
	cout << "\nmasukkan nama : ";
	in >> z.nama;
	cout<<"Daftar Makanan";
	cout<<"\n1. Ayam Geprek 		21000";
	cout<<"\n2. Ayam Goreng		17000";
	cout<<"\n3. Udang Goreng		19000";
	cout<<"\n4. Cumi Goreng		20000";
	cout<<"\n5. Ayam Bakar		25000";
	return in;
}
//maaf kak bingung error kalau tidak 5
void rm::mkn(){
	cout<<"\n Masukkan Jumlah pesanan yang akan dipesan: (input 5)";
	cin>>jml;
	for(int i=0; i<jml; i++){
  	cout<<"\n Masukkan Pesanan:";
	cin>>makanan;
	if(makanan==1){
			cout<<"Jumlah pesanan Ayam Geprek : ";
			cin>>age;
			}
	else if(makanan == 2){
			cout<<"Jumlah pesanan Ayam Goreng : ";
			cin>>ago;
			}
	else if(makanan == 3){
			cout<<"Jumlah pesanan Udang Goreng : ";
			cin>>ugo;
		}
	else if(makanan == 4){
			cout<<"Jumlah pesanan Cumi Goreng : ";
			cin>>cugo;
		}
	else if(makanan == 5){
			cout<<"Jumlah pesanan Ayam Bakar : ";
			cin>>aba;
		}
	}
}
void rm::hitung(){
		ayamgeprek = age * 21000 ;
		ayamgoreng = ago * 17000 ; 
		udanggoreng = ugo * 19000 ;
		cumigoreng = cugo * 20000 ;
		ayambakar= aba * 25000 ;
		x = ayamgeprek+ ayamgoreng+ udanggoreng+ cumigoreng+ ayambakar;
		if (x<=25000){ 
		total=x+ongkir;
		} else if (x >= 25000) {
        total = (ongkir - 3000) + x;
		} else if (x >= 50000){
		total = (ongkir - 5000) + (x - (x*15/100));
     	} 
		else if(x >= 150000){
		total = (ongkir - 8000) + (x-(x*35/100));
		}
      cout<<"\nMenghitung total: "<< total <<endl;
			cout<<"\n:::::::::: Sekian Terimakasih ::::::::::";
}	

void rm :: bebas(){
      cout<<"\nmasukkan jarak : ";
	    cin>>jarak;
			cout<< "Menghitung Ongkir";
			if (jarak <= 3){
			ongkir = 15000;
			} else {
			ongkir = 25000;
			}
      cout << "Biaya Ongkir: Rp" << ongkir;
}

int main(){
	rm a;
	cin>>a;
	a.mkn();
	a.bebas();
	a.hitung();
  	getch();
}
