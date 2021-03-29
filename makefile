prog : mainenigme.o enigme.o
	gcc mainenigme.o enigme.o -o prog -lSDL -lSDL_image -g
mainenigme.o:mainenigme.c
	gcc -c mainenigme.c -lSDL -lSDL_image -g
enigme.o:enigme.c
	gcc -c enigme.c -lSDL -lSDL_image -g
