#include <iostream> // Header untuk input/output
#include <string>   // Header untuk tipe data string

int main() {
    // Variabel untuk menyimpan data biodata
    std::string nama, alamat, hobi;
    int umur;

    // Input data dari pengguna
    std::cout << "Masukkan Nama: ";
    std::getline(std::cin, nama); // Menggunakan getline untuk membaca string dengan spasi

    std::cout << "Masukkan Umur: ";
    std::cin >> umur;
    std::cin.ignore(); // Mengabaikan karakter newline agar getline berikutnya berfungsi

    std::cout << "Masukkan Alamat: ";
    std::getline(std::cin, alamat);

    std::cout << "Masukkan Hobi: ";
    std::getline(std::cin, hobi);

    // Menampilkan biodata
    std::cout << "\n=== Biodata Anda ===" << std::endl;
    std::cout << "Nama: " << nama << std::endl;
    std::cout << "Umur: " << umur << " tahun" << std::endl;
    std::cout << "Alamat: " << alamat << std::endl;
    std::cout << "Hobi: " << hobi << std::endl;

    return 0; // Menandakan program selesai dengan sukses
}
