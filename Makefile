go: build | run

build:
	gcc -g -Wall -Wextra -pedantic -std=c99 -o minifk obf.c

run:
	./minifk ">+++++++++[<++++++++>-]<.>++++++[<+++++>-]<-.+++++++..+++.>>+++++++[<++++++>-]<++.------------.<++++++++.--------.+++.------.--------.>+.>++++++++++."