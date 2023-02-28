#include <iostream>
#include "include/mainmenu.h"

extern int input;
extern bool FL_EXIT;

void InitMainMenu(){
    std::cout << "\e[8;400;500t";
    std::cout << "FIREPOWER v1.0\n"
                 "\n"
                 "1. Play\n"
                 "2. Options\n"
                 "3. Exit\n"
                 "\n"
                 "Select an option: ";
    std::cin >> input;
    switch(input){
        case 1:
            //do play stuff
            break;
        case 2:
            //to be implemented in the future (probably never tho)
            break;
        case 3:
            FL_EXIT = true;
            break;
        default:
            break;
    }
    return;
}
