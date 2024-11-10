#pkg-config --cflags glib-2.0
#-I/usr/include/glib-2.0 -I/usr/lib/x86_64-linux-gnu/glib-2.0/include
#pkg-config --libs glib-2.0
#-lglib-2.0

SRC_DIR=impl
OBJ_DIR=obj
TEST_INCLUDE_DIR=header
INCLUDE_DIR=../

SOURCES=$(shell find $(SRC_DIR) -name "*.c")
OBJECTS=$(subst $(SRC_DIR), $(OBJ_DIR), $(patsubst %.c, %.o, $(SOURCES)))

INCLUDES=-I$(INCLUDE_DIR) -I$(TEST_INCLUDE_DIR) -I/usr/include/glib-2.0 -I/usr/lib/x86_64-linux-gnu/glib-2.0/include
LIBS=-lglib-2.0


CC=gcc
CFLAGS=-Wextra -Werror -Wall -g
test: main
	./test

main: libft.a $(OBJECTS)
	$(CC) $(CFLAGS) -o test main.c $(OBJECTS) ../libft.a $(INCLUDES) $(LIBS)

$(OBJECTS): $(SOURCES)
	$(CC) $(CFLAGS) -c -o $@ $(patsubst $(OBJ_DIR)/%.o, $(SRC_DIR)/%.c, $@) $(INCLUDES)

libft.a:
	cd .. && make bonus CFLAGS="$(CFLAGS)"

clean:
	rm -f obj/*.o

fclean: clean
	rm -f test

re: fclean test

.PHONY: clean fclean re libft.a

.PRECIOUS: test
