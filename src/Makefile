CXX=g++
CXXFLAGS=-ansi -pedantic -Wall -std=c++11
LDFLAGS=
EXEC=main
SRC=$(wildcard *.cpp)
SRCS= $(wildcard Controller/*.cpp) $(wildcard Vues/*.cpp) $(wildcard Model/*.cpp)
OBJS=$(SRC:.cpp=.o)
SUBDIRS = Controller Model Vues

all : $(EXEC)
	for i in $(SUBDIRS); do (cd $$i; $(MAKE) all); done

main : $(OBJS)
	$(CXX) -o $@ ${OBJS} $(LDFLAGS)

%.o : %.cpp
	$(CXX) -c $< $(CXXFLAGS)
	
debug : $(OBJ)
	$(CXX) -g3 -o $@ $^ $(LDFLAGS)

clean : 
	for i in $(SUBDIRS); do (cd $$i; $(MAKE) clean); done
	rm -f *.o

mrproper : clean
	rm -f main debug
