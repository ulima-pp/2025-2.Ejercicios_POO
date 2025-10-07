build:
	g++ -c ./src/main.cpp -o ./bin/main.o
	g++ ./bin/main.o -o ./bin/main

clean:
	rm -rf ./bin/*.o
	rm -rf ./bin/*.exe
