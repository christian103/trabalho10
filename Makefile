all: ex10.exe

ex10.exe: ex10.o funcs.o
	gcc ex10.o funcs.o -o ex10	

funcs.o: funcs.c
	gcc -c funcs.c

ex10.o: ex10.c
	gcc -c ex10.c
