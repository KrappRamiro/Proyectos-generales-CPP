programa: main.o client.o
	g++ main.o client.o -o programa

main.o: main.cpp
	g++ -c main.cpp

client.o: client.cpp
	g++ -c client.cpp

clean:
	rm *.o programa
