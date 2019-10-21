//
// Created by matiu on 2.10.2019.
//

#include <iostream>
#include <cmath>

using namespace std;

static int CURRENT_YEAR = 2019;

class Segment {

    float x1, y1;
    float x2, y2;

public:

    void set_segment(float first_x, float first_y, float second_x, float second_y) {
        x1 = first_x;
        y1 = first_y;
        x2 = second_x;
        y2 = second_y;
    }

    double get_length() {
        return (sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2)));
    }

    void flip(char axis) {
        if (axis == 'X') {
            y1 = -y1;
            y2 = -y2;
        } else if (axis == 'Y') {
            x1 = -x1;
            x2 = -x2;
        } else {
            cout << "Such axis doesn't exist. Try 'X' or 'Y'.\n";
        }
    }

    void shift(float vector_x, float vector_y) {
        x1 = x1 + vector_x;
        y1 = y1 + vector_y;
        x2 = x2 + vector_x;
        y2 = y2 + vector_y;
    }

    void show() {
        cout << "First point coordinates: (" << x1 << "," << y1 << ")\n";
        cout << "Second point coordinates: (" << x2 << "," << y2 << ")\n";
        cout << "Segment length: " << get_length() << endl;
    }
};

class Complex {

public:

    float real_part = 0;
    float irrational_part = 0;

    void add(Complex add_complex) {

        real_part = real_part + add_complex.real_part;
        irrational_part = irrational_part + add_complex.irrational_part;
    }

    void subtract(Complex subtract_complex) {

        real_part = real_part - subtract_complex.real_part;
        irrational_part = irrational_part - subtract_complex.irrational_part;
    }

    void show() {
        cout << "Number: " << real_part << " + " << irrational_part << "i.\n";
    }

};

class Citizen {

public:

    string name;
    string surname;
    int day;
    int month;
    int year;

    void set(string new_name, string new_surname, int new_day, int new_month, int new_year) {
        name = new_name;
        surname = new_surname;
        day = new_day;
        month = new_month;
        year = new_year;
    }

    int get_age() {
        return CURRENT_YEAR - year;
    }

    bool is_younger(Citizen another_citizen) {
        if (year > another_citizen.year) {
            return true;
        } else if (year == another_citizen.year) {
            if (month > another_citizen.month) {
                return true;
            } else if (month == another_citizen.month) {
                return day > another_citizen.day;
            } else {
                return false;
            }
        } else {
            return false;
        }
    }
};

class Book {
    bool hard_cover;
    int pages;
    float price;
    string genre;
public:
    string getGenre() {
        return genre;
    }

    bool isHardCover() const {
        return hard_cover;
    }

    int getPages() const {
        return pages;
    }

    float getPrice() const {
        return price;
    }

    void setHardCover(bool hardCover) {
        hard_cover = hardCover;
    }

    void setPages(int new_pages) {
        new_pages = new_pages;
    }

    void setPrice(float new_price) {
        new_price = new_price;
    }

    void setGenre(string new_genre) {
        new_genre = new_genre;
    }

};

class Coffee {
    bool has_milk;
    int sugar_teaspoons;
    bool is_iced;
    float price;
public:
    bool isHasMilk() const {
        return has_milk;
    }

    void setHasMilk(bool hasMilk) {
        has_milk = hasMilk;
    }

    int getSugarTeaspoons() const {
        return sugar_teaspoons;
    }

    void setSugarTeaspoons(int sugarTeaspoons) {
        sugar_teaspoons = sugarTeaspoons;
    }

    bool isIced() const {
        return is_iced;
    }

    void setIsIced(bool isIced) {
        is_iced = isIced;
    }

    float getPrice() const {
        return price;
    }

    void setPrice(float new_price) {
        new_price = new_price;
    }

};

class Person {
    string surname;
    int age;
    int status = 0;

public:

    void dopisz(const string& new_surname, int new_age) {
        cout << "Dodaje " << new_surname << ", " << new_age << "... OK.\n";
        surname = new_surname;
        age = new_age;
        status = 1;
    }

    int zmien(const string& new_surname, int new_age) {
        if (status == 0) {
            return 1;
        }
        cout << "Zmieniam " << surname << " --> " << new_surname << ", "<< age << " --> " << new_age << "... OK.\n";
        surname = new_surname;
        age = new_age;
        return 0;
    }
    int zmien(int new_age, const string& new_surname) {
        if (status == 0) {
            return 1;
        }
        cout << "Zmieniam " << surname << " --> " << new_surname << ", "<< age << " --> " << new_age << "... OK.\n";
        surname = new_surname;
        age = new_age;
        return 0;
    }
    int zmien(const string& new_surname) {
        if (status == 0) {
            return 1;
        }
        cout << "Zmieniam " << surname << " --> " << new_surname  << "... OK.\n";
        surname = new_surname;
        return 0;
    }

    int zmien(int new_age) {
        if (status == 0) {
            return 1;
        }
        cout << "Zmieniam " << age << " --> " << new_age << "... OK.\n";
        age = new_age;
        return 0;
    }

    int drukuj() {
        if (status == 0) {
            return 1;
        }
        cout << surname << ", " << age << endl;
        return 0;
    }

    int skasuj() {
        if (status == 0) {
            return 1;
        }
        cout << "Kasuje: " << surname << ", " << age << "...\n";
        surname = "";
        age = -1;
        status = 0;
        return 0;
    }
};

// MAIN FUNCTION
int second() {

    // Zakomentowane bloczki kodu odpowiadaja kolejnym zadaniom.


    Segment segment{};
    segment.set_segment(1, 3, 5, 15);
    segment.show();
    segment.flip('Y');
    segment.show();
    segment.shift(10, 10);
    segment.show();

    /*
    Complex number;
    number.real_part = 10;
    number.irrational_part = 5;
    number.show();
    number.add(number);
    number.show();
     */

    /*
    Citizen citizen;
    citizen.set("Andrzej", "Kowalski", 10, 8, 1998);
    Citizen another_citizen;
    another_citizen.set("Gustaw", "Zabek", 23, 4, 1998);
    if (citizen.is_younger(another_citizen)) {
        cout << citizen.name << " jest mlodszy od " << another_citizen.name << endl;
    } else {
        cout << citizen.name << " jest starszy od " << another_citizen.name << endl;
    }
    */

    Person test;
    test.dopisz("janusz", 21);
    test.zmien("jaroslaw");
    test.zmien(22);
    test.drukuj();
    cout << test.skasuj();
    test.skasuj();
    cout << test.skasuj();

    return 0;
}