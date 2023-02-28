#include <iostream>
#include <stdlib.h>

#include "include/options.h"
#include "include/textart.h"
#include "include/entries.h"
#include "include/rng.h"

extern int input;
extern bool FL_RANGECALCULATED;
extern short PlayerHP, EnemyHP;

void option1(){
    system("clear");
    DrawPlayerShipwEnemy();
    std::cout << "What will you do next...\n\n\n"
                 "1. Fire a salvo\n"
                 "2. Calculate the range\n\n";
                 ":";
    std::cin >> input;
    int generated;
    switch(input){
        case 1: {
            entry4();
            generated = rng_salvo();
            if(FL_RANGECALCULATED){
                FL_RANGECALCULATED = false;
                if(generated < 4){
                    entry5();
                } else if (generated < 8){
                    EnemyHP-=10;
                    entry6();
                    if(EnemyHP == 0){
                        entry12();
                        exit(0);
                    }
                } else if (generated <= 10){
                    if(EnemyHP < 30){
                        EnemyHP = 0;
                    } else {
                        EnemyHP-=30;
                    }
                    entry7();
                    if(EnemyHP == 0){
                        entry12();
                        exit(0);
                    }
                }
                
            } else {
                if(generated < 6){
                    entry5();
                } else if (generated < 8){
                    EnemyHP-=10;
                    entry6();
                    if(EnemyHP == 0){
                        entry12();
                        exit(0);
                    }
                } else if (generated <= 10){
                    if(EnemyHP < 30){
                        EnemyHP = 0;
                    } else {
                        EnemyHP-=30;
                    }
                    entry7();
                    if(EnemyHP == 0){
                        entry12();
                        exit(0);
                    }
                }
            }
            break;
        }
        case 2: {
            FL_RANGECALCULATED = true;
            entry3();
            break;
        }
    }
    entry8();
    generated = rng_salvo();
    if(generated < 4){
        entry9();
    } else if (generated < 8){
        PlayerHP-=10;
        entry10();
        if(PlayerHP == 0){
            entry13();
            exit(0);
        }
    } else if (generated <= 10){
        if(PlayerHP < 30){
            PlayerHP = 0;
        } else {
            PlayerHP-=30;
        }
        entry11();
        if(PlayerHP == 0){
            entry13();
            exit(0);
        }
    }

    option1();
}