all: DQtest DQarraytest

DQtest: DQtest.o  # test program for Weiss' Vector class.
	g++ -Wall -o DQtest DQtest.o

DQarraytest: DQarraytest.o
	g++ -Wall -o DQarraytest DQarraytest.o

DQarraytest.o:DQarraytest.cpp Deque.h
	g++ -Wall -o DQarraytest.o -c DQarraytest.cpp

clean:
	rm -f DQtest DQarraytest *.o
