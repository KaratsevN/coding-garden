//
// Created by main on 19.07.19.
//

#pragma once

#include <BearLibTerminal.h>
#include <objects/Character.h>

class Control {
private:
    // std::map<char, >;
    Character character;

public:
    void isDeadEvent();

    int keyEvent();

    void sizeEvent();

    void draw();
};
