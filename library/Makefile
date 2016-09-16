test: media.o book.o cardcatalog.o test.o video.o film.o periodical.o
	g++ media.o book.o cardcatalog.o test.o video.o film.o periodical.o -o test

test.o: test.cpp cardcatalog.h
	g++ -c -Wall test.cpp

cardcatalog.o: media.h cardcatalog.h cardcatalog.cpp
	g++ -c -Wall cardcatalog.cpp

media.o:  media.cpp media.h
	g++ -c -Wall media.cpp

book.o: media.h book.h book.cpp
	g++ -c -Wall book.cpp 

video.o: media.h video.h video.cpp
	g++ -c -Wall video.cpp

film.o: media.h film.h film.cpp
	g++ -c -Wall film.cpp

periodical.o: media.h periodical.h periodical.cpp
	g++ -c -Wall periodical.cpp
