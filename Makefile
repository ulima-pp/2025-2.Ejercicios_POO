build:
	g++ -c ./src/ejercicio_1/libro.cpp -o ./bin/libro.o
	g++ -c ./src/ejercicio_1/usuario.cpp -o ./bin/usuario.o
	g++ -c ./src/main.cpp -o ./bin/main.o
	g++ ./bin/libro.o ./bin/usuario.o ./bin/main.o -o ./bin/main

run:
	./bin/main.exe

clean:
	rm -rf ./bin/*.o
	rm -rf ./bin/*.exe
