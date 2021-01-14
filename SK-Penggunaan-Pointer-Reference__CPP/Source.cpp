//-----------------------------//
//Penggunaan Pointer Reference //
//-----------------------------//

#include <iostream>
#include <conio.h>

/* Created by Rizky Khapidsyah */

using namespace std;

int main() {
	int ilham, *rizky, rafli;
	
	ilham = 75;
	rizky = &ilham;
	rafli = *rizky;
	cout << "Nilai ILHAM = " << ilham << endl;
	cout << "Nilai RIZKY = " << rizky << endl;
	cout << "Nilai RAFLI = " << rafli << endl;
	
	_getch();
	return 0;
}