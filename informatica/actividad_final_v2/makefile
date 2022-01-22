programa: main.o client.o
	g++ main.o client.o user.o -o programa

main.o: main.cpp
	g++ -c main.cpp

user.o: user.cpp
	g++ -c user.cpp

client.o: client.cpp
	g++ -c client.cpp

clean:
	rm *.o programa
