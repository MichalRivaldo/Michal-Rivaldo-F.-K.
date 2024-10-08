#include <iostream>
#include <cmath>

// Fungsi untuk menghitung luas jajargenjang
double hitungLuasJajargenjang(double alas, double tinggi) {
    return alas * tinggi;
}

// Fungsi untuk menghitung tinggi menggunakan rumus trigonometri
double hitungTinggi(double alas, double sisiMiring, double sudut) {
    return sisiMiring * std::sin(sudut * M_PI / 180);
}

int main() {
    double alas, tinggi, sisiMiring, sudut;
    int pilihan;

    // Tampilkan pilihan kepada pengguna
    std::cout << "Pilih cara menghitung luas jajargenjang:" << std::endl;
    std::cout << "1. Menggunakan tinggi yang diketahui" << std::endl;
    std::cout << "2. Menggunakan sisi miring dan sudut" << std::endl;
    std::cout << "Masukkan pilihan (1/2): ";
    std::cin >> pilihan;

    if (pilihan == 1) {
        // Input nilai alas dan tinggi
        std::cout << "Masukkan nilai alas: ";
        std::cin >> alas;
        std::cout << "Masukkan nilai tinggi: ";
        std::cin >> tinggi;

        // Hitung luas jajargenjang
        double luas = hitungLuasJajargenjang(alas, tinggi);

        // Tampilkan hasil
        std::cout << "Luas jajargenjang adalah: " << luas << std::endl;
    } else if (pilihan == 2) {
        // Input nilai alas, sisi miring, dan sudut
        std::cout << "Masukkan nilai alas: ";
        std::cin >> alas;
        std::cout << "Masukkan nilai sisi miring: ";
        std::cin >> sisiMiring;
        std::cout << "Masukkan nilai sudut (dalam derajat): ";
        std::cin >> sudut;

        // Hitung tinggi menggunakan rumus trigonometri
        double tinggi = hitungTinggi(alas, sisiMiring, sudut);

        // Hitung luas jajargenjang
        double luas = hitungLuasJajargenjang(alas, tinggi);

        // Tampilkan hasil
        std::cout << "Luas jajargenjang adalah: " << luas << std::endl;
    } else {
        std::cout << "Pilihan tidak valid" << std::endl;
    }

    return 0;
}