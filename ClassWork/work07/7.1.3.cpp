#include <iostream>

using namespace std;

struct date {
    int year;
    int month;
    int day;
};

struct cont {
    char name[21];
    date birthday;
    char tel[15];
    char addr[51];
};

int main()
{
    int n;
    cin >> n;
    cont* person;
    person = new cont[n];

    for (int i = 0; i < n; i++) {
        cin >> person[i].name >> person[i].birthday.year >> person[i].birthday.month >> person[i].birthday.day >> person[i].tel;
        cin.ignore();
        cin.getline(person[i].addr, 51);
    }

    for (int i = n - 1; i > 0; i--) {
        for (int j = 0; j < i; j++) {
            if (person[j].birthday.year < person[j + 1].birthday.year ||
                (person[j].birthday.year == person[j + 1].birthday.year && person[j].birthday.month < person[j + 1].birthday.month) ||
                (person[j].birthday.year == person[j + 1].birthday.year && person[j].birthday.month == person[j + 1].birthday.month && person[j].birthday.day < person[j + 1].birthday.day)) {
                cont tmp = person[j];
                person[j] = person[j + 1];
                person[j + 1] = tmp;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        cout << person[i].name << ' ' << person[i].birthday.year << ' ' << person[i].birthday.month << ' ' << person[i].birthday.day << ' ' << person[i].tel << ' ' << person[i].addr << endl;
    }

    delete[] person;
    return 0;
}