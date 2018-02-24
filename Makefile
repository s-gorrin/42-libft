NAME := libft.a

CC := gcc
FLAGS := -Wall -Wextra -Werror

SRC_DIR := srcs
BIN_DIR := objs

# File Subdirectories
CTYPE_DIR := ft_ctype
STR_DIR := ft_str
MEM_DIR := ft_mem
STDLIB_DIR := ft_stdlib

# File Names
CTYPE_FILES +=	ft_isupper	ft_islower	ft_isalpha	ft_isspace	\
				ft_isdigit	ft_isalnum	ft_ispunct	ft_isgraph	\
				ft_isprint	ft_isascii	ft_iscntrl	ft_isxdigit	\
				ft_toupper	ft_tolower
CTYPE_FILES := $(addprefix $(CTYPE_DIR)/,$(CTYPE_FILES))
CTYPE_BIN := $(addsuffix .o,$(CTYPE_FILES))

STR_FILES +=	ft_strlen	ft_strcpy	ft_strncpy	ft_strcat	\
				ft_strncat	ft_strdup	ft_strndup	ft_strchr	\
				ft_strcmp	ft_strncmp
STR_FILES := $(addprefix $(STR_DIR)/,$(STR_FILES))
STR_BIN := $(addsuffix .o,$(STR_FILES))

MEM_FILES +=	ft_memset		ft_bzero	ft_memcpy	ft_memccpy	\
				ft_memcpy_bwd	ft_memmove	ft_memcmp	ft_memchr
MEM_FILES := $(addprefix $(MEM_DIR)/,$(MEM_FILES))
MEM_BIN := $(addsuffix .o,$(MEM_FILES))

STDLIB_FILES +=	ft_atoi
STDLIB_FILES := $(addprefix $(STDLIB_DIR)/,$(STDLIB_FILES))
STDLIB_BIN := $(addsuffix .o,$(STDLIB_FILES))

OBJS := $(addprefix $(BIN_DIR)/,$(CTYPE_BIN) $(STR_BIN) $(MEM_BIN) $(STDLIB_BIN))

INC := include

$(BIN_DIR)/%.o: $(SRC_DIR)/%.c
	@$(CC) $(FLAGS) -I $(INC) -c $^ -o $@
	@/bin/echo -n "#"

.PHONY: clean fclean re

# Rules
all: $(NAME)

$(NAME): $(OBJS)
	@echo "\n\033[32m[ ᕦ(ˇò_ó)ᕤ object files created ᕦ(ò_óˇ)ᕤ ]\033[0m"
	@ar rc $@ $(OBJS)
	@ranlib $@
	@echo "\033[36m[ (^-^)/ library $(NAME) created \(^-^) ]\033[0m"

$(OBJS): | $(BIN_DIR)

$(BIN_DIR):
	@mkdir -p $(addprefix $(BIN_DIR)/,$(CTYPE_DIR) $(STR_DIR) $(MEM_DIR) $(STDLIB_DIR))

clean:
	@/bin/rm -rf $(BIN_DIR)
	@echo "\033[31m[object files deleted]\033[0m"

fclean: clean
	@/bin/rm -f $(NAME)
	@echo "\033[31m[executable $(NAME) deleted]\033[0m"

re: fclean all
