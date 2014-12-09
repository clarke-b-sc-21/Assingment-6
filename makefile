prog: queue.o main.o
	g++ queue.o main.o -o prog

queue.o: queue.cpp
	g++ -g -c queue.cpp

main.o: main.cpp
	g++ -g -c main.cpp


clean:
	rm *.o prog
	

