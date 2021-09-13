
#ifndef TASKCTR
#define TASKCTR
#include<AccelStepper.h>
#include"PinMap.h"




class TaskCtr
{
private:
    /* data */

public:
    TaskCtr(/* args */);
    ~TaskCtr();

    void move(int speedX,int speedY);
    void grab(int speedX,int speedY);


};

TaskCtr::TaskCtr(/* args */)
{
}

TaskCtr::~TaskCtr()
{
}


#endif