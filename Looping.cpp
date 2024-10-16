#include <iostream>    // Program dimulai dengan mengimpor library iostream, yang memiliki fungsi input dan output. 
using namespace std;    // Penggunaan namespace std agar tidak selalu menyebutkan std:: pada setiap fungsi.

int main() {      // merupakan titik di mana program dimulai untuk dieksekusi, dan ini harus ada dalam setiap program C++. 

    int data;         // Variabel Penyimpan jumlah data.
    int ganjil = 0;   // Variabel Penyimpan jumlah bilangan ganjil.
    int genap = 0;    // Variabel Penyimpan jumlah bilangan genap.
    
    cout << "Masukkan jumlah data : ";    // Menampilkan Pesan untuk memasukkan jumlah data dalam program.
    cin >> data;                          // Meminta pengguna mengisi jumlah data.

    for(int i = 0; i < data; i++) {    // Melakukan perulangan sesuai dengan jumlah data yang dimasukkan.
    
        if(i % 2 == 0) {    // Memeriksa jika angka (i) ialah bilangan genap.
            genap += i;     // Jika iya, maka angka ditambahkan ke variabel genap.
        } else {            // jika angka (i) ternyata bukan bilangan genap, maka angka (i) ialah bilangan ganjil.
            ganjil += i;    // Jika iya, maka angka ditambahkan ke variabel ganjil.
        }
    }
    
    cout << "Jumlah genap : " << genap << endl;      // Menampilkan jumlah bilangan genap.
    cout << "Jumlah ganjil : " << ganjil << endl;    // Menampilkan jumlah bilangan ganjil.

    return 0;     // Mengembalikan nilai 0 sebagai akhir dari program.
}
