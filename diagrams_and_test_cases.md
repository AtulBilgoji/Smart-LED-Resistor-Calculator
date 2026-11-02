# Circuit Diagram, Program Flowchart and Test Cases

## 1. Circuit Diagram

The LED circuit uses a DC power supply, a series resistor and an LED.

### Circuit Connection

```text
       +12V DC
          |
          |
      [ Resistor ]
          |
          |
       LED Anode
          |
        |>| LED
          |
       LED Cathode
          |
          |
         GND
```

### Components

- DC Power Supply: 12V
- Resistor: 500 Ohms (theoretical value)
- LED: 2V forward voltage
- LED Current: 20mA

**Note:** This is a theoretical circuit diagram. No physical hardware testing has been performed.

---

## 2. Program Flowchart

The flowchart represents the working logic of the C program.

```text
       START
          |
          v
   Enter Supply Voltage
          |
          v
 Enter LED Forward Voltage
          |
          v
     Enter Current
          |
          v
     Is I <= 0?
       /     \
     YES      NO
      |        |
      v        v
 Invalid    Is Vf > Vs?
 Current     /      \
 Message   YES       NO
            |         |
            v         v
       Insufficient  Calculate
        Voltage      Resistance
            |         |
            |         v
            |     Display Result
            |         |
            v         v
             END <----
```

---

## 3. Test Cases

| Test | Vs | Vf | Current | Expected Output |
|---|---:|---:|---:|---|
| 1 | 12V | 2V | 0.02A | 500 Ohms |
| 2 | 5V | 2V | 0A | Invalid current |
| 3 | 5V | 12V | 0.02A | Insufficient voltage |
| 4 | 12V | 2V | -0.02A | Invalid current |

## 4. Testing Summary

- Tested normal resistance calculation.
- Checked zero-current input.
- Checked negative-current input.
- Checked insufficient supply voltage.

## 5. Testing Environment

- Programming Language: C
- Compiler: GCC 6.3.0
- IDE: Visual Studio Code
- Operating System: Windows
