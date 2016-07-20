//
//  main.cpp
//  Final Battle
//
//  Created by Norma Martinez on 12/11/15.
//  Copyright © 2015 Norma Martinez. All rights reserved.
//

#include <chrono>
#include <string>
#include <thread>
#include <iostream>
using namespace std;

class finalBattle {
public:
    
    int playerHealth;
    int attackStamina;
    int playerAttackPower;
    int playerSpecialAttackPower;
    int xenotrixHealth;
    int sword;
    int shield;
    int xenotrixDamage;
    
    finalBattle() {
        playerHealth = 2000;
        attackStamina = 30;
        playerAttackPower = 100;
        playerSpecialAttackPower = 500;
        xenotrixHealth = 5000;
        xenotrixDamage = 20;
    }
    
    void attack() {
        
        using namespace std::this_thread; // sleep_for, sleep_until
        using namespace std::chrono; // nanoseconds, system_clock, seconds
        
        if(playerAttackPower <= 0) {
            cout << "You have no more attack power." << endl;
            sleep_until(system_clock::now() + seconds(2));
            
        }
        else {
            cout << "You used 1 attack stamina." << endl;
            attackStamina--;
            sleep_until(system_clock::now() + seconds(2));
            cout << "You have " << attackStamina << " left." << endl << endl;
            sleep_until(system_clock::now() + seconds(2));
            cout << "Xenotrix lost 100 health!" << endl;
            xenotrixHealth = xenotrixHealth - playerAttackPower;
            sleep_until(system_clock::now() + seconds(2));
            cout << "Xenotrix attacked you!" << endl;
            sleep_until(system_clock::now() + seconds(2));
            cout << "You lost 20 health." << endl;
            playerHealth = playerHealth - xenotrixDamage;
        }
    }
    
    void specialAttack() {
        
        using namespace std::this_thread; // sleep_for, sleep_until
        using namespace std::chrono; // nanoseconds, system_clock, seconds
        
        if(attackStamina >= 2) {
            cout << "You did a special attack!" << endl;
            sleep_until(system_clock::now() + seconds(2));
            cout << "You used 2 attack stamina." << endl;
            attackStamina--;
            attackStamina--;
            cout << "You have " << attackStamina << " left." << endl << endl;
            sleep_until(system_clock::now() + seconds(2));
            cout << "Xenotrix lost 500 health!" << endl;
            xenotrixHealth = xenotrixHealth - playerSpecialAttackPower;
            sleep_until(system_clock::now() + seconds(2));
            cout << "Xenotrix attacked you!" << endl;
            sleep_until(system_clock::now() + seconds(2));
            cout << "You lost 20 health." << endl;
            playerHealth = playerHealth - xenotrixDamage;
            
        }
        else {
            cout << "You don't have enough attack stamina to use a special attack." << endl;
            
        }
    }
    
    void checkHealth() {
        cout << "You have " << playerHealth << " health left." << endl;
    }
    
    void checkXenotrixHealth() {
        cout << "Xenotrix has " << xenotrixHealth << " health left." << endl;
    }
    
    void finishMatch() {
        
        using namespace std::this_thread; // sleep_for, sleep_until
        using namespace std::chrono; // nanoseconds, system_clock, seconds
        
        if(xenotrixHealth <= 0) {
            cout << "*YOU DEFEATED XENOTRIX!*" << endl;
            sleep_until(system_clock::now() + seconds(2));
            cout << "*You locked up up and sealed him away deep under the ground with a magic spell.*" << endl;
            sleep_until(system_clock::now() + seconds(2));
            cout << "Congratulations!" << endl;
            sleep_until(system_clock::now() + seconds(2));
            cout << "*Once you defeated Xenotrix, the missing daughter appeared!*" << endl;
            sleep_until(system_clock::now() + seconds(2));
            cout << "Missing daughter: Thank you so much for saving me!" << endl;
            sleep_until(system_clock::now() + seconds(2));
            cout << "*You go back to town.*" << endl;
            sleep_until(system_clock::now() + seconds(2));
            cout << "Strange man: Thank you for saving my daughter! You truly are a hero." << endl;
            sleep_until(system_clock::now() + seconds(2));
            cout << "THE END." << endl << endl;
            sleep_until(system_clock::now() + seconds(2));
            cout << "EPILOGUE" << endl;
            cout << "--------" << endl;
            sleep_until(system_clock::now() + seconds(2));
            cout << "5 years later..." << endl;
            sleep_until(system_clock::now() + seconds(2));
            cout << "The seal that locked Xenotrix away is shaking." << endl;
            sleep_until(system_clock::now() + seconds(2));
            cout << "THE SEAL BROKE. XENOTRIX GOT FREE." << endl;
            sleep_until(system_clock::now() + seconds(2));
            cout << "To be continued..." << endl;
        }
        else {
            cout << "Xenotrix still has health left! Defeat him! You can do it!" << endl;
        }
    }
};