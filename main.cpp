#include "BearLibTerminal.h"
#include <Game.h>

int main() {
    Game game;
    game.start();
    while (game.update()) {
        game.update();
    }
    game.exit();
    return 0;
}
