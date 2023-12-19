#ifndef __DESKTOPDIRECTOR__
#define __DESKTOPDIRECTOR__

#include "desktopBuilder.hpp"

// Builder will be send to the director and the director will use the builder to create the product
class DesktopDirector {
    DesktopBuilder *desktopBuilder;
public:
    DesktopDirector(DesktopBuilder *pDesktopBuilder) {
        desktopBuilder = pDesktopBuilder;
    }

    Desktop *getDesktop() {
        return desktopBuilder->getDesktop();
    }

    Desktop *buildDesktop() {
        desktopBuilder->buildMonitor();
        desktopBuilder->buildKeyboard();
        desktopBuilder->buildMouse();
        desktopBuilder->buildSpeaker();
        desktopBuilder->buildRam();
        desktopBuilder->buildProcessor();
        desktopBuilder->buildMotherBoard();

        return desktopBuilder->getDesktop();
    }
};

#endif