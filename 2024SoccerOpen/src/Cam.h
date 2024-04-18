

#include <Arduino.h>
#include <string>
#include <Adafruit_I2CDevice.h>
#include <iostream>
#ifndef CAM_H
#define CAM_H
class Cam {
	public:
        Cam();
        double ball;
        double yellowGoal;
        double blueGoal;
        double ballDistance;
        double yellowGoalDistance;
        double blueGoalDistance;
        bool tooFar;
double validDistance;
        double CamCalc();
        double FilterAngle(double angle, double validAngle);
        double ComplimentaryFilterAngle(double angle, double validAngle);
        double ComplimentaryFilterDistance(double dist, double validDist);
        std::string buffer;
    private:
        char read;
        bool dissapeared;
        double previousBallAngle;
        double previousBlueAngle;
        double previousYellowAngle;
        double previousBallDistance;

};
#endif