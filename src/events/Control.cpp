//
// Created by main on 19.07.19.
//

#include <events/Control.h>

/*
 typedef void (*pfunc)(string);
 map<string, pfunc> funcMap;
 pfunc f = [...]
*/

// void Control::isDeadEvent() {
//    if(character.getIsDead()){
//        //smth
//    }
// }

int Control::keyEvent() {
    if (terminal_has_input()) {
        auto key = terminal_read();
        if (key == TK_CLOSE) {
            return -1;
        } else if (key == TK_W) {
            if (character.getPositionY() > 0) {
                character.moveUp(1);
            }
        } else if (key == TK_S) {
            character.moveDown(1);
        } else if (key == TK_A) {
            character.moveLeft(1);
        } else if (key == TK_D) {
            character.moveRight(1);
        }
        return 1;
    }
    return 0;
}

/*
 * if(terminal_has_input()){
 *  key = terminal_input();
 *  if(...){
 *      Character.moveUp();
 *      In charachet.moneUp():
 *          if(up block isn't brick){
 *              position_x += 1;
 *          }
 *  }
 * }
 * if(event !=null){
 *  Game.draw(param);
 * }
 * */

void Control::draw() {
    terminal_clear();
    terminal_print(character.getPositionX(), character.getPositionY(), "@");
    terminal_refresh();
}
