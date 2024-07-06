FLAGS = -Wall -Werror -Wextra -std=c11
OBJ = a a.out 


all : clean clang build

build : a 


a : main.c 
	gcc $(FLAGS) main.c -o a 

clean : 
	rm -rf $(OBJ)

clang : 
	clang-format -i *.c *.h