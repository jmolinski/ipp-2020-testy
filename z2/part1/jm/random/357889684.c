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
uuid: 357889684
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(11, 9, 4, 13);
assert( board != NULL );


assert( gamma_move(board, 1, 4, 2) == 1 );
assert( gamma_move(board, 1, 2, 0) == 1 );
assert( gamma_free_fields(board, 1) == 97 );
assert( gamma_move(board, 2, 4, 2) == 0 );
assert( gamma_move(board, 2, 1, 3) == 1 );
assert( gamma_busy_fields(board, 2) == 1 );
assert( gamma_move(board, 3, 5, 8) == 1 );
assert( gamma_move(board, 3, 1, 7) == 1 );
assert( gamma_golden_move(board, 3, 0, 2) == 0 );
assert( gamma_move(board, 4, 0, 9) == 0 );
assert( gamma_free_fields(board, 4) == 94 );
assert( gamma_move(board, 1, 3, 5) == 1 );
assert( gamma_move(board, 1, 5, 1) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 8, 6) == 1 );
assert( gamma_move(board, 2, 8, 0) == 1 );
assert( gamma_busy_fields(board, 2) == 3 );
assert( gamma_move(board, 3, 5, 4) == 1 );
assert( gamma_move(board, 3, 9, 8) == 1 );
assert( gamma_free_fields(board, 3) == 88 );
assert( gamma_golden_move(board, 3, 6, 8) == 0 );
assert( gamma_move(board, 4, 6, 1) == 1 );
assert( gamma_move(board, 1, 2, 6) == 1 );
assert( gamma_move(board, 1, 6, 0) == 1 );
assert( gamma_move(board, 2, 2, 10) == 0 );
assert( gamma_move(board, 3, 9, 2) == 1 );
assert( gamma_busy_fields(board, 3) == 5 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 7, 5) == 1 );
assert( gamma_move(board, 4, 5, 6) == 1 );
assert( gamma_move(board, 1, 3, 3) == 1 );
assert( gamma_free_fields(board, 1) == 81 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 10, 2) == 1 );
assert( gamma_busy_fields(board, 2) == 4 );
assert( gamma_move(board, 3, 2, 8) == 1 );
assert( gamma_free_fields(board, 3) == 79 );
assert( gamma_move(board, 4, 0, 1) == 1 );
assert( gamma_move(board, 2, 8, 3) == 1 );
assert( gamma_move(board, 3, 5, 7) == 1 );
assert( gamma_busy_fields(board, 3) == 7 );
assert( gamma_move(board, 4, 6, 4) == 1 );
assert( gamma_golden_move(board, 4, 8, 9) == 0 );
assert( gamma_move(board, 1, 7, 8) == 1 );
assert( gamma_move(board, 2, 7, 3) == 1 );
assert( gamma_move(board, 2, 1, 4) == 1 );
assert( gamma_move(board, 1, 7, 8) == 0 );
assert( gamma_move(board, 2, 4, 10) == 0 );
assert( gamma_move(board, 2, 7, 3) == 0 );
assert( gamma_move(board, 3, 9, 0) == 1 );
assert( gamma_move(board, 3, 8, 8) == 1 );
assert( gamma_move(board, 4, 1, 3) == 0 );
assert( gamma_move(board, 4, 1, 4) == 0 );
assert( gamma_busy_fields(board, 4) == 5 );
assert( gamma_move(board, 1, 2, 2) == 1 );
assert( gamma_free_fields(board, 1) == 69 );
assert( gamma_move(board, 2, 3, 0) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 8, 1) == 1 );
assert( gamma_move(board, 4, 2, 1) == 1 );
assert( gamma_move(board, 4, 10, 0) == 1 );
assert( gamma_free_fields(board, 4) == 65 );
assert( gamma_move(board, 1, 0, 7) == 1 );
assert( gamma_golden_move(board, 1, 6, 8) == 0 );


char* board204475733 = gamma_board(board);
assert( board204475733 != NULL );
assert( strcmp(board204475733, 
"..3..3.133.\n"
"13...3.....\n"
"..1..4..2..\n"
"...1...4...\n"
".2...34....\n"
".2.1...22..\n"
"..1.1....32\n"
"4.4..14.3..\n"
"..12..1.234\n") == 0);
free(board204475733);
board204475733 = NULL;
assert( gamma_move(board, 2, 2, 8) == 0 );
assert( gamma_move(board, 2, 0, 6) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 3, 6) == 1 );
assert( gamma_move(board, 4, 6, 1) == 0 );
assert( gamma_move(board, 4, 3, 1) == 1 );
assert( gamma_move(board, 1, 0, 0) == 1 );
assert( gamma_move(board, 1, 5, 3) == 1 );
assert( gamma_busy_fields(board, 1) == 12 );
assert( gamma_move(board, 2, 3, 6) == 0 );
assert( gamma_move(board, 3, 9, 0) == 0 );
assert( gamma_move(board, 3, 6, 5) == 1 );
assert( gamma_golden_move(board, 3, 7, 7) == 0 );
assert( gamma_move(board, 4, 7, 7) == 1 );
assert( gamma_move(board, 1, 3, 3) == 0 );
assert( gamma_golden_move(board, 1, 3, 7) == 0 );
assert( gamma_move(board, 2, 0, 8) == 1 );
assert( gamma_move(board, 3, 5, 2) == 1 );
assert( gamma_free_fields(board, 4) == 55 );
assert( gamma_move(board, 1, 7, 9) == 0 );
assert( gamma_move(board, 1, 9, 6) == 1 );
assert( gamma_golden_move(board, 1, 7, 1) == 0 );
assert( gamma_move(board, 2, 0, 1) == 0 );
assert( gamma_move(board, 2, 0, 6) == 0 );
assert( gamma_move(board, 3, 4, 8) == 1 );
assert( gamma_move(board, 3, 8, 6) == 0 );
assert( gamma_move(board, 4, 2, 1) == 0 );
assert( gamma_move(board, 1, 1, 7) == 0 );
assert( gamma_move(board, 2, 0, 5) == 1 );
assert( gamma_move(board, 2, 3, 3) == 0 );
assert( gamma_move(board, 3, 0, 7) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 8, 0) == 0 );


char* board513759180 = gamma_board(board);
assert( board513759180 != NULL );
assert( strcmp(board513759180, 
"2.3.33.133.\n"
"13...3.4...\n"
"2.13.4..21.\n"
"2..1..34...\n"
".2...34....\n"
".2.1.1.22..\n"
"..1.13...32\n"
"4.44.14.3..\n"
"1.12..1.234\n") == 0);
free(board513759180);
board513759180 = NULL;
assert( gamma_move(board, 2, 5, 5) == 1 );
assert( gamma_move(board, 3, 4, 8) == 0 );
assert( gamma_move(board, 4, 2, 3) == 1 );
assert( gamma_move(board, 2, 3, 6) == 0 );
assert( gamma_move(board, 3, 10, 2) == 0 );


char* board949806540 = gamma_board(board);
assert( board949806540 != NULL );
assert( strcmp(board949806540, 
"2.3.33.133.\n"
"13...3.4...\n"
"2.13.4..21.\n"
"2..1.234...\n"
".2...34....\n"
".241.1.22..\n"
"..1.13...32\n"
"4.44.14.3..\n"
"1.12..1.234\n") == 0);
free(board949806540);
board949806540 = NULL;
assert( gamma_move(board, 4, 6, 1) == 0 );
assert( gamma_free_fields(board, 4) == 50 );
assert( gamma_move(board, 1, 0, 7) == 0 );
assert( gamma_move(board, 2, 3, 10) == 0 );
assert( gamma_move(board, 2, 0, 0) == 0 );
assert( gamma_move(board, 3, 7, 8) == 0 );
assert( gamma_move(board, 1, 7, 2) == 0 );
assert( gamma_busy_fields(board, 1) == 13 );
assert( gamma_move(board, 3, 2, 6) == 0 );
assert( gamma_move(board, 3, 3, 7) == 1 );
assert( gamma_free_fields(board, 3) == 49 );
assert( gamma_move(board, 4, 8, 6) == 0 );
assert( gamma_move(board, 4, 1, 1) == 1 );
assert( gamma_move(board, 1, 6, 2) == 0 );
assert( gamma_move(board, 1, 9, 0) == 0 );
assert( gamma_busy_fields(board, 1) == 13 );
assert( gamma_move(board, 2, 2, 7) == 1 );
assert( gamma_move(board, 2, 1, 5) == 1 );
assert( gamma_move(board, 4, 0, 7) == 0 );
assert( gamma_free_fields(board, 4) == 46 );
assert( gamma_move(board, 1, 4, 7) == 0 );
assert( gamma_move(board, 2, 4, 3) == 1 );
assert( gamma_move(board, 2, 3, 4) == 1 );
assert( gamma_busy_fields(board, 2) == 16 );
assert( gamma_golden_move(board, 2, 6, 3) == 0 );
assert( gamma_move(board, 3, 3, 10) == 0 );
assert( gamma_busy_fields(board, 3) == 15 );
assert( gamma_move(board, 4, 0, 1) == 0 );
assert( gamma_move(board, 4, 10, 2) == 0 );
assert( gamma_free_fields(board, 4) == 44 );
assert( gamma_move(board, 1, 8, 10) == 0 );
assert( gamma_move(board, 1, 8, 3) == 0 );
assert( gamma_move(board, 2, 9, 2) == 0 );
assert( gamma_move(board, 2, 0, 7) == 0 );
assert( gamma_move(board, 4, 10, 8) == 1 );
assert( gamma_move(board, 4, 3, 3) == 0 );
assert( gamma_move(board, 1, 3, 9) == 0 );
assert( gamma_move(board, 1, 10, 2) == 0 );
assert( gamma_free_fields(board, 1) == 14 );
assert( gamma_move(board, 2, 2, 1) == 0 );
assert( gamma_move(board, 3, 2, 0) == 0 );
assert( gamma_move(board, 4, 5, 9) == 0 );
assert( gamma_move(board, 4, 6, 2) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_golden_move(board, 4, 8, 4) == 0 );
assert( gamma_move(board, 1, 7, 8) == 0 );
assert( gamma_move(board, 2, 8, 6) == 0 );
assert( gamma_busy_fields(board, 2) == 16 );
assert( gamma_move(board, 3, 2, 0) == 0 );
assert( gamma_move(board, 4, 4, 2) == 0 );
assert( gamma_move(board, 4, 9, 2) == 0 );
assert( gamma_busy_fields(board, 4) == 13 );


char* board443673799 = gamma_board(board);
assert( board443673799 != NULL );
assert( strcmp(board443673799, 
"2.3.33.1334\n"
"1323.3.4...\n"
"2.13.4..21.\n"
"22.1.234...\n"
".2.2.34....\n"
".24121.22..\n"
"..1.134..32\n"
"4444.14.3..\n"
"1.12..1.234\n") == 0);
free(board443673799);
board443673799 = NULL;
assert( gamma_move(board, 1, 6, 6) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 2, 6) == 0 );
assert( gamma_move(board, 2, 2, 3) == 0 );
assert( gamma_move(board, 3, 1, 10) == 0 );
assert( gamma_move(board, 3, 4, 4) == 1 );
assert( gamma_move(board, 4, 5, 5) == 0 );
assert( gamma_move(board, 1, 2, 7) == 0 );
assert( gamma_move(board, 2, 0, 1) == 0 );
assert( gamma_busy_fields(board, 2) == 16 );
assert( gamma_move(board, 3, 7, 9) == 0 );
assert( gamma_move(board, 3, 3, 5) == 0 );
assert( gamma_busy_fields(board, 3) == 16 );
assert( gamma_move(board, 1, 10, 8) == 0 );
assert( gamma_move(board, 2, 7, 10) == 0 );
assert( gamma_move(board, 3, 1, 4) == 0 );
assert( gamma_move(board, 3, 4, 3) == 0 );
assert( gamma_move(board, 1, 6, 5) == 0 );
assert( gamma_move(board, 1, 4, 3) == 0 );
assert( gamma_busy_fields(board, 1) == 13 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 7, 10) == 0 );
assert( gamma_move(board, 2, 3, 2) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 7, 6) == 1 );
assert( gamma_busy_fields(board, 3) == 17 );
assert( gamma_move(board, 4, 6, 0) == 0 );
assert( gamma_move(board, 1, 0, 0) == 0 );
assert( gamma_move(board, 1, 9, 5) == 1 );
assert( gamma_move(board, 2, 8, 1) == 0 );
assert( gamma_move(board, 2, 8, 3) == 0 );


char* board843637986 = gamma_board(board);
assert( board843637986 != NULL );
assert( strcmp(board843637986, 
"2.3.33.1334\n"
"1323.3.4...\n"
"2.13.4.321.\n"
"22.1.234.1.\n"
".2.2334....\n"
".24121.22..\n"
"..12134..32\n"
"4444.14.3..\n"
"1.12..1.234\n") == 0);
free(board843637986);
board843637986 = NULL;
assert( gamma_move(board, 3, 6, 7) == 1 );
assert( gamma_golden_move(board, 3, 2, 7) == 1 );
assert( gamma_move(board, 4, 4, 0) == 1 );
assert( gamma_move(board, 4, 6, 6) == 1 );
assert( gamma_move(board, 1, 4, 3) == 0 );
assert( gamma_move(board, 2, 4, 0) == 0 );
assert( gamma_move(board, 3, 1, 3) == 0 );
assert( gamma_move(board, 3, 7, 7) == 0 );
assert( gamma_move(board, 1, 6, 8) == 1 );
assert( gamma_move(board, 1, 5, 0) == 1 );


char* board479812605 = gamma_board(board);
assert( board479812605 != NULL );
assert( strcmp(board479812605, 
"2.3.3311334\n"
"1333.334...\n"
"2.13.44321.\n"
"22.1.234.1.\n"
".2.2334....\n"
".24121.22..\n"
"..12134..32\n"
"4444.14.3..\n"
"1.12411.234\n") == 0);
free(board479812605);
board479812605 = NULL;
assert( gamma_move(board, 2, 1, 7) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 6, 10) == 0 );
assert( gamma_move(board, 4, 9, 7) == 1 );
assert( gamma_move(board, 4, 6, 8) == 0 );
assert( gamma_move(board, 1, 5, 7) == 0 );
assert( gamma_move(board, 2, 10, 0) == 0 );
assert( gamma_busy_fields(board, 2) == 16 );
assert( gamma_move(board, 3, 3, 2) == 0 );
assert( gamma_move(board, 4, 1, 8) == 1 );
assert( gamma_move(board, 4, 8, 8) == 0 );
assert( gamma_busy_fields(board, 4) == 17 );
assert( gamma_move(board, 1, 1, 4) == 0 );
assert( gamma_move(board, 1, 0, 6) == 0 );
assert( gamma_move(board, 2, 5, 10) == 0 );
assert( gamma_move(board, 2, 6, 4) == 0 );
assert( gamma_move(board, 3, 6, 1) == 0 );
assert( gamma_move(board, 4, 5, 4) == 0 );
assert( gamma_free_fields(board, 4) == 31 );


char* board909617237 = gamma_board(board);
assert( board909617237 != NULL );
assert( strcmp(board909617237, 
"243.3311334\n"
"1333.334.4.\n"
"2.13.44321.\n"
"22.1.234.1.\n"
".2.2334....\n"
".24121.22..\n"
"..12134..32\n"
"4444.14.3..\n"
"1.12411.234\n") == 0);
free(board909617237);
board909617237 = NULL;
assert( gamma_move(board, 1, 3, 9) == 0 );
assert( gamma_move(board, 1, 5, 0) == 0 );
assert( gamma_move(board, 2, 4, 10) == 0 );
assert( gamma_move(board, 3, 8, 3) == 0 );
assert( gamma_free_fields(board, 3) == 31 );
assert( gamma_move(board, 4, 1, 4) == 0 );
assert( gamma_move(board, 1, 3, 0) == 0 );
assert( gamma_move(board, 1, 0, 5) == 0 );
assert( gamma_move(board, 2, 7, 8) == 0 );
assert( gamma_move(board, 2, 5, 1) == 0 );
assert( gamma_move(board, 3, 5, 0) == 0 );
assert( gamma_move(board, 3, 3, 8) == 1 );
assert( gamma_free_fields(board, 4) == 30 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 1, 3) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 4, 8) == 0 );
assert( gamma_move(board, 3, 3, 10) == 0 );
assert( gamma_move(board, 3, 8, 8) == 0 );
assert( gamma_move(board, 4, 5, 8) == 0 );
assert( gamma_move(board, 4, 8, 0) == 0 );
assert( gamma_golden_move(board, 4, 6, 8) == 1 );


char* board879012689 = gamma_board(board);
assert( board879012689 != NULL );
assert( strcmp(board879012689, 
"24333341334\n"
"1333.334.4.\n"
"2.13.44321.\n"
"22.1.234.1.\n"
".2.2334....\n"
".24121.22..\n"
"..12134..32\n"
"4444.14.3..\n"
"1.12411.234\n") == 0);
free(board879012689);
board879012689 = NULL;
assert( gamma_move(board, 1, 9, 7) == 0 );
assert( gamma_move(board, 2, 3, 0) == 0 );
assert( gamma_move(board, 3, 9, 0) == 0 );
assert( gamma_busy_fields(board, 3) == 20 );
assert( gamma_move(board, 4, 3, 1) == 0 );
assert( gamma_move(board, 1, 3, 8) == 0 );
assert( gamma_move(board, 2, 4, 8) == 0 );
assert( gamma_move(board, 4, 2, 7) == 0 );
assert( gamma_busy_fields(board, 4) == 18 );
assert( gamma_move(board, 1, 0, 7) == 0 );
assert( gamma_free_fields(board, 1) == 30 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 8, 2) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 4, 2) == 0 );
assert( gamma_move(board, 3, 1, 3) == 0 );
assert( gamma_move(board, 4, 1, 7) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 1, 0, 1) == 0 );
assert( gamma_move(board, 1, 6, 2) == 0 );
assert( gamma_move(board, 2, 1, 4) == 0 );
assert( gamma_move(board, 2, 10, 2) == 0 );
assert( gamma_golden_move(board, 2, 5, 6) == 1 );
assert( gamma_move(board, 4, 0, 1) == 0 );
assert( gamma_move(board, 4, 1, 4) == 0 );
assert( gamma_move(board, 1, 3, 9) == 0 );


char* board675531078 = gamma_board(board);
assert( board675531078 != NULL );
assert( strcmp(board675531078, 
"24333341334\n"
"1333.334.4.\n"
"2.13.24321.\n"
"22.1.234.1.\n"
".2.2334....\n"
".24121.22..\n"
"..12134.232\n"
"4444.14.3..\n"
"1.12411.234\n") == 0);
free(board675531078);
board675531078 = NULL;
assert( gamma_move(board, 2, 5, 4) == 0 );
assert( gamma_free_fields(board, 2) == 29 );
assert( gamma_move(board, 3, 6, 1) == 0 );
assert( gamma_move(board, 3, 4, 0) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 1, 7) == 0 );
assert( gamma_free_fields(board, 4) == 13 );
assert( gamma_move(board, 1, 4, 9) == 0 );
assert( gamma_move(board, 1, 6, 5) == 0 );
assert( gamma_move(board, 2, 3, 9) == 0 );
assert( gamma_move(board, 3, 4, 8) == 0 );
assert( gamma_free_fields(board, 3) == 29 );
assert( gamma_move(board, 4, 6, 4) == 0 );
assert( gamma_move(board, 1, 1, 7) == 0 );
assert( gamma_move(board, 2, 9, 2) == 0 );
assert( gamma_move(board, 3, 4, 2) == 0 );
assert( gamma_move(board, 3, 8, 1) == 0 );
assert( gamma_move(board, 4, 4, 7) == 0 );
assert( gamma_move(board, 4, 7, 6) == 0 );
assert( gamma_free_fields(board, 4) == 13 );
assert( gamma_move(board, 1, 0, 1) == 0 );
assert( gamma_move(board, 1, 4, 6) == 1 );
assert( gamma_move(board, 2, 1, 7) == 0 );
assert( gamma_move(board, 2, 7, 7) == 0 );
assert( gamma_busy_fields(board, 2) == 18 );
assert( gamma_move(board, 3, 4, 7) == 1 );
assert( gamma_move(board, 4, 5, 4) == 0 );
assert( gamma_move(board, 4, 5, 2) == 0 );
assert( gamma_move(board, 1, 6, 10) == 0 );
assert( gamma_move(board, 1, 2, 0) == 0 );
assert( gamma_move(board, 2, 3, 8) == 0 );
assert( gamma_busy_fields(board, 2) == 18 );
assert( gamma_move(board, 3, 7, 4) == 1 );
assert( gamma_free_fields(board, 3) == 26 );
assert( gamma_move(board, 4, 6, 8) == 0 );
assert( gamma_move(board, 1, 10, 3) == 0 );
assert( gamma_move(board, 2, 9, 1) == 1 );
assert( gamma_move(board, 2, 8, 8) == 0 );
assert( gamma_move(board, 3, 4, 0) == 0 );
assert( gamma_move(board, 3, 4, 3) == 0 );
assert( gamma_move(board, 4, 3, 0) == 0 );
assert( gamma_move(board, 4, 2, 1) == 0 );
assert( gamma_move(board, 1, 2, 1) == 0 );
assert( gamma_move(board, 1, 2, 8) == 0 );
assert( gamma_move(board, 2, 1, 7) == 0 );
assert( gamma_busy_fields(board, 2) == 19 );
assert( gamma_golden_move(board, 2, 0, 6) == 0 );


char* board837665823 = gamma_board(board);
assert( board837665823 != NULL );
assert( strcmp(board837665823, 
"24333341334\n"
"13333334.4.\n"
"2.13124321.\n"
"22.1.234.1.\n"
".2.23343...\n"
".24121.22..\n"
"..12134.232\n"
"4444.14.32.\n"
"1.12411.234\n") == 0);
free(board837665823);
board837665823 = NULL;
assert( gamma_move(board, 3, 2, 8) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 6, 10) == 0 );
assert( gamma_move(board, 1, 10, 8) == 0 );
assert( gamma_move(board, 1, 4, 7) == 0 );
assert( gamma_move(board, 2, 1, 10) == 0 );
assert( gamma_move(board, 3, 4, 8) == 0 );
assert( gamma_move(board, 4, 3, 6) == 0 );


char* board460169453 = gamma_board(board);
assert( board460169453 != NULL );
assert( strcmp(board460169453, 
"24333341334\n"
"13333334.4.\n"
"2.13124321.\n"
"22.1.234.1.\n"
".2.23343...\n"
".24121.22..\n"
"..12134.232\n"
"4444.14.32.\n"
"1.12411.234\n") == 0);
free(board460169453);
board460169453 = NULL;
assert( gamma_move(board, 1, 6, 1) == 0 );
assert( gamma_busy_fields(board, 1) == 16 );
assert( gamma_move(board, 2, 1, 7) == 0 );
assert( gamma_move(board, 3, 10, 3) == 1 );
assert( gamma_move(board, 4, 6, 10) == 0 );
assert( gamma_move(board, 4, 10, 8) == 0 );
assert( gamma_move(board, 1, 3, 0) == 0 );
assert( gamma_move(board, 2, 3, 4) == 0 );
assert( gamma_golden_move(board, 2, 6, 2) == 0 );
assert( gamma_move(board, 3, 3, 0) == 0 );
assert( gamma_free_fields(board, 3) == 24 );
assert( gamma_move(board, 4, 4, 9) == 0 );
assert( gamma_move(board, 4, 2, 3) == 0 );
assert( gamma_move(board, 2, 9, 1) == 0 );
assert( gamma_free_fields(board, 2) == 24 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 9, 2) == 0 );
assert( gamma_move(board, 4, 2, 1) == 0 );
assert( gamma_move(board, 4, 0, 7) == 0 );
assert( gamma_move(board, 1, 6, 10) == 0 );
assert( gamma_move(board, 1, 4, 0) == 0 );
assert( gamma_move(board, 2, 0, 2) == 1 );


gamma_delete(board);

    return 0;
}
