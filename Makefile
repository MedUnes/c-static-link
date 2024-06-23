bin:
	gcc -c src/math.c -o obj/math.o
	ar cr lib/libmath.a obj/math.o
	gcc src/main.c -o build/calc -I include -L lib -l math
clean:
	rm -rf ./obj/*.o ./lib/*.a
