all: prog2 prog3 prog4

prog2: exercise2.cc
	g++ -o prog2 exercise2.cc `root-config --cflags` `root-config --libs`

prog3: exercise3.cc
	g++ -o prog3 exercise3.cc `root-config --cflags` `root-config --libs`

prog4: exercise4.cc
	g++ -o prog4 exercise4.cc `root-config --cflags` `root-config --libs`

clean:
	rm prog2 prog3 prog4 exercise2.png exercise3.png exercise4.png