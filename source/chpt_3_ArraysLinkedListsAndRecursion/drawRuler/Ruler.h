#pragma once

class Ruler {
public:
    void drawRuler(int nInches, int majorLength);

private:
    void drawOneTick(int tickLength, int tickLabel = -1);
    void drawTicks(int tickLength);
};