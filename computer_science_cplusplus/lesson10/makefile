all: prog1 prog2

prog1: exercise1.cc
	g++ -o prog1 exercise1.cc `root-config --cflags` `root-config --libs`

prog2: exercise2.cc
	g++ -o prog2 exercise2.cc `root-config --cflags` `root-config --libs`

clean:
	rm prog1 prog2 es1.png es2.png