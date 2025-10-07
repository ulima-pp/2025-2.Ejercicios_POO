build: ./bin/lib/ejercicio1.lib
	g++ -c ./src/main.cpp -o ./bin/main.o
	g++ ./bin/main.o \
		-L./bin/lib \
		-lejercicio1 \
		-o ./bin/main

build_ej1_static_lib:
	g++ -c ./src/ejercicio_1/libro.cpp -o ./bin/libro.o
	g++ -c ./src/ejercicio_1/usuario.cpp -o ./bin/usuario.o
	ar rcs ./bin/lib/ejercicio1.lib ./bin/libro.o ./bin/usuario.o

run:
	./bin/main.exe

clean:
	rm -rf ./bin/*.o
	rm -rf ./bin/*.exe
