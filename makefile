build: main.o eleve.o
	gcc ./obj/*.o -o ./bin/programme

main.o:
	gcc -o ./obj/main.o -c ./src/main.c -I ./include/

eleve.o:
	gcc -o ./obj/eleve.o -c ./src/eleve.c -I ./include/

matiere.o:
	gcc -o ./obj/matiere.o -c ./src/matiere.c -I ./include/
	
run:
	./bin/programme

clean:
	rm ./bin/programme ./obj/*