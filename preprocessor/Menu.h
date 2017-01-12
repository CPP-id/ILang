#include "Profil.h"
#include <iostream>
using namespace std;

#ifndef Menu_H
#define Menu_H

class Menu{
  public:
    void cmd404();
    void bantuan();
    void versi();
};

void Menu::cmd404(){
  cout  << "Perintah tidak dapat diidentifikasi\n"
  << "Gunakan :\n"
  << "    ilang --bantuan\n"
  << "untuk melihat halaman bantuan\n"
  ;
}

void Menu::bantuan(){
  cout  << "ILang (Indonesian Language) - The Indonesian Language Compiler\n"
        << "--------------------------------------------------------------\n"
        << "Penggunaan : ilang [opsi] <perintah>\n\n"
        << "Di bawah ini opsi yang dapat digunakan:\n\n"
        << "--bantuan   : Melihat bantuan dan cara penggunaan\n"
        << "--versi     : Melihat versi ILang yang digunakan\n"
        ;
}

void Menu::versi(){
  cout  << "ILang (Indonesian Language) - The Indonesian Language Compiler\n"
        << "--------------------------------------------------------------\n"
        << "Versi : " << VERSI << endl
        ;
}

#endif
