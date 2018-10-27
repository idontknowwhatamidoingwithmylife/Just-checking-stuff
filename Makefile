OUTPUT=pairs
DEBUG=pairs_debug

CXX=g++
CXX_FLAGS=-Wall -g

SRC=$(wildcard *.cpp)
OBJ=$(SRC: .cpp=.o)

all: $(OUTPUT)

$(OUTPUT): $(OBJ)
	$(CXX) $(OBJ) $(CXXFLAGS) -o $@

%.o: %.cpp
	$(CXX) -c $(CXXFLAGS) $<

debug: $(DEBUG)

$(DEBUG): $(OBJ) 
	$(CXX) $(OBJ) $(CXXFLAGS) -DDEBUG -o $@
%.o: %.cpp
	$(CXX) -c $(CXXFLAGS) $< -DDEBUG

clean: 
	rm -f *.o $(OUTPUT) $(DEBUG)

.PHONY: all debug clean