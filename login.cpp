#include <iostream>
#include <string>
using namespace std;

int main() {
    string email, password;
    string correctEmail = "student@uni.com";
    string correctPassword = "1234";

    cout << "Welcome to UniMate Login Module" << endl;
    cout << "---------------------------------" << endl;

    // Merr email dhe password nga përdoruesi
    cout << "Enter your email: ";
    getline(cin, email);
    cout << "Enter your password: ";
    getline(cin, password);

    // Kontrollon nëse janë të sakta
    if (email == correctEmail && password == correctPassword) {
        cout << "\nLogin successful! Welcome!" << endl;
    } else {
        cout << "\nLogin failed! Please check your credentials." << endl;
    }

    // Opsion për të parë menu pas login
    if (email == correctEmail && password == correctPassword) {
        cout << "\n--- Main Menu ---" << endl;
        cout << "1. Profile Settings" << endl;
        cout << "2. Notifications" << endl;
        cout << "3. Security" << endl;
        cout << "4. Help / Tips (Coming Soon)" << endl;
    }

    return 0;
}
