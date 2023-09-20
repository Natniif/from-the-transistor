import os 
import sys

from arm_vals import *


def tokenize(asm):
    start = 0
    current = 0
    line = 0

    def errorMsg(line):
        return f"Syntax error on line {line}"

    pass

def assemble(asm):
    machine_asm = ''
    tokens = tokenize(asm) 

def outFile(machine_asm, out_file): 
    pass

def main(in_file, out_file):
    pass

if __name__ == '__main__':
    if (sys.argv[2]):
        main(sys.argv[1], sys.argv[2])
    else: 
        main(sys.argv[1], 'a')