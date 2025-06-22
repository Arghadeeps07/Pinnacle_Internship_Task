#include <iostream>
#include <bitset>
#include <sstream>
#include <iomanip>
using namespace std;

void decimalToBinary(int num) {
    cout << "Binary: " << bitset<32>(num) << endl;
}

void decimalToHex(int num) {
    cout << "Hexadecimal: " << hex << uppercase << num << endl;
}

void binaryToDecimal(string binary) {
    int decimal = stoi(binary, nullptr, 2);
    cout << "Decimal: " << decimal << endl;
}

void hexToDecimal(string hexStr) {
    int decimal;
    stringstream ss;
    ss << hex << hexStr;
    ss >> decimal;
    cout << "Decimal: " << decimal << endl;
}

int main() {
    int choice;
    cout << "Number Converter\n";
    cout << "1. Decimal to Binary and Hexadecimal\n";
    cout << "2. Binary to Decimal\n";
    cout << "3. Hexadecimal to Decimal\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch(choice) {
        case 1: {
            int num;
            cout << "Enter a decimal number: ";
            cin >> num;
            decimalToBinary(num);
            decimalToHex(num);
            break;
        }
        case 2: {
            string binary;
            cout << "Enter a binary number: ";
            cin >> binary;
            binaryToDecimal(binary);
            break;
        }
        case 3: {
            string hexStr;
            cout << "Enter a hexadecimal number: ";
            cin >> hexStr;
            hexToDecimal(hexStr);
            break;
        }
        default:
            cout << "Invalid choice!" << endl;
    }

    return 0;
}
