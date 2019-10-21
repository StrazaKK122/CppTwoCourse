//
// Created by matiu on 16.10.2019.
//

#include "Bank.h"
#include <iostream>

bool Bank::bank_login() {
    int pin;
    cout << endl;
    int wrongAnswers = 0;

    while (wrongAnswers < 3) {
        cout << "Podaj aktualny numer PIN:";
        cin >> pin;
        if (pin == Bank::correct_pin) {
            cout << "Poprawny PIN.";
            return true;
        } else {
            cout << "Niepoprawny PIN." << endl;
            wrongAnswers++;
        }
    }
    if (wrongAnswers == 3) {
        cout << "Nie znasz kodu PIN. Twoje konto zostalo zablokowane. Zglos sie po karte do banku.";
    }
    cout << endl;
    return false;
}

void Bank::withdraw(float money) {
    if (bank_login()) {
        cout << "Wyplacanie pieniedzy...\n";
        Bank::balance -= money;
        cout << "Wyplaciles " << money << "$ ze swojego konta.\n";
    }
}

void Bank::deposit(float money) {
    if (bank_login()) {
        cout << "Wplacanie pieniedzy...\n";
        Bank::balance += money;
        cout << "Wplaciles " << money << "$ do swojego konta.\n";
    }
}

void Bank::get_balance() {
    if (bank_login()) {
        cout << "Twoj stan konta to: " << Bank::balance << "$.\n";
    }
}

void Bank::change_pin() {
    int newPin, newPinConfirm;
    cout << "Zmiana kodu PIN...\n";
    cout << "Potwierdz tozsamosc.\n";
    if (bank_login()) {
        cout << "\nPodaj nowy PIN. ";
        cin >> newPin;
        cout << "\nPowtorz nowy PIN: :";
        cin >> newPinConfirm;
        if (newPin == newPinConfirm) {
            Bank::correct_pin = newPin;
            cout << "Zmiana PINU zakonczona powodzeniem.\n";
        } else {
            cout << "Podany kod PIN nie zgadza sie. Sprobuj jeszcze raz.\n";
        }
    }
}