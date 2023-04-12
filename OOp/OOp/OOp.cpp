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
public:
	void inputmk();
	void tampilmk();
};

void Matakuliah::inputmk() {
	cout << "\n Masukkan kode mata kuliah : ";
	cin >> kode;
	cout << "Masukan Nama Matakuliah : ";
	cin >> namamk;
	cout << "Masukan Sks Mata Kuliah : ";
	cin >> sks;
} 
void Matakuliah::tampilmk() {
	cout << "kode matakuliah : " << kode << endl;
	cout << "Nama Matakuliah : " << namamk << endl;
	cout << "jumlah sks : " << sks << endl;

}

int main() {
	Mahasiswa mhs;
	Matakuliah mk;

	mhs.inputdata();
	mhs.tampildata();

	mk.inputmk();
	mk.tampilmk();
}

