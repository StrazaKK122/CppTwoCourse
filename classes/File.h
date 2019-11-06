//
// Created by maffey on 28.10.2019.
//

#ifndef SANDBOX_FILE_H
#define SANDBOX_FILE_H

#include <iostream>

using namespace std;


class File {
private:
    string id_pliku;
    char *nazwa_pliku;
    string stan_pliku;
    char tryb_pliku;

public:
    File(string file_id, char *file_name, string file_state_description, char file_mode);

    void ustaw_tryb(char tryb_pliku);

    void wyswietl_tryb();

    void wyswietl_stan();

    void otworz();

    void zamknij();

    void wyswietl_zawartosc();


};


#endif //SANDBOX_FILE_H
