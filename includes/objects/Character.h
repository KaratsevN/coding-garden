//
// Created by main on 19.07.19.
//

#pragma once

class Character {
private:
    int _position_x = 0;
    int _position_y = 0;
    int _hp;
    bool _is_dead;

public:
    void setIsDead(bool dead);

    bool getIsDead();

    int getPositionX();

    int getPositionY();

    void moveUp(int y);

    void moveDown(int y);

    void moveRight(int x);

    void moveLeft(int x);
};
