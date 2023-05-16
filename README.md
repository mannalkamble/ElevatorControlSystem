# Elevator Control System

## Overview

This project is an initiative to develop a sophisticated yet intuitive elevator control system. The goal is to design a system that allows the elevator to move up and down to different floors based on user inputs, using push buttons as inputs and LEDs as outputs.

## Features

- **Three Floors**: The system includes three floors, each represented by an LED.  
- **Floor Selection**: Users can select their desired floor using a dedicated button for each floor.  
- **Door Controls**: Includes "open" and "close" buttons to manage elevator door operations.  
- **Movement Initiation**: A "go" button to start the elevator's journey to the selected floor.
- **Safety Features**: Ensures that the "open" button is disabled during movement and the "close" button is enabled only after the doors have been open for a specific duration.  

## Operational Flow

1. **Startup**: On startup, all LEDs are off except for the one indicating Floor 1.  
2. **Floor Selection and Movement**:
   - The user presses a floor button to light up the corresponding LED.  
   - Pressing the "go" button initiates movement towards the selected floor.  
3. **During Movement**:
   - A "moving" LED indicates the elevator is in motion, with a 5-second delay per floor change.
4. **Arrival**:
   - Upon reaching the selected floor, the "moving" LED turns off and the "open" button is enabled.  
   - Pressing the "open" button opens the doors and activates the "open" LED.  
   - After 15 seconds, the "open" LED turns off, and the "close" button is activated.  
   - Pressing the "close" button begins closing the doors and lights up the "close" LED.  
5. **Return to Idle**: After the doors close, the system returns to the idle state with the current floor LED lit.  

## State Machine

The system operates across four main states:
- **Idle**: Waiting for user input.
- **Moving**: Elevator moving to the selected floor.
- **Door Open**: Doors open, allowing entry/exit.
- **Door Close**: Doors closing after a command.

![State Diagram](/images/statediagram.png)

## Hardware Requirements

- Breadboard  
- 3 Pushbuttons (Go, Open, Close)  
- 6 LEDs (Floor selection, open, close, moving)  
- 9 Resistors (300Ω to 1000Ω)  
- Jumper wires  
- Rev1B Board  

## Setup and Testing

1. Configure GPIOs using the provided setupGPIO.S file.  
2. Wire outputs on the breadboard to the corresponding LEDs and resistors.  
3. Update and test the code for button inputs and LED outputs.  