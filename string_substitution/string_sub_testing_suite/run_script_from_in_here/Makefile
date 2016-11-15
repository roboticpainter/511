a.out: mystream.o main.o
	g++ -Wall mystream.o main.o -o a.out

main.o: main.cpp 
	g++ -c -g -Wall main.cpp

mystream.o: mystream.cpp
	g++ -c -g -Wall mystream.cpp
clean:
	rm *.o a.out
