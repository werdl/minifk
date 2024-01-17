go: build | run

build:
	gcc -g -Wall -std=c89 -Wextra -pedantic -std=c99 -o minifk obf.c

run:
	./minifk "$$(cat examples/hello.bf)"