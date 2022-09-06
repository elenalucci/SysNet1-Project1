CXX = g++
CXXFLAGS = -g -std=c++11 -Wall

OBJECTS = myshell.cpp Param.cpp

test: ${OBJECTS}
	${CXX} ${CXXFLAGS} -o $@ ${OBJECTS}

clean:
	rm test
