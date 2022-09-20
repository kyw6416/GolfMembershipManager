#ifndef LISTENER_H
#define LISTENER_H

#include "CardReader.h"
#include "Monitor.h"
#include "Controller.h"

class Listener
{
private:
    CardReader *rfid;
    Controller *controller;
    uint8_t rfidData[16];
    
    
public:
    Listener();
    ~Listener();
    void checkEvent();
    bool checkRfid();

};

#endif