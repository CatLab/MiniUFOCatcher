
#ifndef CONTROLLER
#define CONTROLLER

#include <Ps3Controller.h>

enum CtrCmdTypedef
{
 MOVE=1,CATCH,NOP
};

class controller
{
private:
    /* data */
public:
int speedX,speedY;
CtrCmdTypedef ctrcmd;
void IntController(void);
 


};

#endif