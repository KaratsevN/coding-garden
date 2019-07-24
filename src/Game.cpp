#include <Game.h>

void Game::start() {
    // struct winsize w;
    // ioctl(STDOUT_FILENO, TIOCGWINSZ, &w);
    /* terminal_set("window.title = Game v0.0.1;"
                 "window.size = 80x25;");*/
    // "window.size = "+w.ws_col+","+w.ws_row+";");
    terminal_open();
    terminal_refresh();
    control.draw();
}

bool Game::update() {
    // control.isDeadEvent();
    // I think that Draw() need to recode
    if (control.keyEvent() == -1) {
        return false;
    }
    if (control.keyEvent()) {
        control.draw();
    }
    return true;
}

int Game::exit() {
    // save changes
    std::cout << "Close";
    terminal_close();
    return 0;
}
