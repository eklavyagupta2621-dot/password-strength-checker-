#include <iostream>
#include <string>

using namespace std;

int main() {
    string password;

    cout << "Enter a password to check: ";
    getline(cin, password);

    bool hasUpper = false, hasLower = false, hasDigit = false, hasSpecial = false;

    for (int i = 0; i < password.length(); i++) {
        char ch = password[i];
        if (ch >= 'A' && ch <= 'Z') hasUpper = true;
        else if (ch >= 'a' && ch <= 'z') hasLower = true;
        else if (ch >= '0' && ch <= '9') hasDigit = true;
        else hasSpecial = true;
    }

    int score = 0;
    if (password.length() >= 8) score++;
    if (password.length() >= 12) score++;
    if (hasUpper) score++;
    if (hasLower) score++;
    if (hasDigit) score++;
    if (hasSpecial) score++;

    string strength;
    if (score <= 2) strength = "Weak";
    else if (score <= 4) strength = "Medium";
    else strength = "Strong";

    cout << "Password Strength: " << strength << endl;

    return 0;
}
