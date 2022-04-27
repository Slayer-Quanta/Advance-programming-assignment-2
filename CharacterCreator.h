#pragma once
#include <iostream>
#include <string>
using namespace std;

class CharacterCreator {
public:
    string gender;
    string name;

    
    void enterName(string n) {
        cout << "What is your name? ";
        name = n;
    }

    string printName() {
        return name;
    }

    void genderSelected(int choiceSelection) {
        cout << "What is your gender?\n1: Male 2: Female 3: Non Binary\n";
        if (choiceSelection == 1) {
            gender = "Male";
        }
        if (choiceSelection == 2) {
            gender = "Female";
        }
        if (choiceSelection == 3) {
            gender = "Non Binary";
        }

    }

    string printGender() {
        return gender;
    }

};