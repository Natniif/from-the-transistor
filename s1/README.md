# Section 1 

## The Theory of Transistors 
Computers operate in a binary system in 1s and 0s. Transistors act as a switch, letting current through to represent the binary digit 1, or cutting off flow to represent 0. 

The modern day transistor was developed in Bell labs in 1947 and replaced the bulkt vaccum tube transistor.
Modern day transistors use the semiconductor silicon. The silicon is doped to becone an N or P type semiconductor 

- The transistor contains three pins 
    - Emitter pin 
    - Base pin 
    - collector pin  
        - can either be PNP (PMOS) or NPN (NMOS) transistor 
            - [https://www.youtube.com/watch?v=J4oO7PT_nzQ](./transistor_diagram.png) 

Essentially if the voltage passing through the base pin does not reach a voltage threshold, energy will not flow through the transistor 

## What is an IC (integrated circuit) then? 
- just an array of transistors packed onto a semiconductor material (usually silicon)
- usually just perform one task and are connected together to preform various functions. 

## FPGAs (Field-programmable Gate Array)

- A type of integrated circuit
- can be reprogrammed and reconfigured after manufacturing to allow users to change their functionality. 
    - this makes them ideal for prototyping and experimenting 

- consist of an array of login blocks called configurabls logic blocks (CLBs) that can be interconnected to create custom digital logic circuits
    - These logic blocks contain look up tables (LUTs), D-Flip-Flops (DFF), multiplexers and other various components
        - LUT stroes the function outputs 
        - the multiplexer is then used to select an output based on the input 
        - the DFF is the used to update the LUT based on the output of some combination logic. 
            - DFF makes whole thing sequential

- also contains IO pins to interface with external devices and systems 
- programmed using verilog 


