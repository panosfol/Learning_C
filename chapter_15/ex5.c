/*
main.c , f1.c , f2.c, f1.h, f2.h



                DEMO

main.c     f1.c    f2.c  |||||||    f1.c    f2.c

           f1.h                         f2.h


DEMO: main.o f1.o f2.o
gcc -o DEMO main.o f1.o f2.o

main.o: f1.h main.c
gcc -c main.c

f1.o: f1.c f1.h f2.h
gcc -c f1.c

f2.o: f2 f1.h f2.h
gcc -c f2.c
*/