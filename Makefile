CXX=clang++
CXXFLAGS:=-std=c++11 -Wall
SOURCES:=${wildcard *.cpp}

all: hw06
hw06: ${SOURCES}
	$(CXX) -o hw06 ${SOURCES} $(CXXFLAGS)
  
