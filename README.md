# Smart LED Resistor Calculator Using C

A C programming project to calculate the required series resistance for an LED using basic electrical formulas.

## Project Overview

This project calculates the resistance required to connect an LED safely to a DC power supply.

## Features

- Calculates LED series resistance.
- Uses Ohm's Law.
- Accepts supply voltage, LED forward voltage, and LED current.
- Validates input conditions.
- Displays the calculated resistance.

## C Programming Concepts Used

- Variables and data types (`float`)
- Input and output (`scanf()` and `printf()`)
- Conditional statements (`if`, `else if`, `else`)
- Arithmetic operators
- Basic input validation
- Mathematical calculations

## Formula

[
R =(Vs  - Vf) / I
]

- Vs = Supply voltage (V)
- Vf = LED forward voltage (V)
- I = LED current (A)
- R = Required resistance (Ω)

## Example

| Parameter             |  Value |
| --------------------- | -----: |
| Supply Voltage        |   12 V |
| LED Forward Voltage   |    2 V |
| LED Current           | 0.02 A |
| Calculated Resistance |  500 Ω |

## Sample Output

```text
Enter the supply voltage (Vs): 12
Enter the LED forward voltage (Vf): 2
Enter the LED current in Amperes (A): 0.02

Total Resistance R = 500.00 Ohms
```

## Technologies Used

- C Programming
- GCC Compiler
- Visual Studio Code
- Basic Electrical Engineering

## Project Documentation

- Project Overview
- Working Principle
- Electrical Formulas
- Test Cases
- Circuit Diagram and Flowchart

## Author

**ATUL BILGOJI**

Electronics & Communication Engineering

Interested in Embedded Systems, Electronics, Hardware Design and Robotics, C Programming.
