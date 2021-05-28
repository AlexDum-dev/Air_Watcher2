CXX=g++
CXXFLAGS=-ansi -pedantic -Wall -std=c++11
LDFLAGS=
EXEC=main
SRC=$(wildcard *.cpp)
SRCS= $(wildcard Controller/*.cpp) $(wildcard Vues/*.cpp) $(wildcard Model/*.cpp) $(wildcard *.cpp)
OBJS=$(SRCS:.cpp=.o)
SUBDIRS = Controller Model Vues

all : $(EXEC)
	

main : $(OBJS)
	for i in $(SUBDIRS); do (cd $$i; $(MAKE) all); done
	$(CXX) -o $@ ${OBJS} $(LDFLAGS)

%.o : %.cpp
	$(CXX) -c $< $(CXXFLAGS)
	
debug : $(OBJS)
	for i in $(SUBDIRS); do (cd $$i; $(MAKE) all); done
	$(CXX) -g3 -o $@ $^ $(LDFLAGS)

clean : 
	for i in $(SUBDIRS); do (cd $$i; $(MAKE) clean); done
	rm -f *.o

mrproper : clean
	rm -f main debug
