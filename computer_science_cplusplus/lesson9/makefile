CC = g++

all: prog1 prog2 prog3 prog4 prog5

prog1: exercise1.cc
	$(CC) -o $@ $< `root-config --cflags` `root-config --libs`

prog2: exercise2.cc
	$(CC) -o $@ $< `root-config --cflags` `root-config --libs`

prog3: exercise3.cc
	$(CC) -o $@ $< `root-config --cflags` `root-config --libs`

prog4: exercise4.cc
	$(CC) -o $@ $< `root-config --cflags` `root-config --libs`

prog5: exercise5.cc
	$(CC) -o $@ $< `root-config --cflags` `root-config --libs`

clean:
	rm prog* plot*