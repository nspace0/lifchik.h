CC = gcc
CFLAGS = -Wall -Wextra -Werror -std=c11 -g --coverage
LDFLAGS = -lcheck -lpthread -lrt -lm -lsubunit --coverage

SRC_DIR = src
TEST_DIR = $(SRC_DIR)/tests
COVERAGE_DIR = coverage

SRC_FILES = $(wildcard $(SRC_DIR)/*.c)
TEST_FILES = $(wildcard $(TEST_DIR)/*.c)
OBJ_FILES = $(patsubst %.c,%.o,$(SRC_FILES))
TEST_OBJ_FILES = $(patsubst %.c,%.o,$(TEST_FILES))

TARGET = test_runner

.PHONY: all clean test coverage

all: $(TARGET)

$(TARGET): $(OBJ_FILES) $(TEST_OBJ_FILES)
	$(CC) tests/test_runner.c s21_*.c$(TEST_OBJ_FILES) -o $(TARGET) $(LDFLAGS)

$(OBJ_FILES): $(SRC_FILES)
	$(CC) $(CFLAGS) -c $(SRC_FILES)

$(TEST_OBJ_FILES): $(TEST_FILES)
	$(CC) $(CFLAGS) -c $(TEST_FILES)

clean:
	rm -f $(OBJ_FILES) $(TEST_OBJ_FILES) $(TARGET)
	rm -rf $(COVERAGE_DIR)
	rm -f *.gcda *.gcno *.gcov

test: $(TARGET)
	./$(TARGET)

coverage: test
	mkdir -p $(COVERAGE_DIR)
	lcov --capture --directory . --output-file $(COVERAGE_DIR)/coverage.info
	genhtml $(COVERAGE_DIR)/coverage.info --output-directory $(COVERAGE_DIR)



# CC = gcc
# FLAGS = -Wall -Werror -Wextra -std=c11 
# OBJ = a a.out 

# all : clean clang build

# build : a 


# a : main.c 
# 	$(CC) $(FLAGS) main.c -o a 

# clean : 
# 	rm -rf a

# clang : 
# 	clang-format -i *.c *.h