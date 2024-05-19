#ifndef ULTRASONIC_H
#define ULTRASONIC_H

#include <Arduino.h>
#include <trig.h>
#include <elapsedMillis.h>
class Ultrasonic
{

public:
    Ultrasonic();
    void localization(int correction);
    void localizationDefense(int correction);
    int getXCoordinate();
    int getYCoordinate();
    int getYCoordinateDefense();
    int frontSensor();
    int backSensor();
    int leftSensor();
    int rightSensor();
private:
    int getX(int correction);
    int getY(int correction);
    int echoPin;
    int trig1Pin;
    int trig2Pin;
    int trig3Pin;
    int trig4Pin;
    int prevX;
    int prevY;
    int prevYDefense;
    elapsedMillis offsetx;
    bool allowRight;
    bool allowFront;
    elapsedMillis offsety;
    int front;
    int back;
    int backDefense;
    int right;
    int left;
};
#endif