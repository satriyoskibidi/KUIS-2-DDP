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
