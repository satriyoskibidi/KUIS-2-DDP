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
