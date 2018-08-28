#ifndef AUTOCLICKER_H
#define AUTOCLICKER_H

#include "VariableDelay.h"

class AutoClicker {

public:
    AutoClicker();
    VariableDelay * variableDelay;

    void leftClick();
    void rightClick();
    void delayedClick(int mouse);
};

#endif
