CXX=g++
CXXFLAGS=-ansi -pedantic -Wall -std=c++11
LDFLAGS=
EXEC=main
SRC=$(wildcard *.cpp)
SRCS= $(wildcard Controller/*.cpp) $(wildcard Vues/wildcard*.cpp) $(wildcard Model/wildcard*.cpp)
OBJS=$(SRCS:.cpp=.o)
SUBDIRS = Controller Model Vues

all : $(EXEC)

main : $(OBJ)
	$(CXX) -o $@ ${OBJS} $(LDFLAGS)
	
debug : $(OBJ)
	$(CXX) -g3 -o $@ $^ $(LDFLAGS)

clean : 
	rm -f *.o

mrproper : clean
	rm -f main debug
