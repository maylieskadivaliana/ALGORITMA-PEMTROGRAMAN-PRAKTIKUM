#include <iostream>

#include "input.h"
#include "proses.h"
#include "output.h"

using namespace std;

main() {
	rm n;
	n.deklarasiMenu();
	cin >> n;
	n.hitungHarga();
	cout << n;
	return 0;
}
