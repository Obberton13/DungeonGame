main: main.o
	g++ main.o -lncurses -o main.exe

main.o: main.cpp
	g++ main.cpp -c -lncurses -o main.o

clean:
	rm *.o
	rm *.exe
