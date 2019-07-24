//
// Created by main on 19.07.19.
//
// #include <stdio.h>
// #include <sys/ioctl.h>
// #include <unistd.h>

#pragma once

#include <BearLibTerminal.h>
#include <iostream>
#include <events/Control.h>

class Game {
private:
    // Size size;
    Control control;

public:
    void start();

    bool update();

    int exit();
};
