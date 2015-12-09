Name: Alexis Spahn
course: CS 216
OBJECTS = main.o parsetree.o
HEADERS = parsetree.h

FILES = main.cpp parsetree.cpp
	#list our files



Lab12: $(FILES)
	g++ -g -o *.cpp $@
	chmod u+x Project4 #make it executable

clean:
	rm -f Project4

test:
	./Project4	#can run without ./
