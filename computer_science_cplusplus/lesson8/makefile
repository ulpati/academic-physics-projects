CC = g++

all: prog1 prog2 prog4 prog5 prog6

prog1: exercise1.cc
	$(CC) -o $@ $<

prog2: exercise2.cc functions.cc
	$(CC) -o $@ exercise2.cc functions.cc

prog4: exercise4.cc
	$(CC) -o $@ $<

prog5: exercise5.cc
	$(CC) -o $@ $<

prog6: exercise6.cc
	$(CC) -o $@ $<

clean:
	rm prog1 prog2 prog4 prog5 prog6
