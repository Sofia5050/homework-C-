#include <iostream>
using namespace std;

int main() {

    // ================= Задание 1 =================
    double a1, b1;
    cin >> a1 >> b1;

    if (a1 > b1)
        cout << a1 << endl;
    else
        cout << b1 << endl;


    // ================= Задание 2 =================
    double side;
    cin >> side;

    cout << side * side << endl;


    // ================= Задание 3 =================
    double num3;
    cin >> num3;

    cout << num3 + 10 << endl;


    // ================= Задание 4 =================
    double a4, b4;
    cin >> a4 >> b4;

    cout << a4 / b4 << endl;


    // ================= Задание 5 =================
    double price;
    int quantity;
    cin >> price >> quantity;

    cout << price * quantity << endl;


    // ================= Задание 6 =================
    double num6;
    cin >> num6;

    if (num6 > 0)
        cout << "POSITIVE" << endl;
    else
        cout << "NEGATIVE" << endl;


    // ================= Задание 7 =================
    int month;
    cin >> month;

    if (month == 1) cout << "January" << endl;
    else if (month == 2) cout << "February" << endl;
    else if (month == 3) cout << "March" << endl;
    else if (month == 4) cout << "April" << endl;
    else if (month == 5) cout << "May" << endl;
    else if (month == 6) cout << "June" << endl;
    else if (month == 7) cout << "July" << endl;
    else if (month == 8) cout << "August" << endl;
    else if (month == 9) cout << "September" << endl;
    else if (month == 10) cout << "October" << endl;
    else if (month == 11) cout << "November" << endl;
    else if (month == 12) cout << "December" << endl;
    else cout << "ERROR" << endl;


    // ================= Задание 8 =================
    int age;
    cin >> age;

    if (age >= 7 && age <= 18)
        cout << "SCHOOL" << endl;
    else
        cout << "NOT SCHOOL" << endl;


    // ================= Задание 9 =================
    string login;
    string password;
    cin >> login >> password;

    if (login == "admin" && password == "1234")
        cout << "OK" << endl;
    else
        cout << "ERROR" << endl;


    // ================= Задание 10 =================
    double temp;
    cin >> temp;

    if (temp < 0 || temp > 35)
        cout << "EXTREME" << endl;
    else
        cout << "NORMAL" << endl;

    return 0;
} 