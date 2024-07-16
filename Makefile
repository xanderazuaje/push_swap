# Compiler and flags
CC := gcc
CFLAGS := -Wall -Wextra -Werror -g3 -fsanitize=address,undefined,leak

# Directories
SRC_DIR := src
OBJ_DIR := obj
LIB_DIR := lib
LIBFT_DIR := $(LIB_DIR)/libft

# Source files
SRC_FILES := $(SRC_DIR)/main.c \
	$(SRC_DIR)/parser/binary_tree.c \
	$(SRC_DIR)/parser/ft_error.c \
	$(SRC_DIR)/parser/atoi_del.c \
	$(SRC_DIR)/parser/exec_func.c \
	$(SRC_DIR)/parser/merge_arguments.c \
	$(SRC_DIR)/parser/is_input_valid.c \
	$(SRC_DIR)/parser/clear_tree.c \
	$(SRC_DIR)/lists/count_elems.c \
	$(SRC_DIR)/lists/lstnew.c \
	$(SRC_DIR)/lists/lstappend.c \
	$(SRC_DIR)/lists/lstclear.c \
	$(SRC_DIR)/lists/is_ordered.c \
	$(SRC_DIR)/movements/push.c \
	$(SRC_DIR)/movements/swap.c \
	$(SRC_DIR)/movements/rotate.c \
	$(SRC_DIR)/movements/reverse_rotate.c \
	$(SRC_DIR)/weighter/assign_index.c \
	$(SRC_DIR)/weighter/get_maxmin_index.c \
	$(SRC_DIR)/salchisort/chunk_separation.c \
	$(SRC_DIR)/salchisort/get_closest_pivot.c \
	$(SRC_DIR)/salchisort/get_distances.c \
	$(SRC_DIR)/salchisort/next_pivot.c \
	$(SRC_DIR)/salchisort/order_three.c \

# Object files
OBJ_FILES := $(patsubst $(SRC_DIR)/%.c, $(OBJ_DIR)/%.o, $(SRC_FILES))

# Libraries
LIBS := -L$(LIBFT_DIR) -lft

# Executable
TARGET := push_swap


all: libft $(TARGET)

# Libft targets
libft:
	$(MAKE) -C $(LIBFT_DIR)

libft_clean:
	$(MAKE) -C $(LIBFT_DIR) clean

libft_fclean:
	$(MAKE) -C $(LIBFT_DIR) fclean

clean: libft_clean
	rm -rf $(OBJ_DIR)

fclean: clean libft_fclean
	rm -f $(TARGET)

re: fclean all

# Build rule
$(TARGET): $(OBJ_FILES)
	$(CC) $(CFLAGS) $^ -o $@ $(LIBS)
# Object file rule
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@mkdir -p $(@D)
	$(CC) $(CFLAGS) -c $< -o $@

# Phony targets
.PHONY: all clean fclean re
