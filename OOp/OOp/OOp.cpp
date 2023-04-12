#include <iostream>
using namespace std;

class Mahasiswa {

private:
	int nim;
	string nama;
public:
	void inputdata() {
		cout << "Masukan NIM : ";
		cin >> nim;
		cout << "Masukkan Nama ; ";
		cin >> nama;
	}
	void tampildata() {
		cout << "\nNIM : " << nim << endl;
		cout << "NAma : " << nama << endl;
	}
};

class Matakuliah {
private :
	string kode;
	string namamk;
	int sks;

};


