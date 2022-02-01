NAME = push_swap
SRCS = actions.c errors_tools.c help_tools.c other_tools.c other_tools2.c other_tools3.c push_swap.c sort_mid.c sort_small.c stack_tools.c ft_atoi.c
checker = checker.c help_tools.c errors_tools.c actions.c get_next_line/get_next_line.c get_next_line/get_next_line_utils.c ft_strcmp.c stack_tools.c ft_atoi.c
NAME_CHEKER = checker

all : ${NAME}
${NAME}	:
		@echo "\n"
		@echo "\033[0;33m██████  ██    ██ ███████ ██   ██         ███████ ██     ██  █████  ██████" 
		@echo "\033[0;33m██   ██ ██    ██ ██      ██   ██         ██      ██     ██ ██   ██ ██   ██"
		@echo "\033[0;33m██████  ██    ██ ███████ ███████         ███████ ██  █  ██ ███████ ██████"  
		@echo "\033[0;33m██      ██    ██      ██ ██   ██              ██ ██ ███ ██ ██   ██ ██" 
		@echo "\033[0;33m██       ██████  ███████ ██   ██ ███████ ███████  ███ ███  ██   ██ ██"      
		@echo ""
	@gcc -Wall -Wextra -Werror ${SRCS} -o $(NAME)
	@echo "\033[0;35mCompiling push_swap : ✅"
clean :
	@rm -rf $(NAME) $(NAME_CHEKER)
	@echo "\033[0;31mCleaning : ✅"
checker :
	@gcc -Wall -Wextra -Werror ${checker}  -D BUFFER_SIZE=3 -o ${NAME_CHEKER}
	@echo "\033[0;35mCompiling checker : ✅"
re : clean all
