#ifndef CALCULATION_H
#define CALCULATION_H

#include <Arduino.h>
#include <trig.h>

class Calculation
{
public:
    Calculation();
    int projectionCalc(int anglebisc, int robotAngle);
    double getAngle(double x, double y);
    double getX(int angle);
    double getY(int angle);
    int complimentaryFilterAngle(int angle, int prevAngle, double weight);
    int complimentaryFilterDistance(int currentDist, int prevDist, double weight);

private:
    double vectorX;
    double vectorY;
    double dotProduct;
    double denominator;
    double robotAngleX;
    double robotAngleY;
    bool projection;
    int angleDiff;
};

#endif