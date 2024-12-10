#include <iostream>
#include <cmath> 
using namespace std;

const double epsilon = 1e-9;

void hitung_trigonometri(double sudut, double radians, int choice) {
    switch (choice) {
        case 1:
            cout << "sin(" << sudut << ") = " << sin(radians) << endl;
            break;
        case 2:
            cout << "cos(" << sudut << ") = " << cos(radians) << endl;
            break;
        case 3:
            if (fabs(fmod(sudut, 180) - 90) < epsilon) {
                cout << "tan(" << sudut << ") infinity" << endl;
            } else {
                cout << "tan(" << sudut << ") = " << tan(radians) << endl;
            }
            break;
        case 4:
            if (fabs(fmod(sudut, 180) - 0) < epsilon) {
                cout << "cot(" << sudut << ") infinity" << endl;
            } else {
                cout << "cot(" << sudut << ") = " << 1.0 / tan(radians) << endl;
            }
            break;
        case 5:
            if (fabs(sin(radians)) < epsilon) {
                cout << "csc(" << sudut << ") infinity" << endl;
            } else {
                cout << "csc(" << sudut << ") = " << 1.0 / sin(radians) << endl;
            }
            break;
        case 6:
            if (fabs(cos(radians)) < epsilon) {
                cout << "sec(" << sudut << ") infinity" << endl;
            } else {
                cout << "sec(" << sudut << ") = " << 1.0 / cos(radians) << endl;
            }
            break;
        default:
            cout << "Pilihan tidak valid." << endl;
    }
}

void hitung_turunan(double sudut, double radians, int choice) {
    switch (choice) {
        case 1:
            cout << "Turunan sin(" << sudut << ") adalah cos(" << sudut << ") = " << cos(radians) << endl;
            break;
        case 2:
            cout << "Turunan cos(" << sudut << ") adalah -sin(" << sudut << ") = " << -sin(radians) << endl;
            break;
        case 3:
            if (fabs(fmod(sudut, 180) - 90) < epsilon) {
                cout << "Turunan tan(" << sudut << ") tidak terdefinisi (infinity)." << endl;
            } else {
                cout << "Turunan tan(" << sudut << ") adalah sec^2(" << sudut << ") = " << 1.0 / pow(cos(radians), 2) << endl;
            }
            break;
        case 4:
            if (fabs(fmod(sudut, 180) - 0) < epsilon) {
                cout << "Turunan cot(" << sudut << ") tidak terdefinisi (infinity)." << endl;
            } else {
                cout << "Turunan cot(" << sudut << ") adalah -csc^2(" << sudut << ") = " << -1.0 / pow(sin(radians), 2) << endl;
            }
            break;
        case 5:
            if (fabs(sin(radians)) < epsilon) {
                cout << "Turunan csc(" << sudut << ") tidak terdefinisi (infinity)." << endl;
            } else {
                cout << "Turunan csc(" << sudut << ") adalah -csc(" << sudut << ") * cot(" << sudut << ") = "
                     << -(1.0 / sin(radians)) * (1.0 / tan(radians)) << endl;
            }
            break;
        case 6:
            if (fabs(cos(radians)) < epsilon) {
                cout << "Turunan sec(" << sudut << ") tidak terdefinisi (infinity)." << endl;
            } else {
                cout << "Turunan sec(" << sudut << ") adalah sec(" << sudut << ") * tan(" << sudut << ") = "
                     << (1.0 / cos(radians)) * tan(radians) << endl;
            }
            break;
        default:
            cout << "Pilihan tidak valid." << endl;
    }
}

void hitung_integral(double sudut, double radians, int choice) {
    switch (choice) {
        case 1:
            cout << "Integral sin(" << sudut << ") adalah -cos(" << sudut << ") + C = " << -cos(radians) << " + C" << endl;
            break;
        case 2:
            cout << "Integral cos(" << sudut << ") adalah sin(" << sudut << ") + C = " << sin(radians) << " + C" << endl;
            break;
        case 3:
            if (fabs(fmod(sudut, 180) - 90) < epsilon) {
                cout << "Integral tan(" << sudut << ") tidak terdefinisi (infinity)." << endl;
            } else {
                cout << "Integral tan(" << sudut << ") adalah -ln|cos(" << sudut << ")| + C = " << -log(fabs(cos(radians))) << " + C" << endl;
            }
            break;
        default:
            cout << "Integral untuk fungsi ini belum tersedia." << endl;
    }
}
int main() {
    double sudut, radians; 
    int pilihin, trigono; 

    cout << "=====================================" << endl;
    cout << "==== Program Fungsi Trigonometri ====" << endl;
    cout << "=====================================" << endl;
    
    cout << endl;
    cout << "Masukkan sudut dalam derajat: ";
    cin >> sudut;

    radians = sudut * M_PI / 180.0;

    cout << "Pilih jenis operasi: " << endl;
    cout << "1. Cari nilai trigonometri" << endl;
    cout << "2. Cari turunan trigonometri" << endl;
    cout << "3. Cari integral trigonometri" << endl;
    cout << "Pilihan Anda: ";
    cin >> pilihin;
    
    cout << endl;
    
    cout << "Pilih fungsi trigonometri: " << endl;
    cout << "1. Sinus (sin)" << endl;
    cout << "2. Cosinus (cos)" << endl;
    cout << "3. Tangen (tan)" << endl;
    cout << "4. Cotangen (cot)" << endl;
    cout << "5. Cosecan (csc)" << endl;
    cout << "6. Secan (sec)" << endl;
    cout << "Pilihan Anda: ";
    cin >> trigono;

cout << endl;
    
    if (pilihin == 1) {
        hitung_trigonometri(sudut, radians, trigono);
    } else if (pilihin == 2) {
        hitung_turunan(sudut, radians, trigono);
    } else if (pilihin == 3) {
        hitung_integral(sudut, radians, trigono);
    } else {
        cout << "Pilihan operasi tidak valid." << endl;
    }
    cout << endl;
    
    cout << "Program selesai. Terima kasih!" << endl;
    return 0;
}
