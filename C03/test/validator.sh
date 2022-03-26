#!/bin/sh

norminette -R CheckForbidenSourceHeader .

echo "############### EX00 ###############"
gcc -Wall -Wextra -Werror test/ex0.c ex00/ft_strcmp.c && ./a.out && rm -rf ./a.out
echo "\n"
read -n 1 -r -s -p $'Press any key to continue...CTR+C to cancel\n';

echo "############### EX01 ###############"
gcc -Wall -Wextra -Werror test/ex1.c ex01/ft_strncmp.c && ./a.out && rm -rf ./a.out
echo "\n"
read -n 1 -r -s -p $'Press any key to continue...CTR+C to cancel\n';

echo "############### EX02 ###############"
gcc -Wall -Wextra -Werror test/ex2.c ex02/ft_strcat.c && ./a.out && rm -rf ./a.out
echo "\n"
read -n 1 -r -s -p $'Press any key to continue...CTR+C to cancel\n';

echo "############### EX03 ###############"
gcc -Wall -Wextra -Werror test/ex3.c ex03/ft_strncat.c && ./a.out && rm -rf ./a.out
echo "\n"
read -n 1 -r -s -p $'Press any key to continue...CTR+C to cancel\n';

echo "############### EX04 ###############"
gcc -Wall -Wextra -Werror test/ex4.c ex04/ft_strstr.c && ./a.out && rm -rf ./a.out
echo "\n"
read -n 1 -r -s -p $'Press any key to continue...CTR+C to cancel\n';

echo "############### EX05 ###############"
gcc -Wall -Wextra -Werror test/ex5.c ex05/ft_strlcat.c && ./a.out && rm -rf ./a.out
echo "\n"
read -n 1 -r -s -p $'Press any key to continue...CTR+C to cancel\n';