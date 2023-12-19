#ifndef __DELLDESKTOPBUILER_HPP__
#define __DELLDESKTOPBUILER_HPP__

#include "desktopBuilder.hpp"

class DellDesktopBuilder : public DesktopBuilder {
    void buildMonitor();
    void buildKeyboard();
    void buildMouse();
    void buildSpeaker();
    void buildRam();
    void buildProcessor();
    void buildMotherBoard();
};

#endif