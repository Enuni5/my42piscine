#!/bin/sh

norminette -R CheckForbidenSourceHeader .

echo "############### EX00 ###############"
gcc -Wall -Wextra -Werror test/ex0.c ex00/ft_strcpy.c && ./a.out && rm -rf ./a.out
echo "\n"
read -n 1 -r -s -p $'Press any key to continue...CTR+C to cancel\n';

echo "############### EX01 ###############"
gcc -Wall -Wextra -Werror test/ex1.c ex01/ft_strncpy.c && ./a.out && rm -rf ./a.out
echo "\n"
read -n 1 -r -s -p $'Press any key to continue...CTR+C to cancel\n';

echo "############### EX02 ###############"
gcc -Wall -Wextra -Werror test/ex2.c ex02/ft_str_is_alpha.c && ./a.out && rm -rf ./a.out
echo "\n"
read -n 1 -r -s -p $'Press any key to continue...CTR+C to cancel\n';

echo "############### EX03 ###############"
gcc -Wall -Wextra -Werror test/ex3.c ex03/ft_str_is_numeric.c && ./a.out && rm -rf ./a.out
echo "\n"
read -n 1 -r -s -p $'Press any key to continue...CTR+C to cancel\n';

echo "############### EX04 ###############"
gcc -Wall -Wextra -Werror test/ex4.c ex04/ft_str_is_lowercase.c && ./a.out && rm -rf ./a.out
echo "\n"
read -n 1 -r -s -p $'Press any key to continue...CTR+C to cancel\n';

echo "############### EX05 ###############"
gcc -Wall -Wextra -Werror test/ex5.c ex05/ft_str_is_uppercase.c && ./a.out && rm -rf ./a.out
echo "\n"
read -n 1 -r -s -p $'Press any key to continue...CTR+C to cancel\n';

echo "############### EX06 ###############"
gcc -Wall -Wextra -Werror test/ex6.c ex06/ft_str_is_printable.c && ./a.out && rm -rf ./a.out
echo "\n"
read -n 1 -r -s -p $'Press any key to continue...CTR+C to cancel\n';

echo "############### EX07 ###############"
gcc -Wall -Wextra -Werror test/ex7.c ex07/ft_strupcase.c && ./a.out && rm -rf ./a.out
echo "\n"
read -n 1 -r -s -p $'Press any key to continue...CTR+C to cancel\n';

echo "############### EX08 ###############"
gcc -Wall -Wextra -Werror test/ex8.c ex08/ft_strlowcase.c && ./a.out && rm -rf ./a.out
echo "\n"
read -n 1 -r -s -p $'Press any key to continue...CTR+C to cancel\n';

echo "############### EX09 ###############"
gcc -Wall -Wextra -Werror test/ex9.c ex09/ft_strcapitalize.c && ./a.out && rm -rf ./a.out
echo "\n"
read -n 1 -r -s -p $'Press any key to continue...CTR+C to cancel\n';

echo "############### EX10 ###############"
gcc -Wall -Wextra -Werror test/ex10.c ex10/ft_strlcpy.c && ./a.out && rm -rf ./a.out
echo "\n"
read -n 1 -r -s -p $'Press any key to continue...CTR+C to cancel\n';

echo "############### EX11 ###############"
gcc -Wall -Wextra -Werror test/ex11.c ex11/ft_putstr_non_printable.c && ./a.out && rm -rf ./a.out
echo "\n"
read -n 1 -r -s -p $'Press any key to continue...CTR+C to cancel\n';

echo "############### EX12 ###############"
gcc -Wall -Wextra -Werror test/ex12.c ex12/ft_print_memory.c && ./a.out && rm -rf ./a.out
echo "\n"
read -n 1 -r -s -p $'Press any key to continue...CTR+C to cancel\n';
