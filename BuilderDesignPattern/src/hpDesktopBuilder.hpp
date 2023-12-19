#ifndef __HPDESKTOPBUILER_HPP__
#define __HPDESKTOPBUILER_HPP__

#include "desktopBuilder.hpp"

class HpDesktopBuilder : public DesktopBuilder {
    void buildMonitor();
    void buildKeyboard();
    void buildMouse();
    void buildSpeaker();
    void buildRam();
    void buildProcessor();
    void buildMotherBoard();
};

#endif