# Section 3: Processor: What is a processor anyway? -- 3 weeks
- Coding an assembler(Python, 500) -- Straightforward and boring, write in python. Happens in parallel with the CPU building. Teaches you ARM assembly. Initially outputs just binary files, but changed when you write a linker.
- Building a ARM7 CPU(Verilog, 1500) -- Break this into subchapters. A simple pipeline to start, decode, fetch, execute. How much BRAM do we have? We need at least 1MB, DDR would be hard I think, maybe an SRAM. Simulatable and synthesizable.
- Coding a bootrom(Assembler, 40) -- This allows code download into RAM over the serial port, and is baked into the FPGA image. Cute test programs run on this.

## Assembler
An assembler is a program that translates the computers native assembly code into binary
This can be done fairly easily in python. 
Each statement block needs to be profiled and then translated into the according binary.
We are going to be using the ARM7. 

For example MOV can be translated using ARM instruction set into `1101`

