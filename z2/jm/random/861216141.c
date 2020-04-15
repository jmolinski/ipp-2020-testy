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
uuid: 861216141
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(10, 14, 4, 17);
assert( board != NULL );


assert( gamma_move(board, 1, 0, 12) == 1 );
assert( gamma_move(board, 1, 3, 7) == 1 );
assert( gamma_busy_fields(board, 1) == 2 );
assert( gamma_free_fields(board, 1) == 138 );
assert( gamma_move(board, 2, 8, 2) == 1 );
assert( gamma_move(board, 3, 11, 7) == 0 );
assert( gamma_move(board, 4, 2, 8) == 1 );
assert( gamma_move(board, 1, 3, 9) == 1 );
assert( gamma_busy_fields(board, 1) == 3 );
assert( gamma_free_fields(board, 1) == 135 );
assert( gamma_move(board, 2, 4, 4) == 1 );
assert( gamma_move(board, 2, 7, 6) == 1 );
assert( gamma_move(board, 3, 10, 5) == 0 );
assert( gamma_move(board, 3, 3, 0) == 1 );
assert( gamma_move(board, 4, 2, 0) == 1 );
assert( gamma_move(board, 1, 0, 9) == 1 );
assert( gamma_move(board, 1, 5, 0) == 1 );
assert( gamma_move(board, 2, 11, 8) == 0 );
assert( gamma_move(board, 2, 6, 7) == 1 );
assert( gamma_move(board, 3, 5, 13) == 1 );
assert( gamma_move(board, 4, 8, 1) == 1 );
assert( gamma_move(board, 4, 4, 6) == 1 );
assert( gamma_busy_fields(board, 4) == 4 );
assert( gamma_golden_move(board, 4, 2, 8) == 0 );
assert( gamma_move(board, 1, 12, 7) == 0 );
assert( gamma_move(board, 2, 0, 1) == 1 );
assert( gamma_move(board, 2, 9, 12) == 1 );
assert( gamma_move(board, 3, 7, 5) == 1 );
assert( gamma_move(board, 4, 6, 9) == 1 );
assert( gamma_move(board, 4, 8, 7) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );


char* board284765793 = gamma_board(board);
assert( board284765793 != NULL );
assert( strcmp(board284765793, 
".....3....\n"
"1........2\n"
"..........\n"
"..........\n"
"1..1..4...\n"
"..4.......\n"
"...1..2.4.\n"
"....4..2..\n"
".......3..\n"
"....2.....\n"
"..........\n"
"........2.\n"
"2.......4.\n"
"..43.1....\n") == 0);
free(board284765793);
board284765793 = NULL;
assert( gamma_move(board, 1, 8, 4) == 1 );
assert( gamma_move(board, 2, 2, 4) == 1 );
assert( gamma_move(board, 3, 10, 6) == 0 );
assert( gamma_move(board, 3, 3, 3) == 1 );
assert( gamma_move(board, 4, 11, 1) == 0 );
assert( gamma_move(board, 4, 7, 8) == 1 );
assert( gamma_move(board, 1, 3, 2) == 1 );
assert( gamma_move(board, 2, 8, 4) == 0 );
assert( gamma_move(board, 3, 4, 3) == 1 );
assert( gamma_move(board, 3, 0, 13) == 1 );
assert( gamma_move(board, 4, 1, 4) == 1 );
assert( gamma_move(board, 4, 4, 6) == 0 );
assert( gamma_move(board, 1, 6, 11) == 1 );
assert( gamma_move(board, 1, 5, 11) == 1 );
assert( gamma_move(board, 2, 4, 9) == 1 );
assert( gamma_move(board, 2, 5, 4) == 1 );
assert( gamma_free_fields(board, 2) == 108 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 7, 9) == 1 );
assert( gamma_move(board, 3, 6, 8) == 1 );
assert( gamma_busy_fields(board, 3) == 8 );
assert( gamma_move(board, 4, 3, 9) == 0 );
assert( gamma_move(board, 4, 5, 4) == 0 );
assert( gamma_move(board, 1, 7, 10) == 1 );
assert( gamma_move(board, 1, 1, 1) == 1 );
assert( gamma_move(board, 2, 11, 0) == 0 );


char* board583776893 = gamma_board(board);
assert( board583776893 != NULL );
assert( strcmp(board583776893, 
"3....3....\n"
"1........2\n"
".....11...\n"
".......1..\n"
"1..12.43..\n"
"..4...34..\n"
"...1..2.4.\n"
"....4..2..\n"
".......3..\n"
".42.22..1.\n"
"...33.....\n"
"...1....2.\n"
"21......4.\n"
"..43.1....\n") == 0);
free(board583776893);
board583776893 = NULL;
assert( gamma_move(board, 4, 13, 9) == 0 );
assert( gamma_move(board, 4, 2, 6) == 1 );
assert( gamma_move(board, 1, 1, 4) == 0 );
assert( gamma_move(board, 2, 2, 7) == 1 );
assert( gamma_move(board, 2, 6, 2) == 1 );
assert( gamma_move(board, 3, 0, 6) == 1 );
assert( gamma_move(board, 3, 7, 1) == 1 );
assert( gamma_move(board, 4, 5, 1) == 1 );
assert( gamma_move(board, 4, 5, 12) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 11, 9) == 0 );
assert( gamma_free_fields(board, 1) == 97 );
assert( gamma_move(board, 2, 0, 6) == 0 );
assert( gamma_move(board, 3, 0, 1) == 0 );
assert( gamma_move(board, 3, 6, 5) == 1 );
assert( gamma_move(board, 4, 0, 8) == 1 );
assert( gamma_move(board, 4, 2, 8) == 0 );


char* board299599534 = gamma_board(board);
assert( board299599534 != NULL );
assert( strcmp(board299599534, 
"3....3....\n"
"1....4...2\n"
".....11...\n"
".......1..\n"
"1..12.43..\n"
"4.4...34..\n"
"..21..2.4.\n"
"3.4.4..2..\n"
"......33..\n"
".42.22..1.\n"
"...33.....\n"
"...1..2.2.\n"
"21...4.34.\n"
"..43.1....\n") == 0);
free(board299599534);
board299599534 = NULL;
assert( gamma_move(board, 1, 8, 4) == 0 );
assert( gamma_move(board, 1, 7, 3) == 1 );
assert( gamma_move(board, 2, 13, 2) == 0 );
assert( gamma_move(board, 2, 8, 2) == 0 );
assert( gamma_move(board, 3, 5, 4) == 0 );
assert( gamma_move(board, 3, 9, 7) == 1 );


char* board324884370 = gamma_board(board);
assert( board324884370 != NULL );
assert( strcmp(board324884370, 
"3....3....\n"
"1....4...2\n"
".....11...\n"
".......1..\n"
"1..12.43..\n"
"4.4...34..\n"
"..21..2.43\n"
"3.4.4..2..\n"
"......33..\n"
".42.22..1.\n"
"...33..1..\n"
"...1..2.2.\n"
"21...4.34.\n"
"..43.1....\n") == 0);
free(board324884370);
board324884370 = NULL;
assert( gamma_move(board, 4, 9, 12) == 0 );
assert( gamma_move(board, 1, 7, 7) == 1 );
assert( gamma_golden_move(board, 1, 5, 6) == 0 );
assert( gamma_move(board, 3, 1, 9) == 1 );
assert( gamma_move(board, 3, 5, 12) == 0 );
assert( gamma_move(board, 4, 9, 10) == 1 );
assert( gamma_move(board, 1, 3, 2) == 0 );
assert( gamma_move(board, 1, 6, 4) == 1 );
assert( gamma_move(board, 2, 13, 4) == 0 );
assert( gamma_move(board, 3, 2, 0) == 0 );
assert( gamma_busy_fields(board, 3) == 13 );
assert( gamma_move(board, 4, 4, 12) == 1 );
assert( gamma_move(board, 1, 3, 8) == 1 );
assert( gamma_free_fields(board, 1) == 87 );
assert( gamma_move(board, 2, 7, 4) == 1 );
assert( gamma_move(board, 3, 11, 8) == 0 );
assert( gamma_move(board, 3, 6, 7) == 0 );
assert( gamma_move(board, 4, 3, 2) == 0 );
assert( gamma_move(board, 1, 0, 8) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 12, 1) == 0 );
assert( gamma_move(board, 2, 7, 13) == 1 );
assert( gamma_move(board, 3, 9, 8) == 1 );
assert( gamma_move(board, 3, 6, 2) == 0 );
assert( gamma_move(board, 4, 8, 1) == 0 );
assert( gamma_move(board, 4, 7, 4) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 2, 1) == 1 );
assert( gamma_move(board, 2, 13, 6) == 0 );
assert( gamma_free_fields(board, 2) == 83 );
assert( gamma_move(board, 3, 8, 1) == 0 );
assert( gamma_move(board, 3, 6, 6) == 1 );
assert( gamma_move(board, 4, 5, 9) == 1 );
assert( gamma_move(board, 1, 7, 7) == 0 );
assert( gamma_move(board, 2, 5, 9) == 0 );
assert( gamma_move(board, 3, 12, 3) == 0 );
assert( gamma_move(board, 1, 7, 1) == 0 );
assert( gamma_move(board, 2, 9, 9) == 1 );
assert( gamma_free_fields(board, 2) == 80 );
assert( gamma_move(board, 3, 5, 13) == 0 );
assert( gamma_move(board, 3, 9, 13) == 1 );
assert( gamma_free_fields(board, 3) == 79 );
assert( gamma_move(board, 4, 9, 4) == 1 );
assert( gamma_move(board, 4, 2, 1) == 0 );
assert( gamma_golden_move(board, 4, 11, 5) == 0 );
assert( gamma_move(board, 1, 3, 12) == 1 );
assert( gamma_move(board, 1, 8, 1) == 0 );
assert( gamma_free_fields(board, 1) == 77 );
assert( gamma_move(board, 3, 11, 2) == 0 );
assert( gamma_move(board, 4, 0, 0) == 1 );
assert( gamma_move(board, 1, 1, 8) == 1 );
assert( gamma_move(board, 1, 0, 11) == 1 );
assert( gamma_free_fields(board, 1) == 74 );
assert( gamma_move(board, 2, 5, 2) == 1 );
assert( gamma_move(board, 2, 6, 6) == 0 );
assert( gamma_move(board, 3, 1, 9) == 0 );
assert( gamma_move(board, 4, 13, 6) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 9, 12) == 0 );
assert( gamma_move(board, 2, 5, 0) == 0 );
assert( gamma_move(board, 2, 7, 4) == 0 );
assert( gamma_busy_fields(board, 2) == 15 );
assert( gamma_move(board, 3, 11, 1) == 0 );
assert( gamma_move(board, 4, 3, 8) == 0 );
assert( gamma_move(board, 4, 7, 5) == 0 );
assert( gamma_move(board, 1, 2, 5) == 1 );
assert( gamma_move(board, 2, 5, 4) == 0 );
assert( gamma_move(board, 3, 4, 0) == 1 );
assert( gamma_move(board, 4, 11, 4) == 0 );
assert( gamma_move(board, 4, 8, 11) == 1 );
assert( gamma_move(board, 1, 13, 2) == 0 );
assert( gamma_move(board, 2, 2, 4) == 0 );
assert( gamma_move(board, 2, 0, 6) == 0 );
assert( gamma_move(board, 3, 10, 1) == 0 );
assert( gamma_move(board, 3, 5, 0) == 0 );
assert( gamma_move(board, 4, 3, 2) == 0 );
assert( gamma_move(board, 4, 3, 0) == 0 );
assert( gamma_move(board, 1, 4, 0) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_free_fields(board, 2) == 70 );
assert( gamma_move(board, 3, 9, 4) == 0 );
assert( gamma_move(board, 3, 8, 13) == 1 );
assert( gamma_move(board, 4, 1, 8) == 0 );
assert( gamma_move(board, 1, 2, 0) == 0 );
assert( gamma_move(board, 2, 4, 0) == 0 );
assert( gamma_move(board, 2, 1, 3) == 1 );
assert( gamma_move(board, 3, 6, 10) == 1 );
assert( gamma_move(board, 3, 8, 0) == 1 );
assert( gamma_move(board, 4, 10, 4) == 0 );
assert( gamma_move(board, 4, 6, 6) == 0 );
assert( gamma_move(board, 1, 13, 2) == 0 );
assert( gamma_busy_fields(board, 1) == 20 );
assert( gamma_move(board, 2, 6, 4) == 0 );
assert( gamma_golden_move(board, 2, 1, 5) == 0 );
assert( gamma_move(board, 3, 5, 9) == 0 );
assert( gamma_move(board, 1, 4, 0) == 0 );
assert( gamma_move(board, 2, 8, 5) == 1 );
assert( gamma_move(board, 3, 4, 11) == 1 );
assert( gamma_move(board, 4, 1, 9) == 0 );
assert( gamma_free_fields(board, 4) == 64 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 2, 12, 1) == 0 );
assert( gamma_move(board, 2, 0, 13) == 0 );
assert( gamma_free_fields(board, 2) == 64 );
assert( gamma_move(board, 4, 12, 1) == 0 );
assert( gamma_move(board, 4, 3, 11) == 1 );
assert( gamma_move(board, 1, 12, 1) == 0 );
assert( gamma_move(board, 4, 4, 0) == 0 );
assert( gamma_move(board, 4, 4, 1) == 1 );
assert( gamma_move(board, 1, 0, 12) == 0 );
assert( gamma_move(board, 2, 3, 9) == 0 );
assert( gamma_move(board, 2, 4, 9) == 0 );
assert( gamma_golden_move(board, 2, 10, 6) == 0 );
assert( gamma_move(board, 3, 7, 8) == 0 );
assert( gamma_move(board, 3, 3, 2) == 0 );
assert( gamma_move(board, 4, 9, 5) == 1 );
assert( gamma_move(board, 1, 2, 4) == 0 );
assert( gamma_move(board, 1, 6, 8) == 0 );
assert( gamma_move(board, 2, 5, 2) == 0 );
assert( gamma_busy_fields(board, 2) == 17 );


char* board237815176 = gamma_board(board);
assert( board237815176 != NULL );
assert( strcmp(board237815176, 
"3....3.233\n"
"1..144...2\n"
"1..4311.4.\n"
"......31.4\n"
"13.12443.2\n"
"4141..34.3\n"
"..21..2143\n"
"3.4.4.32..\n"
"..1...3324\n"
".42.221214\n"
".2.33..1..\n"
"...1.22.2.\n"
"211.44.34.\n"
"4.4331..3.\n") == 0);
free(board237815176);
board237815176 = NULL;
assert( gamma_move(board, 3, 8, 4) == 0 );
assert( gamma_move(board, 3, 8, 13) == 0 );
assert( gamma_move(board, 4, 7, 1) == 0 );
assert( gamma_move(board, 4, 4, 1) == 0 );
assert( gamma_move(board, 1, 5, 0) == 0 );
assert( gamma_move(board, 1, 9, 11) == 1 );
assert( gamma_golden_move(board, 2, 8, 6) == 0 );
assert( gamma_move(board, 3, 3, 2) == 0 );
assert( gamma_move(board, 3, 5, 1) == 0 );
assert( gamma_free_fields(board, 3) == 60 );
assert( gamma_move(board, 4, 5, 1) == 0 );
assert( gamma_move(board, 1, 6, 6) == 0 );
assert( gamma_move(board, 2, 3, 2) == 0 );
assert( gamma_golden_move(board, 2, 1, 5) == 0 );
assert( gamma_move(board, 3, 2, 3) == 1 );
assert( gamma_move(board, 3, 3, 10) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 3, 1) == 1 );
assert( gamma_move(board, 4, 3, 0) == 0 );
assert( gamma_move(board, 2, 10, 5) == 0 );
assert( gamma_move(board, 3, 11, 2) == 0 );
assert( gamma_busy_fields(board, 3) == 23 );
assert( gamma_move(board, 4, 0, 7) == 1 );
assert( gamma_move(board, 1, 8, 4) == 0 );
assert( gamma_move(board, 2, 8, 8) == 1 );
assert( gamma_golden_move(board, 2, 0, 0) == 1 );
assert( gamma_move(board, 3, 4, 3) == 0 );
assert( gamma_move(board, 3, 9, 5) == 0 );
assert( gamma_move(board, 4, 8, 13) == 0 );
assert( gamma_move(board, 2, 8, 8) == 0 );
assert( gamma_move(board, 2, 2, 5) == 0 );
assert( gamma_move(board, 3, 4, 10) == 1 );
assert( gamma_move(board, 3, 1, 2) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 11, 1) == 0 );
assert( gamma_busy_fields(board, 4) == 22 );
assert( gamma_move(board, 1, 13, 4) == 0 );
assert( gamma_move(board, 1, 0, 2) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 8, 7) == 0 );
assert( gamma_move(board, 2, 9, 8) == 0 );
assert( gamma_move(board, 3, 11, 1) == 0 );
assert( gamma_move(board, 3, 2, 6) == 0 );
assert( gamma_move(board, 4, 5, 0) == 0 );
assert( gamma_move(board, 1, 1, 6) == 0 );
assert( gamma_move(board, 2, 9, 13) == 0 );


char* board528103985 = gamma_board(board);
assert( board528103985 != NULL );
assert( strcmp(board528103985, 
"3....3.233\n"
"1..144...2\n"
"1..4311.41\n"
"...33.31.4\n"
"13.12443.2\n"
"4141..3423\n"
"4.21..2143\n"
"3.4.4.32..\n"
"..1...3324\n"
".42.221214\n"
".2333..1..\n"
"13.1.22.2.\n"
"211444.34.\n"
"2.4331..3.\n") == 0);
free(board528103985);
board528103985 = NULL;
assert( gamma_move(board, 3, 1, 5) == 1 );
assert( gamma_move(board, 4, 6, 1) == 1 );
assert( gamma_move(board, 1, 6, 5) == 0 );
assert( gamma_move(board, 2, 6, 12) == 1 );
assert( gamma_move(board, 2, 8, 6) == 1 );
assert( gamma_move(board, 3, 2, 13) == 0 );
assert( gamma_move(board, 3, 8, 1) == 0 );
assert( gamma_move(board, 4, 7, 1) == 0 );
assert( gamma_move(board, 4, 3, 12) == 0 );
assert( gamma_move(board, 1, 4, 0) == 0 );
assert( gamma_move(board, 1, 9, 5) == 0 );
assert( gamma_move(board, 3, 0, 9) == 0 );
assert( gamma_move(board, 3, 0, 9) == 0 );
assert( gamma_busy_fields(board, 3) == 26 );
assert( gamma_move(board, 4, 12, 7) == 0 );
assert( gamma_move(board, 1, 9, 5) == 0 );
assert( gamma_move(board, 1, 1, 4) == 0 );
assert( gamma_move(board, 2, 7, 4) == 0 );
assert( gamma_move(board, 3, 6, 3) == 0 );
assert( gamma_move(board, 4, 13, 6) == 0 );
assert( gamma_move(board, 4, 4, 13) == 1 );
assert( gamma_move(board, 1, 8, 5) == 0 );
assert( gamma_busy_fields(board, 1) == 22 );
assert( gamma_golden_move(board, 1, 8, 8) == 0 );
assert( gamma_move(board, 2, 12, 8) == 0 );
assert( gamma_move(board, 2, 5, 13) == 0 );
assert( gamma_move(board, 3, 3, 9) == 0 );
assert( gamma_move(board, 3, 6, 0) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 5, 0) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 7, 4) == 0 );
assert( gamma_move(board, 2, 5, 0) == 0 );
assert( gamma_free_fields(board, 2) == 47 );
assert( gamma_move(board, 3, 4, 4) == 0 );
assert( gamma_move(board, 3, 1, 5) == 0 );
assert( gamma_move(board, 4, 1, 5) == 0 );
assert( gamma_move(board, 4, 1, 1) == 0 );
assert( gamma_move(board, 1, 5, 5) == 0 );
assert( gamma_move(board, 1, 7, 13) == 0 );
assert( gamma_move(board, 2, 6, 9) == 0 );
assert( gamma_move(board, 3, 2, 4) == 0 );
assert( gamma_move(board, 4, 6, 5) == 0 );
assert( gamma_move(board, 4, 3, 7) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 3, 9) == 0 );
assert( gamma_move(board, 2, 9, 9) == 0 );
assert( gamma_move(board, 3, 5, 3) == 1 );
assert( gamma_move(board, 3, 8, 12) == 1 );
assert( gamma_move(board, 4, 12, 1) == 0 );
assert( gamma_move(board, 1, 6, 0) == 1 );
assert( gamma_move(board, 1, 9, 10) == 0 );
assert( gamma_golden_move(board, 1, 10, 9) == 0 );
assert( gamma_move(board, 2, 9, 2) == 1 );
assert( gamma_move(board, 2, 8, 2) == 0 );
assert( gamma_free_fields(board, 2) == 43 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 4, 7) == 0 );
assert( gamma_move(board, 4, 2, 4) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 6, 5) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 3, 0) == 0 );
assert( gamma_free_fields(board, 2) == 43 );


char* board291293158 = gamma_board(board);
assert( board291293158 != NULL );
assert( strcmp(board291293158, 
"3...43.233\n"
"1..1442.32\n"
"1..4311.41\n"
"...33.31.4\n"
"13.12443.2\n"
"4141..3423\n"
"4.21..2143\n"
"3.4.4.322.\n"
".31...3324\n"
".42.221214\n"
".23333.1..\n"
"13.1.22.22\n"
"211444434.\n"
"2.43311.3.\n") == 0);
free(board291293158);
board291293158 = NULL;
assert( gamma_move(board, 3, 2, 10) == 1 );
assert( gamma_move(board, 3, 6, 4) == 0 );
assert( gamma_move(board, 4, 11, 2) == 0 );
assert( gamma_move(board, 4, 8, 8) == 0 );
assert( gamma_free_fields(board, 4) == 42 );
assert( gamma_move(board, 1, 3, 6) == 1 );
assert( gamma_move(board, 2, 4, 8) == 1 );
assert( gamma_move(board, 2, 1, 8) == 0 );
assert( gamma_move(board, 3, 6, 8) == 0 );
assert( gamma_move(board, 4, 5, 4) == 0 );
assert( gamma_move(board, 4, 0, 6) == 0 );


char* board667093253 = gamma_board(board);
assert( board667093253 != NULL );
assert( strcmp(board667093253, 
"3...43.233\n"
"1..1442.32\n"
"1..4311.41\n"
"..333.31.4\n"
"13.12443.2\n"
"41412.3423\n"
"4.21..2143\n"
"3.414.322.\n"
".31...3324\n"
".42.221214\n"
".23333.1..\n"
"13.1.22.22\n"
"211444434.\n"
"2.43311.3.\n") == 0);
free(board667093253);
board667093253 = NULL;
assert( gamma_move(board, 1, 13, 1) == 0 );
assert( gamma_move(board, 1, 3, 0) == 0 );
assert( gamma_move(board, 2, 9, 8) == 0 );
assert( gamma_move(board, 2, 6, 10) == 0 );


char* board578042211 = gamma_board(board);
assert( board578042211 != NULL );
assert( strcmp(board578042211, 
"3...43.233\n"
"1..1442.32\n"
"1..4311.41\n"
"..333.31.4\n"
"13.12443.2\n"
"41412.3423\n"
"4.21..2143\n"
"3.414.322.\n"
".31...3324\n"
".42.221214\n"
".23333.1..\n"
"13.1.22.22\n"
"211444434.\n"
"2.43311.3.\n") == 0);
free(board578042211);
board578042211 = NULL;
assert( gamma_move(board, 3, 2, 11) == 1 );
assert( gamma_move(board, 3, 1, 5) == 0 );
assert( gamma_move(board, 4, 4, 0) == 0 );
assert( gamma_move(board, 1, 5, 11) == 0 );
assert( gamma_move(board, 1, 9, 4) == 0 );
assert( gamma_move(board, 2, 3, 6) == 0 );
assert( gamma_move(board, 2, 9, 3) == 1 );
assert( gamma_move(board, 3, 4, 0) == 0 );
assert( gamma_busy_fields(board, 3) == 30 );
assert( gamma_move(board, 4, 12, 7) == 0 );
assert( gamma_move(board, 4, 6, 8) == 0 );
assert( gamma_move(board, 1, 5, 8) == 0 );
assert( gamma_move(board, 2, 9, 8) == 0 );
assert( gamma_move(board, 3, 2, 4) == 0 );
assert( gamma_move(board, 3, 1, 9) == 0 );
assert( gamma_move(board, 4, 4, 6) == 0 );
assert( gamma_move(board, 1, 2, 7) == 0 );
assert( gamma_move(board, 1, 3, 9) == 0 );
assert( gamma_move(board, 2, 8, 0) == 0 );


char* board714598568 = gamma_board(board);
assert( board714598568 != NULL );
assert( strcmp(board714598568, 
"3...43.233\n"
"1..1442.32\n"
"1.34311.41\n"
"..333.31.4\n"
"13.12443.2\n"
"41412.3423\n"
"4.21..2143\n"
"3.414.322.\n"
".31...3324\n"
".42.221214\n"
".23333.1.2\n"
"13.1.22.22\n"
"211444434.\n"
"2.43311.3.\n") == 0);
free(board714598568);
board714598568 = NULL;
assert( gamma_move(board, 4, 2, 7) == 0 );
assert( gamma_move(board, 4, 7, 5) == 0 );
assert( gamma_move(board, 1, 12, 7) == 0 );
assert( gamma_move(board, 2, 9, 8) == 0 );
assert( gamma_busy_fields(board, 2) == 24 );
assert( gamma_move(board, 3, 13, 3) == 0 );
assert( gamma_move(board, 4, 2, 2) == 1 );
assert( gamma_move(board, 1, 9, 13) == 0 );
assert( gamma_move(board, 1, 1, 0) == 1 );
assert( gamma_move(board, 3, 11, 1) == 0 );
assert( gamma_move(board, 3, 2, 1) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 12, 7) == 0 );
assert( gamma_move(board, 4, 0, 8) == 0 );
assert( gamma_move(board, 1, 2, 4) == 0 );
assert( gamma_move(board, 2, 4, 3) == 0 );
assert( gamma_move(board, 2, 7, 12) == 1 );
assert( gamma_move(board, 3, 7, 4) == 0 );
assert( gamma_busy_fields(board, 4) == 25 );
assert( gamma_move(board, 1, 3, 6) == 0 );
assert( gamma_move(board, 2, 4, 4) == 0 );
assert( gamma_move(board, 3, 9, 2) == 0 );
assert( gamma_move(board, 3, 0, 10) == 0 );
assert( gamma_move(board, 4, 7, 1) == 0 );
assert( gamma_move(board, 1, 5, 0) == 0 );
assert( gamma_move(board, 1, 7, 7) == 0 );
assert( gamma_move(board, 2, 11, 1) == 0 );
assert( gamma_move(board, 3, 0, 7) == 0 );
assert( gamma_move(board, 3, 8, 13) == 0 );
assert( gamma_move(board, 4, 6, 4) == 0 );
assert( gamma_move(board, 4, 6, 5) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 8, 3) == 1 );
assert( gamma_move(board, 2, 6, 9) == 0 );
assert( gamma_move(board, 2, 8, 0) == 0 );
assert( gamma_free_fields(board, 2) == 34 );
assert( gamma_move(board, 3, 5, 0) == 0 );
assert( gamma_move(board, 3, 0, 12) == 0 );
assert( gamma_move(board, 4, 8, 10) == 1 );
assert( gamma_move(board, 4, 1, 11) == 1 );
assert( gamma_move(board, 1, 4, 0) == 0 );
assert( gamma_move(board, 1, 0, 7) == 0 );
assert( gamma_busy_fields(board, 1) == 26 );
assert( gamma_free_fields(board, 1) == 32 );
assert( gamma_move(board, 2, 7, 4) == 0 );
assert( gamma_move(board, 2, 3, 12) == 0 );
assert( gamma_move(board, 3, 4, 3) == 0 );
assert( gamma_move(board, 3, 1, 5) == 0 );
assert( gamma_move(board, 4, 6, 5) == 0 );
assert( gamma_move(board, 4, 0, 7) == 0 );
assert( gamma_move(board, 1, 0, 9) == 0 );
assert( gamma_move(board, 1, 3, 2) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 3, 6) == 0 );
assert( gamma_move(board, 3, 7, 3) == 0 );
assert( gamma_move(board, 4, 0, 4) == 1 );
assert( gamma_move(board, 1, 3, 6) == 0 );
assert( gamma_busy_fields(board, 1) == 26 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 0, 9) == 0 );
assert( gamma_move(board, 2, 5, 1) == 0 );
assert( gamma_free_fields(board, 2) == 31 );
assert( gamma_move(board, 3, 4, 3) == 0 );
assert( gamma_busy_fields(board, 3) == 30 );
assert( gamma_move(board, 4, 9, 6) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 2, 7) == 0 );
assert( gamma_move(board, 1, 8, 4) == 0 );
assert( gamma_move(board, 2, 4, 3) == 0 );
assert( gamma_move(board, 3, 7, 1) == 0 );


char* board575273335 = gamma_board(board);
assert( board575273335 != NULL );
assert( strcmp(board575273335, 
"3...43.233\n"
"1..1442232\n"
"1434311.41\n"
"..333.3144\n"
"13.12443.2\n"
"41412.3423\n"
"4.21..2143\n"
"3.414.3224\n"
".31...3324\n"
"442.221214\n"
".23333.112\n"
"1341.22.22\n"
"211444434.\n"
"2143311.3.\n") == 0);
free(board575273335);
board575273335 = NULL;
assert( gamma_move(board, 4, 9, 2) == 0 );
assert( gamma_free_fields(board, 4) == 17 );
assert( gamma_move(board, 1, 1, 13) == 1 );
assert( gamma_move(board, 1, 9, 2) == 0 );
assert( gamma_free_fields(board, 1) == 16 );
assert( gamma_move(board, 2, 0, 8) == 0 );
assert( gamma_move(board, 3, 9, 8) == 0 );
assert( gamma_move(board, 3, 8, 10) == 0 );
assert( gamma_busy_fields(board, 3) == 30 );
assert( gamma_move(board, 4, 10, 5) == 0 );
assert( gamma_move(board, 4, 5, 3) == 0 );
assert( gamma_free_fields(board, 4) == 17 );
assert( gamma_move(board, 1, 5, 4) == 0 );
assert( gamma_move(board, 1, 8, 10) == 0 );


char* board818115968 = gamma_board(board);
assert( board818115968 != NULL );
assert( strcmp(board818115968, 
"31..43.233\n"
"1..1442232\n"
"1434311.41\n"
"..333.3144\n"
"13.12443.2\n"
"41412.3423\n"
"4.21..2143\n"
"3.414.3224\n"
".31...3324\n"
"442.221214\n"
".23333.112\n"
"1341.22.22\n"
"211444434.\n"
"2143311.3.\n") == 0);
free(board818115968);
board818115968 = NULL;
assert( gamma_move(board, 2, 2, 6) == 0 );
assert( gamma_move(board, 2, 3, 1) == 0 );
assert( gamma_move(board, 3, 13, 2) == 0 );
assert( gamma_move(board, 3, 0, 12) == 0 );
assert( gamma_move(board, 4, 9, 2) == 0 );
assert( gamma_move(board, 4, 0, 6) == 0 );
assert( gamma_move(board, 1, 2, 7) == 0 );
assert( gamma_free_fields(board, 1) == 16 );
assert( gamma_move(board, 2, 8, 11) == 0 );
assert( gamma_busy_fields(board, 3) == 30 );
assert( gamma_move(board, 4, 2, 4) == 0 );
assert( gamma_busy_fields(board, 4) == 29 );
assert( gamma_move(board, 1, 12, 1) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 6, 5) == 0 );
assert( gamma_move(board, 2, 5, 6) == 1 );
assert( gamma_busy_fields(board, 2) == 26 );
assert( gamma_move(board, 3, 7, 10) == 0 );
assert( gamma_move(board, 3, 3, 4) == 1 );
assert( gamma_golden_move(board, 3, 9, 9) == 1 );
assert( gamma_move(board, 4, 3, 6) == 0 );
assert( gamma_move(board, 4, 7, 7) == 0 );
assert( gamma_move(board, 1, 13, 3) == 0 );
assert( gamma_move(board, 1, 0, 12) == 0 );
assert( gamma_free_fields(board, 1) == 16 );
assert( gamma_move(board, 2, 3, 1) == 0 );
assert( gamma_move(board, 3, 7, 1) == 0 );
assert( gamma_move(board, 3, 8, 11) == 0 );
assert( gamma_busy_fields(board, 3) == 32 );
assert( gamma_move(board, 4, 0, 7) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 11, 7) == 0 );
assert( gamma_move(board, 1, 2, 10) == 0 );
assert( gamma_move(board, 2, 9, 2) == 0 );
assert( gamma_move(board, 4, 13, 2) == 0 );
assert( gamma_move(board, 4, 7, 1) == 0 );
assert( gamma_move(board, 1, 2, 4) == 0 );
assert( gamma_move(board, 1, 8, 12) == 0 );
assert( gamma_busy_fields(board, 1) == 27 );
assert( gamma_golden_move(board, 1, 7, 3) == 0 );
assert( gamma_move(board, 2, 7, 2) == 1 );


char* board201245857 = gamma_board(board);
assert( board201245857 != NULL );
assert( strcmp(board201245857, 
"31..43.233\n"
"1..1442232\n"
"1434311.41\n"
"..333.3144\n"
"13.12443.3\n"
"41412.3423\n"
"4.21..2143\n"
"3.41423224\n"
".31...3324\n"
"4423221214\n"
".23333.112\n"
"1341.22222\n"
"211444434.\n"
"2143311.3.\n") == 0);
free(board201245857);
board201245857 = NULL;
assert( gamma_move(board, 3, 5, 3) == 0 );
assert( gamma_busy_fields(board, 3) == 32 );
assert( gamma_free_fields(board, 3) == 15 );
assert( gamma_move(board, 4, 2, 13) == 0 );
assert( gamma_move(board, 4, 7, 13) == 0 );
assert( gamma_move(board, 1, 9, 2) == 0 );
assert( gamma_move(board, 2, 5, 2) == 0 );
assert( gamma_busy_fields(board, 2) == 26 );
assert( gamma_golden_move(board, 2, 5, 2) == 0 );
assert( gamma_move(board, 3, 12, 1) == 0 );
assert( gamma_move(board, 3, 0, 13) == 0 );
assert( gamma_move(board, 4, 4, 8) == 0 );


gamma_delete(board);

    return 0;
}
