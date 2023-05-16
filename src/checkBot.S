.section .text
.align 2
.globl checkBot
#include "GPIO.inc"
#include "memoryMap.inc"
.equ ON, 0x1
.equ OFF, 0x0
checkBot:
addi sp, sp, -16 # allocating stack frame
sw ra, 12(sp) # Saving return address to the stack

li t0, GPIO_CTRL_ADDR # load GPIO base address
lw t1, GPIO_INPUT_VAL(t0) # add the offset for the READ register
# li t2, PIN_2 # load the BIT offset of PIN2
and t2, t1, a0 # AND the READ register with the PIN2 offset

beqz t2, pinOFF # if t2 is 0x0 the READ register has 0 at the PIN2 offset, branch to pinOFF
li a0, ON # return ON comand back to the main
j exit

pinOFF:
li a0, OFF
j exit # return OFF comand back to the main

exit:
lw ra, 12(sp) # return OFF comand back to the main
addi sp, sp, 16 # return OFF comand back to the main
ret