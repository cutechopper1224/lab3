Your:	Your.o		Clock.o
	g++ -o Your Your.o Clock.o

Your.o:	Your.cpp	Clock.h
	g++ -c Your.cpp

Clock.o:	Clock.cpp 	Clock.h
	g++ -c Clock.cpp
