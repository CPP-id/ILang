#include "Menu.h"

#include <array>
#include <iostream>

using namespace std;

#ifndef CMD_H
#define CMD_H

class CMD{
  public:
    void menu(string arg);
    void args_parser(int argc, char* args[]);
};

void CMD::args_parser(int argc, char* args[]){
  string cmd;
  for (int i = 1; i < argc; i++) {
    cmd = args[i];
    if(cmd == ""){
      // Panggil Fungsi Compiler (Tokenizer/Parser)
    }
    else if(cmd == "--bantuan"){
      this->menu("--bantuan");
    }else if(cmd == "--versi"){
      this->menu("--versi");
    }
    else{
      this->menu("cmd404");
    }
  }
}

void CMD::menu(string arg){
  Menu menu;
  if(arg == "kosong"){
    menu.bantuan();
  }else if(arg == "cmd404"){
    menu.cmd404();
  }else if(arg == "--bantuan"){
    menu.bantuan();
  }else if(arg == "--versi"){
    menu.versi();
  }
}

#endif
