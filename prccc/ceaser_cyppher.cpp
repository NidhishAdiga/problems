#include <iostream>
#include <string>
using namespace std;

// Function to encrypt the text using Caesar Cipher
string encrypt(string text, int s) {
    string result = "";

    // Traverse the text
    for (int i = 0; i < text.length(); i++) {
        // Encrypt uppercase letters
        if (isupper(text[i])) {
            result += char(int(text[i] + s - 65) % 26 + 65);
        }
        // Encrypt lowercase letters
        else {
            result += char(int(text[i] + s - 97) % 26 + 97);
        }
    }

    return result;
}

// Function to decrypt the text using Caesar Cipher
string decrypt(string text, int s) {
    string result = "";

    // Traverse the text
    for (int i = 0; i < text.length(); i++) {
        // Decrypt uppercase letters
        if (isupper(text[i])) {
            result += char(int(text[i] - s - 65 + 26) % 26 + 65);
        }
        // Decrypt lowercase letters
        else {
            result += char(int(text[i] - s - 97 + 26) % 26 + 97);
        }
    }

    return result;
}

int main() {
    string text;
    int shift;

    cout << "Enter the text: ";
    getline(cin, text);

    cout << "Enter the shift: ";
    cin >> shift;

    string encrypted = encrypt(text, shift);
    cout << "Encrypted Text: " << encrypted << endl;

    string decrypted = decrypt(encrypted, shift);
    cout << "Decrypted Text: " << decrypted << endl;

    return 0;
}
