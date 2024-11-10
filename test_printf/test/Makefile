SRC_DIR=src
OBJ_DIR=obj

INCLUDE_DIR=include
TEST_INCLUDE_DIR=../head
LIBFT_INCLUDE_DIR=../libft
LIBFTPRINTF=../libftprintf.a
LIBFT=../libft/libft.a

SOURCES=$(shell find $(SRC_DIR) -name "*.c")
OBJECTS=$(subst $(SRC_DIR), $(OBJ_DIR), $(patsubst %.c, %.o, $(SOURCES)))

CC=gcc
CFLAGS=-g -fsanitize=address

all: test

test_bonus: $(OBJECTS) libftprintf_bonus.a
	$(CC) $(CFLAGS) -c -o test_bonus.o test_bonus.c  -I$(INCLUDE_DIR) -I$(TEST_INCLUDE_DIR) -I$(LIBFT_INCLUDE_DIR)
	$(CC) $(CFLAGS) test_bonus.o $(OBJECTS) $(LIBFTPRINTF) $(LIBFT) -o test_bonus

test: $(OBJECTS) libftprintf.a
	$(CC) $(CFLAGS) -c -o test.o test.c  -I$(INCLUDE_DIR) -I$(TEST_INCLUDE_DIR) -I$(LIBFT_INCLUDE_DIR)
	$(CC) $(CFLAGS) test.o $(OBJECTS) $(LIBFTPRINTF) -o test

run_test:
	./test
	@for ft_testfile in tmp/output_printf_ft_*; do \
		echo "================$$ft_testfile============================================"; \
		diff -y $$ft_testfile tmp/output_printf_or$${ft_testfile#tmp/output_printf_ft}; \
		echo "====================================================================================\n\n"; \
	done

run_bonus:
	./test_bonus
	@for ft_testfile in tmp_bonus/output_printf_ft_*; do \
		echo "================$$ft_testfile============================================"; \
		diff -y $$ft_testfile tmp_bonus/output_printf_or$${ft_testfile#tmp_bonus/output_printf_ft}; \
		echo "====================================================================================\n\n"; \
	done

$(OBJECTS): $(SOURCES)
<<<<<<< HEAD
	$(CC) $(CFLAGS) -c -o $@ $(patsubst $(OBJ_DIR)/%.o, $(SRC_DIR)/%.c, $@) -I$(INCLUDE_DIR) -I../head -I$(LIBFT_INCLUDE_DIR)
=======
	$(CC) $(CFLAGS) -c -o $@ $(patsubst $(OBJ_DIR)/%.o, $(SRC_DIR)/%.c, $@) -I$(INCLUDE_DIR) -I$(TEST_INCLUDE_DIR) -I$(LIBFT_INCLUDE_DIR)
>>>>>>> f772d94ecb3670c009a4bd50565777dbcb56b7d7

libftprintf.a:
	cd .. && make libftprintf.a CFLAGS="$(CFLAGS)"

libftprintf_bonus.a:
<<<<<<< HEAD
	cd .. && make bonus CFLAGS="$(CFLAGS)"
=======
	cd .. && make bonus
>>>>>>> f772d94ecb3670c009a4bd50565777dbcb56b7d7

libftprintf_clean:
	cd .. && make clean

libftprintf_fclean:
	cd .. && make fclean

clean: libftprintf_clean
	rm -f $(OBJ_DIR)/*.o

fclean: libftprintf_fclean
	rm -f $(OBJ_DIR)/*.o
	rm -f test

re: fclean all

.PHONY: all clean fclean re libftprintf.a libftprintf_clean libftprintf_fclean