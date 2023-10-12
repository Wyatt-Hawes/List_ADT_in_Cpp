CC = g++
CFLAGS = -std=c++17 -Wall -Werror -Wextra -Wpedantic -g#$(shell pkg-config --cflags)

all: ListTest Shuffle

Shuffle: List.o Shuffle.o
	$(CC) -o $@ $^

ListTest:  ListTest.o List.o
	$(CC) -o $@ $^


#ListTest: List.o Matrix.o Sparse.o
#	$(CC) -o  $@ $^ 

%.o: %.c
	$(CC) $(CFLAGS) -c -Ofast $<

clean:
	rm -f *.o
	rm -f ListTest
	rm -f Shuffle

