#!/bin/sh

echo "############### EX00 ###############"
gcc -Wall -Wextra -Werror test/ex0.c ex00/ft_putchar.c && ./a.out && rm -rf ./a.out
echo "\n"
read -n 1 -r -s -p $'Press any key to continue...CTR+C to cancel\n';

echo "############### EX01 ###############"
gcc -Wall -Wextra -Werror test/ex1.c ex01/ft_print_alphabet.c && ./a.out && rm -rf ./a.out
echo "\n"
read -n 1 -r -s -p $'Press any key to continue...CTR+C to cancel\n';

echo "############### EX02 ###############"
gcc -Wall -Wextra -Werror test/ex2.c ex02/ft_print_reverse_alphabet.c && ./a.out && rm -rf ./a.out
echo "\n"
read -n 1 -r -s -p $'Press any key to continue...CTR+C to cancel\n';

echo "############### EX03 ###############"
gcc -Wall -Wextra -Werror test/ex3.c ex03/ft_print_numbers.c && ./a.out && rm -rf ./a.out
echo "\n"
read -n 1 -r -s -p $'Press any key to continue...CTR+C to cancel\n';

echo "############### EX04 ###############"
gcc -Wall -Wextra -Werror test/ex4.c ex04/ft_is_negative.c && ./a.out && rm -rf ./a.out
echo "\n"
read -n 1 -r -s -p $'Press any key to continue...CTR+C to cancel\n';

echo "############### EX05 ###############"
gcc -Wall -Wextra -Werror test/ex5.c ex05/ft_print_comb.c && ./a.out && rm -rf ./a.out
echo "\n"
read -n 1 -r -s -p $'Press any key to continue...CTR+C to cancel\n';

echo "############### EX06 ###############"
gcc -Wall -Wextra -Werror test/ex6.c ex06/ft_print_comb2.c && ./a.out && rm -rf ./a.out
echo "\n"
read -n 1 -r -s -p $'Press any key to continue...CTR+C to cancel\n';

echo "############### EX07 ###############"
gcc -Wall -Wextra -Werror test/ex7.c ex07/ft_putnbr.c && ./a.out && rm -rf ./a.out
echo "\n"
read -n 1 -r -s -p $'Press any key to continue...CTR+C to cancel\n';

echo "############### EX08 ###############"
gcc -Wall -Wextra -Werror test/ex8.c ex08/ft_print_combn.c && ./a.out && rm -rf ./a.out
echo "\n"
read -n 1 -r -s -p $'Press any key to continue...CTR+C to cancel\n';
