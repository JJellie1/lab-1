#Jason Jellie
#
COMP=g++ -Wall -std=c++11

all: lab1

clean:
	rm -f lab1

lab1: lab1.cpp
	$(COMP) -o lab1 lab1.cpp
