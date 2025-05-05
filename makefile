checker:
	make all -C .github/checker

check1:
	gcc main_3.c src/fizz_buzz.c -o test1.out
	./test1.out > output_1 2>&1
# Use meson for test assertion between known good and what this file contains?
	gcc main_2.c src/fizz_buzz.c -o test2.out
	./test2.out > output_2 2>&1