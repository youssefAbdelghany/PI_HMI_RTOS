#include <stdint.h>
#include "BTN.h"
#include "BTN_Cfg.h"
#include "GPIO.h"
#include "PiMngr.h"
#include "PiMngr_Cfg.h"
#include"app.h"
#include "HMIManager.h"
#include "HMIManager_Cfg.h"
#include "HMI.h"
#include "HMI_Cfg.h"




//state = 0;
//counter = 0;
uint8_t StateX;
uint32_t counter=0,state=0;
void app(void)
{

    if(StateX == BTN_JPRSD)
    {
        state=1;
    }
    if(state==1)
    {
        counter++;
        if(counter==1)
        {
            PiMngr_GetStatus();
        }
        PiMngr_StartRecognition();
        PiMngr_RequestData();
    }

    if(state==2)
    {
        Engine_Status_Display(0,1);
        state =3;
    }


    }

