#include <iostream>
#include <iomanip>
#include "Menu.h"

using namespace std;

void Menu::printMenu () const{
    cout << "######################### Menu #########################" << endl;
    cout << "1 - Promocoes mais recentes " << endl;
    cout << "2 - Pesquisar promocoes por nome de produto " << endl;
    cout << "3 - Pesquisar promocoes por preco " << endl;
    cout << "4 - Pesquisar promocoes por loja " << endl;
    cout << "5 - Pensar o que colocar aqui " << endl;
    cout << "0 - Sair do programa" << endl;
    cout << "######################### Menu #########################" << endl;
}


void Menu::askMenuOption(){
    cout << "Escolha sua opcao : ";
    cin >> menuOption;
    while ( this->menuOption > 5 || this->menuOption < 0){
        cout << "Opcaoo invalida. Escolha uma opcao entre 0 e 5 :" ;
        cin >> menuOption;
    }
}

int Menu::getMenuOption() const {
    return menuOption;   
}

void Menu::callFunction() const{
    (*functions[ this->menuOption ])(this->menuOption);
}