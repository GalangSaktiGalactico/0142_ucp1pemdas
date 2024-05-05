#include <iostream>

using namespace std;

int main()
{
	

		//siswa mempunyai 2 nilai yaitu

		float nMat, nBahasainggris, rerata;
	string status;

	cout << "Masukkan nilai matematika";
	cin >> nMat;
	cout << "Masukkan nilai Bahasainggris";
	cin >> nBahasainggris;

	rerata = (nBahasainggris + nMat) / 2;

	if (rerata >= 70) {
		status = "Lulus jalur rerata";
	}
	else if (nMat >= 80) {
		status = "Lulus jalur matematika";
	}
	else
	{
		status = "Tidak Lulus";
	}
	cout << "Statusnya adalah" << status << endl;

	system("pause");

	return 0;
}

    struct DetailKelulusan {
		string NilaiMatematika;
		string NilaiRerata;
	};

	struct Mahasiswa {
		string Nama;
		string Status;
		DetailKelulusan DiterimaatauDitolak;
		int nilai; 
	};
     
	in t main()
	{
		Mahasiswa mhs[3];
		for (int i = 0; i < 3; i++);
		cout << "Data ke 1" << (i + 1) << ":" << endl; 



	}


   

    



	// 1. nama = string, umur = int, jurusan = string
	// 2. menjual beras, telur, minyak
	// 3. menentukan alamat mahasiswa
	// 4. menentukan kelulusan siswa
	// 5. 