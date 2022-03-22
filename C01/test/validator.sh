#!/bin/sh

echo "############### EX00 ###############"
gcc -Wall -Wextra -Werror test/ex0.c ex00/ft_ft.c && ./a.out && rm -rf ./a.out
echo "\n"
read -n 1 -r -s -p $'Press any key to continue...CTR+C to cancel\n';

echo "############### EX01 ###############"
gcc -Wall -Wextra -Werror test/ex1.c ex01/ft_ultimate_ft.c && ./a.out && rm -rf ./a.out
echo "\n"
read -n 1 -r -s -p $'Press any key to continue...CTR+C to cancel\n';

echo "############### EX02 ###############"
gcc -Wall -Wextra -Werror test/ex2.c ex02/ft_swap.c && ./a.out && rm -rf ./a.out
echo "\n"
read -n 1 -r -s -p $'Press any key to continue...CTR+C to cancel\n';

echo "############### EX03 ###############"
gcc -Wall -Wextra -Werror test/ex3.c ex03/ft_div_mod.c && ./a.out && rm -rf ./a.out
echo "\n"
read -n 1 -r -s -p $'Press any key to continue...CTR+C to cancel\n';

echo "############### EX04 ###############"
gcc -Wall -Wextra -Werror test/ex4.c ex04/ft_ultimate_div_mod.c && ./a.out && rm -rf ./a.out
echo "\n"
read -n 1 -r -s -p $'Press any key to continue...CTR+C to cancel\n';

echo "############### EX05 ###############"
gcc -Wall -Wextra -Werror test/ex5.c ex05/ft_putstr.c && ./a.out && rm -rf ./a.out
echo "\n"
read -n 1 -r -s -p $'Press any key to continue...CTR+C to cancel\n';

echo "############### EX06 ###############"
gcc -Wall -Wextra -Werror test/ex6.c ex06/ft_strlen.c && ./a.out && rm -rf ./a.out
echo "\n"
read -n 1 -r -s -p $'Press any key to continue...CTR+C to cancel\n';

echo "############### EX07 ###############"
gcc -Wall -Wextra -Werror test/ex7.c ex07/ft_rev_int_tab.c && ./a.out && rm -rf ./a.out
echo "\n"
read -n 1 -r -s -p $'Press any key to continue...CTR+C to cancel\n';

echo "############### EX08 ###############"
gcc -Wall -Wextra -Werror test/ex8.c ex08/ft_sort_int_tab.c && ./a.out && rm -rf ./a.out
echo "\n"
read -n 1 -r -s -p $'Press any key to continue...CTR+C to cancel\n';
