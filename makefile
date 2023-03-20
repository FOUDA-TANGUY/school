build: main.o tri.o
	gcc ./obj/*.o -o ./bin/programme

main.o:
	gcc -o ./obj/main.o -c ./src/main.c -I ./include/

tri.o:
	gcc -o ./obj/tri.o -c ./src/tri.c -I ./include/
run:
	./bin/programme

clean:
	rm ./bin/programme ./obj/*