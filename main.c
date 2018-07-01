#include "Stdint.h"
#include "GPIO.h"
#include "GPIO_Cfg.h"
#include "UART.h"
#include "UART_Cfg.h"
#include "HMI.h"
#include "HMI_Cfg.h"
#include "PiMngr.h"
#include"BTN.h"
#include"BTN_Cfg.h"
#include "PiMngr_Cfg.h"
#include "M4MemMap.h"
#include "HMIManager.h"
#include "HMIManager_Cfg.h"
#include "FreeRTOS.h"
#include "task.h"
#include "FreeRTOSConfig.h"
#include "app.h"


/* Define Tasks Priorities */
#define  TASK1_PRIORITY (2)
#define  TASK2_PRIORITY (3)

/*tasks codes prototypes */
 void task1_code(void*pvParamter);
 void task2_code(void*pvParamter);

 extern uint8_t Music_Satus_Flag,Engine_Satus_Flag;

extern uint8_t StateX;

void main(void)
{

      GPIO_Init();
      UART_Init();
      BTN_Init();
      EN_INT(33);
      EN_INT(61); //UART5
     // EN_INT(63);
      State = Initial;
      HMI_Init(0);

      Manager_Init();
      Manager_Self_Test(0);
      /*Music_Status_Display(0,0);
      Engine_Status_Display(0, 1);
      HMI_RecognitionState(0, 1); //1 start 0 end
      GPS_Status_Display( 0  , "23632.252N69654.225E");
      Incoming_Call_Display(0, "01111709622"  );
      HMI_CallDecision (0 , Reject);

          //Engine_Status_Display(0,0);
      BTH_Status_Display(0,1);
      HMI_MusicName_Display(0  ,"Amr Diab - Aw3edak");


          //HMI_Managing_Function();*/



  /*initialize all modules 3mtn */

    /*Creat tasks*/
    xTaskCreate(task1_code,NULL,80,NULL,TASK1_PRIORITY,NULL);
    xTaskCreate(task2_code,NULL,80,NULL,TASK2_PRIORITY,NULL);
    /*start Scheduler */
    vTaskStartScheduler();
while(1)
  {

  }


}




 /*Task1 Code */
  void task1_code(void*pvParamter)  //task w esm el task w ptr to void
 {
        /*AY HAGA TTKTB HENA HATTNFZ MARRA WA7DA FEL TASK 3SHAN LMA BD5OL WHILE EL RTOS LMA BY2T3 D HAYRO7 3LA WHILE 2 EL TNYA
         * BS MSH HAYFZ AY HAGA HENA TANY */

      TickType_t xLastWakeTime;
   // const portTickType xPeriod = pdMS_TO_TICKS( 200 );
    xLastWakeTime = xTaskGetTickCount();
     while(1)  // kol task shayfa el RAM wel uP bto3ha
     {
         //HMI_Managing_Function();
         BTN_GetBtnState(0, &StateX);
         HMI_Managing_Function();
         vTaskDelayUntil( &xLastWakeTime,1 );
     }
 }

 /*Task 2 Code*/
  void task2_code(void*pvParamter)
 {

      TickType_t xLastWakeTime;
      // const portTickType xPeriod = pdMS_TO_TICKS( 100 );
       xLastWakeTime = xTaskGetTickCount();
     while(1)
     {
         app();
         vTaskDelayUntil( &xLastWakeTime,2 );
     }
 }
