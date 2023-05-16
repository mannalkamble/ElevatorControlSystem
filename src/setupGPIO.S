.section .text
.align 2
.globl setupGPIO
#include "memoryMap.inc"
#include "GPIO.inc"

setupGPIO:
 addi sp, sp, -16

 sw ra, 12(sp)
 li t0, GPIO_CTRL_ADDR

li t1, OUTPUT_MASK
sw t1, GPIO_OUTPUT_EN(t0)

li t2, INTPUT_MASK
sw t2, GPIO_INPUT_EN(t0)
sw t2, GPIO_INPUT_PULUP(t0)
lw ra, 12(sp) 
addi sp, sp, 16 
ret