#ifndef AutoClicker_h
#define AutoClicker_h

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
