#include <iostream>
#include "include/mainmenu.h"
#include "include/start.h"

extern int input;
extern bool FL_EXIT;
extern bool FL_INPUTINVALID;

void InitMainMenu(){
    do {
        system("clear");
        std::cout << "\e[8;400;500t";
        std::cout << "FIREPOWER v1.0\n"
                    "\n"
                    "1. Play\n"
                    "2. Options\n"
                    "3. Exit\n"
                    "\n";
        if(FL_INPUTINVALID){
            std::cout << "Invalid. Please select a valid option:";
            FL_INPUTINVALID = false;
        } else {
            std::cout << "Please select an option:";
        }
        std::cin >> input;
        switch(input){
            case 1:
                system("clear");
                StartGame();
                break;
            case 2:
                //to be implemented in the future (probably never tho)
                break;
            case 3:
                FL_EXIT = true;
                break;
            default:
                FL_INPUTINVALID = true;
                break;
        }
    } while (FL_INPUTINVALID);
    return;
}
