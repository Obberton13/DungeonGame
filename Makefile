main: main.o
	g++ main.o -lncurses -o main

main.o: main.cpp
	g++ main.cpp -c -lncurses -o main.o

clean:
	rm *.o
	rm main
