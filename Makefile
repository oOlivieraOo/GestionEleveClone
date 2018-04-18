CC=g++
CFLAGS=-W -Wall -ansi -pedantic
LDFLAGS=
EXEC=monApplirun

all: $(EXEC)

monApplirun: application.o matiere.o etudiant.o note.o section.o main.o
	$(CC) -o monApplirun application.o matiere.o etudiant.o note.o section.o main.o $(LDFLAGS)
application.o: application.cpp
	$(CC) -o application.o -c application.cpp $(CFLAGS)
matiere.o: matiere.cpp
	$(CC) -o matiere.o -c matiere.cpp $(CFLAGS)
etudiant.o: etudiant.cpp
	$(CC) -o etudiant.o -c etudiant.cpp $(CFLAGS)
note.o: note.cpp
	$(CC) -o note.o -c note.cpp $(CFLAGS)
section.o: section.cpp
	$(CC) -o section.o -c section.cpp $(CFLAGS)
main.o: main.cpp
	$(CC) -o main.o -c main.cpp $(CFLAGS)

clean:
	rm -rf *.o

mrproper: clean
	rm -rf $(EXEC)
