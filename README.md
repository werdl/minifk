# minifk
## A Brainf*ck interpreter with a source code of 284 chars
- written in C89 compliant (sort of!) code
- supports all 8 instructions of Brainf*ck (`><+-.,[]`)

## Installation
```bash
git clone https://github.com/werdl/minifk
cd minifk
make build
```
- requires stdio.h (putchar, getchar) and gcc supporting c89 or higher

## Usage
```bash
./minifk "$(cat examples/hello.bf)" # must use this rather than piping as Brainf*ck programs contain shell-problematic chars 
./minifk "$(cat my_bf_program.bf)"
```
- Segfault? There is an error. Want to know where? Clearly you are using the wrong language!
- It mainly works, for simple programs at least!

## File structure
- `obf.c` - the obfuscated code
- `commented.c` - the same code commented so you know what's going on!
- `examples/` - various examples