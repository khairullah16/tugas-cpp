#include <iostream>

using namespace std;
// Deklarasi function
int main()
{
	// Deklarasi untuk Variabel Jam dan Variabel Tarif
	int Jam, Tarif;

    // Tampilan untuk judul
	cout << "---Selamat datang di rental music kami ---" << endl;
	cout << "Pilih mau berapa jam rental alat musiknya " << endl;
	cout << "Rental 1-10 Jam" << endl;
	cout << endl;
	
	// Tampilan untuk menginput waktu rental
	cout << "Masukkan berapa jam mau rental: "; 
	cin >> Jam;
	
	// Jika waktu rental lebih dari 10 maka tidak bisa
	if(Jam >=11){
		cout <<"Maaf Tidak Bisa";
		cout << endl;
	}
	// Lain jika waktu rental kurang dari 10
	else if(Jam){
			Tarif =Jam * 100000 - (100000 * 50 / 100 * (Jam - 1));
	        cout << "Tarif Rental anda adalah: " <<Tarif << endl;
 	        cout << endl;
	}
    // Tampilan Akhir
	cout << "Terima Kasih, Sudah rental alat musik di zona musik !" << endl;
	
	 return 0;
	 
}
