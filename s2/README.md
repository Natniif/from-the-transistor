#### Section 2: Bringup: What language is hardware coded in? -- 0.5 weeks
- Blinking an LED(Verilog, 10) -- Your first little program! Getting the simulator working. Learning Verilog.
- Building a UART(Verilog, 100) -- An intro chapter to Verilog, copy a real UART, introducing the concept of MMIO, though the serial port may be semihosting. Serial test echo program and led control.

## Compiling 
Compiling done with iverilog in this project 
use `./go.sh file.v` to compile file.v

## Verilog
```
module hello; 
  initial begin 
      $display("hello world"); $finish;
  end 
endmodule

```

Its important to understand that verilog is translated into gates, RAM, registers etc (the tool which does this is called a synthesis tool) and hence something which an FPGA can understand. 

If it is able to be translated into this then we call it synthesisable. If it is not then we call it non-synthesisable. - Important to always be thinking about this. 

"The most fundamental non-synthesizable piece of code is a delay statement. The FPGA has no concept of time, so it is impossible to tell the FPGA to wait for 10 nanoseconds. Instead, you need to use clocks and flip-flops to accomplish your goals"

Going to be using website to synthesise verilog 

### Numbers and registers 

```
hexidecimal: 0xFF -> 0x indicates hexidecimal
binary: 0b11111111 -> 0b indicates binary 
3'b010;     // size is 3, base format is binary ('b), and the number is 010 (indicates value 2 in binary)
3'd2;       // size is 3, base format is decimal ('d) and the number is 2 (specified in decimals)
8'h70;      // size is 8, base format is hexadecimal ('h) and the number is 0x70 (in hex) to represent decimal 112
9'h1FA;     // size is 9, base format is hexadecimal ('h) and the number is 0x1FA (in hex) to represent decimal 506

```

nums without specification are decimal by default

create registers with `reg var`
assign length of register with `reg [25:0] var` - variable with 26 registers from 0 (least significant bit) to 26 (most significant bit)

### Modules 
All code must be inside 

e.g.
```
module blinking_led (
    input clk 
    output wire led
)

endmodule
```
wire is a datatype used to represent a connection between different login gates or modules. Does not contain data but is a continuous flow of data or sigfnals.

Inside the brackets are the in and out ports that are connected to the device

### Always block 

```
always @ (event)
	[statement]

always @ (event) begin
	[multiple statements]
end
```


## UART 

A way of talking to an FPGA and can be used to send commands from computer to an FPGA. 
An interface that sends out a byte at a time over a single wire. Baud rate is the number of bits per second transferred. 

Data does not arrive with a clock so it asynchronous. If the transmitter do not agree on the baud rate then you can read the wrong data. 

The FPGA reciever continuously waits for dip in the signal then waits one bit period (specified by baud rate) then reads from middle of first bit then waits one period 7 (or whatever size the data is agreed to be sent in) more times to collect data from all 8 bits.

[UART](./UART_example.png)

Need to write this in a verilog program 

https://nandland.com/uart-serial-port-module/

