#ifndef TFLIGHT
#define TFLIGHT

//#pragma pack(2)

// kind=11
struct tflight
{
    int stopWatch;
    int ID;
    short i1; // 5 when lives (damages) can be a char, 3 else
    float x;
    float z;
    float y;
    short heading;
    short AOA;
    short bank;
    short xSpeed;
    short ySpeed;
    short zSpeed;
    char u2[8];
    short fuel;
    char u3[6];
    char spoilerBrake;
    char flapsGear;
    char afterburnerSmokeTrailsGunfire;
    char u4;
    short gunAmmo;
    char rockets;
    char u5;
    char AAM;
    char AGM;
    char bombs;
    char lives;
    short u6;
    char elevator;
    char aileron;
    short u7;
    char trim;
};
#endif
