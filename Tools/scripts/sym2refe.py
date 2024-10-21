#!/usr/bin/python3

import os, sys

def main(args):
    try:
        sym = args[1]
    except IndexError:
        sys.exit(f"Usage: {args[0]} SYM")

    print(f'    // Auto generated by {args[0]}')

    with open(sym, 'r') as f:
        for line in f.readlines():
            offset = eval(f"0x{line[0:8]}")
            name   = line[9:-1]

            # if (eval(f"0x{offset}") & 0x1) == 1:
            #     continue

            print(f"    ORG 0x{(offset - 0x08000000):08X}")
            print(f"    {name}:\n")


if __name__ == '__main__':
    main(sys.argv)
