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
uuid: 428706766
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(15, 10, 4, 39);
assert( board != NULL );


assert( gamma_move(board, 1, 9, 5) == 1 );
assert( gamma_move(board, 1, 1, 0) == 1 );
assert( gamma_move(board, 2, 5, 0) == 1 );
assert( gamma_move(board, 3, 10, 0) == 1 );
assert( gamma_move(board, 3, 4, 6) == 1 );
assert( gamma_move(board, 4, 9, 5) == 0 );
assert( gamma_move(board, 4, 2, 4) == 1 );
assert( gamma_move(board, 1, 9, 10) == 0 );
assert( gamma_move(board, 1, 0, 9) == 1 );
assert( gamma_move(board, 2, 9, 14) == 0 );
assert( gamma_move(board, 3, 5, 1) == 1 );
assert( gamma_move(board, 3, 2, 2) == 1 );
assert( gamma_free_fields(board, 3) == 141 );
assert( gamma_move(board, 4, 9, 8) == 1 );
assert( gamma_move(board, 1, 6, 6) == 1 );
assert( gamma_move(board, 1, 2, 0) == 1 );
assert( gamma_move(board, 2, 1, 4) == 1 );
assert( gamma_move(board, 2, 13, 0) == 1 );
assert( gamma_move(board, 3, 3, 7) == 1 );
assert( gamma_move(board, 4, 11, 3) == 1 );
assert( gamma_move(board, 4, 9, 6) == 1 );
assert( gamma_move(board, 1, 5, 2) == 1 );
assert( gamma_move(board, 1, 13, 2) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );


char* board609380259 = gamma_board(board);
assert( board609380259 != NULL );
assert( strcmp(board609380259, 
"1..............\n"
".........4.....\n"
"...3...........\n"
"....3.1..4.....\n"
".........1.....\n"
".24............\n"
"...........4...\n"
"..3..1.......1.\n"
".....3.........\n"
".11..2....3..2.\n") == 0);
free(board609380259);
board609380259 = NULL;
assert( gamma_move(board, 2, 4, 3) == 1 );
assert( gamma_move(board, 3, 5, 1) == 0 );
assert( gamma_move(board, 3, 13, 8) == 1 );
assert( gamma_move(board, 4, 3, 9) == 1 );
assert( gamma_move(board, 1, 4, 13) == 0 );
assert( gamma_move(board, 1, 7, 0) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 6, 10) == 0 );
assert( gamma_move(board, 2, 11, 9) == 1 );
assert( gamma_move(board, 3, 1, 10) == 0 );
assert( gamma_move(board, 4, 11, 5) == 1 );
assert( gamma_move(board, 1, 8, 11) == 0 );
assert( gamma_busy_fields(board, 1) == 8 );
assert( gamma_move(board, 2, 0, 6) == 1 );
assert( gamma_move(board, 3, 9, 13) == 0 );
assert( gamma_move(board, 4, 2, 5) == 1 );
assert( gamma_move(board, 1, 5, 4) == 1 );
assert( gamma_busy_fields(board, 1) == 9 );
assert( gamma_move(board, 2, 4, 2) == 1 );
assert( gamma_move(board, 2, 10, 2) == 1 );
assert( gamma_move(board, 3, 5, 13) == 0 );
assert( gamma_move(board, 4, 3, 8) == 1 );
assert( gamma_move(board, 4, 9, 7) == 1 );
assert( gamma_move(board, 1, 7, 5) == 1 );
assert( gamma_move(board, 1, 13, 9) == 1 );
assert( gamma_move(board, 2, 5, 8) == 1 );
assert( gamma_golden_move(board, 2, 0, 1) == 0 );
assert( gamma_move(board, 3, 13, 3) == 1 );
assert( gamma_move(board, 4, 13, 1) == 1 );
assert( gamma_move(board, 4, 9, 5) == 0 );
assert( gamma_move(board, 1, 3, 9) == 0 );
assert( gamma_move(board, 2, 4, 13) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 9, 12) == 0 );


char* board205053754 = gamma_board(board);
assert( board205053754 != NULL );
assert( strcmp(board205053754, 
"1..4.......2.1.\n"
"...4.2...4...3.\n"
"...3.....4.....\n"
"2...3.1..4.....\n"
"..4....1.1.4...\n"
".24..1.........\n"
"....2......4.3.\n"
"..3.21....2..1.\n"
".....3.......4.\n"
".11..2.1..3..2.\n") == 0);
free(board205053754);
board205053754 = NULL;
assert( gamma_move(board, 4, 8, 8) == 1 );
assert( gamma_busy_fields(board, 4) == 11 );


char* board613482089 = gamma_board(board);
assert( board613482089 != NULL );
assert( strcmp(board613482089, 
"1..4.......2.1.\n"
"...4.2..44...3.\n"
"...3.....4.....\n"
"2...3.1..4.....\n"
"..4....1.1.4...\n"
".24..1.........\n"
"....2......4.3.\n"
"..3.21....2..1.\n"
".....3.......4.\n"
".11..2.1..3..2.\n") == 0);
free(board613482089);
board613482089 = NULL;
assert( gamma_move(board, 2, 5, 5) == 1 );
assert( gamma_move(board, 2, 3, 3) == 1 );
assert( gamma_busy_fields(board, 2) == 11 );
assert( gamma_move(board, 4, 3, 0) == 1 );
assert( gamma_move(board, 4, 3, 5) == 1 );
assert( gamma_move(board, 1, 5, 1) == 0 );
assert( gamma_free_fields(board, 1) == 108 );
assert( gamma_move(board, 2, 5, 6) == 1 );
assert( gamma_move(board, 2, 13, 9) == 0 );
assert( gamma_move(board, 3, 5, 0) == 0 );
assert( gamma_move(board, 3, 14, 4) == 1 );
assert( gamma_busy_fields(board, 3) == 8 );
assert( gamma_move(board, 4, 2, 12) == 0 );
assert( gamma_move(board, 4, 8, 3) == 1 );
assert( gamma_move(board, 1, 0, 8) == 1 );
assert( gamma_free_fields(board, 1) == 104 );
assert( gamma_move(board, 2, 0, 5) == 1 );
assert( gamma_move(board, 2, 14, 5) == 1 );
assert( gamma_golden_move(board, 2, 0, 1) == 0 );
assert( gamma_move(board, 3, 6, 13) == 0 );
assert( gamma_move(board, 4, 5, 8) == 0 );
assert( gamma_free_fields(board, 4) == 102 );


char* board730090416 = gamma_board(board);
assert( board730090416 != NULL );
assert( strcmp(board730090416, 
"1..4.......2.1.\n"
"1..4.2..44...3.\n"
"...3.....4.....\n"
"2...321..4.....\n"
"2.44.2.1.1.4..2\n"
".24..1........3\n"
"...22...4..4.3.\n"
"..3.21....2..1.\n"
".....3.......4.\n"
".114.2.1..3..2.\n") == 0);
free(board730090416);
board730090416 = NULL;
assert( gamma_move(board, 1, 0, 2) == 1 );


char* board543437912 = gamma_board(board);
assert( board543437912 != NULL );
assert( strcmp(board543437912, 
"1..4.......2.1.\n"
"1..4.2..44...3.\n"
"...3.....4.....\n"
"2...321..4.....\n"
"2.44.2.1.1.4..2\n"
".24..1........3\n"
"...22...4..4.3.\n"
"1.3.21....2..1.\n"
".....3.......4.\n"
".114.2.1..3..2.\n") == 0);
free(board543437912);
board543437912 = NULL;
assert( gamma_move(board, 2, 3, 10) == 0 );
assert( gamma_busy_fields(board, 2) == 14 );
assert( gamma_free_fields(board, 2) == 101 );
assert( gamma_golden_move(board, 2, 0, 3) == 0 );


char* board482494607 = gamma_board(board);
assert( board482494607 != NULL );
assert( strcmp(board482494607, 
"1..4.......2.1.\n"
"1..4.2..44...3.\n"
"...3.....4.....\n"
"2...321..4.....\n"
"2.44.2.1.1.4..2\n"
".24..1........3\n"
"...22...4..4.3.\n"
"1.3.21....2..1.\n"
".....3.......4.\n"
".114.2.1..3..2.\n") == 0);
free(board482494607);
board482494607 = NULL;
assert( gamma_move(board, 3, 6, 3) == 1 );
assert( gamma_move(board, 4, 5, 10) == 0 );
assert( gamma_move(board, 1, 5, 7) == 1 );
assert( gamma_move(board, 2, 2, 0) == 0 );
assert( gamma_move(board, 2, 4, 4) == 1 );
assert( gamma_move(board, 3, 8, 2) == 1 );
assert( gamma_move(board, 3, 14, 1) == 1 );
assert( gamma_busy_fields(board, 3) == 11 );


char* board988402549 = gamma_board(board);
assert( board988402549 != NULL );
assert( strcmp(board988402549, 
"1..4.......2.1.\n"
"1..4.2..44...3.\n"
"...3.1...4.....\n"
"2...321..4.....\n"
"2.44.2.1.1.4..2\n"
".24.21........3\n"
"...22.3.4..4.3.\n"
"1.3.21..3.2..1.\n"
".....3.......43\n"
".114.2.1..3..2.\n") == 0);
free(board988402549);
board988402549 = NULL;
assert( gamma_move(board, 4, 11, 9) == 0 );
assert( gamma_move(board, 1, 12, 6) == 1 );
assert( gamma_move(board, 1, 13, 9) == 0 );
assert( gamma_free_fields(board, 1) == 95 );
assert( gamma_move(board, 2, 7, 14) == 0 );
assert( gamma_move(board, 3, 0, 6) == 0 );
assert( gamma_move(board, 3, 0, 9) == 0 );
assert( gamma_move(board, 4, 1, 1) == 1 );
assert( gamma_move(board, 1, 2, 12) == 0 );
assert( gamma_move(board, 1, 13, 1) == 0 );
assert( gamma_move(board, 2, 11, 2) == 1 );
assert( gamma_move(board, 2, 3, 8) == 0 );
assert( gamma_busy_fields(board, 2) == 16 );
assert( gamma_move(board, 3, 1, 9) == 1 );
assert( gamma_move(board, 3, 14, 6) == 1 );
assert( gamma_move(board, 4, 6, 13) == 0 );
assert( gamma_move(board, 1, 7, 11) == 0 );
assert( gamma_move(board, 2, 9, 5) == 0 );
assert( gamma_move(board, 3, 4, 9) == 1 );
assert( gamma_move(board, 4, 0, 6) == 0 );
assert( gamma_free_fields(board, 4) == 90 );
assert( gamma_golden_move(board, 4, 3, 3) == 1 );
assert( gamma_move(board, 1, 3, 10) == 0 );
assert( gamma_move(board, 1, 10, 8) == 1 );
assert( gamma_busy_fields(board, 1) == 16 );
assert( gamma_move(board, 2, 14, 9) == 1 );
assert( gamma_move(board, 2, 13, 5) == 1 );
assert( gamma_move(board, 3, 1, 8) == 1 );


char* board865731829 = gamma_board(board);
assert( board865731829 != NULL );
assert( strcmp(board865731829, 
"13.43......2.12\n"
"13.4.2..441..3.\n"
"...3.1...4.....\n"
"2...321..4..1.3\n"
"2.44.2.1.1.4.22\n"
".24.21........3\n"
"...42.3.4..4.3.\n"
"1.3.21..3.22.1.\n"
".4...3.......43\n"
".114.2.1..3..2.\n") == 0);
free(board865731829);
board865731829 = NULL;
assert( gamma_move(board, 4, 2, 3) == 1 );
assert( gamma_move(board, 4, 6, 1) == 1 );
assert( gamma_move(board, 1, 9, 6) == 0 );
assert( gamma_golden_move(board, 1, 0, 3) == 0 );
assert( gamma_move(board, 2, 1, 11) == 0 );
assert( gamma_move(board, 3, 0, 2) == 0 );
assert( gamma_move(board, 3, 11, 7) == 1 );
assert( gamma_busy_fields(board, 3) == 16 );
assert( gamma_golden_possible(board, 3) == 1 );


char* board451338817 = gamma_board(board);
assert( board451338817 != NULL );
assert( strcmp(board451338817, 
"13.43......2.12\n"
"13.4.2..441..3.\n"
"...3.1...4.3...\n"
"2...321..4..1.3\n"
"2.44.2.1.1.4.22\n"
".24.21........3\n"
"..442.3.4..4.3.\n"
"1.3.21..3.22.1.\n"
".4...34......43\n"
".114.2.1..3..2.\n") == 0);
free(board451338817);
board451338817 = NULL;
assert( gamma_move(board, 1, 9, 12) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 9, 9) == 1 );
assert( gamma_move(board, 2, 13, 1) == 0 );
assert( gamma_free_fields(board, 2) == 82 );
assert( gamma_move(board, 3, 0, 9) == 0 );
assert( gamma_move(board, 3, 9, 4) == 1 );
assert( gamma_move(board, 4, 0, 8) == 0 );
assert( gamma_busy_fields(board, 4) == 18 );
assert( gamma_move(board, 1, 3, 1) == 1 );
assert( gamma_move(board, 2, 11, 3) == 0 );
assert( gamma_move(board, 2, 3, 3) == 0 );
assert( gamma_move(board, 3, 8, 4) == 1 );
assert( gamma_move(board, 3, 12, 6) == 0 );
assert( gamma_move(board, 4, 6, 7) == 1 );
assert( gamma_move(board, 1, 8, 2) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 12, 5) == 1 );
assert( gamma_free_fields(board, 2) == 77 );
assert( gamma_move(board, 3, 7, 7) == 1 );
assert( gamma_busy_fields(board, 3) == 19 );
assert( gamma_move(board, 4, 6, 3) == 0 );
assert( gamma_move(board, 4, 1, 6) == 1 );
assert( gamma_move(board, 1, 3, 9) == 0 );
assert( gamma_move(board, 1, 13, 2) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 5, 1) == 0 );


char* board349828309 = gamma_board(board);
assert( board349828309 != NULL );
assert( strcmp(board349828309, 
"13.43....2.2.12\n"
"13.4.2..441..3.\n"
"...3.143.4.3...\n"
"24..321..4..1.3\n"
"2.44.2.1.1.4222\n"
".24.21..33....3\n"
"..442.3.4..4.3.\n"
"1.3.21..3.22.1.\n"
".4.1.34......43\n"
".114.2.1..3..2.\n") == 0);
free(board349828309);
board349828309 = NULL;
assert( gamma_move(board, 4, 10, 5) == 1 );
assert( gamma_move(board, 2, 11, 7) == 0 );
assert( gamma_move(board, 3, 6, 8) == 1 );
assert( gamma_move(board, 3, 5, 3) == 1 );
assert( gamma_move(board, 4, 4, 7) == 1 );
assert( gamma_move(board, 1, 2, 12) == 0 );
assert( gamma_move(board, 2, 2, 6) == 1 );
assert( gamma_move(board, 3, 11, 7) == 0 );
assert( gamma_move(board, 3, 14, 6) == 0 );
assert( gamma_move(board, 4, 2, 2) == 0 );
assert( gamma_move(board, 1, 0, 12) == 0 );
assert( gamma_move(board, 1, 3, 2) == 1 );
assert( gamma_move(board, 2, 12, 5) == 0 );
assert( gamma_move(board, 3, 5, 8) == 0 );
assert( gamma_move(board, 3, 13, 7) == 1 );
assert( gamma_free_fields(board, 3) == 68 );
assert( gamma_move(board, 4, 3, 7) == 0 );
assert( gamma_move(board, 4, 4, 8) == 1 );
assert( gamma_free_fields(board, 4) == 67 );
assert( gamma_move(board, 1, 4, 7) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 6, 8) == 0 );
assert( gamma_move(board, 2, 5, 1) == 0 );
assert( gamma_move(board, 3, 1, 3) == 1 );
assert( gamma_move(board, 4, 4, 0) == 1 );
assert( gamma_move(board, 1, 3, 9) == 0 );
assert( gamma_free_fields(board, 1) == 65 );
assert( gamma_move(board, 2, 0, 8) == 0 );
assert( gamma_move(board, 2, 4, 9) == 0 );
assert( gamma_move(board, 3, 5, 6) == 0 );
assert( gamma_move(board, 3, 14, 9) == 0 );
assert( gamma_move(board, 4, 13, 3) == 0 );
assert( gamma_move(board, 1, 1, 12) == 0 );
assert( gamma_free_fields(board, 1) == 65 );
assert( gamma_move(board, 2, 2, 12) == 0 );
assert( gamma_busy_fields(board, 2) == 20 );
assert( gamma_free_fields(board, 3) == 65 );
assert( gamma_move(board, 4, 9, 4) == 0 );
assert( gamma_move(board, 4, 6, 3) == 0 );
assert( gamma_move(board, 1, 4, 12) == 0 );
assert( gamma_move(board, 2, 8, 2) == 0 );
assert( gamma_move(board, 2, 3, 4) == 1 );
assert( gamma_move(board, 3, 0, 6) == 0 );
assert( gamma_move(board, 3, 13, 4) == 1 );
assert( gamma_move(board, 1, 0, 1) == 1 );
assert( gamma_move(board, 2, 3, 7) == 0 );
assert( gamma_move(board, 2, 7, 7) == 0 );
assert( gamma_move(board, 3, 6, 10) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 0, 12) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 1, 11, 6) == 1 );
assert( gamma_move(board, 1, 7, 3) == 1 );
assert( gamma_golden_move(board, 1, 9, 14) == 0 );


char* board506595147 = gamma_board(board);
assert( board506595147 != NULL );
assert( strcmp(board506595147, 
"13.43....2.2.12\n"
"13.4423.441..3.\n"
"...34143.4.3.3.\n"
"242.321..4.11.3\n"
"2.44.2.1.144222\n"
".24221..33...33\n"
".34423314..4.3.\n"
"1.3121..3.22.1.\n"
"14.1.34......43\n"
".11442.1..3..2.\n") == 0);
free(board506595147);
board506595147 = NULL;
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_golden_move(board, 3, 8, 4) == 0 );
assert( gamma_move(board, 4, 8, 11) == 0 );
assert( gamma_move(board, 1, 8, 14) == 0 );
assert( gamma_move(board, 2, 6, 10) == 0 );
assert( gamma_busy_fields(board, 3) == 24 );


char* board674961700 = gamma_board(board);
assert( board674961700 != NULL );
assert( strcmp(board674961700, 
"13.43....2.2.12\n"
"13.4423.441..3.\n"
"...34143.4.3.3.\n"
"242.321..4.11.3\n"
"2.44.2.1.144222\n"
".24221..33...33\n"
".34423314..4.3.\n"
"1.3121..3.22.1.\n"
"14.1.34......43\n"
".11442.1..3..2.\n") == 0);
free(board674961700);
board674961700 = NULL;
assert( gamma_move(board, 4, 7, 9) == 1 );
assert( gamma_move(board, 1, 8, 14) == 0 );
assert( gamma_move(board, 1, 9, 3) == 1 );
assert( gamma_free_fields(board, 1) == 58 );
assert( gamma_move(board, 2, 9, 2) == 1 );
assert( gamma_busy_fields(board, 2) == 22 );
assert( gamma_golden_move(board, 2, 0, 4) == 0 );
assert( gamma_move(board, 3, 7, 14) == 0 );
assert( gamma_move(board, 3, 8, 0) == 1 );
assert( gamma_move(board, 4, 6, 7) == 0 );
assert( gamma_move(board, 4, 6, 2) == 1 );
assert( gamma_move(board, 1, 9, 12) == 0 );
assert( gamma_move(board, 1, 9, 6) == 0 );
assert( gamma_move(board, 2, 8, 2) == 0 );
assert( gamma_move(board, 2, 4, 9) == 0 );
assert( gamma_move(board, 3, 12, 6) == 0 );
assert( gamma_busy_fields(board, 3) == 25 );
assert( gamma_move(board, 4, 3, 12) == 0 );
assert( gamma_move(board, 1, 1, 7) == 1 );
assert( gamma_move(board, 1, 8, 4) == 0 );
assert( gamma_move(board, 2, 4, 0) == 0 );
assert( gamma_move(board, 2, 8, 3) == 0 );
assert( gamma_move(board, 3, 7, 9) == 0 );
assert( gamma_move(board, 3, 13, 3) == 0 );
assert( gamma_free_fields(board, 3) == 54 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 11, 2) == 0 );
assert( gamma_move(board, 4, 0, 1) == 0 );
assert( gamma_move(board, 1, 6, 3) == 0 );
assert( gamma_move(board, 2, 3, 2) == 0 );
assert( gamma_move(board, 2, 2, 0) == 0 );
assert( gamma_move(board, 3, 4, 7) == 0 );
assert( gamma_move(board, 3, 12, 6) == 0 );
assert( gamma_move(board, 4, 8, 6) == 1 );
assert( gamma_free_fields(board, 4) == 53 );
assert( gamma_move(board, 1, 1, 7) == 0 );
assert( gamma_move(board, 1, 1, 9) == 0 );
assert( gamma_move(board, 2, 1, 2) == 1 );
assert( gamma_move(board, 2, 1, 0) == 0 );
assert( gamma_move(board, 3, 0, 5) == 0 );
assert( gamma_free_fields(board, 3) == 52 );
assert( gamma_move(board, 4, 11, 4) == 1 );
assert( gamma_move(board, 4, 14, 9) == 0 );
assert( gamma_move(board, 1, 1, 10) == 0 );
assert( gamma_move(board, 2, 4, 10) == 0 );
assert( gamma_move(board, 2, 14, 0) == 1 );
assert( gamma_move(board, 3, 14, 4) == 0 );
assert( gamma_busy_fields(board, 3) == 25 );
assert( gamma_move(board, 4, 6, 7) == 0 );
assert( gamma_move(board, 1, 1, 10) == 0 );
assert( gamma_move(board, 2, 1, 9) == 0 );
assert( gamma_move(board, 3, 7, 2) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 5, 1) == 0 );
assert( gamma_move(board, 1, 1, 12) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 8, 11) == 0 );
assert( gamma_move(board, 2, 3, 2) == 0 );
assert( gamma_busy_fields(board, 2) == 24 );
assert( gamma_move(board, 3, 6, 7) == 0 );
assert( gamma_move(board, 4, 3, 12) == 0 );
assert( gamma_move(board, 1, 8, 11) == 0 );
assert( gamma_move(board, 1, 11, 2) == 0 );
assert( gamma_free_fields(board, 2) == 49 );
assert( gamma_golden_move(board, 2, 7, 6) == 0 );
assert( gamma_move(board, 3, 12, 1) == 1 );
assert( gamma_busy_fields(board, 3) == 27 );
assert( gamma_move(board, 4, 7, 8) == 1 );
assert( gamma_move(board, 1, 3, 0) == 0 );


char* board642223246 = gamma_board(board);
assert( board642223246 != NULL );
assert( strcmp(board642223246, 
"13.43..4.2.2.12\n"
"13.44234441..3.\n"
".1.34143.4.3.3.\n"
"242.321.44.11.3\n"
"2.44.2.1.144222\n"
".24221..33.4.33\n"
".344233141.4.3.\n"
"123121433222.1.\n"
"14.1.34.....343\n"
".11442.13.3..22\n") == 0);
free(board642223246);
board642223246 = NULL;
assert( gamma_move(board, 2, 8, 3) == 0 );
assert( gamma_move(board, 2, 10, 6) == 1 );
assert( gamma_move(board, 3, 6, 13) == 0 );
assert( gamma_move(board, 3, 11, 9) == 0 );
assert( gamma_golden_move(board, 3, 1, 14) == 0 );
assert( gamma_move(board, 4, 14, 8) == 1 );


char* board513692646 = gamma_board(board);
assert( board513692646 != NULL );
assert( strcmp(board513692646, 
"13.43..4.2.2.12\n"
"13.44234441..34\n"
".1.34143.4.3.3.\n"
"242.321.44211.3\n"
"2.44.2.1.144222\n"
".24221..33.4.33\n"
".344233141.4.3.\n"
"123121433222.1.\n"
"14.1.34.....343\n"
".11442.13.3..22\n") == 0);
free(board513692646);
board513692646 = NULL;
assert( gamma_move(board, 1, 6, 7) == 0 );
assert( gamma_move(board, 1, 2, 2) == 0 );
assert( gamma_busy_fields(board, 1) == 23 );
assert( gamma_move(board, 2, 6, 13) == 0 );
assert( gamma_move(board, 2, 7, 7) == 0 );
assert( gamma_move(board, 3, 1, 1) == 0 );
assert( gamma_move(board, 3, 5, 1) == 0 );
assert( gamma_free_fields(board, 3) == 45 );
assert( gamma_move(board, 4, 7, 2) == 0 );
assert( gamma_move(board, 4, 1, 3) == 0 );
assert( gamma_move(board, 1, 1, 9) == 0 );
assert( gamma_move(board, 2, 7, 8) == 0 );
assert( gamma_move(board, 2, 9, 1) == 1 );
assert( gamma_busy_fields(board, 2) == 26 );
assert( gamma_move(board, 3, 9, 12) == 0 );
assert( gamma_move(board, 3, 6, 8) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 1, 10) == 0 );
assert( gamma_busy_fields(board, 4) == 30 );
assert( gamma_move(board, 1, 9, 8) == 0 );
assert( gamma_move(board, 2, 8, 2) == 0 );
assert( gamma_move(board, 2, 5, 1) == 0 );
assert( gamma_busy_fields(board, 2) == 26 );
assert( gamma_move(board, 3, 4, 0) == 0 );
assert( gamma_move(board, 4, 7, 6) == 1 );
assert( gamma_move(board, 1, 7, 0) == 0 );
assert( gamma_move(board, 1, 3, 0) == 0 );
assert( gamma_move(board, 2, 0, 8) == 0 );
assert( gamma_move(board, 2, 13, 5) == 0 );
assert( gamma_move(board, 3, 8, 3) == 0 );
assert( gamma_move(board, 3, 3, 3) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 4, 12) == 0 );
assert( gamma_busy_fields(board, 4) == 31 );
assert( gamma_move(board, 1, 2, 14) == 0 );
assert( gamma_move(board, 2, 3, 5) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );


char* board736912968 = gamma_board(board);
assert( board736912968 != NULL );
assert( strcmp(board736912968, 
"13.43..4.2.2.12\n"
"13.44234441..34\n"
".1.34143.4.3.3.\n"
"242.321444211.3\n"
"2.44.2.1.144222\n"
".24221..33.4.33\n"
".344233141.4.3.\n"
"123121433222.1.\n"
"14.1.34..2..343\n"
".11442.13.3..22\n") == 0);
free(board736912968);
board736912968 = NULL;
assert( gamma_move(board, 3, 8, 0) == 0 );
assert( gamma_free_fields(board, 3) == 43 );
assert( gamma_move(board, 4, 9, 2) == 0 );
assert( gamma_move(board, 4, 5, 8) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 1, 7, 10) == 0 );
assert( gamma_move(board, 2, 9, 8) == 0 );
assert( gamma_move(board, 3, 1, 10) == 0 );
assert( gamma_move(board, 1, 9, 12) == 0 );
assert( gamma_move(board, 2, 3, 6) == 1 );
assert( gamma_move(board, 2, 11, 2) == 0 );


char* board263778088 = gamma_board(board);
assert( board263778088 != NULL );
assert( strcmp(board263778088, 
"13.43..4.2.2.12\n"
"13.44234441..34\n"
".1.34143.4.3.3.\n"
"2422321444211.3\n"
"2.44.2.1.144222\n"
".24221..33.4.33\n"
".344233141.4.3.\n"
"123121433222.1.\n"
"14.1.34..2..343\n"
".11442.13.3..22\n") == 0);
free(board263778088);
board263778088 = NULL;
assert( gamma_move(board, 3, 0, 9) == 0 );
assert( gamma_move(board, 3, 6, 3) == 0 );
assert( gamma_free_fields(board, 3) == 42 );
assert( gamma_move(board, 4, 7, 2) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 1, 0, 6) == 0 );
assert( gamma_move(board, 1, 8, 0) == 0 );
assert( gamma_golden_move(board, 1, 1, 6) == 1 );
assert( gamma_move(board, 2, 5, 8) == 0 );
assert( gamma_move(board, 2, 4, 7) == 0 );


char* board436352713 = gamma_board(board);
assert( board436352713 != NULL );
assert( strcmp(board436352713, 
"13.43..4.2.2.12\n"
"13.44234441..34\n"
".1.34143.4.3.3.\n"
"2122321444211.3\n"
"2.44.2.1.144222\n"
".24221..33.4.33\n"
".344233141.4.3.\n"
"123121433222.1.\n"
"14.1.34..2..343\n"
".11442.13.3..22\n") == 0);
free(board436352713);
board436352713 = NULL;
assert( gamma_move(board, 3, 0, 1) == 0 );
assert( gamma_move(board, 3, 0, 8) == 0 );
assert( gamma_busy_fields(board, 3) == 27 );
assert( gamma_move(board, 4, 8, 12) == 0 );


char* board622047203 = gamma_board(board);
assert( board622047203 != NULL );
assert( strcmp(board622047203, 
"13.43..4.2.2.12\n"
"13.44234441..34\n"
".1.34143.4.3.3.\n"
"2122321444211.3\n"
"2.44.2.1.144222\n"
".24221..33.4.33\n"
".344233141.4.3.\n"
"123121433222.1.\n"
"14.1.34..2..343\n"
".11442.13.3..22\n") == 0);
free(board622047203);
board622047203 = NULL;
assert( gamma_move(board, 1, 9, 10) == 0 );
assert( gamma_golden_move(board, 1, 4, 13) == 0 );
assert( gamma_move(board, 2, 2, 12) == 0 );
assert( gamma_move(board, 2, 4, 7) == 0 );
assert( gamma_move(board, 3, 9, 2) == 0 );
assert( gamma_busy_fields(board, 3) == 27 );
assert( gamma_move(board, 1, 14, 1) == 0 );
assert( gamma_move(board, 2, 6, 13) == 0 );
assert( gamma_move(board, 2, 10, 3) == 1 );
assert( gamma_move(board, 3, 12, 0) == 1 );
assert( gamma_move(board, 4, 10, 7) == 1 );
assert( gamma_free_fields(board, 4) == 39 );
assert( gamma_move(board, 2, 0, 11) == 0 );
assert( gamma_move(board, 2, 2, 5) == 0 );
assert( gamma_move(board, 3, 9, 2) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_golden_move(board, 3, 5, 14) == 0 );
assert( gamma_move(board, 4, 3, 7) == 0 );
assert( gamma_move(board, 4, 12, 2) == 1 );
assert( gamma_move(board, 1, 13, 3) == 0 );
assert( gamma_move(board, 2, 4, 0) == 0 );
assert( gamma_move(board, 2, 11, 6) == 0 );
assert( gamma_move(board, 3, 9, 1) == 0 );
assert( gamma_move(board, 1, 3, 14) == 0 );
assert( gamma_move(board, 1, 6, 5) == 1 );
assert( gamma_move(board, 2, 9, 10) == 0 );
assert( gamma_free_fields(board, 2) == 37 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 6, 13) == 0 );
assert( gamma_golden_move(board, 3, 3, 3) == 1 );
assert( gamma_move(board, 4, 1, 8) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 1, 1, 11) == 0 );
assert( gamma_move(board, 1, 12, 9) == 1 );
assert( gamma_busy_fields(board, 1) == 26 );
assert( gamma_move(board, 2, 9, 6) == 0 );
assert( gamma_move(board, 2, 12, 7) == 1 );
assert( gamma_move(board, 3, 3, 0) == 0 );
assert( gamma_move(board, 4, 1, 10) == 0 );
assert( gamma_move(board, 1, 4, 10) == 0 );
assert( gamma_move(board, 1, 9, 4) == 0 );
assert( gamma_move(board, 2, 1, 4) == 0 );
assert( gamma_move(board, 2, 2, 6) == 0 );
assert( gamma_busy_fields(board, 2) == 29 );
assert( gamma_move(board, 3, 9, 2) == 0 );
assert( gamma_move(board, 3, 9, 2) == 0 );
assert( gamma_move(board, 4, 3, 0) == 0 );
assert( gamma_move(board, 1, 4, 10) == 0 );
assert( gamma_move(board, 1, 10, 2) == 0 );
assert( gamma_move(board, 2, 8, 2) == 0 );
assert( gamma_move(board, 3, 6, 3) == 0 );
assert( gamma_free_fields(board, 3) == 35 );
assert( gamma_move(board, 4, 7, 8) == 0 );
assert( gamma_move(board, 4, 8, 8) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 1, 9, 6) == 0 );
assert( gamma_move(board, 2, 6, 3) == 0 );
assert( gamma_busy_fields(board, 2) == 29 );
assert( gamma_move(board, 3, 1, 7) == 0 );
assert( gamma_move(board, 3, 10, 2) == 0 );
assert( gamma_move(board, 4, 9, 10) == 0 );
assert( gamma_move(board, 4, 1, 6) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 1, 8, 3) == 0 );


char* board316455012 = gamma_board(board);
assert( board316455012 != NULL );
assert( strcmp(board316455012, 
"13.43..4.2.2112\n"
"13.44234441..34\n"
".1.34143.44323.\n"
"2122321444211.3\n"
"2.44.211.144222\n"
".24221..33.4.33\n"
".34323314124.3.\n"
"12312143322241.\n"
"14.1.34..2..343\n"
".11442.13.3.322\n") == 0);
free(board316455012);
board316455012 = NULL;
assert( gamma_move(board, 2, 4, 7) == 0 );
assert( gamma_move(board, 2, 4, 9) == 0 );
assert( gamma_move(board, 3, 0, 2) == 0 );
assert( gamma_move(board, 4, 5, 4) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 1, 6, 13) == 0 );
assert( gamma_move(board, 2, 4, 10) == 0 );
assert( gamma_move(board, 2, 9, 2) == 0 );
assert( gamma_move(board, 3, 8, 12) == 0 );
assert( gamma_move(board, 1, 1, 11) == 0 );
assert( gamma_move(board, 1, 4, 7) == 0 );
assert( gamma_busy_fields(board, 1) == 26 );
assert( gamma_move(board, 2, 1, 4) == 0 );
assert( gamma_move(board, 2, 12, 2) == 0 );
assert( gamma_move(board, 3, 14, 7) == 1 );
assert( gamma_move(board, 3, 4, 5) == 1 );
assert( gamma_move(board, 4, 3, 14) == 0 );
assert( gamma_move(board, 4, 3, 7) == 0 );
assert( gamma_move(board, 1, 8, 2) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 1, 11) == 0 );
assert( gamma_move(board, 2, 0, 1) == 0 );


char* board354631042 = gamma_board(board);
assert( board354631042 != NULL );
assert( strcmp(board354631042, 
"13.43..4.2.2112\n"
"13.44234441..34\n"
".1.34143.443233\n"
"2122321444211.3\n"
"2.443211.144222\n"
".24221..33.4.33\n"
".34323314124.3.\n"
"12312143322241.\n"
"14.1.34..2..343\n"
".11442.13.3.322\n") == 0);
free(board354631042);
board354631042 = NULL;
assert( gamma_move(board, 3, 13, 3) == 0 );
assert( gamma_move(board, 3, 10, 4) == 1 );
assert( gamma_move(board, 4, 4, 0) == 0 );
assert( gamma_move(board, 2, 8, 12) == 0 );
assert( gamma_free_fields(board, 2) == 32 );
assert( gamma_move(board, 3, 4, 0) == 0 );
assert( gamma_busy_fields(board, 3) == 32 );
assert( gamma_move(board, 4, 7, 5) == 0 );
assert( gamma_move(board, 1, 9, 5) == 0 );
assert( gamma_move(board, 1, 7, 1) == 1 );
assert( gamma_move(board, 2, 0, 7) == 1 );
assert( gamma_move(board, 2, 8, 0) == 0 );
assert( gamma_move(board, 3, 7, 8) == 0 );
assert( gamma_move(board, 3, 6, 7) == 0 );
assert( gamma_move(board, 1, 0, 9) == 0 );
assert( gamma_move(board, 2, 12, 4) == 1 );
assert( gamma_move(board, 2, 4, 6) == 0 );
assert( gamma_move(board, 3, 5, 1) == 0 );
assert( gamma_move(board, 3, 6, 3) == 0 );
assert( gamma_move(board, 4, 7, 8) == 0 );
assert( gamma_free_fields(board, 4) == 29 );
assert( gamma_move(board, 1, 6, 5) == 0 );
assert( gamma_move(board, 2, 1, 8) == 0 );
assert( gamma_move(board, 2, 7, 0) == 0 );
assert( gamma_move(board, 3, 1, 2) == 0 );
assert( gamma_move(board, 3, 1, 8) == 0 );
assert( gamma_move(board, 4, 9, 6) == 0 );
assert( gamma_move(board, 1, 8, 12) == 0 );
assert( gamma_move(board, 1, 8, 6) == 0 );
assert( gamma_move(board, 2, 9, 10) == 0 );
assert( gamma_move(board, 2, 2, 5) == 0 );
assert( gamma_move(board, 3, 1, 4) == 0 );
assert( gamma_move(board, 4, 7, 8) == 0 );
assert( gamma_move(board, 4, 11, 7) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_golden_move(board, 4, 0, 7) == 0 );
assert( gamma_move(board, 1, 1, 4) == 0 );
assert( gamma_golden_move(board, 1, 4, 8) == 0 );
assert( gamma_move(board, 2, 2, 4) == 0 );
assert( gamma_move(board, 2, 5, 1) == 0 );
assert( gamma_move(board, 3, 0, 1) == 0 );
assert( gamma_move(board, 3, 8, 6) == 0 );
assert( gamma_move(board, 4, 14, 3) == 1 );
assert( gamma_move(board, 1, 0, 6) == 0 );
assert( gamma_busy_fields(board, 1) == 27 );
assert( gamma_move(board, 2, 12, 0) == 0 );
assert( gamma_move(board, 3, 12, 7) == 0 );
assert( gamma_move(board, 3, 5, 3) == 0 );
assert( gamma_move(board, 4, 7, 9) == 0 );
assert( gamma_move(board, 4, 0, 8) == 0 );
assert( gamma_move(board, 2, 1, 0) == 0 );
assert( gamma_move(board, 3, 14, 3) == 0 );
assert( gamma_move(board, 4, 1, 2) == 0 );
assert( gamma_move(board, 1, 5, 2) == 0 );
assert( gamma_busy_fields(board, 1) == 27 );
assert( gamma_move(board, 2, 5, 1) == 0 );
assert( gamma_busy_fields(board, 2) == 31 );
assert( gamma_golden_move(board, 2, 7, 6) == 1 );
assert( gamma_move(board, 3, 9, 10) == 0 );
assert( gamma_move(board, 3, 2, 4) == 0 );
assert( gamma_move(board, 4, 0, 0) == 1 );
assert( gamma_move(board, 1, 8, 2) == 0 );
assert( gamma_move(board, 1, 11, 3) == 0 );
assert( gamma_move(board, 2, 3, 5) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 3, 0) == 0 );
assert( gamma_move(board, 3, 5, 8) == 0 );
assert( gamma_move(board, 4, 3, 4) == 0 );
assert( gamma_move(board, 1, 1, 8) == 0 );
assert( gamma_move(board, 2, 7, 8) == 0 );
assert( gamma_move(board, 2, 13, 7) == 0 );
assert( gamma_move(board, 3, 14, 0) == 0 );
assert( gamma_move(board, 3, 3, 0) == 0 );
assert( gamma_move(board, 4, 9, 6) == 0 );
assert( gamma_busy_fields(board, 4) == 32 );


gamma_delete(board);

    return 0;
}
