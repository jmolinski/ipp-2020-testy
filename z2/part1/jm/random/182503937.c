#include <stdint.h>
#include <stdlib.h>
#include <assert.h>
#include <stdio.h>
#include "gamma.h"
#include <stdbool.h>
#include <string.h>


int main() {

/*
scenario: test_random_actions
uuid: 182503937
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(14, 7, 6, 19);
assert( board != NULL );


assert( gamma_move(board, 1, 2, 10) == 0 );
assert( gamma_move(board, 1, 0, 6) == 1 );
assert( gamma_move(board, 2, 3, 0) == 1 );
assert( gamma_free_fields(board, 2) == 96 );
assert( gamma_golden_move(board, 2, 6, 0) == 0 );
assert( gamma_move(board, 3, 1, 5) == 1 );
assert( gamma_move(board, 3, 2, 2) == 1 );
assert( gamma_golden_move(board, 3, 0, 3) == 0 );
assert( gamma_move(board, 4, 4, 6) == 1 );
assert( gamma_golden_move(board, 4, 6, 0) == 0 );
assert( gamma_move(board, 5, 2, 11) == 0 );
assert( gamma_move(board, 6, 4, 9) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 1, 3) == 1 );
assert( gamma_move(board, 1, 2, 6) == 1 );
assert( gamma_free_fields(board, 1) == 91 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 1, 0) == 1 );
assert( gamma_move(board, 3, 4, 1) == 1 );
assert( gamma_move(board, 3, 8, 2) == 1 );
assert( gamma_move(board, 4, 2, 5) == 1 );
assert( gamma_move(board, 5, 3, 6) == 1 );
assert( gamma_move(board, 6, 0, 2) == 1 );


char* board348610667 = gamma_board(board);
assert( board348610667 != NULL );
assert( strcmp(board348610667, 
"1.154.........\n"
".34...........\n"
"..............\n"
".1............\n"
"6.3.....3.....\n"
"....3.........\n"
".2.2..........\n") == 0);
free(board348610667);
board348610667 = NULL;
assert( gamma_move(board, 1, 4, 7) == 0 );
assert( gamma_move(board, 1, 8, 2) == 0 );
assert( gamma_busy_fields(board, 1) == 3 );
assert( gamma_move(board, 2, 1, 1) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 3, 3) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 4, 0) == 1 );
assert( gamma_move(board, 4, 7, 3) == 1 );
assert( gamma_free_fields(board, 4) == 81 );
assert( gamma_move(board, 5, 3, 12) == 0 );
assert( gamma_busy_fields(board, 5) == 1 );
assert( gamma_move(board, 6, 0, 6) == 0 );
assert( gamma_move(board, 6, 2, 0) == 1 );
assert( gamma_move(board, 1, 6, 9) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 5, 12) == 0 );
assert( gamma_move(board, 2, 5, 5) == 1 );
assert( gamma_move(board, 3, 2, 13) == 0 );
assert( gamma_busy_fields(board, 3) == 5 );
assert( gamma_move(board, 4, 3, 13) == 0 );
assert( gamma_move(board, 4, 1, 2) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 5, 3) == 1 );
assert( gamma_move(board, 6, 6, 9) == 0 );
assert( gamma_move(board, 1, 5, 3) == 0 );
assert( gamma_move(board, 2, 9, 3) == 1 );
assert( gamma_move(board, 3, 3, 4) == 1 );
assert( gamma_move(board, 3, 9, 6) == 1 );
assert( gamma_move(board, 4, 10, 3) == 1 );
assert( gamma_move(board, 5, 3, 11) == 0 );
assert( gamma_move(board, 6, 5, 5) == 0 );
assert( gamma_move(board, 6, 9, 3) == 0 );


char* board822149350 = gamma_board(board);
assert( board822149350 != NULL );
assert( strcmp(board822149350, 
"1.154....3....\n"
".34..2........\n"
"...3..........\n"
".1.3.5.4.24...\n"
"643.....3.....\n"
".2..3.........\n"
".2624.........\n") == 0);
free(board822149350);
board822149350 = NULL;
assert( gamma_move(board, 1, 5, 10) == 0 );
assert( gamma_move(board, 1, 10, 1) == 1 );


char* board799959843 = gamma_board(board);
assert( board799959843 != NULL );
assert( strcmp(board799959843, 
"1.154....3....\n"
".34..2........\n"
"...3..........\n"
".1.3.5.4.24...\n"
"643.....3.....\n"
".2..3.....1...\n"
".2624.........\n") == 0);
free(board799959843);
board799959843 = NULL;
assert( gamma_move(board, 3, 0, 5) == 1 );
assert( gamma_move(board, 3, 4, 5) == 1 );
assert( gamma_free_fields(board, 3) == 70 );
assert( gamma_move(board, 4, 7, 0) == 1 );
assert( gamma_move(board, 4, 4, 2) == 1 );
assert( gamma_move(board, 5, 2, 6) == 0 );
assert( gamma_move(board, 5, 8, 0) == 1 );
assert( gamma_move(board, 2, 5, 13) == 0 );
assert( gamma_move(board, 3, 4, 12) == 0 );
assert( gamma_move(board, 3, 2, 3) == 1 );
assert( gamma_move(board, 4, 12, 3) == 1 );
assert( gamma_move(board, 5, 1, 5) == 0 );
assert( gamma_move(board, 6, 5, 6) == 1 );
assert( gamma_move(board, 6, 2, 4) == 1 );
assert( gamma_move(board, 1, 13, 5) == 1 );
assert( gamma_move(board, 1, 3, 0) == 0 );
assert( gamma_move(board, 2, 10, 2) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 7, 4) == 1 );
assert( gamma_move(board, 4, 1, 8) == 0 );
assert( gamma_move(board, 4, 2, 3) == 0 );
assert( gamma_move(board, 5, 5, 2) == 1 );
assert( gamma_move(board, 6, 0, 6) == 0 );
assert( gamma_busy_fields(board, 6) == 4 );
assert( gamma_free_fields(board, 6) == 59 );
assert( gamma_move(board, 1, 0, 0) == 1 );
assert( gamma_move(board, 2, 8, 1) == 1 );
assert( gamma_move(board, 4, 1, 5) == 0 );
assert( gamma_move(board, 4, 11, 4) == 1 );
assert( gamma_move(board, 5, 12, 4) == 1 );


char* board277995254 = gamma_board(board);
assert( board277995254 != NULL );
assert( strcmp(board277995254, 
"1.1546...3....\n"
"334.32.......1\n"
"..63...3...45.\n"
".133.5.4.24.4.\n"
"643.45..3.2...\n"
".2..3...2.1...\n"
"12624..45.....\n") == 0);
free(board277995254);
board277995254 = NULL;
assert( gamma_move(board, 6, 5, 10) == 0 );
assert( gamma_move(board, 1, 6, 5) == 1 );
assert( gamma_move(board, 2, 1, 12) == 0 );
assert( gamma_move(board, 2, 4, 1) == 0 );
assert( gamma_free_fields(board, 2) == 54 );
assert( gamma_move(board, 3, 5, 5) == 0 );
assert( gamma_move(board, 3, 11, 4) == 0 );
assert( gamma_move(board, 4, 1, 13) == 0 );
assert( gamma_move(board, 4, 10, 3) == 0 );
assert( gamma_free_fields(board, 4) == 54 );
assert( gamma_move(board, 5, 1, 6) == 1 );
assert( gamma_busy_fields(board, 5) == 6 );
assert( gamma_move(board, 6, 2, 13) == 0 );
assert( gamma_move(board, 6, 0, 2) == 0 );
assert( gamma_move(board, 1, 10, 0) == 1 );
assert( gamma_move(board, 1, 13, 1) == 1 );
assert( gamma_busy_fields(board, 1) == 9 );
assert( gamma_move(board, 2, 6, 6) == 1 );
assert( gamma_move(board, 3, 0, 6) == 0 );
assert( gamma_move(board, 4, 0, 9) == 0 );
assert( gamma_move(board, 4, 4, 3) == 1 );
assert( gamma_free_fields(board, 4) == 49 );
assert( gamma_move(board, 5, 3, 13) == 0 );
assert( gamma_free_fields(board, 5) == 49 );
assert( gamma_move(board, 6, 2, 7) == 0 );
assert( gamma_move(board, 1, 5, 3) == 0 );
assert( gamma_move(board, 2, 1, 9) == 0 );
assert( gamma_move(board, 2, 13, 1) == 0 );
assert( gamma_move(board, 3, 13, 3) == 1 );
assert( gamma_move(board, 4, 4, 4) == 1 );
assert( gamma_busy_fields(board, 4) == 12 );
assert( gamma_move(board, 5, 4, 6) == 0 );
assert( gamma_move(board, 5, 7, 2) == 1 );
assert( gamma_move(board, 6, 1, 4) == 1 );
assert( gamma_golden_move(board, 6, 0, 0) == 1 );
assert( gamma_move(board, 1, 0, 13) == 0 );
assert( gamma_move(board, 2, 8, 5) == 1 );
assert( gamma_move(board, 2, 2, 3) == 0 );
assert( gamma_move(board, 3, 1, 6) == 0 );
assert( gamma_move(board, 4, 1, 3) == 0 );
assert( gamma_move(board, 4, 9, 4) == 1 );
assert( gamma_move(board, 5, 9, 5) == 1 );
assert( gamma_move(board, 6, 13, 4) == 1 );
assert( gamma_move(board, 1, 0, 5) == 0 );
assert( gamma_move(board, 1, 1, 6) == 0 );
assert( gamma_move(board, 2, 6, 7) == 0 );
assert( gamma_move(board, 2, 9, 0) == 1 );
assert( gamma_move(board, 3, 2, 5) == 0 );
assert( gamma_move(board, 4, 12, 5) == 1 );
assert( gamma_golden_move(board, 4, 0, 8) == 0 );
assert( gamma_move(board, 5, 6, 11) == 0 );
assert( gamma_move(board, 5, 7, 4) == 0 );
assert( gamma_free_fields(board, 5) == 39 );
assert( gamma_move(board, 6, 5, 5) == 0 );
assert( gamma_move(board, 6, 10, 4) == 1 );
assert( gamma_move(board, 2, 1, 3) == 0 );
assert( gamma_move(board, 3, 6, 5) == 0 );
assert( gamma_move(board, 3, 3, 0) == 0 );
assert( gamma_move(board, 5, 2, 13) == 0 );
assert( gamma_move(board, 5, 11, 6) == 1 );
assert( gamma_move(board, 6, 13, 2) == 1 );
assert( gamma_busy_fields(board, 6) == 9 );
assert( gamma_move(board, 1, 10, 3) == 0 );
assert( gamma_move(board, 1, 1, 4) == 0 );
assert( gamma_move(board, 2, 12, 4) == 0 );
assert( gamma_move(board, 3, 0, 6) == 0 );
assert( gamma_free_fields(board, 3) == 36 );
assert( gamma_move(board, 4, 4, 0) == 0 );
assert( gamma_move(board, 5, 1, 3) == 0 );
assert( gamma_move(board, 5, 6, 1) == 1 );
assert( gamma_golden_move(board, 5, 5, 6) == 1 );


char* board150492885 = gamma_board(board);
assert( board150492885 != NULL );
assert( strcmp(board150492885, 
"1515452..3.5..\n"
"334.321.25..41\n"
".6634..3.46456\n"
".13345.4.24.43\n"
"643.45.53.2..6\n"
".2..3.5.2.1..1\n"
"62624..4521...\n") == 0);
free(board150492885);
board150492885 = NULL;
assert( gamma_move(board, 6, 2, 12) == 0 );
assert( gamma_move(board, 1, 0, 11) == 0 );
assert( gamma_busy_fields(board, 1) == 8 );
assert( gamma_move(board, 2, 4, 8) == 0 );
assert( gamma_move(board, 3, 13, 4) == 0 );
assert( gamma_move(board, 3, 12, 2) == 1 );
assert( gamma_move(board, 4, 6, 13) == 0 );
assert( gamma_move(board, 5, 4, 8) == 0 );
assert( gamma_move(board, 6, 2, 6) == 0 );
assert( gamma_move(board, 6, 7, 4) == 0 );
assert( gamma_move(board, 1, 2, 9) == 0 );
assert( gamma_move(board, 1, 1, 6) == 0 );
assert( gamma_move(board, 2, 1, 3) == 0 );
assert( gamma_busy_fields(board, 2) == 10 );
assert( gamma_move(board, 3, 1, 9) == 0 );
assert( gamma_move(board, 3, 1, 6) == 0 );
assert( gamma_move(board, 5, 4, 8) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 1, 3) == 0 );
assert( gamma_move(board, 6, 10, 4) == 0 );
assert( gamma_move(board, 1, 1, 4) == 0 );
assert( gamma_move(board, 1, 10, 5) == 1 );
assert( gamma_move(board, 2, 5, 7) == 0 );
assert( gamma_move(board, 3, 3, 8) == 0 );
assert( gamma_move(board, 4, 12, 5) == 0 );
assert( gamma_move(board, 4, 9, 4) == 0 );
assert( gamma_move(board, 5, 0, 5) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 1, 6, 12) == 0 );
assert( gamma_move(board, 1, 0, 6) == 0 );
assert( gamma_busy_fields(board, 1) == 9 );
assert( gamma_golden_move(board, 1, 1, 8) == 0 );
assert( gamma_move(board, 2, 1, 5) == 0 );
assert( gamma_move(board, 2, 11, 3) == 1 );
assert( gamma_golden_move(board, 2, 4, 9) == 0 );
assert( gamma_move(board, 3, 0, 12) == 0 );
assert( gamma_move(board, 3, 11, 1) == 1 );
assert( gamma_move(board, 4, 3, 2) == 1 );
assert( gamma_move(board, 4, 2, 3) == 0 );
assert( gamma_move(board, 5, 1, 12) == 0 );
assert( gamma_free_fields(board, 5) == 30 );
assert( gamma_free_fields(board, 6) == 30 );
assert( gamma_move(board, 1, 7, 3) == 0 );
assert( gamma_move(board, 1, 7, 4) == 0 );


char* board774919184 = gamma_board(board);
assert( board774919184 != NULL );
assert( strcmp(board774919184, 
"1515452..3.5..\n"
"334.321.251.41\n"
".6634..3.46456\n"
".13345.4.24243\n"
"643445.53.2.36\n"
".2..3.5.2.13.1\n"
"62624..4521...\n") == 0);
free(board774919184);
board774919184 = NULL;
assert( gamma_move(board, 2, 0, 4) == 1 );
assert( gamma_move(board, 2, 6, 5) == 0 );
assert( gamma_move(board, 3, 1, 3) == 0 );
assert( gamma_move(board, 4, 7, 3) == 0 );
assert( gamma_move(board, 4, 3, 0) == 0 );
assert( gamma_move(board, 5, 6, 2) == 1 );
assert( gamma_move(board, 6, 1, 7) == 0 );
assert( gamma_move(board, 6, 1, 0) == 0 );
assert( gamma_move(board, 1, 6, 12) == 0 );
assert( gamma_move(board, 1, 1, 4) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 12, 4) == 0 );
assert( gamma_busy_fields(board, 2) == 12 );


char* board699977986 = gamma_board(board);
assert( board699977986 != NULL );
assert( strcmp(board699977986, 
"1515452..3.5..\n"
"334.321.251.41\n"
"26634..3.46456\n"
".13345.4.24243\n"
"643445553.2.36\n"
".2..3.5.2.13.1\n"
"62624..4521...\n") == 0);
free(board699977986);
board699977986 = NULL;
assert( gamma_free_fields(board, 4) == 28 );
assert( gamma_move(board, 5, 1, 2) == 0 );
assert( gamma_move(board, 6, 1, 3) == 0 );
assert( gamma_move(board, 1, 4, 1) == 0 );
assert( gamma_move(board, 2, 6, 8) == 0 );
assert( gamma_move(board, 3, 4, 8) == 0 );
assert( gamma_golden_move(board, 3, 3, 4) == 0 );
assert( gamma_move(board, 4, 2, 5) == 0 );
assert( gamma_move(board, 4, 2, 5) == 0 );
assert( gamma_move(board, 5, 9, 0) == 0 );
assert( gamma_move(board, 5, 12, 4) == 0 );
assert( gamma_move(board, 6, 1, 9) == 0 );
assert( gamma_move(board, 1, 2, 9) == 0 );
assert( gamma_move(board, 1, 13, 1) == 0 );
assert( gamma_move(board, 2, 6, 7) == 0 );
assert( gamma_move(board, 2, 7, 0) == 0 );
assert( gamma_move(board, 3, 6, 6) == 0 );
assert( gamma_move(board, 3, 11, 0) == 1 );
assert( gamma_move(board, 4, 0, 5) == 0 );
assert( gamma_move(board, 5, 1, 5) == 0 );
assert( gamma_move(board, 6, 1, 12) == 0 );
assert( gamma_move(board, 1, 4, 3) == 0 );
assert( gamma_move(board, 2, 13, 1) == 0 );
assert( gamma_move(board, 3, 2, 2) == 0 );
assert( gamma_busy_fields(board, 3) == 15 );
assert( gamma_move(board, 5, 1, 6) == 0 );
assert( gamma_move(board, 6, 4, 5) == 0 );
assert( gamma_move(board, 1, 2, 9) == 0 );
assert( gamma_move(board, 1, 4, 6) == 0 );
assert( gamma_move(board, 2, 1, 12) == 0 );
assert( gamma_move(board, 3, 2, 6) == 0 );
assert( gamma_move(board, 4, 13, 1) == 0 );
assert( gamma_move(board, 4, 3, 1) == 1 );
assert( gamma_move(board, 6, 11, 0) == 0 );
assert( gamma_move(board, 6, 2, 0) == 0 );
assert( gamma_move(board, 1, 6, 8) == 0 );
assert( gamma_move(board, 1, 6, 2) == 0 );
assert( gamma_move(board, 2, 2, 11) == 0 );
assert( gamma_move(board, 3, 10, 0) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );


char* board467854627 = gamma_board(board);
assert( board467854627 != NULL );
assert( strcmp(board467854627, 
"1515452..3.5..\n"
"334.321.251.41\n"
"26634..3.46456\n"
".13345.4.24243\n"
"643445553.2.36\n"
".2.43.5.2.13.1\n"
"62624..45213..\n") == 0);
free(board467854627);
board467854627 = NULL;
assert( gamma_move(board, 4, 6, 12) == 0 );
assert( gamma_move(board, 4, 9, 6) == 0 );
assert( gamma_free_fields(board, 4) == 26 );
assert( gamma_move(board, 5, 0, 5) == 0 );
assert( gamma_move(board, 5, 8, 3) == 1 );
assert( gamma_move(board, 6, 7, 5) == 1 );
assert( gamma_move(board, 6, 8, 4) == 1 );
assert( gamma_move(board, 1, 9, 5) == 0 );
assert( gamma_move(board, 2, 5, 11) == 0 );
assert( gamma_move(board, 3, 5, 11) == 0 );
assert( gamma_move(board, 4, 4, 5) == 0 );
assert( gamma_move(board, 4, 10, 5) == 0 );
assert( gamma_move(board, 5, 0, 5) == 0 );
assert( gamma_move(board, 5, 12, 5) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 9, 0) == 0 );
assert( gamma_move(board, 1, 9, 5) == 0 );
assert( gamma_move(board, 1, 11, 6) == 0 );
assert( gamma_golden_move(board, 1, 1, 4) == 1 );
assert( gamma_move(board, 2, 4, 5) == 0 );
assert( gamma_move(board, 2, 0, 4) == 0 );
assert( gamma_busy_fields(board, 3) == 15 );
assert( gamma_move(board, 4, 0, 0) == 0 );
assert( gamma_free_fields(board, 4) == 23 );
assert( gamma_move(board, 5, 6, 10) == 0 );
assert( gamma_move(board, 5, 1, 2) == 0 );
assert( gamma_move(board, 6, 4, 5) == 0 );
assert( gamma_busy_fields(board, 6) == 9 );
assert( gamma_move(board, 1, 1, 12) == 0 );
assert( gamma_move(board, 2, 7, 0) == 0 );
assert( gamma_move(board, 3, 5, 3) == 0 );
assert( gamma_move(board, 4, 10, 4) == 0 );
assert( gamma_move(board, 5, 6, 12) == 0 );
assert( gamma_move(board, 5, 4, 3) == 0 );
assert( gamma_move(board, 6, 1, 2) == 0 );
assert( gamma_move(board, 6, 6, 6) == 0 );
assert( gamma_move(board, 1, 11, 6) == 0 );
assert( gamma_move(board, 2, 6, 4) == 1 );
assert( gamma_free_fields(board, 2) == 22 );
assert( gamma_golden_move(board, 2, 5, 6) == 1 );
assert( gamma_move(board, 3, 2, 9) == 0 );
assert( gamma_move(board, 3, 7, 5) == 0 );
assert( gamma_move(board, 5, 1, 5) == 0 );
assert( gamma_move(board, 6, 4, 1) == 0 );
assert( gamma_move(board, 6, 4, 0) == 0 );


char* board128913851 = gamma_board(board);
assert( board128913851 != NULL );
assert( strcmp(board128913851, 
"1515422..3.5..\n"
"334.3216251.41\n"
"21634.23646456\n"
".13345.4524243\n"
"643445553.2.36\n"
".2.43.5.2.13.1\n"
"62624..45213..\n") == 0);
free(board128913851);
board128913851 = NULL;
assert( gamma_move(board, 2, 0, 5) == 0 );
assert( gamma_move(board, 3, 8, 2) == 0 );
assert( gamma_busy_fields(board, 3) == 15 );
assert( gamma_move(board, 4, 3, 0) == 0 );
assert( gamma_move(board, 4, 1, 4) == 0 );
assert( gamma_move(board, 5, 4, 6) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 3, 1) == 0 );
assert( gamma_move(board, 1, 6, 8) == 0 );
assert( gamma_move(board, 1, 6, 1) == 0 );
assert( gamma_free_fields(board, 1) == 22 );
assert( gamma_move(board, 2, 12, 1) == 1 );
assert( gamma_move(board, 2, 9, 6) == 0 );
assert( gamma_move(board, 3, 3, 0) == 0 );
assert( gamma_move(board, 4, 9, 2) == 1 );


gamma_delete(board);

    return 0;
}
