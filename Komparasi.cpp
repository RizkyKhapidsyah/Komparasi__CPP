/*
	Source Behind: Kelas Terbuka
	Modified by: Rizky Khapidsyah

	For general learning.
*/
#include <iostream>
#include "Inisialisasi.c"

using namespace std;

bool hasil;
string C;


int main()
{
	TampilkanNilai();

	//Komparasi: Sebanding. Lambang: ==
	cBaris(); cout << sTp1 << endl; cBaris();
	hasil = (a == b);
	cout << "(a == b): " << hasil << endl;
	p_cHasil(); Char_C(); aBaris();

	//Komparasi: Tidak Sebanding. Lambang: !=
	cBaris(); cout << sTp2 << endl; cBaris();
	hasil = (a != b);
	cout << "(a != b): " << hasil << endl;
	p_cHasil(); Char_C(); aBaris();

	//Komparasi: Kurang Dari. Lambang: <
	cBaris(); cout << sTp3 << endl; cBaris();
	hasil = (a < b);
	cout << "(a < b): " << hasil << endl;
	p_cHasil(); Char_C(); aBaris();

	//Komparasi: Lebih Dari. Lambang: >
	cBaris(); cout << sTp4 << endl; cBaris();
	hasil = (a > b);
	cout << "(a > b): " << hasil << endl;
	p_cHasil(); Char_C(); aBaris();

	//Komparasi: Kurang Dari Sama Dengan. Lambang: <=
	cBaris(); cout << sTp5 << endl; cBaris();
	hasil = (a <= b);
	cout << "(a <= b): " << hasil << endl;
	p_cHasil(); Char_C(); aBaris();

	//Komparasi: Lebih Dari Sama Dengan. Lambang: >=
	cBaris(); cout << sTp6 << endl; cBaris();
	hasil = (a >= b);
	cout << "(a >= b): " << hasil << endl;
	p_cHasil(); Char_C(); aBaris();

	cin.get();
	return 0;
}

void TampilkanNilai()
{
	cout << T1 << _NL;
	cout << "# " << sT1 << "a: " << a << _NL;
	cout << "# " << sT1 << "b: " << b << __NL;
}

void cBaris()
{
	for (int i = 0; i <= 60; i++)
	{
		cout << Baris;
	}
	cout << endl;
}

void aBaris()
{
	cout << endl;  __pNL;
}

void p_cHasil()
{
	switch (hasil)
	{
	case 0: C = "False";
		break;
	case 1: C = "True";
		break;
	}
}

void Char_C()
{
	cout << C << endl;
}