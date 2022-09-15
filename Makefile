CXX = g++
CXXFLAGS = -g -std=c++11 -Wall

OBJECTS = myshell.cpp Param.cpp Parse.cpp

myshell: ${OBJECTS}
	${CXX} ${CXXFLAGS} -o $@ ${OBJECTS}

clean:
	rm test
