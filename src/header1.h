#define DELAY 200
#define ON 0x01
#define OFF 0x00
#define NUM_LEDS 0x03
#define RED_LED 0x400000
#define BLUE_LED 0x200000
#define GREEN_LED 0x080000

#define floor1 0x40000 // PIN 2
#define  floor2 0x80000 //PIN 3
#define  floor3 0x100000 // PIN 4
#define  open 0x200000  // PIN 5
#define  close 0x400000 // PIN 6
#define  moving 0x800000 // PIN 7
#define  openButton 0x01 // PIN 8
#define  closeButton 0x02 // PIN 9
#define  goButton 0x04 // PIN 10
#define  floor1Button 0x800 // PIN 17
#define  floor2Button 0x1000 // PIN 18
#define  floor3Button 0x2000 // PIN 19

void setupGPIO();
int setLED(int color, int state);
void delay(int milliseconds);