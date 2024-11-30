#include <iostream>

void Tiktok() {
    for (int i = 1; i <= 100; i++) { // Loop dari 1 hingga 100
        bool flag = true; // Awal flag diatur true
        
        if (i % 3 == 0) { // Jika kelipatan 3
            std::cout << "Tik";
            flag = false; // Tidak mencetak angka
        }

        if (i % 5 == 0) { // Jika kelipatan 5
            std::cout << "Tok";
            flag = false; // Tidak mencetak angka
        }

        if (flag) { // Jika bukan kelipatan 3 atau 5
            std::cout << i;
        }

        std::cout << std::endl; // Baris baru setelah setiap iterasi
    }
}

int main() {
    Tiktok(); // Panggil fungsi
    return 0;
}
