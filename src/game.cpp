#include <iostream>
#include <stdlib.h>

#include "include/mainmenu.h"
#include "include/start.h"

using namespace std;

int input; //for user input
char c; //for "press any key to continue..."

short EnemyHP = 100;
short PlayerHP = 100;

//flags
bool FL_EXIT = false;
bool FL_RANGECALCULATED = false;


int main(){
    InitMainMenu();
    if(FL_EXIT) return 0;
    system("clear");
    StartGame();
}