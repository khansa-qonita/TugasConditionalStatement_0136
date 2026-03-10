#include <iostream>
#include <string>
using namespace std;

void inputData(float berat, float tinggi) {
    cout << "Masukkan berat badan (kg): ";
    cin >> berat;
    cout << "Masukkan tinggi badan (meter): ";
    cin >> tinggi;
}

float hitungBMI(float berat, float tinggi) {
    return berat / (tinggi * tinggi);
}

string cekStatus(float bmi) {
    if (bmi < 18.5) {
        return "Berat Badan Kurang";
    } else if (bmi < 25) {
        return "Berat Badan Normal";
    } else if (bmi < 30) {
        return "Berat Badan Kelebihan";
    } else {
        return "Obesitas";
    }
}

int main() {
    float b, t, bmi;
    cout << "--- Selamat Datang Mahasiswa Kelas A 2025 ---" << endl;
    inputData(b, t);
    bmi = hitungBMI(b, t);
    return 0;

    cout << "\n--- Hasil ---" << endl;
    cout << "BMI Anda : " << bmi << endl;
    cout << "Status   : " << cekStatus(bmi) << endl;
}

