#include <iostream>
#include "include/options.h"
#include "include/entries.h"
#include "include/textart.h"

extern char c;
extern short EnemyHP, PlayerHP;

void entry1(){
    system("clear");
    DrawPlayerShip();
    std::cout << "The ship glides along the waves, piercing through the fog. The port it was once docked in slowly fades away.\n\n"
                 "The mission you and your crew were assigned isn't like any other. It will determine the fate of the war. It will determine which side rules the seven seas\n\n\n"
                 "Press any key to continue...";
    c=getchar();
    c=getchar();
    entry2();
}

void entry2(){
    system("clear");
    DrawPlayerShipwEnemy();
    std::cout << "From the foggy night a ship emerges. You weren't informed about any other friendly ship being sent to sea today, yet you also doubt that an enemy ship made its way so close to your nation's shore\n\n"
                 "suddenly you hear someone yelling through the talking tube:\n\n"
                 "\"ENEMY SHIP! 2000 YARDS!\n\n\""
                 "You feel a rush of adrenaline as you order the gunners to take aim\n\n"
                 "The ship is ready for battle...\n\n\n"
                 "Press any key to continue...";
    c=getchar();
    option1();
}

void entry3(){
    system("clear");
    DrawPlayerShipwEnemy();
    std::cout << "You decide against firing straight away. You put the rangefinder to work instead. This will positively affect the chance to hit on your next shot\n\n\n"
                 "Press any key to continue...";
    c=getchar();
    c=getchar();
}

void entry4(){
    system("clear");
    DrawPlayerShipwEnemy();
    std::cout << "You decide that there is no time to wait. As soon as the turrets stop turning, you shout through the talking tube:\n\n"
                 "\"FIRE!\"\n\n"
                 "The deck is shaken and the shells fly out of the cannons' barrels. You watch as the tracers ignite and the payload starts falling towards the enemy ship. You look down at your rangefinder: \"Shells impact in: 3... 2... 1...\"\n\n\n"
                 "Press any key to continue...";
    c=getchar();
    c=getchar();

}

void entry5(){
    system("clear");
    DrawPlayerShipwEnemy();
    std::cout << "Water splashes behind the ship, none of the shells hit their target.\n\n"
                 "\"It's a MISS!\"\n\n\n"
                 "Press any key to continue...";
    c=getchar();
}

void entry6(){
    system("clear");
    DrawPlayerShipwEnemy();
    std::cout << "The shells fall right on target, detonating on the enemy ship's deck\n\n"
                 "\"It's a HIT!\" (Enemy HP left: " << EnemyHP << ")\n\n\n"
                 "Press any key to continue...";
    c=getchar();
}

void entry7(){
    system("clear");
    DrawPlayerShipwEnemy();
    std::cout << "The shells fall right on target, so much so that one manages to penetrate the enemy's armour and detonate inside an ammo storage room. The following explosion is blinding and deafening. The enemy ship is nearly split into two.\n\n"
                 "\"It's a CRITICAL HIT!\" (Enemy HP left: " << EnemyHP << ")\n\n\n"
                 "Press any key to continue...";
    c=getchar();
}

void entry8(){
    system("clear");
    DrawPlayerShipwEnemy();
    std::cout << "The enemy fires. The shells fly sky high. You and your crew brace as the shells ignite their tracers. All you can do is pray.\n\n\n"
                 "Press any key to continue...";
    c=getchar();
}

void entry9(){
    system("clear");
    DrawPlayerShipwEnemy();
    std::cout << "You hear water splashes right next to your ship. the shells were a few yards away from hitting the deck.\n\n"
                 "\"They MISSED us!\"\n\n\n"
                 "Press any key to continue...";
    c=getchar();
}

void entry10(){
    system("clear");
    DrawPlayerShipwEnemy();
    std::cout << "Shells land inches away from the bridge detonating everywhere. Luckly no critical damage is done.\n\n"
                 "\"They DAMAGED us!\" (Player HP left: " << PlayerHP << ")\n\n\n"
                 "Press any key to continue...";
    c=getchar();
}

void entry11(){
    system("clear");
    DrawPlayerShipwEnemy();
    std::cout << "Shells land everywhere. They detonate inside one of the turrets making explode violently and fly right off the hull and into the sea.\n\n"
                 "\"They CRITICALLY DAMAGED us!\" (Player HP left: " << PlayerHP << ")\n\n\n"
                 "Press any key to continue...";
    c=getchar();
}

void entry12(){
    system("clear");
    DrawPlayerShip();
    std::cout << "The enemy ship is badly damaged. Just as you prepare to fire again, they do so before you, but the shot detonates inside the barrel of the last operable gun. This is a huge victory for you and your crew.\n\n\n"
                 "Press any key to continue...";
    c=getchar();
}

void entry13(){
    system("clear");
    DrawEnemyShip();
    std::cout << "The water has already started to flood the bridge. Theres no way your mighty ship is getting back home.\n\n"
                 "\"ABANDON SHIP!\"\n\n"
                 "The enemy pulls you and whats left of your crew out of the water. You look back to see the ship that was once your home engulfed by flames and explosions as the ammo cooks off.\n\n\n"
                 "Press any key to continue...";
    c=getchar();
}