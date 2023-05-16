.equ GPIO_OUTPUT_EN, 0x008 # Enable Output to selected pins
.equ GPIO_OUTPUT_VAL, 0x00C # Set Output Value
.equ GPIO_OUTPUT_XOR, 0x040 # inverse logic on selected pins
.equ GPIO_INPUT_EN, 0x04 # Set Input enable for selected pins
.equ GPIO_INPUT_VAL, 0x00 # Read Input value of selected pins
.equ GPIO_INPUT_PULUP, 0x10 # enable pull up
.equ GPIO_RGB_PINS, 0x680000 # All 3 LED's bit offset
.equ GPIO_RED_LED, 0x400000 # Red LED offset
.equ GPIO_BLUE_LED, 0x200000 # Blue LED offset
.equ GPIO_GREEN_LED, 0x080000 # Green LED offset

.equ floor1 , 0x40000 // PIN 2
.equ  floor2, 0x80000 //PIN 3
.equ  floor3, 0x100000 // PIN 4
.equ  open, 0x200000  // PIN 5
.equ  close, 0x400000 // PIN 6
.equ  moving, 0x800000 // PIN 7
.equ  openButton, 0x01 // PIN 8
.equ  closeButton, 0x02 // PIN 9
.equ  goButton, 0x04 // PIN 10
.equ  floor1Button, 0x800 // PIN 17
.equ  floor2Button, 0x1000 // PIN 18
.equ  floor3Button, 0x2000 // PIN 9

.equ OUTPUT_MASK, 0xFC0000
.equ INTPUT_MASK, 0x3807