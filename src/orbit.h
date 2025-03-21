
#ifndef ORBIT_H
#define ORBIT_H

#include <trig.h>
#include <ultrasonic.h>

class Orbit
{

public:
    Orbit();
    double robotAngle;
    double CalculateRobotAngle(double ballAngle, double goalAngle, double distance);
    double GetToPosition(int targetX, int targetY, int currentX, int currentY);
    bool inPos;
    bool inOrientation;

private:
    int multiplier;
    double homeAngle;
    Ultrasonic ultrasonic;
    unsigned long now;
    unsigned long lastTime;
    unsigned long SampleTime;
    double kd;
    int lastAngle;
    double derivative;
};
#endif