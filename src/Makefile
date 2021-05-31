CXX=g++
CXXFLAGS=-ansi -pedantic -Wall -std=c++11
LDFLAGS=
EXEC=main
EXECT=mainTest
SRC=$(wildcard *.o)
SRCS= $(wildcard Controller/*.cpp) $(wildcard Vues/*.cpp) $(wildcard Model/*.cpp) main.cpp 
SRCS2= $(wildcard Controller/*.cpp) $(wildcard Vues/*.cpp) $(wildcard Model/*.cpp) mainTest.cpp

all : $(EXEC)
	
main : $(SRCS)
	$(CXX) -O3 -o $@ ${SRCS} $(CXXFLAGS)

mainTest: $(SRCS2)
	$(CXX) -o $@ ${SRCS2} $(LDFLAGS)
 
debug : $(SRCS)
	$(CXX) -g3 -o $@ $^ $(LDFLAGS)

clean : 
	rm -f *.o

mrproper : clean
	rm -f main debug mainTest
