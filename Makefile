fastio: ex13q1.c
	gcc -Wall -Wextra -std=c99 -o fastio ex13q1.c -DFASTIO

easyio: ex13q1.c
	gcc -Wall -Wextra -std=c99 -o easyio ex13q1.c -DEASYIO

clean:
	rm -f ex13q1