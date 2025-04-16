CC=gcc
bar: bar.c
	$(CC) bar.c -o bar -Wall -Wextra -pedantic -std=c99
