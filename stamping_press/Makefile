main: stampbuf.o stampstream.o stamp.o main.o
	g++ -Wall stampbuf.o stampstream.o stamp.o main.o -o test

main.o: main.cpp 
	g++ -c -Wall main.cpp

stampbuf.o: stampbuf.cpp
	g++ -c -Wall stampbuf.cpp

stampstream.o: stampstream.cpp
	g++ -c -Wall stampstream.cpp

stamp.o: stamp.cpp
	g++ -c -Wall stamp.cpp
