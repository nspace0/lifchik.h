CC = gcc
FLAGS = -Wall -Werror -Wextra -std=c11 
OBJ = a a.out 

all : clean clang build

build : a 


a : main.c 
	$(CC) $(FLAGS) main.c -o a 

clean : 
	rm -rf a

clang : 
	clang-format -i *.c *.h
