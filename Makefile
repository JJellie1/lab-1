#Jason Jellie
#
COMP=g++ -Wall -std=c++11

all: lab1 lab1_test

clean:
	rm -f lab1
	rm -f lab1_test

lab1: lab1.cpp
	$(COMP) -o lab1 lab1.cpp

lab1_test: lab1.cpp
	$(COMP) -o lab1_test lab1.cpp -D UNIT_TEST
