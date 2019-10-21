//
// Created by maffey on 21.10.2019.
//

#include "Smartphone.h"
#include <iostream>
#include <cmath>

void Smartphone::email_content(const string &email, const string &topic, const string &message) {
    cout << "\n/////////////////////////////////////////\n";
    cout << "E-mail: " << email << endl;
    cout << "Topic: " << topic << endl;
    cout << "-----------------------------------------\n";
    cout << message << endl;
    cout << "/////////////////////////////////////////\n\n";
}

void Smartphone::email() {
    int choice;
    cout << "Otwieranie poczty email...\n";
    cout << "Co chcesz zrobic?\n";
    cout << "1 | Wyslac wiadomosc.\n";
    cout << "2 | Sprawdzic skrzynke odbiorcza.\n";
    cin >> choice;
    switch (choice) {
        case 1: {
            string targetEmail, topic, message;
            string decision;
            cout << "Do kogo chcesz wyslac maila?\n";
            cin >> targetEmail;
            cout << "Podaj tytul wiadomosci.\n";
            cin >> topic;
            cout << "Wpisz tresc wiadomosci.\n";
            cin >> message;
            cout << "Oto twoja wiadomosc.\n";
            email_content(targetEmail, topic, message);
            cout << "Czy na pewno chcesz ja wyslac?\nNapisz 'tak' lub 'nie'";
            cin >> decision;
            if (decision == "tak") {
                cout << "Wiadomosc zostala wyslana.\n";
            } else {
                cout << "Wiadomosc zostala usunieta.\n";
            }
            break;
        }

        case 2:
            cout << "Oto twoje wiadomosci:\n";
            email_content("janusz@gmail.com", "Pralka na OLX",
                          "Dzien dobry, Janusz z tej strony. Z checia kupie pana pralke.");
            email_content("avocado@aol.com", "We need YOUR help!",
                          "Hello there! My family is in dire need! Could you send us 1 000 $ to save our Nigerian prince and his wife? PLEASE!");
            email_content("google@google.com", "Zmienilismy nasza polityke prywatnosci",
                          "Witaj uzytkowniku!\nOd 22.05.2019 zmienila sie nasza polityka prywatnosci. Prosze zapoznac sie ze wszystkimi informacjami na naszej stronie.");
            break;

        default:
            cout << "Wybrano nieprawidlowa opcje.\n";
            break;

    }
}

void Smartphone::calculator() {
    float a, b = 0, result;
    char symbol;
    cout << "Podaj pierwsza liczbe.\n";
    cin >> a;
    cout << "Podaj typ dzialania. [+, -, *, /, q, l, s]\nq - sqrt()\nl - log()\ns - sin()\n";
    cin >> symbol;
    if (symbol != 'q' && symbol != 'l' && symbol != 's') {
        cout << "Podaj druga liczbe.\n";
        cin >> b;
    }
    switch (symbol) {

        case '+':
            result = a + b;
            break;
        case '-':
            result = a - b;
            break;
        case '*':
            result = a * b;
            break;
        case '/':
            result = a / b;
            break;
        case 'q':
            result = sqrt(a);
            break;
        case 'l':
            result = log(a);
            break;
        case 's':
            result = sin(a);
            break;
        default:
            cout << "Niedozwolona operacja.\n";
            result = 0.0;
            break;
    }
    cout << "Wynik: " << result << endl;
}

void Smartphone::calendar() {
    cout << "Otwieranie terminarza...\n";
    cout << "Przypomnienia na dzis:\n";
    cout << "	- napisac maila do dziekanatu - 17:00\n";
    cout << "	- wyjsc z psem - 22:00\n";
    cout << "	- kupic mleko - 12:00\n";
    cout << "	- pograc w Apexa - 20:00\n";
}

void Smartphone::contacts_list() {
    cout << "1. Andrzej Mikula - 666 871 221\n";
    cout << "2. Andrzej Walenty - 123 321 222\n";
    cout << "3. Edward Karocki - 665 999 195\n";
    cout << "4. Malgorzata Karocka - 600 870 515\n";
    cout << "5. Xardas - 696 420 321\n";
}

void Smartphone::contacts() {
    cout << "Otwieranie kontaktow...\n";
    cout << "Lista kontaktow:\n";
    contacts_list();
}

void Smartphone::message_content(int contactNumber, const string &msg) {
    cout << "\n####################\n";
    cout << "Odbiorca: " << contactNumber << "\n\n";
    cout << msg << endl;
    cout << "####################\n\n";
}

void Smartphone::message() {
    int number;
    string msg;
    cout << "Otwieranie SMS...\n";
    contacts_list();
    cout << "Komu chcesz wyslac wiadomosc? Wpisz nr telefonu:\n";
    cin >> number;
    cout << "Podaj tresc wiadomosci:\n";
    cin >> msg;
    message_content(number, msg);
    cout << "Wiadomosc zostala wyslana.\n";
}
