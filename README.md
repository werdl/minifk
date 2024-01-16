# minifk
## A Brainf*ck interpreter with a source code of under 340 chars
- written in C89 compliant (sort of!) code
- supports all 8 instructions of Brainf*ck (`><+-.,[]`)

## Installation
```bash
git clone https://github.com/werdl/minifk
cd minifk
make build
```

## Usage
```bash
./minifk "$(cat examples/hello.bf)" # must use this rather than piping as Brainf*ck programs contain shell-problematic chars
./minifk "$(cat my_bf_program.bf)"
```
- Segfault? There is an error. Want to know where? Clearly you are using the wrong language!