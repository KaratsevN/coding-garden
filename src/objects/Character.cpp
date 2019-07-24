//
// Created by main on 19.07.19.
//

#include <objects/Character.h>

bool Character::getIsDead() {
    return _is_dead;
}

void Character::setIsDead(bool dead) {
    _is_dead = dead;
}

int Character::getPositionX() {
    return _position_x;
}

int Character::getPositionY() {
    return _position_y;
}

void Character::moveUp(int y) {
    _position_y -= y;
}

void Character::moveDown(int y) {
    _position_y += y;
}

void Character::moveRight(int x) {
    _position_x += x;
}

void Character::moveLeft(int x) {
    _position_x -= x;
}
