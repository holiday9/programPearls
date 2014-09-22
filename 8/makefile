a.out : main.o o3.o o2.o mymath.o assert.o 
	gcc -o a.out main.o o3.o o2.o mymath.o assert.o 
main.o : main.c
	gcc -c main.c
o3.o : o3.c o3.h
	gcc -c o3.c
o2.o : o2.c o2.h
mymath.o : mymath.c mymath.h
	gcc -c mymath.c
assert.o : assert.c assert.h
	gcc -c assert.c
clean :
	rm a.out
	rm *.o
