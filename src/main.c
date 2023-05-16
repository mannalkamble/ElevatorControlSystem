#include <stdio.h>
#include <header1.h>
#include <stdlib.h>

int current_floor = 1;

void close_state()
{
   while (!checkBot(closeButton))
   {
   }
   setLED(close, ON);
   delay(15000);
   setLED(close, OFF);
}

void open_state()
{
   while (!checkBot(openButton))
   {
   }
   setLED(open, ON);
   delay(15000);
   setLED(open, OFF);
}

void moving_state(int current_floor, int destination_floor)
{
   if (current_floor == destination_floor)
      return;
   close_state();
   while (!checkBot(goButton))
   {
   }
   setLED(moving, ON);
   delay(5000 * abs(destination_floor - current_floor));
   setLED(moving, OFF);
   current_floor = destination_floor;
   open_state();
}


void switch_off_led(int floor){
   if (floor == 1)
      {
         setLED(floor1, OFF);
      }
      else if (floor == 2)
      {
         setLED(floor2, OFF);
      }
      else if (floor == 3)
      {
         setLED(floor3, OFF);
      }

}


void switch_on_led(int floor){
   if (floor == 1)
      {
         setLED(floor1, ON);
      }
      else if (floor == 2)
      {
         setLED(floor2, ON);
      }
      else if (floor == 3)
      {
         setLED(floor3, ON);
      }

}

int main()
{
   int destination_floor = current_floor;
   setupGPIO();
   
   while (1)
   { 
      switch_on_led(current_floor);
      

      if (!checkBot(floor1Button))
      {

         destination_floor = 1;
      }
      else if (!checkBot(floor2Button))
      {
         destination_floor = 2;
      }
      else if (!checkBot(floor3Button))
      {
         destination_floor = 3;
      }
      if(current_floor!=destination_floor){
         switch_off_led(current_floor);
         switch_on_led(destination_floor);
         moving_state(current_floor, destination_floor);
      }
      
      
      destination_floor = current_floor;
   }
   return 0;
}