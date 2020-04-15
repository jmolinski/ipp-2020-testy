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
uuid: 745353522
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(17, 24, 5, 37);
assert( board != NULL );


assert( gamma_move(board, 1, 9, 10) == 1 );
assert( gamma_move(board, 2, 14, 16) == 1 );
assert( gamma_free_fields(board, 2) == 406 );
assert( gamma_move(board, 3, 6, 12) == 1 );
assert( gamma_move(board, 4, 13, 21) == 1 );
assert( gamma_golden_move(board, 5, 12, 6) == 0 );
assert( gamma_move(board, 1, 12, 1) == 1 );
assert( gamma_move(board, 1, 14, 12) == 1 );
assert( gamma_move(board, 2, 10, 12) == 1 );
assert( gamma_move(board, 3, 14, 15) == 1 );
assert( gamma_move(board, 5, 7, 4) == 1 );
assert( gamma_move(board, 1, 15, 13) == 1 );
assert( gamma_move(board, 2, 12, 4) == 1 );
assert( gamma_move(board, 2, 5, 22) == 1 );
assert( gamma_free_fields(board, 2) == 396 );
assert( gamma_move(board, 3, 10, 14) == 1 );
assert( gamma_busy_fields(board, 3) == 3 );
assert( gamma_move(board, 4, 15, 19) == 1 );
assert( gamma_move(board, 4, 5, 14) == 1 );
assert( gamma_move(board, 5, 19, 2) == 0 );
assert( gamma_move(board, 5, 13, 1) == 1 );
assert( gamma_move(board, 1, 2, 15) == 1 );
assert( gamma_move(board, 1, 16, 2) == 1 );
assert( gamma_move(board, 2, 11, 5) == 1 );
assert( gamma_free_fields(board, 2) == 389 );
assert( gamma_move(board, 3, 4, 13) == 1 );
assert( gamma_move(board, 3, 1, 18) == 1 );
assert( gamma_move(board, 4, 7, 13) == 1 );
assert( gamma_busy_fields(board, 4) == 4 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 5, 22) == 0 );
assert( gamma_move(board, 5, 13, 16) == 1 );
assert( gamma_busy_fields(board, 5) == 3 );
assert( gamma_move(board, 1, 9, 2) == 1 );
assert( gamma_move(board, 2, 15, 10) == 1 );
assert( gamma_move(board, 3, 5, 5) == 1 );
assert( gamma_move(board, 3, 13, 0) == 1 );
assert( gamma_busy_fields(board, 3) == 7 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 9, 10) == 0 );
assert( gamma_move(board, 5, 6, 7) == 1 );
assert( gamma_busy_fields(board, 5) == 4 );
assert( gamma_move(board, 1, 8, 2) == 1 );
assert( gamma_free_fields(board, 1) == 379 );
assert( gamma_move(board, 2, 3, 8) == 1 );
assert( gamma_move(board, 2, 14, 3) == 1 );
assert( gamma_move(board, 3, 9, 3) == 1 );
assert( gamma_free_fields(board, 3) == 376 );
assert( gamma_move(board, 4, 16, 8) == 1 );
assert( gamma_move(board, 4, 14, 4) == 1 );
assert( gamma_move(board, 1, 5, 3) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 4, 9, 19) == 1 );
assert( gamma_busy_fields(board, 4) == 7 );
assert( gamma_move(board, 5, 21, 4) == 0 );
assert( gamma_move(board, 5, 7, 14) == 1 );
assert( gamma_move(board, 1, 7, 2) == 1 );
assert( gamma_move(board, 2, 17, 4) == 0 );
assert( gamma_busy_fields(board, 2) == 8 );
assert( gamma_move(board, 4, 11, 12) == 1 );
assert( gamma_move(board, 5, 2, 3) == 1 );
assert( gamma_move(board, 5, 7, 9) == 1 );
assert( gamma_move(board, 1, 10, 3) == 1 );
assert( gamma_move(board, 2, 12, 16) == 1 );
assert( gamma_busy_fields(board, 2) == 9 );
assert( gamma_move(board, 3, 22, 10) == 0 );
assert( gamma_free_fields(board, 3) == 365 );
assert( gamma_move(board, 4, 2, 0) == 1 );
assert( gamma_busy_fields(board, 4) == 9 );
assert( gamma_move(board, 5, 3, 19) == 1 );
assert( gamma_free_fields(board, 5) == 363 );
assert( gamma_move(board, 1, 11, 16) == 1 );
assert( gamma_move(board, 2, 3, 15) == 1 );
assert( gamma_move(board, 2, 10, 13) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 8, 10) == 1 );
assert( gamma_move(board, 3, 6, 8) == 1 );
assert( gamma_move(board, 4, 16, 20) == 1 );
assert( gamma_move(board, 4, 14, 14) == 1 );
assert( gamma_move(board, 5, 5, 2) == 1 );
assert( gamma_move(board, 1, 9, 22) == 1 );
assert( gamma_move(board, 1, 7, 13) == 0 );
assert( gamma_move(board, 2, 20, 1) == 0 );
assert( gamma_move(board, 2, 8, 6) == 1 );
assert( gamma_move(board, 3, 19, 7) == 0 );
assert( gamma_move(board, 4, 14, 18) == 1 );
assert( gamma_move(board, 4, 11, 22) == 1 );
assert( gamma_busy_fields(board, 4) == 13 );
assert( gamma_move(board, 5, 10, 5) == 1 );
assert( gamma_move(board, 5, 2, 17) == 1 );
assert( gamma_move(board, 1, 14, 8) == 1 );
assert( gamma_move(board, 1, 4, 5) == 1 );
assert( gamma_move(board, 2, 15, 9) == 1 );
assert( gamma_free_fields(board, 2) == 346 );
assert( gamma_move(board, 3, 1, 1) == 1 );
assert( gamma_move(board, 4, 23, 3) == 0 );
assert( gamma_move(board, 4, 9, 20) == 1 );
assert( gamma_move(board, 5, 21, 15) == 0 );
assert( gamma_move(board, 1, 0, 4) == 1 );
assert( gamma_move(board, 1, 15, 20) == 1 );
assert( gamma_busy_fields(board, 1) == 17 );
assert( gamma_move(board, 2, 2, 1) == 1 );
assert( gamma_move(board, 2, 16, 17) == 1 );
assert( gamma_move(board, 3, 12, 9) == 1 );
assert( gamma_move(board, 4, 13, 20) == 1 );
assert( gamma_move(board, 5, 14, 7) == 1 );
assert( gamma_move(board, 5, 1, 7) == 1 );
assert( gamma_golden_move(board, 5, 8, 3) == 0 );
assert( gamma_move(board, 1, 3, 7) == 1 );
assert( gamma_move(board, 2, 4, 1) == 1 );
assert( gamma_move(board, 3, 16, 10) == 1 );
assert( gamma_move(board, 4, 21, 3) == 0 );
assert( gamma_move(board, 4, 16, 20) == 0 );
assert( gamma_move(board, 5, 23, 1) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 1, 19, 6) == 0 );
assert( gamma_move(board, 2, 5, 2) == 0 );


char* board519641847 = gamma_board(board);
assert( board519641847 != NULL );
assert( strcmp(board519641847, 
".................\n"
".....2...1.4.....\n"
".............4...\n"
".........4...4.14\n"
"...5.....4.....4.\n"
".3............4..\n"
"..5.............2\n"
"...........1252..\n"
"..12..........3..\n"
".....4.5..3...4..\n"
"....3..4..2....1.\n"
"......3...24..1..\n"
".................\n"
"........31.....23\n"
".......5....3..2.\n"
"...2..3.......1.4\n"
".5.1..5.......5..\n"
"........2........\n"
"....13....52.....\n"
"1......5....2.4..\n"
"..5..1...31...2..\n"
".....5.111......1\n"
".32.2.......15...\n"
"..4..........3...\n") == 0);
free(board519641847);
board519641847 = NULL;
assert( gamma_move(board, 3, 12, 4) == 0 );
assert( gamma_move(board, 4, 15, 16) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 4, 6) == 1 );
assert( gamma_move(board, 2, 14, 9) == 1 );
assert( gamma_move(board, 3, 8, 15) == 1 );
assert( gamma_move(board, 3, 14, 16) == 0 );
assert( gamma_move(board, 4, 6, 6) == 1 );
assert( gamma_free_fields(board, 4) == 328 );
assert( gamma_move(board, 5, 0, 8) == 1 );
assert( gamma_move(board, 5, 10, 18) == 1 );
assert( gamma_move(board, 1, 21, 8) == 0 );
assert( gamma_busy_fields(board, 1) == 18 );
assert( gamma_move(board, 2, 6, 7) == 0 );
assert( gamma_move(board, 2, 10, 13) == 0 );
assert( gamma_move(board, 3, 6, 0) == 1 );
assert( gamma_move(board, 4, 0, 5) == 1 );
assert( gamma_move(board, 4, 12, 9) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 23, 3) == 0 );
assert( gamma_move(board, 5, 4, 16) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 1, 14, 2) == 1 );
assert( gamma_free_fields(board, 1) == 322 );
assert( gamma_move(board, 2, 9, 16) == 1 );
assert( gamma_move(board, 2, 7, 13) == 0 );
assert( gamma_free_fields(board, 2) == 321 );
assert( gamma_move(board, 3, 9, 0) == 1 );
assert( gamma_move(board, 3, 5, 21) == 1 );
assert( gamma_move(board, 4, 22, 1) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 13, 13) == 1 );
assert( gamma_move(board, 5, 9, 7) == 1 );
assert( gamma_move(board, 1, 15, 12) == 1 );
assert( gamma_move(board, 1, 2, 18) == 1 );
assert( gamma_move(board, 2, 13, 9) == 1 );
assert( gamma_move(board, 2, 4, 8) == 1 );
assert( gamma_move(board, 3, 6, 22) == 1 );
assert( gamma_move(board, 3, 12, 23) == 1 );
assert( gamma_move(board, 4, 1, 22) == 1 );
assert( gamma_move(board, 5, 4, 22) == 1 );
assert( gamma_move(board, 1, 13, 6) == 1 );
assert( gamma_move(board, 1, 11, 1) == 1 );
assert( gamma_move(board, 2, 4, 15) == 1 );
assert( gamma_move(board, 2, 12, 13) == 1 );
assert( gamma_move(board, 3, 1, 21) == 1 );
assert( gamma_busy_fields(board, 3) == 20 );
assert( gamma_move(board, 4, 18, 7) == 0 );
assert( gamma_move(board, 4, 2, 23) == 1 );
assert( gamma_move(board, 5, 14, 1) == 1 );
assert( gamma_move(board, 5, 8, 14) == 1 );
assert( gamma_busy_fields(board, 5) == 22 );
assert( gamma_move(board, 1, 8, 12) == 1 );
assert( gamma_move(board, 1, 7, 8) == 1 );
assert( gamma_move(board, 2, 6, 16) == 1 );
assert( gamma_move(board, 3, 10, 12) == 0 );
assert( gamma_move(board, 4, 18, 4) == 0 );
assert( gamma_free_fields(board, 4) == 298 );
assert( gamma_move(board, 5, 9, 3) == 0 );
assert( gamma_move(board, 1, 3, 8) == 0 );
assert( gamma_move(board, 1, 16, 18) == 1 );
assert( gamma_move(board, 2, 13, 23) == 1 );
assert( gamma_move(board, 3, 15, 7) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 0, 18) == 1 );
assert( gamma_move(board, 1, 20, 6) == 0 );
assert( gamma_move(board, 1, 0, 23) == 1 );
assert( gamma_busy_fields(board, 1) == 27 );
assert( gamma_move(board, 2, 22, 12) == 0 );
assert( gamma_move(board, 2, 2, 14) == 1 );
assert( gamma_move(board, 3, 7, 21) == 1 );
assert( gamma_move(board, 3, 1, 5) == 1 );
assert( gamma_free_fields(board, 3) == 290 );
assert( gamma_move(board, 4, 2, 10) == 1 );
assert( gamma_move(board, 4, 16, 6) == 1 );
assert( gamma_free_fields(board, 4) == 288 );


char* board319631020 = gamma_board(board);
assert( board319631020 != NULL );
assert( strcmp(board319631020, 
"1.4.........32...\n"
".4..523..1.4.....\n"
".3...3.3.....4...\n"
".........4...4.14\n"
"...5.....4.....4.\n"
"531.......5...4.1\n"
"..5.............2\n"
"....5.2..2.12524.\n"
"..122...3.....3..\n"
"..2..4.55.3...4..\n"
"....3..4..2.25.1.\n"
"......3.1.24..11.\n"
".................\n"
"..4.....31.....23\n"
".......5....3222.\n"
"5..22.31......1.4\n"
".5.1..5..5....53.\n"
"....5.4.2....1..4\n"
"43..13....52.....\n"
"1......5....2.4..\n"
"..5..1...31...2..\n"
".....5.111....1.1\n"
".32.2......1155..\n"
"..4...3..3...3...\n") == 0);
free(board319631020);
board319631020 = NULL;
assert( gamma_move(board, 5, 10, 3) == 0 );
assert( gamma_move(board, 1, 15, 0) == 1 );
assert( gamma_move(board, 1, 15, 10) == 0 );
assert( gamma_busy_fields(board, 1) == 28 );
assert( gamma_move(board, 2, 1, 18) == 0 );
assert( gamma_move(board, 2, 2, 23) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 7, 5) == 1 );
assert( gamma_move(board, 3, 8, 9) == 1 );
assert( gamma_move(board, 4, 16, 7) == 1 );
assert( gamma_free_fields(board, 4) == 284 );
assert( gamma_move(board, 5, 13, 0) == 0 );
assert( gamma_move(board, 1, 9, 9) == 1 );
assert( gamma_move(board, 2, 3, 14) == 1 );
assert( gamma_move(board, 3, 9, 12) == 1 );
assert( gamma_move(board, 3, 8, 20) == 1 );
assert( gamma_move(board, 4, 9, 4) == 1 );
assert( gamma_move(board, 5, 13, 14) == 1 );
assert( gamma_move(board, 5, 0, 18) == 0 );
assert( gamma_busy_fields(board, 5) == 24 );
assert( gamma_move(board, 1, 11, 11) == 1 );
assert( gamma_move(board, 2, 20, 11) == 0 );
assert( gamma_move(board, 2, 11, 8) == 1 );
assert( gamma_move(board, 5, 2, 3) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 1, 20, 12) == 0 );
assert( gamma_move(board, 1, 7, 19) == 1 );
assert( gamma_busy_fields(board, 1) == 31 );
assert( gamma_move(board, 2, 0, 6) == 1 );
assert( gamma_move(board, 2, 4, 5) == 0 );
assert( gamma_free_fields(board, 2) == 274 );
assert( gamma_move(board, 1, 2, 12) == 1 );


char* board303180341 = gamma_board(board);
assert( board303180341 != NULL );
assert( strcmp(board303180341, 
"1.4.........32...\n"
".4..523..1.4.....\n"
".3...3.3.....4...\n"
"........34...4.14\n"
"...5...1.4.....4.\n"
"531.......5...4.1\n"
"..5.............2\n"
"....5.2..2.12524.\n"
"..122...3.....3..\n"
"..22.4.55.3..54..\n"
"....3..4..2.25.1.\n"
"..1...3.1324..11.\n"
"...........1.....\n"
"..4.....31.....23\n"
".......531..3222.\n"
"5..22.31...2..1.4\n"
".5.1..5..5....534\n"
"2...5.4.2....1..4\n"
"43..13.3..52.....\n"
"1......5.4..2.4..\n"
"..5..1...31...2..\n"
".....5.111....1.1\n"
".32.2......1155..\n"
"..4...3..3...3.1.\n") == 0);
free(board303180341);
board303180341 = NULL;
assert( gamma_move(board, 2, 7, 12) == 1 );
assert( gamma_move(board, 3, 13, 1) == 0 );
assert( gamma_move(board, 3, 6, 15) == 1 );
assert( gamma_free_fields(board, 3) == 271 );
assert( gamma_move(board, 4, 11, 21) == 1 );
assert( gamma_move(board, 5, 4, 15) == 0 );


char* board414341647 = gamma_board(board);
assert( board414341647 != NULL );
assert( strcmp(board414341647, 
"1.4.........32...\n"
".4..523..1.4.....\n"
".3...3.3...4.4...\n"
"........34...4.14\n"
"...5...1.4.....4.\n"
"531.......5...4.1\n"
"..5.............2\n"
"....5.2..2.12524.\n"
"..122.3.3.....3..\n"
"..22.4.55.3..54..\n"
"....3..4..2.25.1.\n"
"..1...321324..11.\n"
"...........1.....\n"
"..4.....31.....23\n"
".......531..3222.\n"
"5..22.31...2..1.4\n"
".5.1..5..5....534\n"
"2...5.4.2....1..4\n"
"43..13.3..52.....\n"
"1......5.4..2.4..\n"
"..5..1...31...2..\n"
".....5.111....1.1\n"
".32.2......1155..\n"
"..4...3..3...3.1.\n") == 0);
free(board414341647);
board414341647 = NULL;
assert( gamma_move(board, 1, 15, 1) == 1 );
assert( gamma_move(board, 1, 14, 23) == 1 );
assert( gamma_move(board, 2, 2, 10) == 0 );
assert( gamma_move(board, 3, 14, 16) == 0 );
assert( gamma_move(board, 4, 8, 6) == 0 );
assert( gamma_move(board, 5, 12, 8) == 1 );
assert( gamma_move(board, 1, 11, 8) == 0 );
assert( gamma_move(board, 2, 6, 23) == 1 );
assert( gamma_move(board, 3, 12, 18) == 1 );
assert( gamma_move(board, 4, 13, 16) == 0 );
assert( gamma_move(board, 5, 0, 5) == 0 );
assert( gamma_move(board, 5, 15, 2) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 1, 14, 1) == 0 );
assert( gamma_free_fields(board, 1) == 264 );
assert( gamma_move(board, 2, 10, 1) == 1 );
assert( gamma_move(board, 2, 5, 5) == 0 );
assert( gamma_move(board, 3, 14, 0) == 1 );
assert( gamma_move(board, 3, 15, 2) == 0 );
assert( gamma_move(board, 4, 3, 2) == 1 );
assert( gamma_move(board, 4, 8, 13) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 3, 6) == 1 );
assert( gamma_move(board, 5, 9, 1) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 1, 23, 1) == 0 );
assert( gamma_move(board, 1, 11, 9) == 1 );
assert( gamma_move(board, 2, 2, 1) == 0 );
assert( gamma_move(board, 2, 16, 16) == 1 );
assert( gamma_move(board, 4, 11, 16) == 0 );
assert( gamma_move(board, 4, 14, 1) == 0 );
assert( gamma_busy_fields(board, 4) == 27 );
assert( gamma_move(board, 5, 17, 1) == 0 );
assert( gamma_move(board, 1, 10, 11) == 1 );
assert( gamma_move(board, 1, 10, 1) == 0 );
assert( gamma_move(board, 2, 13, 0) == 0 );
assert( gamma_move(board, 3, 8, 1) == 1 );


char* board123981991 = gamma_board(board);
assert( board123981991 != NULL );
assert( strcmp(board123981991, 
"1.4...2.....321..\n"
".4..523..1.4.....\n"
".3...3.3...4.4...\n"
"........34...4.14\n"
"...5...1.4.....4.\n"
"531.......5.3.4.1\n"
"..5.............2\n"
"....5.2..2.125242\n"
"..122.3.3.....3..\n"
"..22.4.55.3..54..\n"
"....3..44.2.25.1.\n"
"..1...321324..11.\n"
"..........11.....\n"
"..4.....31.....23\n"
".......531.13222.\n"
"5..22.31...25.1.4\n"
".5.1..5..5....534\n"
"2..55.4.2....1..4\n"
"43..13.3..52.....\n"
"1......5.4..2.4..\n"
"..5..1...31...2..\n"
"...4.5.111....151\n"
".32.2...35211551.\n"
"..4...3..3...331.\n") == 0);
free(board123981991);
board123981991 = NULL;
assert( gamma_move(board, 4, 9, 7) == 0 );
assert( gamma_move(board, 4, 11, 5) == 0 );
assert( gamma_free_fields(board, 4) == 254 );
assert( gamma_move(board, 5, 13, 3) == 1 );
assert( gamma_move(board, 5, 15, 6) == 1 );
assert( gamma_free_fields(board, 5) == 252 );
assert( gamma_move(board, 1, 19, 2) == 0 );
assert( gamma_busy_fields(board, 3) == 31 );
assert( gamma_move(board, 4, 8, 22) == 1 );
assert( gamma_move(board, 4, 1, 1) == 0 );
assert( gamma_move(board, 5, 8, 11) == 1 );
assert( gamma_free_fields(board, 5) == 250 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 1, 1, 2) == 1 );
assert( gamma_move(board, 1, 2, 3) == 0 );
assert( gamma_busy_fields(board, 1) == 37 );
assert( gamma_move(board, 2, 0, 0) == 1 );
assert( gamma_move(board, 2, 12, 16) == 0 );
assert( gamma_move(board, 3, 1, 5) == 0 );
assert( gamma_move(board, 4, 21, 8) == 0 );
assert( gamma_move(board, 4, 12, 2) == 1 );
assert( gamma_busy_fields(board, 4) == 29 );
assert( gamma_move(board, 5, 17, 7) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_golden_move(board, 5, 10, 2) == 0 );
assert( gamma_move(board, 1, 19, 2) == 0 );
assert( gamma_move(board, 2, 15, 2) == 0 );
assert( gamma_move(board, 3, 6, 7) == 0 );
assert( gamma_free_fields(board, 3) == 247 );
assert( gamma_move(board, 4, 3, 5) == 1 );
assert( gamma_move(board, 5, 20, 12) == 0 );
assert( gamma_move(board, 1, 7, 4) == 0 );
assert( gamma_move(board, 2, 8, 2) == 0 );
assert( gamma_move(board, 2, 13, 11) == 1 );
assert( gamma_move(board, 3, 0, 13) == 1 );
assert( gamma_free_fields(board, 3) == 244 );
assert( gamma_move(board, 4, 4, 4) == 1 );
assert( gamma_move(board, 4, 9, 6) == 1 );
assert( gamma_move(board, 5, 0, 12) == 1 );
assert( gamma_move(board, 1, 1, 8) == 1 );
assert( gamma_move(board, 2, 20, 3) == 0 );
assert( gamma_move(board, 2, 1, 14) == 1 );
assert( gamma_move(board, 3, 4, 3) == 1 );
assert( gamma_move(board, 4, 3, 10) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 8, 9) == 0 );
assert( gamma_move(board, 1, 18, 5) == 0 );
assert( gamma_move(board, 2, 10, 4) == 1 );
assert( gamma_move(board, 4, 0, 2) == 1 );
assert( gamma_move(board, 4, 11, 14) == 1 );
assert( gamma_free_fields(board, 4) == 234 );
assert( gamma_move(board, 5, 6, 1) == 1 );
assert( gamma_move(board, 1, 17, 0) == 0 );
assert( gamma_move(board, 1, 3, 12) == 1 );
assert( gamma_move(board, 2, 13, 5) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 4, 15) == 0 );


char* board603218842 = gamma_board(board);
assert( board603218842 != NULL );
assert( strcmp(board603218842, 
"1.4...2.....321..\n"
".4..523.41.4.....\n"
".3...3.3...4.4...\n"
"........34...4.14\n"
"...5...1.4.....4.\n"
"531.......5.3.4.1\n"
"..5.............2\n"
"....5.2..2.125242\n"
"..122.3.3.....3..\n"
".222.4.55.34.54..\n"
"3...3..44.2.25.1.\n"
"5.11..321324..11.\n"
"........5.11.2...\n"
"..44....31.....23\n"
".......531.13222.\n"
"51.22.31...25.1.4\n"
".5.1..5..5....534\n"
"2..55.4.24...1.54\n"
"43.413.3..52.2...\n"
"1...4..5.42.2.4..\n"
"..5.31...31..52..\n"
"41.4.5.111..4.151\n"
".32.2.5.35211551.\n"
"2.4...3..3...331.\n") == 0);
free(board603218842);
board603218842 = NULL;
assert( gamma_move(board, 4, 11, 16) == 0 );
assert( gamma_move(board, 4, 2, 14) == 0 );
assert( gamma_move(board, 5, 0, 5) == 0 );
assert( gamma_move(board, 5, 8, 9) == 0 );
assert( gamma_move(board, 1, 3, 12) == 0 );
assert( gamma_move(board, 1, 3, 14) == 0 );
assert( gamma_move(board, 2, 15, 15) == 1 );
assert( gamma_move(board, 2, 0, 6) == 0 );
assert( gamma_busy_fields(board, 2) == 38 );
assert( gamma_free_fields(board, 2) == 230 );
assert( gamma_move(board, 3, 10, 13) == 0 );
assert( gamma_move(board, 3, 13, 11) == 0 );
assert( gamma_free_fields(board, 4) == 230 );
assert( gamma_move(board, 5, 2, 10) == 0 );
assert( gamma_move(board, 1, 7, 3) == 1 );
assert( gamma_move(board, 1, 12, 12) == 1 );
assert( gamma_golden_move(board, 1, 1, 13) == 0 );
assert( gamma_move(board, 2, 21, 16) == 0 );
assert( gamma_move(board, 2, 6, 19) == 1 );
assert( gamma_move(board, 3, 12, 16) == 0 );
assert( gamma_move(board, 3, 16, 16) == 0 );
assert( gamma_busy_fields(board, 4) == 35 );
assert( gamma_move(board, 5, 14, 12) == 0 );
assert( gamma_move(board, 1, 0, 9) == 1 );
assert( gamma_move(board, 1, 14, 21) == 1 );
assert( gamma_move(board, 2, 4, 11) == 1 );
assert( gamma_move(board, 2, 6, 7) == 0 );
assert( gamma_move(board, 4, 17, 12) == 0 );
assert( gamma_move(board, 4, 1, 17) == 1 );
assert( gamma_move(board, 5, 9, 1) == 0 );
assert( gamma_move(board, 5, 2, 7) == 1 );
assert( gamma_move(board, 1, 2, 14) == 0 );
assert( gamma_move(board, 1, 16, 14) == 1 );
assert( gamma_busy_fields(board, 1) == 44 );
assert( gamma_move(board, 2, 2, 11) == 1 );
assert( gamma_move(board, 2, 13, 4) == 1 );
assert( gamma_free_fields(board, 2) == 219 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 16, 1) == 1 );
assert( gamma_move(board, 4, 11, 12) == 0 );
assert( gamma_busy_fields(board, 4) == 36 );
assert( gamma_move(board, 5, 15, 4) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 1, 10, 13) == 0 );
assert( gamma_move(board, 1, 1, 15) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 7, 0) == 1 );
assert( gamma_move(board, 2, 15, 20) == 0 );
assert( gamma_move(board, 3, 3, 10) == 0 );
assert( gamma_move(board, 4, 13, 11) == 0 );
assert( gamma_move(board, 5, 14, 4) == 0 );
assert( gamma_move(board, 1, 18, 5) == 0 );
assert( gamma_move(board, 1, 7, 12) == 0 );
assert( gamma_move(board, 2, 3, 12) == 0 );
assert( gamma_move(board, 2, 11, 22) == 0 );
assert( gamma_move(board, 3, 20, 10) == 0 );
assert( gamma_move(board, 3, 12, 20) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 15, 9) == 0 );
assert( gamma_free_fields(board, 4) == 214 );
assert( gamma_move(board, 5, 14, 9) == 0 );
assert( gamma_move(board, 5, 16, 11) == 1 );
assert( gamma_busy_fields(board, 5) == 36 );
assert( gamma_move(board, 1, 3, 8) == 0 );
assert( gamma_move(board, 1, 11, 15) == 1 );
assert( gamma_move(board, 2, 1, 19) == 1 );
assert( gamma_move(board, 2, 16, 0) == 1 );
assert( gamma_move(board, 3, 2, 11) == 0 );
assert( gamma_move(board, 4, 19, 2) == 0 );
assert( gamma_move(board, 4, 16, 13) == 1 );
assert( gamma_move(board, 5, 15, 7) == 0 );
assert( gamma_move(board, 5, 1, 18) == 0 );
assert( gamma_move(board, 1, 2, 2) == 1 );
assert( gamma_move(board, 1, 3, 18) == 1 );
assert( gamma_move(board, 2, 1, 5) == 0 );
assert( gamma_move(board, 2, 9, 7) == 0 );
assert( gamma_move(board, 3, 11, 15) == 0 );
assert( gamma_move(board, 4, 19, 12) == 0 );


char* board599858367 = gamma_board(board);
assert( board599858367 != NULL );
assert( strcmp(board599858367, 
"1.4...2.....321..\n"
".4..523.41.4.....\n"
".3...3.3...4.41..\n"
"........34..34.14\n"
".2.5..21.4.....4.\n"
"5311......5.3.4.1\n"
".45.............2\n"
"....5.2..2.125242\n"
".1122.3.3..1..32.\n"
".222.4.55.34.54.1\n"
"3...3..44.2.25.14\n"
"5.11..3213241.11.\n"
"..2.2...5.11.2..5\n"
"..44....31.....23\n"
"1......531.13222.\n"
"51.22.31...25.1.4\n"
".551..5..5....534\n"
"2..55.4.24...1.54\n"
"43.413.3..52.2...\n"
"1...4..5.42.2245.\n"
"..5.31.1.31..52..\n"
"4114.5.111..4.151\n"
".32.2.5.352115513\n"
"2.4...32.3...3312\n") == 0);
free(board599858367);
board599858367 = NULL;
assert( gamma_move(board, 1, 9, 1) == 0 );
assert( gamma_move(board, 2, 10, 12) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 0, 12) == 0 );
assert( gamma_move(board, 4, 4, 12) == 1 );
assert( gamma_free_fields(board, 4) == 206 );
assert( gamma_move(board, 5, 6, 6) == 0 );
assert( gamma_free_fields(board, 5) == 206 );
assert( gamma_move(board, 1, 16, 8) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 7, 7) == 1 );
assert( gamma_move(board, 3, 21, 3) == 0 );
assert( gamma_free_fields(board, 3) == 205 );
assert( gamma_move(board, 4, 9, 23) == 1 );
assert( gamma_free_fields(board, 1) == 204 );
assert( gamma_move(board, 2, 0, 8) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 21, 10) == 0 );
assert( gamma_move(board, 3, 4, 19) == 1 );
assert( gamma_move(board, 4, 16, 2) == 0 );
assert( gamma_move(board, 5, 10, 19) == 1 );
assert( gamma_move(board, 5, 6, 13) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 1, 11, 3) == 1 );
assert( gamma_move(board, 1, 4, 8) == 0 );
assert( gamma_move(board, 2, 14, 19) == 1 );
assert( gamma_move(board, 2, 11, 19) == 1 );
assert( gamma_free_fields(board, 2) == 198 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 4, 6) == 0 );
assert( gamma_golden_move(board, 3, 6, 8) == 0 );
assert( gamma_move(board, 4, 6, 12) == 0 );
assert( gamma_move(board, 4, 6, 10) == 1 );
assert( gamma_move(board, 5, 14, 9) == 0 );
assert( gamma_move(board, 5, 16, 11) == 0 );
assert( gamma_move(board, 1, 16, 3) == 1 );
assert( gamma_move(board, 2, 11, 6) == 1 );
assert( gamma_move(board, 2, 12, 3) == 1 );
assert( gamma_move(board, 3, 5, 15) == 1 );
assert( gamma_move(board, 4, 1, 0) == 1 );
assert( gamma_move(board, 4, 10, 23) == 1 );


char* board314686835 = gamma_board(board);
assert( board314686835 != NULL );
assert( strcmp(board314686835, 
"1.4...2..44.321..\n"
".4..523.41.4.....\n"
".3...3.3...4.41..\n"
"........34..34.14\n"
".2.53.21.452..24.\n"
"5311......5.3.4.1\n"
".45.............2\n"
"....5.2..2.125242\n"
".112233.3..1..32.\n"
".222.4.55.34.54.1\n"
"3...3.544.2.25.14\n"
"5.114.3213241.11.\n"
"..2.2...5.11.2..5\n"
"..44..4.31.....23\n"
"1......531.13222.\n"
"51.22.31...25.1.4\n"
".551..52.5....534\n"
"2..55.4.24.2.1.54\n"
"43.413.3..52.2...\n"
"1...4..5.42.2245.\n"
"..5.31.1.311252.1\n"
"4114.5.111..4.151\n"
".32.2.5.352115513\n"
"244...32.3...3312\n") == 0);
free(board314686835);
board314686835 = NULL;
assert( gamma_move(board, 5, 5, 9) == 1 );
assert( gamma_move(board, 5, 5, 11) == 1 );
assert( gamma_move(board, 1, 9, 4) == 0 );
assert( gamma_move(board, 1, 1, 11) == 1 );
assert( gamma_move(board, 2, 14, 12) == 0 );
assert( gamma_move(board, 2, 7, 7) == 0 );
assert( gamma_free_fields(board, 2) == 188 );
assert( gamma_move(board, 3, 6, 12) == 0 );
assert( gamma_move(board, 4, 6, 14) == 1 );
assert( gamma_move(board, 5, 22, 12) == 0 );
assert( gamma_move(board, 5, 7, 22) == 1 );
assert( gamma_golden_move(board, 5, 15, 11) == 0 );
assert( gamma_move(board, 1, 16, 10) == 0 );
assert( gamma_move(board, 1, 1, 4) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 3, 21, 8) == 0 );
assert( gamma_move(board, 4, 11, 4) == 1 );
assert( gamma_move(board, 4, 1, 6) == 1 );
assert( gamma_move(board, 5, 3, 2) == 0 );


char* board770708283 = gamma_board(board);
assert( board770708283 != NULL );
assert( strcmp(board770708283, 
"1.4...2..44.321..\n"
".4..523541.4.....\n"
".3...3.3...4.41..\n"
"........34..34.14\n"
".2.53.21.452..24.\n"
"5311......5.3.4.1\n"
".45.............2\n"
"....5.2..2.125242\n"
".112233.3..1..32.\n"
".222.4455.34.54.1\n"
"3...3.544.2.25.14\n"
"5.114.3213241.11.\n"
".12.25..5.11.2..5\n"
"..44..4.31.....23\n"
"1....5.531.13222.\n"
"51.22.31...25.1.4\n"
".551..52.5....534\n"
"24.55.4.24.2.1.54\n"
"43.413.3..52.2...\n"
"11..4..5.4242245.\n"
"..5.31.1.311252.1\n"
"4114.5.111..4.151\n"
".32.2.5.352115513\n"
"244...32.3...3312\n") == 0);
free(board770708283);
board770708283 = NULL;
assert( gamma_move(board, 1, 13, 1) == 0 );
assert( gamma_move(board, 1, 4, 16) == 0 );
assert( gamma_move(board, 3, 7, 21) == 0 );
assert( gamma_move(board, 4, 12, 23) == 0 );
assert( gamma_move(board, 4, 15, 2) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 14, 1) == 0 );
assert( gamma_move(board, 1, 5, 6) == 1 );
assert( gamma_move(board, 1, 8, 6) == 0 );
assert( gamma_move(board, 2, 0, 3) == 1 );
assert( gamma_move(board, 2, 0, 3) == 0 );
assert( gamma_move(board, 3, 16, 7) == 0 );
assert( gamma_move(board, 3, 4, 19) == 0 );
assert( gamma_move(board, 4, 23, 15) == 0 );
assert( gamma_move(board, 5, 8, 19) == 1 );
assert( gamma_move(board, 5, 3, 20) == 1 );
assert( gamma_move(board, 1, 16, 19) == 1 );
assert( gamma_move(board, 2, 14, 2) == 0 );
assert( gamma_move(board, 2, 16, 23) == 0 );
assert( gamma_move(board, 3, 6, 10) == 0 );
assert( gamma_free_fields(board, 3) == 178 );
assert( gamma_move(board, 4, 1, 23) == 1 );
assert( gamma_move(board, 4, 2, 15) == 0 );
assert( gamma_move(board, 5, 19, 5) == 0 );
assert( gamma_move(board, 5, 1, 5) == 0 );
assert( gamma_busy_fields(board, 5) == 43 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 1, 14, 0) == 0 );
assert( gamma_move(board, 2, 15, 9) == 0 );
assert( gamma_move(board, 2, 5, 0) == 0 );
assert( gamma_free_fields(board, 2) == 74 );
assert( gamma_move(board, 3, 17, 11) == 0 );
assert( gamma_free_fields(board, 3) == 177 );
assert( gamma_move(board, 4, 0, 16) == 1 );
assert( gamma_move(board, 4, 4, 10) == 1 );
assert( gamma_move(board, 5, 2, 10) == 0 );
assert( gamma_busy_fields(board, 5) == 43 );
assert( gamma_move(board, 1, 15, 8) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 7, 5) == 0 );
assert( gamma_move(board, 3, 16, 23) == 1 );
assert( gamma_move(board, 4, 3, 8) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 4, 12) == 0 );
assert( gamma_move(board, 1, 23, 15) == 0 );
assert( gamma_move(board, 1, 13, 11) == 0 );
assert( gamma_busy_fields(board, 1) == 55 );
assert( gamma_move(board, 2, 2, 11) == 0 );
assert( gamma_move(board, 3, 16, 15) == 1 );
assert( gamma_move(board, 3, 15, 6) == 0 );
assert( gamma_move(board, 4, 12, 16) == 0 );
assert( gamma_move(board, 5, 0, 11) == 1 );
assert( gamma_move(board, 1, 15, 12) == 0 );


char* board207223656 = gamma_board(board);
assert( board207223656 != NULL );
assert( strcmp(board207223656, 
"144...2..44.321.3\n"
".4..523541.4.....\n"
".3...3.3...4.41..\n"
"...5....34..34.14\n"
".2.53.215452..241\n"
"5311......5.3.4.1\n"
".45.............2\n"
"4...5.2..2.125242\n"
".112233.3..1..323\n"
".222.4455.34.54.1\n"
"3...3.544.2.25.14\n"
"5.114.3213241.11.\n"
"512.25..5.11.2..5\n"
"..444.4.31.....23\n"
"1....5.531.13222.\n"
"51.22.31...25.114\n"
".551..52.5....534\n"
"24.5514.24.2.1.54\n"
"43.413.3..52.2...\n"
"11..4..5.4242245.\n"
"2.5.31.1.311252.1\n"
"4114.5.111..4.151\n"
".32.2.5.352115513\n"
"244...32.3...3312\n") == 0);
free(board207223656);
board207223656 = NULL;
assert( gamma_move(board, 2, 11, 7) == 1 );
assert( gamma_move(board, 2, 8, 11) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 4, 5, 9) == 0 );
assert( gamma_free_fields(board, 4) == 170 );
assert( gamma_golden_possible(board, 4) == 1 );


char* board862714567 = gamma_board(board);
assert( board862714567 != NULL );
assert( strcmp(board862714567, 
"144...2..44.321.3\n"
".4..523541.4.....\n"
".3...3.3...4.41..\n"
"...5....34..34.14\n"
".2.53.215452..241\n"
"5311......5.3.4.1\n"
".45.............2\n"
"4...5.2..2.125242\n"
".112233.3..1..323\n"
".222.4455.34.54.1\n"
"3...3.544.2.25.14\n"
"5.114.3213241.11.\n"
"512.25..5.11.2..5\n"
"..444.4.31.....23\n"
"1....5.531.13222.\n"
"51.22.31...25.114\n"
".551..52.5.2..534\n"
"24.5514.24.2.1.54\n"
"43.413.3..52.2...\n"
"11..4..5.4242245.\n"
"2.5.31.1.311252.1\n"
"4114.5.111..4.151\n"
".32.2.5.352115513\n"
"244...32.3...3312\n") == 0);
free(board862714567);
board862714567 = NULL;
assert( gamma_move(board, 5, 16, 23) == 0 );
assert( gamma_golden_move(board, 5, 13, 0) == 1 );
assert( gamma_move(board, 1, 8, 13) == 0 );
assert( gamma_move(board, 1, 1, 20) == 1 );
assert( gamma_move(board, 2, 4, 5) == 0 );
assert( gamma_move(board, 3, 23, 3) == 0 );
assert( gamma_move(board, 3, 16, 22) == 1 );
assert( gamma_move(board, 4, 18, 6) == 0 );
assert( gamma_move(board, 5, 4, 2) == 1 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 1, 9, 10) == 0 );


char* board862185808 = gamma_board(board);
assert( board862185808 != NULL );
assert( strcmp(board862185808, 
"144...2..44.321.3\n"
".4..523541.4....3\n"
".3...3.3...4.41..\n"
".1.5....34..34.14\n"
".2.53.215452..241\n"
"5311......5.3.4.1\n"
".45.............2\n"
"4...5.2..2.125242\n"
".112233.3..1..323\n"
".222.4455.34.54.1\n"
"3...3.544.2.25.14\n"
"5.114.3213241.11.\n"
"512.25..5.11.2..5\n"
"..444.4.31.....23\n"
"1....5.531.13222.\n"
"51.22.31...25.114\n"
".551..52.5.2..534\n"
"24.5514.24.2.1.54\n"
"43.413.3..52.2...\n"
"11..4..5.4242245.\n"
"2.5.31.1.311252.1\n"
"411455.111..4.151\n"
".32.2.5.352115513\n"
"244...32.3...5312\n") == 0);
free(board862185808);
board862185808 = NULL;
assert( gamma_move(board, 2, 9, 1) == 0 );
assert( gamma_golden_move(board, 2, 22, 6) == 0 );
assert( gamma_move(board, 3, 18, 11) == 0 );
assert( gamma_move(board, 3, 8, 11) == 0 );
assert( gamma_busy_fields(board, 3) == 39 );
assert( gamma_move(board, 4, 4, 8) == 0 );
assert( gamma_move(board, 4, 5, 19) == 1 );
assert( gamma_move(board, 5, 21, 9) == 0 );
assert( gamma_move(board, 5, 12, 1) == 0 );
assert( gamma_move(board, 1, 16, 7) == 0 );
assert( gamma_move(board, 2, 9, 16) == 0 );
assert( gamma_move(board, 2, 16, 2) == 0 );
assert( gamma_move(board, 3, 8, 23) == 1 );
assert( gamma_move(board, 3, 2, 23) == 0 );
assert( gamma_busy_fields(board, 3) == 40 );
assert( gamma_move(board, 4, 8, 9) == 0 );
assert( gamma_move(board, 1, 16, 9) == 0 );
assert( gamma_move(board, 2, 7, 12) == 0 );
assert( gamma_move(board, 3, 4, 20) == 1 );
assert( gamma_free_fields(board, 3) == 54 );
assert( gamma_move(board, 4, 22, 15) == 0 );
assert( gamma_busy_fields(board, 4) == 49 );
assert( gamma_free_fields(board, 4) == 164 );
assert( gamma_move(board, 5, 20, 5) == 0 );
assert( gamma_golden_move(board, 5, 5, 11) == 0 );
assert( gamma_move(board, 1, 5, 9) == 0 );
assert( gamma_move(board, 2, 11, 12) == 0 );
assert( gamma_move(board, 2, 13, 5) == 0 );
assert( gamma_busy_fields(board, 2) == 52 );
assert( gamma_move(board, 3, 16, 5) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 7, 13) == 0 );
assert( gamma_move(board, 4, 12, 2) == 0 );
assert( gamma_move(board, 5, 11, 12) == 0 );
assert( gamma_move(board, 5, 12, 0) == 1 );
assert( gamma_move(board, 1, 8, 5) == 0 );
assert( gamma_move(board, 1, 8, 15) == 0 );
assert( gamma_move(board, 2, 15, 9) == 0 );
assert( gamma_move(board, 3, 6, 12) == 0 );
assert( gamma_move(board, 4, 11, 7) == 0 );
assert( gamma_move(board, 4, 9, 2) == 0 );
assert( gamma_move(board, 5, 16, 22) == 0 );
assert( gamma_move(board, 1, 22, 10) == 0 );
assert( gamma_move(board, 2, 14, 4) == 0 );
assert( gamma_free_fields(board, 2) == 163 );
assert( gamma_move(board, 3, 11, 6) == 0 );
assert( gamma_move(board, 3, 11, 3) == 0 );
assert( gamma_move(board, 4, 9, 20) == 0 );
assert( gamma_move(board, 5, 10, 18) == 0 );
assert( gamma_move(board, 1, 8, 10) == 0 );
assert( gamma_busy_fields(board, 1) == 56 );
assert( gamma_move(board, 2, 11, 3) == 0 );
assert( gamma_move(board, 2, 3, 15) == 0 );
assert( gamma_golden_move(board, 2, 18, 10) == 0 );
assert( gamma_move(board, 3, 17, 0) == 0 );
assert( gamma_free_fields(board, 4) == 163 );
assert( gamma_golden_move(board, 4, 10, 16) == 0 );
assert( gamma_move(board, 5, 2, 19) == 1 );
assert( gamma_move(board, 1, 20, 5) == 0 );
assert( gamma_move(board, 1, 6, 22) == 0 );
assert( gamma_move(board, 2, 5, 12) == 1 );
assert( gamma_move(board, 3, 3, 15) == 0 );
assert( gamma_move(board, 4, 0, 12) == 0 );
assert( gamma_move(board, 1, 20, 14) == 0 );
assert( gamma_move(board, 1, 1, 3) == 1 );
assert( gamma_move(board, 2, 13, 12) == 1 );
assert( gamma_move(board, 3, 13, 1) == 0 );
assert( gamma_move(board, 4, 22, 12) == 0 );
assert( gamma_move(board, 4, 8, 18) == 1 );
assert( gamma_free_fields(board, 4) == 63 );
assert( gamma_move(board, 5, 20, 2) == 0 );
assert( gamma_move(board, 5, 7, 18) == 1 );
assert( gamma_move(board, 1, 9, 22) == 0 );


char* board648051167 = gamma_board(board);
assert( board648051167 != NULL );
assert( strcmp(board648051167, 
"144...2.344.321.3\n"
".4..523541.4....3\n"
".3...3.3...4.41..\n"
".1.53...34..34.14\n"
".25534215452..241\n"
"5311...54.5.3.4.1\n"
".45.............2\n"
"4...5.2..2.125242\n"
".112233.3..1..323\n"
".222.4455.34.54.1\n"
"3...3.544.2.25.14\n"
"5.11423213241211.\n"
"512.25..5.11.2..5\n"
"..444.4.31.....23\n"
"1....5.531.13222.\n"
"51.22.31...25.114\n"
".551..52.5.2..534\n"
"24.5514.24.2.1.54\n"
"43.413.3..52.2...\n"
"11..4..5.4242245.\n"
"215.31.1.311252.1\n"
"411455.111..4.151\n"
".32.2.5.352115513\n"
"244...32.3..55312\n") == 0);
free(board648051167);
board648051167 = NULL;
assert( gamma_move(board, 2, 16, 5) == 0 );
assert( gamma_move(board, 2, 12, 9) == 0 );
assert( gamma_move(board, 3, 17, 14) == 0 );
assert( gamma_move(board, 3, 7, 4) == 0 );
assert( gamma_move(board, 4, 23, 4) == 0 );
assert( gamma_move(board, 4, 9, 11) == 0 );
assert( gamma_move(board, 5, 0, 5) == 0 );
assert( gamma_move(board, 2, 9, 4) == 0 );
assert( gamma_move(board, 3, 2, 21) == 1 );
assert( gamma_move(board, 4, 9, 15) == 0 );
assert( gamma_move(board, 5, 15, 20) == 0 );
assert( gamma_move(board, 1, 22, 14) == 0 );
assert( gamma_move(board, 2, 17, 7) == 0 );
assert( gamma_move(board, 3, 14, 8) == 0 );
assert( gamma_move(board, 4, 4, 7) == 0 );
assert( gamma_move(board, 5, 9, 4) == 0 );
assert( gamma_busy_fields(board, 5) == 49 );


char* board343915840 = gamma_board(board);
assert( board343915840 != NULL );
assert( strcmp(board343915840, 
"144...2.344.321.3\n"
".4..523541.4....3\n"
".33..3.3...4.41..\n"
".1.53...34..34.14\n"
".25534215452..241\n"
"5311...54.5.3.4.1\n"
".45.............2\n"
"4...5.2..2.125242\n"
".112233.3..1..323\n"
".222.4455.34.54.1\n"
"3...3.544.2.25.14\n"
"5.11423213241211.\n"
"512.25..5.11.2..5\n"
"..444.4.31.....23\n"
"1....5.531.13222.\n"
"51.22.31...25.114\n"
".551..52.5.2..534\n"
"24.5514.24.2.1.54\n"
"43.413.3..52.2...\n"
"11..4..5.4242245.\n"
"215.31.1.311252.1\n"
"411455.111..4.151\n"
".32.2.5.352115513\n"
"244...32.3..55312\n") == 0);
free(board343915840);
board343915840 = NULL;
assert( gamma_move(board, 1, 10, 10) == 1 );
assert( gamma_move(board, 1, 12, 4) == 0 );
assert( gamma_move(board, 2, 14, 0) == 0 );
assert( gamma_move(board, 2, 0, 12) == 0 );
assert( gamma_busy_fields(board, 2) == 54 );
assert( gamma_move(board, 3, 5, 9) == 0 );
assert( gamma_move(board, 3, 1, 16) == 0 );
assert( gamma_move(board, 4, 11, 7) == 0 );
assert( gamma_move(board, 5, 15, 10) == 0 );
assert( gamma_move(board, 1, 15, 5) == 1 );
assert( gamma_move(board, 2, 0, 16) == 0 );
assert( gamma_move(board, 2, 3, 15) == 0 );
assert( gamma_move(board, 3, 18, 11) == 0 );
assert( gamma_move(board, 3, 12, 20) == 0 );
assert( gamma_move(board, 4, 21, 16) == 0 );
assert( gamma_move(board, 4, 0, 15) == 1 );
assert( gamma_free_fields(board, 4) == 62 );
assert( gamma_move(board, 5, 22, 15) == 0 );
assert( gamma_move(board, 5, 10, 1) == 0 );
assert( gamma_busy_fields(board, 5) == 49 );
assert( gamma_move(board, 1, 2, 6) == 1 );
assert( gamma_move(board, 1, 3, 9) == 0 );
assert( gamma_move(board, 2, 17, 6) == 0 );
assert( gamma_move(board, 2, 6, 21) == 0 );
assert( gamma_move(board, 3, 4, 6) == 0 );
assert( gamma_move(board, 3, 14, 1) == 0 );
assert( gamma_busy_fields(board, 3) == 42 );
assert( gamma_move(board, 4, 11, 7) == 0 );
assert( gamma_move(board, 5, 6, 18) == 1 );
assert( gamma_move(board, 1, 16, 5) == 1 );
assert( gamma_move(board, 1, 2, 1) == 0 );
assert( gamma_move(board, 2, 22, 10) == 0 );
assert( gamma_move(board, 2, 10, 23) == 0 );
assert( gamma_move(board, 3, 5, 19) == 0 );
assert( gamma_busy_fields(board, 4) == 51 );
assert( gamma_move(board, 5, 10, 7) == 1 );
assert( gamma_move(board, 5, 3, 15) == 0 );
assert( gamma_move(board, 1, 13, 2) == 1 );
assert( gamma_move(board, 2, 2, 16) == 0 );
assert( gamma_move(board, 2, 1, 7) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 10, 14) == 0 );
assert( gamma_move(board, 5, 23, 5) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 2, 12, 16) == 0 );
assert( gamma_move(board, 2, 8, 12) == 0 );


char* board898571167 = gamma_board(board);
assert( board898571167 != NULL );
assert( strcmp(board898571167, 
"144...2.344.321.3\n"
".4..523541.4....3\n"
".33..3.3...4.41..\n"
".1.53...34..34.14\n"
".25534215452..241\n"
"5311..554.5.3.4.1\n"
".45.............2\n"
"4...5.2..2.125242\n"
"4112233.3..1..323\n"
".222.4455.34.54.1\n"
"3...3.544.2.25.14\n"
"5.11423213241211.\n"
"512.25..5.11.2..5\n"
"..444.4.311....23\n"
"1....5.531.13222.\n"
"51.22.31...25.114\n"
".551..52.552..534\n"
"2415514.24.2.1.54\n"
"43.413.3..52.2.11\n"
"11..4..5.4242245.\n"
"215.31.1.311252.1\n"
"411455.111..41151\n"
".32.2.5.352115513\n"
"244...32.3..55312\n") == 0);
free(board898571167);
board898571167 = NULL;
assert( gamma_move(board, 3, 5, 8) == 1 );
assert( gamma_move(board, 4, 11, 6) == 0 );
assert( gamma_move(board, 4, 13, 10) == 0 );
assert( gamma_free_fields(board, 4) == 59 );
assert( gamma_move(board, 5, 7, 0) == 0 );
assert( gamma_move(board, 5, 2, 14) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_golden_move(board, 5, 1, 15) == 0 );
assert( gamma_move(board, 1, 10, 21) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 3, 18, 5) == 0 );
assert( gamma_move(board, 3, 1, 5) == 0 );
assert( gamma_move(board, 4, 8, 12) == 0 );
assert( gamma_golden_move(board, 4, 1, 2) == 0 );
assert( gamma_move(board, 5, 19, 12) == 0 );
assert( gamma_move(board, 1, 5, 2) == 0 );
assert( gamma_move(board, 2, 13, 21) == 0 );
assert( gamma_move(board, 3, 20, 10) == 0 );
assert( gamma_move(board, 4, 10, 14) == 0 );
assert( gamma_free_fields(board, 4) == 59 );
assert( gamma_move(board, 5, 15, 13) == 0 );
assert( gamma_move(board, 5, 1, 23) == 0 );
assert( gamma_free_fields(board, 5) == 61 );
assert( gamma_move(board, 1, 0, 8) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 4, 6) == 0 );
assert( gamma_move(board, 2, 1, 2) == 0 );
assert( gamma_golden_move(board, 3, 23, 13) == 0 );
assert( gamma_move(board, 4, 15, 23) == 0 );
assert( gamma_move(board, 5, 18, 11) == 0 );
assert( gamma_move(board, 1, 6, 10) == 0 );
assert( gamma_move(board, 2, 10, 23) == 0 );
assert( gamma_move(board, 3, 10, 13) == 0 );
assert( gamma_free_fields(board, 3) == 55 );
assert( gamma_free_fields(board, 4) == 59 );
assert( gamma_move(board, 5, 7, 5) == 0 );
assert( gamma_move(board, 5, 11, 8) == 0 );
assert( gamma_move(board, 1, 14, 23) == 0 );
assert( gamma_move(board, 1, 0, 16) == 0 );
assert( gamma_move(board, 2, 17, 3) == 0 );
assert( gamma_move(board, 3, 3, 9) == 0 );
assert( gamma_move(board, 3, 7, 10) == 1 );
assert( gamma_busy_fields(board, 3) == 44 );
assert( gamma_golden_move(board, 3, 8, 15) == 0 );
assert( gamma_move(board, 4, 2, 10) == 0 );
assert( gamma_move(board, 4, 12, 5) == 0 );
assert( gamma_free_fields(board, 4) == 58 );
assert( gamma_move(board, 5, 10, 5) == 0 );
assert( gamma_move(board, 1, 7, 8) == 0 );
assert( gamma_move(board, 1, 2, 18) == 0 );
assert( gamma_move(board, 2, 7, 16) == 1 );
assert( gamma_move(board, 2, 11, 17) == 0 );
assert( gamma_move(board, 4, 17, 0) == 0 );
assert( gamma_move(board, 4, 13, 3) == 0 );
assert( gamma_move(board, 5, 5, 17) == 0 );
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_move(board, 2, 11, 12) == 0 );
assert( gamma_move(board, 2, 4, 7) == 1 );
assert( gamma_busy_fields(board, 3) == 44 );
assert( gamma_move(board, 4, 20, 2) == 0 );
assert( gamma_move(board, 4, 4, 0) == 0 );
assert( gamma_golden_move(board, 4, 1, 6) == 0 );
assert( gamma_move(board, 5, 15, 9) == 0 );
assert( gamma_move(board, 5, 13, 16) == 0 );
assert( gamma_move(board, 1, 14, 9) == 0 );
assert( gamma_move(board, 1, 2, 17) == 0 );
assert( gamma_move(board, 2, 8, 16) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 23, 3) == 0 );
assert( gamma_move(board, 3, 3, 2) == 0 );
assert( gamma_move(board, 4, 15, 7) == 0 );
assert( gamma_free_fields(board, 4) == 58 );
assert( gamma_move(board, 5, 3, 17) == 1 );
assert( gamma_move(board, 1, 18, 15) == 0 );


char* board580525692 = gamma_board(board);
assert( board580525692 != NULL );
assert( strcmp(board580525692, 
"144...2.344.321.3\n"
".4..523541.4....3\n"
".33..3.3...4.41..\n"
".1.53...34..34.14\n"
".25534215452..241\n"
"5311..554.5.3.4.1\n"
".455............2\n"
"4...5.2222.125242\n"
"4112233.3..1..323\n"
".222.4455.34.54.1\n"
"3...3.544.2.25.14\n"
"5.11423213241211.\n"
"512.25..5.11.2..5\n"
"..444.43311....23\n"
"1....5.531.13222.\n"
"51.22331...25.114\n"
".5512.52.552..534\n"
"2415514.24.2.1.54\n"
"43.413.3..52.2.11\n"
"11..4..5.4242245.\n"
"215.31.1.311252.1\n"
"411455.111..41151\n"
".32.2.5.352115513\n"
"244...32.3..55312\n") == 0);
free(board580525692);
board580525692 = NULL;
assert( gamma_move(board, 2, 10, 8) == 1 );
assert( gamma_move(board, 3, 2, 8) == 0 );
assert( gamma_move(board, 3, 4, 0) == 0 );
assert( gamma_free_fields(board, 3) == 54 );
assert( gamma_move(board, 4, 7, 12) == 0 );
assert( gamma_move(board, 5, 11, 6) == 0 );
assert( gamma_move(board, 5, 6, 10) == 0 );
assert( gamma_move(board, 1, 17, 6) == 0 );
assert( gamma_move(board, 1, 7, 14) == 0 );
assert( gamma_golden_move(board, 1, 23, 14) == 0 );
assert( gamma_move(board, 2, 0, 11) == 0 );
assert( gamma_move(board, 3, 17, 0) == 0 );
assert( gamma_move(board, 3, 4, 19) == 0 );
assert( gamma_busy_fields(board, 3) == 44 );


char* board859860193 = gamma_board(board);
assert( board859860193 != NULL );
assert( strcmp(board859860193, 
"144...2.344.321.3\n"
".4..523541.4....3\n"
".33..3.3...4.41..\n"
".1.53...34..34.14\n"
".25534215452..241\n"
"5311..554.5.3.4.1\n"
".455............2\n"
"4...5.2222.125242\n"
"4112233.3..1..323\n"
".222.4455.34.54.1\n"
"3...3.544.2.25.14\n"
"5.11423213241211.\n"
"512.25..5.11.2..5\n"
"..444.43311....23\n"
"1....5.531.13222.\n"
"51.22331..225.114\n"
".5512.52.552..534\n"
"2415514.24.2.1.54\n"
"43.413.3..52.2.11\n"
"11..4..5.4242245.\n"
"215.31.1.311252.1\n"
"411455.111..41151\n"
".32.2.5.352115513\n"
"244...32.3..55312\n") == 0);
free(board859860193);
board859860193 = NULL;
assert( gamma_move(board, 4, 12, 2) == 0 );
assert( gamma_free_fields(board, 4) == 58 );
assert( gamma_move(board, 5, 1, 19) == 0 );
assert( gamma_move(board, 5, 6, 23) == 0 );
assert( gamma_busy_fields(board, 5) == 52 );
assert( gamma_move(board, 1, 12, 15) == 1 );
assert( gamma_move(board, 1, 13, 21) == 0 );
assert( gamma_move(board, 2, 15, 20) == 0 );
assert( gamma_move(board, 3, 21, 0) == 0 );


char* board583583270 = gamma_board(board);
assert( board583583270 != NULL );
assert( strcmp(board583583270, 
"144...2.344.321.3\n"
".4..523541.4....3\n"
".33..3.3...4.41..\n"
".1.53...34..34.14\n"
".25534215452..241\n"
"5311..554.5.3.4.1\n"
".455............2\n"
"4...5.2222.125242\n"
"4112233.3..11.323\n"
".222.4455.34.54.1\n"
"3...3.544.2.25.14\n"
"5.11423213241211.\n"
"512.25..5.11.2..5\n"
"..444.43311....23\n"
"1....5.531.13222.\n"
"51.22331..225.114\n"
".5512.52.552..534\n"
"2415514.24.2.1.54\n"
"43.413.3..52.2.11\n"
"11..4..5.4242245.\n"
"215.31.1.311252.1\n"
"411455.111..41151\n"
".32.2.5.352115513\n"
"244...32.3..55312\n") == 0);
free(board583583270);
board583583270 = NULL;
assert( gamma_move(board, 4, 23, 15) == 0 );
assert( gamma_move(board, 4, 3, 17) == 0 );
assert( gamma_move(board, 5, 20, 5) == 0 );
assert( gamma_move(board, 1, 20, 6) == 0 );
assert( gamma_move(board, 1, 16, 13) == 0 );
assert( gamma_busy_fields(board, 1) == 63 );
assert( gamma_move(board, 2, 7, 8) == 0 );
assert( gamma_free_fields(board, 2) == 140 );
assert( gamma_move(board, 3, 21, 16) == 0 );
assert( gamma_move(board, 3, 13, 7) == 0 );
assert( gamma_busy_fields(board, 3) == 44 );
assert( gamma_move(board, 4, 17, 9) == 0 );
assert( gamma_move(board, 5, 13, 14) == 0 );
assert( gamma_move(board, 1, 21, 16) == 0 );
assert( gamma_move(board, 1, 16, 2) == 0 );
assert( gamma_free_fields(board, 1) == 56 );
assert( gamma_move(board, 2, 3, 3) == 1 );
assert( gamma_move(board, 2, 16, 16) == 0 );
assert( gamma_move(board, 3, 5, 15) == 0 );
assert( gamma_move(board, 3, 8, 23) == 0 );


char* board288589541 = gamma_board(board);
assert( board288589541 != NULL );
assert( strcmp(board288589541, 
"144...2.344.321.3\n"
".4..523541.4....3\n"
".33..3.3...4.41..\n"
".1.53...34..34.14\n"
".25534215452..241\n"
"5311..554.5.3.4.1\n"
".455............2\n"
"4...5.2222.125242\n"
"4112233.3..11.323\n"
".222.4455.34.54.1\n"
"3...3.544.2.25.14\n"
"5.11423213241211.\n"
"512.25..5.11.2..5\n"
"..444.43311....23\n"
"1....5.531.13222.\n"
"51.22331..225.114\n"
".5512.52.552..534\n"
"2415514.24.2.1.54\n"
"43.413.3..52.2.11\n"
"11..4..5.4242245.\n"
"215231.1.311252.1\n"
"411455.111..41151\n"
".32.2.5.352115513\n"
"244...32.3..55312\n") == 0);
free(board288589541);
board288589541 = NULL;
assert( gamma_move(board, 4, 4, 2) == 0 );
assert( gamma_busy_fields(board, 4) == 51 );


char* board276319457 = gamma_board(board);
assert( board276319457 != NULL );
assert( strcmp(board276319457, 
"144...2.344.321.3\n"
".4..523541.4....3\n"
".33..3.3...4.41..\n"
".1.53...34..34.14\n"
".25534215452..241\n"
"5311..554.5.3.4.1\n"
".455............2\n"
"4...5.2222.125242\n"
"4112233.3..11.323\n"
".222.4455.34.54.1\n"
"3...3.544.2.25.14\n"
"5.11423213241211.\n"
"512.25..5.11.2..5\n"
"..444.43311....23\n"
"1....5.531.13222.\n"
"51.22331..225.114\n"
".5512.52.552..534\n"
"2415514.24.2.1.54\n"
"43.413.3..52.2.11\n"
"11..4..5.4242245.\n"
"215231.1.311252.1\n"
"411455.111..41151\n"
".32.2.5.352115513\n"
"244...32.3..55312\n") == 0);
free(board276319457);
board276319457 = NULL;
assert( gamma_move(board, 5, 2, 11) == 0 );


char* board532506368 = gamma_board(board);
assert( board532506368 != NULL );
assert( strcmp(board532506368, 
"144...2.344.321.3\n"
".4..523541.4....3\n"
".33..3.3...4.41..\n"
".1.53...34..34.14\n"
".25534215452..241\n"
"5311..554.5.3.4.1\n"
".455............2\n"
"4...5.2222.125242\n"
"4112233.3..11.323\n"
".222.4455.34.54.1\n"
"3...3.544.2.25.14\n"
"5.11423213241211.\n"
"512.25..5.11.2..5\n"
"..444.43311....23\n"
"1....5.531.13222.\n"
"51.22331..225.114\n"
".5512.52.552..534\n"
"2415514.24.2.1.54\n"
"43.413.3..52.2.11\n"
"11..4..5.4242245.\n"
"215231.1.311252.1\n"
"411455.111..41151\n"
".32.2.5.352115513\n"
"244...32.3..55312\n") == 0);
free(board532506368);
board532506368 = NULL;
assert( gamma_move(board, 1, 14, 4) == 0 );
assert( gamma_move(board, 2, 17, 6) == 0 );
assert( gamma_golden_move(board, 2, 9, 12) == 1 );
assert( gamma_move(board, 3, 23, 15) == 0 );
assert( gamma_move(board, 4, 6, 16) == 0 );
assert( gamma_move(board, 5, 16, 23) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 1, 7, 20) == 1 );
assert( gamma_move(board, 1, 6, 21) == 0 );
assert( gamma_move(board, 2, 1, 7) == 0 );
assert( gamma_move(board, 3, 14, 14) == 0 );
assert( gamma_move(board, 4, 23, 3) == 0 );
assert( gamma_move(board, 5, 12, 18) == 0 );
assert( gamma_move(board, 5, 8, 11) == 0 );
assert( gamma_move(board, 1, 21, 9) == 0 );
assert( gamma_move(board, 2, 10, 5) == 0 );
assert( gamma_move(board, 3, 5, 14) == 0 );
assert( gamma_move(board, 3, 0, 6) == 0 );
assert( gamma_move(board, 4, 4, 3) == 0 );
assert( gamma_move(board, 4, 7, 11) == 0 );
assert( gamma_move(board, 5, 21, 10) == 0 );
assert( gamma_free_fields(board, 5) == 56 );
assert( gamma_move(board, 1, 1, 0) == 0 );
assert( gamma_move(board, 1, 1, 23) == 0 );
assert( gamma_busy_fields(board, 1) == 64 );
assert( gamma_move(board, 2, 21, 4) == 0 );
assert( gamma_move(board, 2, 9, 11) == 1 );
assert( gamma_move(board, 3, 5, 2) == 0 );
assert( gamma_move(board, 3, 2, 12) == 0 );
assert( gamma_move(board, 4, 22, 13) == 0 );
assert( gamma_move(board, 4, 12, 8) == 0 );
assert( gamma_move(board, 5, 1, 7) == 0 );
assert( gamma_move(board, 5, 5, 13) == 1 );
assert( gamma_move(board, 1, 14, 0) == 0 );
assert( gamma_move(board, 2, 14, 4) == 0 );
assert( gamma_move(board, 3, 23, 7) == 0 );
assert( gamma_move(board, 3, 14, 8) == 0 );
assert( gamma_move(board, 5, 13, 3) == 0 );
assert( gamma_move(board, 5, 10, 10) == 0 );


char* board367266342 = gamma_board(board);
assert( board367266342 != NULL );
assert( strcmp(board367266342, 
"144...2.344.321.3\n"
".4..523541.4....3\n"
".33..3.3...4.41..\n"
".1.53..134..34.14\n"
".25534215452..241\n"
"5311..554.5.3.4.1\n"
".455............2\n"
"4...5.2222.125242\n"
"4112233.3..11.323\n"
".222.4455.34.54.1\n"
"3...35544.2.25.14\n"
"5.11423212241211.\n"
"512.25..5211.2..5\n"
"..444.43311....23\n"
"1....5.531.13222.\n"
"51.22331..225.114\n"
".5512.52.552..534\n"
"2415514.24.2.1.54\n"
"43.413.3..52.2.11\n"
"11..4..5.4242245.\n"
"215231.1.311252.1\n"
"411455.111..41151\n"
".32.2.5.352115513\n"
"244...32.3..55312\n") == 0);
free(board367266342);
board367266342 = NULL;
assert( gamma_move(board, 1, 20, 11) == 0 );
assert( gamma_move(board, 1, 8, 5) == 0 );
assert( gamma_move(board, 2, 8, 8) == 0 );
assert( gamma_move(board, 3, 8, 0) == 1 );
assert( gamma_free_fields(board, 3) == 135 );
assert( gamma_move(board, 4, 7, 12) == 0 );
assert( gamma_move(board, 4, 9, 15) == 0 );
assert( gamma_move(board, 1, 17, 4) == 0 );
assert( gamma_move(board, 2, 0, 10) == 0 );
assert( gamma_move(board, 3, 1, 7) == 0 );
assert( gamma_move(board, 3, 14, 9) == 0 );
assert( gamma_move(board, 4, 2, 6) == 0 );
assert( gamma_move(board, 4, 8, 7) == 0 );
assert( gamma_move(board, 5, 11, 14) == 0 );
assert( gamma_move(board, 1, 16, 1) == 0 );
assert( gamma_move(board, 1, 7, 18) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 22, 15) == 0 );
assert( gamma_move(board, 3, 10, 13) == 0 );
assert( gamma_move(board, 4, 12, 16) == 0 );


char* board631384024 = gamma_board(board);
assert( board631384024 != NULL );
assert( strcmp(board631384024, 
"144...2.344.321.3\n"
".4..523541.4....3\n"
".33..3.3...4.41..\n"
".1.53..134..34.14\n"
".25534215452..241\n"
"5311..554.5.3.4.1\n"
".455............2\n"
"4...5.2222.125242\n"
"4112233.3..11.323\n"
".222.4455.34.54.1\n"
"3...35544.2.25.14\n"
"5.11423212241211.\n"
"512.25..5211.2..5\n"
"..444.43311....23\n"
"1....5.531.13222.\n"
"51.22331..225.114\n"
".5512.52.552..534\n"
"2415514.24.2.1.54\n"
"43.413.3..52.2.11\n"
"11..4..5.4242245.\n"
"215231.1.311252.1\n"
"411455.111..41151\n"
".32.2.5.352115513\n"
"244...3233..55312\n") == 0);
free(board631384024);
board631384024 = NULL;
assert( gamma_move(board, 1, 4, 3) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 10, 12) == 0 );
assert( gamma_move(board, 2, 12, 19) == 1 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 13, 2) == 0 );
assert( gamma_move(board, 4, 22, 0) == 0 );
assert( gamma_move(board, 4, 6, 20) == 0 );
assert( gamma_move(board, 5, 0, 1) == 0 );
assert( gamma_move(board, 2, 13, 14) == 0 );
assert( gamma_move(board, 2, 2, 0) == 0 );
assert( gamma_move(board, 3, 6, 18) == 0 );
assert( gamma_move(board, 3, 16, 12) == 1 );
assert( gamma_golden_move(board, 3, 8, 3) == 0 );
assert( gamma_busy_fields(board, 4) == 51 );
assert( gamma_move(board, 5, 6, 5) == 0 );
assert( gamma_move(board, 1, 4, 10) == 0 );
assert( gamma_move(board, 1, 12, 5) == 0 );
assert( gamma_move(board, 2, 3, 20) == 0 );
assert( gamma_move(board, 3, 1, 5) == 0 );
assert( gamma_move(board, 3, 3, 9) == 1 );
assert( gamma_move(board, 4, 0, 19) == 0 );
assert( gamma_move(board, 1, 9, 2) == 0 );
assert( gamma_move(board, 2, 11, 12) == 0 );
assert( gamma_move(board, 3, 8, 5) == 1 );
assert( gamma_move(board, 3, 3, 21) == 1 );
assert( gamma_move(board, 4, 10, 1) == 0 );
assert( gamma_busy_fields(board, 4) == 51 );
assert( gamma_move(board, 5, 11, 15) == 0 );
assert( gamma_move(board, 1, 13, 20) == 0 );
assert( gamma_move(board, 1, 7, 9) == 0 );
assert( gamma_move(board, 2, 23, 4) == 0 );
assert( gamma_move(board, 2, 0, 15) == 0 );
assert( gamma_free_fields(board, 2) == 61 );
assert( gamma_move(board, 3, 13, 9) == 0 );
assert( gamma_move(board, 4, 5, 14) == 0 );
assert( gamma_move(board, 5, 21, 8) == 0 );
assert( gamma_free_fields(board, 5) == 52 );
assert( gamma_move(board, 1, 0, 1) == 0 );
assert( gamma_move(board, 2, 17, 10) == 0 );
assert( gamma_move(board, 2, 1, 3) == 0 );
assert( gamma_free_fields(board, 2) == 61 );
assert( gamma_move(board, 3, 4, 22) == 0 );
assert( gamma_busy_fields(board, 3) == 48 );
assert( gamma_move(board, 4, 17, 9) == 0 );
assert( gamma_move(board, 4, 16, 12) == 0 );
assert( gamma_move(board, 5, 21, 12) == 0 );
assert( gamma_move(board, 5, 8, 14) == 0 );
assert( gamma_move(board, 2, 16, 21) == 0 );
assert( gamma_move(board, 3, 2, 1) == 0 );
assert( gamma_move(board, 4, 12, 15) == 0 );
assert( gamma_move(board, 5, 17, 0) == 0 );
assert( gamma_move(board, 5, 12, 5) == 0 );
assert( gamma_move(board, 1, 7, 23) == 0 );
assert( gamma_busy_fields(board, 1) == 64 );
assert( gamma_move(board, 2, 9, 3) == 0 );
assert( gamma_move(board, 2, 11, 2) == 0 );
assert( gamma_move(board, 3, 0, 12) == 0 );
assert( gamma_move(board, 4, 9, 10) == 0 );
assert( gamma_move(board, 4, 8, 10) == 0 );
assert( gamma_free_fields(board, 5) == 52 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 1, 13, 20) == 0 );
assert( gamma_move(board, 2, 17, 5) == 0 );
assert( gamma_free_fields(board, 2) == 61 );
assert( gamma_move(board, 3, 5, 9) == 0 );
assert( gamma_move(board, 5, 4, 2) == 0 );
assert( gamma_move(board, 5, 10, 15) == 0 );
assert( gamma_move(board, 1, 18, 5) == 0 );
assert( gamma_move(board, 2, 6, 10) == 0 );
assert( gamma_move(board, 2, 15, 9) == 0 );
assert( gamma_move(board, 3, 3, 3) == 0 );
assert( gamma_move(board, 4, 0, 10) == 0 );
assert( gamma_move(board, 5, 18, 5) == 0 );
assert( gamma_move(board, 5, 9, 21) == 0 );
assert( gamma_move(board, 1, 11, 20) == 0 );
assert( gamma_move(board, 1, 0, 21) == 0 );
assert( gamma_move(board, 2, 13, 20) == 0 );
assert( gamma_move(board, 2, 4, 17) == 0 );
assert( gamma_move(board, 3, 15, 16) == 0 );
assert( gamma_move(board, 3, 9, 23) == 0 );


char* board261854596 = gamma_board(board);
assert( board261854596 != NULL );
assert( strcmp(board261854596, 
"144...2.344.321.3\n"
".4..523541.4....3\n"
".333.3.3...4.41..\n"
".1.53..134..34.14\n"
".255342154522.241\n"
"5311..554.5.3.4.1\n"
".455............2\n"
"4...5.2222.125242\n"
"4112233.3..11.323\n"
".222.4455.34.54.1\n"
"3...35544.2.25.14\n"
"5.114232122412113\n"
"512.25..5211.2..5\n"
"..444.43311....23\n"
"1..3.5.531.13222.\n"
"51.22331..225.114\n"
".5512.52.552..534\n"
"2415514.24.2.1.54\n"
"43.413.33.52.2.11\n"
"11..4..5.4242245.\n"
"215231.1.311252.1\n"
"411455.111..41151\n"
".32.2.5.352115513\n"
"244...3233..55312\n") == 0);
free(board261854596);
board261854596 = NULL;
assert( gamma_move(board, 4, 5, 1) == 0 );
assert( gamma_move(board, 1, 17, 6) == 0 );
assert( gamma_move(board, 2, 7, 13) == 0 );
assert( gamma_move(board, 3, 5, 0) == 1 );
assert( gamma_move(board, 4, 0, 3) == 0 );
assert( gamma_move(board, 5, 9, 5) == 1 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 1, 13, 1) == 0 );
assert( gamma_free_fields(board, 1) == 54 );
assert( gamma_move(board, 3, 6, 10) == 0 );
assert( gamma_move(board, 4, 3, 10) == 0 );
assert( gamma_move(board, 4, 14, 10) == 0 );
assert( gamma_move(board, 5, 16, 2) == 0 );
assert( gamma_move(board, 1, 10, 17) == 0 );
assert( gamma_move(board, 1, 0, 12) == 0 );
assert( gamma_free_fields(board, 1) == 54 );
assert( gamma_move(board, 2, 7, 5) == 0 );
assert( gamma_move(board, 2, 4, 6) == 0 );
assert( gamma_move(board, 3, 1, 0) == 0 );
assert( gamma_move(board, 4, 19, 13) == 0 );
assert( gamma_move(board, 4, 6, 20) == 0 );
assert( gamma_busy_fields(board, 4) == 51 );
assert( gamma_golden_move(board, 4, 19, 1) == 0 );


char* board554101731 = gamma_board(board);
assert( board554101731 != NULL );
assert( strcmp(board554101731, 
"144...2.344.321.3\n"
".4..523541.4....3\n"
".333.3.3...4.41..\n"
".1.53..134..34.14\n"
".255342154522.241\n"
"5311..554.5.3.4.1\n"
".455............2\n"
"4...5.2222.125242\n"
"4112233.3..11.323\n"
".222.4455.34.54.1\n"
"3...35544.2.25.14\n"
"5.114232122412113\n"
"512.25..5211.2..5\n"
"..444.43311....23\n"
"1..3.5.531.13222.\n"
"51.22331..225.114\n"
".5512.52.552..534\n"
"2415514.24.2.1.54\n"
"43.413.33552.2.11\n"
"11..4..5.4242245.\n"
"215231.1.311252.1\n"
"411455.111..41151\n"
".32.2.5.352115513\n"
"244..33233..55312\n") == 0);
free(board554101731);
board554101731 = NULL;
assert( gamma_move(board, 5, 1, 5) == 0 );
assert( gamma_move(board, 5, 7, 1) == 1 );
assert( gamma_move(board, 1, 14, 9) == 0 );
assert( gamma_move(board, 1, 4, 3) == 0 );
assert( gamma_move(board, 2, 16, 0) == 0 );
assert( gamma_move(board, 2, 13, 0) == 0 );
assert( gamma_move(board, 3, 15, 7) == 0 );
assert( gamma_move(board, 3, 0, 23) == 0 );
assert( gamma_move(board, 4, 17, 9) == 0 );
assert( gamma_move(board, 5, 0, 20) == 0 );
assert( gamma_move(board, 5, 1, 18) == 0 );
assert( gamma_busy_fields(board, 5) == 55 );
assert( gamma_move(board, 1, 11, 14) == 0 );
assert( gamma_move(board, 2, 11, 15) == 0 );
assert( gamma_move(board, 2, 6, 10) == 0 );
assert( gamma_move(board, 3, 0, 10) == 0 );
assert( gamma_golden_move(board, 3, 3, 10) == 0 );
assert( gamma_move(board, 4, 16, 3) == 0 );
assert( gamma_move(board, 5, 13, 21) == 0 );
assert( gamma_busy_fields(board, 5) == 55 );
assert( gamma_move(board, 1, 0, 23) == 0 );
assert( gamma_move(board, 2, 22, 15) == 0 );
assert( gamma_move(board, 2, 1, 16) == 0 );
assert( gamma_move(board, 3, 20, 2) == 0 );
assert( gamma_move(board, 3, 11, 11) == 0 );
assert( gamma_busy_fields(board, 3) == 49 );


char* board279260766 = gamma_board(board);
assert( board279260766 != NULL );
assert( strcmp(board279260766, 
"144...2.344.321.3\n"
".4..523541.4....3\n"
".333.3.3...4.41..\n"
".1.53..134..34.14\n"
".255342154522.241\n"
"5311..554.5.3.4.1\n"
".455............2\n"
"4...5.2222.125242\n"
"4112233.3..11.323\n"
".222.4455.34.54.1\n"
"3...35544.2.25.14\n"
"5.114232122412113\n"
"512.25..5211.2..5\n"
"..444.43311....23\n"
"1..3.5.531.13222.\n"
"51.22331..225.114\n"
".5512.52.552..534\n"
"2415514.24.2.1.54\n"
"43.413.33552.2.11\n"
"11..4..5.4242245.\n"
"215231.1.311252.1\n"
"411455.111..41151\n"
".32.2.55352115513\n"
"244..33233..55312\n") == 0);
free(board279260766);
board279260766 = NULL;
assert( gamma_move(board, 4, 9, 10) == 0 );
assert( gamma_move(board, 4, 6, 21) == 0 );
assert( gamma_busy_fields(board, 4) == 51 );
assert( gamma_move(board, 5, 23, 15) == 0 );
assert( gamma_move(board, 5, 8, 18) == 0 );
assert( gamma_move(board, 1, 9, 6) == 0 );
assert( gamma_move(board, 1, 2, 21) == 0 );
assert( gamma_move(board, 2, 17, 4) == 0 );
assert( gamma_move(board, 2, 3, 1) == 1 );


char* board439529920 = gamma_board(board);
assert( board439529920 != NULL );
assert( strcmp(board439529920, 
"144...2.344.321.3\n"
".4..523541.4....3\n"
".333.3.3...4.41..\n"
".1.53..134..34.14\n"
".255342154522.241\n"
"5311..554.5.3.4.1\n"
".455............2\n"
"4...5.2222.125242\n"
"4112233.3..11.323\n"
".222.4455.34.54.1\n"
"3...35544.2.25.14\n"
"5.114232122412113\n"
"512.25..5211.2..5\n"
"..444.43311....23\n"
"1..3.5.531.13222.\n"
"51.22331..225.114\n"
".5512.52.552..534\n"
"2415514.24.2.1.54\n"
"43.413.33552.2.11\n"
"11..4..5.4242245.\n"
"215231.1.311252.1\n"
"411455.111..41151\n"
".3222.55352115513\n"
"244..33233..55312\n") == 0);
free(board439529920);
board439529920 = NULL;
assert( gamma_move(board, 3, 6, 12) == 0 );
assert( gamma_move(board, 3, 10, 14) == 0 );
assert( gamma_golden_move(board, 3, 2, 4) == 0 );
assert( gamma_move(board, 4, 3, 13) == 0 );
assert( gamma_move(board, 4, 15, 8) == 0 );
assert( gamma_busy_fields(board, 4) == 51 );
assert( gamma_move(board, 1, 12, 14) == 1 );
assert( gamma_move(board, 2, 0, 16) == 0 );
assert( gamma_move(board, 2, 13, 9) == 0 );
assert( gamma_move(board, 3, 17, 14) == 0 );
assert( gamma_move(board, 4, 7, 1) == 0 );
assert( gamma_move(board, 5, 5, 14) == 0 );
assert( gamma_move(board, 1, 7, 13) == 0 );
assert( gamma_busy_fields(board, 1) == 65 );
assert( gamma_move(board, 4, 1, 9) == 0 );
assert( gamma_move(board, 5, 19, 13) == 0 );
assert( gamma_move(board, 5, 3, 15) == 0 );
assert( gamma_move(board, 1, 16, 16) == 0 );
assert( gamma_move(board, 1, 12, 8) == 0 );
assert( gamma_move(board, 2, 2, 7) == 0 );
assert( gamma_move(board, 2, 10, 8) == 0 );
assert( gamma_move(board, 3, 12, 0) == 0 );
assert( gamma_move(board, 4, 9, 2) == 0 );
assert( gamma_move(board, 4, 0, 8) == 0 );
assert( gamma_move(board, 5, 20, 6) == 0 );
assert( gamma_move(board, 1, 20, 0) == 0 );
assert( gamma_move(board, 2, 15, 7) == 0 );
assert( gamma_move(board, 2, 5, 15) == 0 );
assert( gamma_busy_fields(board, 2) == 63 );
assert( gamma_move(board, 3, 2, 19) == 0 );
assert( gamma_move(board, 4, 13, 12) == 0 );
assert( gamma_move(board, 4, 11, 14) == 0 );
assert( gamma_move(board, 5, 7, 13) == 0 );
assert( gamma_move(board, 5, 10, 3) == 0 );
assert( gamma_free_fields(board, 1) == 52 );
assert( gamma_busy_fields(board, 2) == 63 );
assert( gamma_move(board, 3, 11, 17) == 0 );
assert( gamma_move(board, 3, 7, 5) == 0 );
assert( gamma_free_fields(board, 3) == 49 );
assert( gamma_move(board, 4, 9, 16) == 0 );
assert( gamma_move(board, 4, 2, 16) == 0 );
assert( gamma_free_fields(board, 4) == 51 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 0, 4) == 0 );
assert( gamma_busy_fields(board, 5) == 55 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 1, 23, 15) == 0 );
assert( gamma_move(board, 1, 2, 4) == 1 );
assert( gamma_move(board, 2, 3, 15) == 0 );
assert( gamma_move(board, 2, 5, 13) == 0 );
assert( gamma_move(board, 3, 6, 8) == 0 );
assert( gamma_move(board, 3, 7, 5) == 0 );
assert( gamma_move(board, 4, 9, 10) == 0 );
assert( gamma_move(board, 4, 7, 21) == 0 );
assert( gamma_move(board, 5, 13, 11) == 0 );
assert( gamma_free_fields(board, 5) == 48 );
assert( gamma_move(board, 1, 7, 17) == 0 );
assert( gamma_move(board, 2, 23, 3) == 0 );
assert( gamma_busy_fields(board, 2) == 63 );
assert( gamma_move(board, 3, 8, 5) == 0 );
assert( gamma_move(board, 3, 16, 9) == 1 );
assert( gamma_move(board, 4, 20, 14) == 0 );
assert( gamma_move(board, 4, 14, 13) == 1 );
assert( gamma_move(board, 5, 17, 0) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 1, 13, 9) == 0 );
assert( gamma_free_fields(board, 1) == 51 );
assert( gamma_move(board, 2, 20, 14) == 0 );
assert( gamma_move(board, 2, 16, 6) == 0 );
assert( gamma_move(board, 3, 17, 10) == 0 );
assert( gamma_move(board, 3, 12, 18) == 0 );
assert( gamma_move(board, 4, 16, 2) == 0 );
assert( gamma_move(board, 4, 16, 12) == 0 );
assert( gamma_move(board, 5, 22, 15) == 0 );
assert( gamma_move(board, 5, 12, 13) == 0 );
assert( gamma_busy_fields(board, 5) == 55 );
assert( gamma_golden_move(board, 5, 2, 12) == 0 );
assert( gamma_move(board, 1, 3, 15) == 0 );
assert( gamma_move(board, 2, 21, 6) == 0 );
assert( gamma_busy_fields(board, 2) == 63 );
assert( gamma_move(board, 3, 4, 16) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 12, 7) == 0 );
assert( gamma_move(board, 5, 11, 14) == 0 );
assert( gamma_move(board, 5, 16, 20) == 0 );
assert( gamma_free_fields(board, 5) == 47 );
assert( gamma_move(board, 1, 17, 6) == 0 );
assert( gamma_move(board, 2, 12, 0) == 0 );
assert( gamma_move(board, 3, 9, 1) == 0 );
assert( gamma_move(board, 3, 4, 22) == 0 );
assert( gamma_move(board, 4, 5, 17) == 0 );
assert( gamma_move(board, 5, 22, 10) == 0 );
assert( gamma_move(board, 1, 13, 9) == 0 );
assert( gamma_move(board, 1, 2, 5) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 11, 19) == 0 );
assert( gamma_move(board, 3, 7, 1) == 0 );
assert( gamma_move(board, 3, 15, 23) == 1 );
assert( gamma_move(board, 4, 17, 12) == 0 );
assert( gamma_move(board, 4, 1, 7) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 10, 2) == 0 );
assert( gamma_move(board, 5, 13, 6) == 0 );
assert( gamma_move(board, 1, 10, 12) == 0 );
assert( gamma_move(board, 1, 0, 17) == 1 );
assert( gamma_free_fields(board, 1) == 49 );
assert( gamma_move(board, 2, 11, 12) == 0 );
assert( gamma_move(board, 2, 7, 16) == 0 );
assert( gamma_move(board, 3, 9, 4) == 0 );


char* board995512242 = gamma_board(board);
assert( board995512242 != NULL );
assert( strcmp(board995512242, 
"144...2.344.32133\n"
".4..523541.4....3\n"
".333.3.3...4.41..\n"
".1.53..134..34.14\n"
".255342154522.241\n"
"5311..554.5.3.4.1\n"
"1455............2\n"
"4...5.2222.125242\n"
"4112233.3..11.323\n"
".222.4455.34154.1\n"
"3...35544.2.25414\n"
"5.114232122412113\n"
"512.25..5211.2..5\n"
"..444.43311....23\n"
"1..3.5.531.132223\n"
"51.22331..225.114\n"
".5512.52.552..534\n"
"2415514.24.2.1.54\n"
"431413.33552.2.11\n"
"111.4..5.4242245.\n"
"215231.1.311252.1\n"
"411455.111..41151\n"
".3222.55352115513\n"
"244..33233..55312\n") == 0);
free(board995512242);
board995512242 = NULL;
assert( gamma_move(board, 5, 5, 9) == 0 );
assert( gamma_busy_fields(board, 5) == 55 );
assert( gamma_free_fields(board, 5) == 46 );
assert( gamma_move(board, 1, 7, 12) == 0 );
assert( gamma_move(board, 3, 15, 7) == 0 );
assert( gamma_move(board, 4, 1, 0) == 0 );
assert( gamma_move(board, 5, 9, 4) == 0 );
assert( gamma_move(board, 1, 9, 2) == 0 );
assert( gamma_move(board, 1, 12, 12) == 0 );
assert( gamma_move(board, 2, 15, 13) == 0 );
assert( gamma_move(board, 2, 7, 5) == 0 );
assert( gamma_busy_fields(board, 2) == 63 );
assert( gamma_free_fields(board, 2) == 119 );
assert( gamma_move(board, 3, 18, 13) == 0 );
assert( gamma_busy_fields(board, 3) == 51 );
assert( gamma_move(board, 4, 17, 14) == 0 );
assert( gamma_move(board, 5, 8, 5) == 0 );


char* board892235279 = gamma_board(board);
assert( board892235279 != NULL );
assert( strcmp(board892235279, 
"144...2.344.32133\n"
".4..523541.4....3\n"
".333.3.3...4.41..\n"
".1.53..134..34.14\n"
".255342154522.241\n"
"5311..554.5.3.4.1\n"
"1455............2\n"
"4...5.2222.125242\n"
"4112233.3..11.323\n"
".222.4455.34154.1\n"
"3...35544.2.25414\n"
"5.114232122412113\n"
"512.25..5211.2..5\n"
"..444.43311....23\n"
"1..3.5.531.132223\n"
"51.22331..225.114\n"
".5512.52.552..534\n"
"2415514.24.2.1.54\n"
"431413.33552.2.11\n"
"111.4..5.4242245.\n"
"215231.1.311252.1\n"
"411455.111..41151\n"
".3222.55352115513\n"
"244..33233..55312\n") == 0);
free(board892235279);
board892235279 = NULL;
assert( gamma_move(board, 1, 21, 8) == 0 );
assert( gamma_free_fields(board, 1) == 49 );
assert( gamma_golden_move(board, 1, 20, 4) == 0 );


char* board813422333 = gamma_board(board);
assert( board813422333 != NULL );
assert( strcmp(board813422333, 
"144...2.344.32133\n"
".4..523541.4....3\n"
".333.3.3...4.41..\n"
".1.53..134..34.14\n"
".255342154522.241\n"
"5311..554.5.3.4.1\n"
"1455............2\n"
"4...5.2222.125242\n"
"4112233.3..11.323\n"
".222.4455.34154.1\n"
"3...35544.2.25414\n"
"5.114232122412113\n"
"512.25..5211.2..5\n"
"..444.43311....23\n"
"1..3.5.531.132223\n"
"51.22331..225.114\n"
".5512.52.552..534\n"
"2415514.24.2.1.54\n"
"431413.33552.2.11\n"
"111.4..5.4242245.\n"
"215231.1.311252.1\n"
"411455.111..41151\n"
".3222.55352115513\n"
"244..33233..55312\n") == 0);
free(board813422333);
board813422333 = NULL;
assert( gamma_move(board, 2, 1, 16) == 1 );
assert( gamma_busy_fields(board, 2) == 64 );
assert( gamma_move(board, 3, 18, 11) == 0 );
assert( gamma_move(board, 4, 5, 6) == 0 );
assert( gamma_move(board, 4, 15, 13) == 0 );
assert( gamma_free_fields(board, 4) == 46 );
assert( gamma_move(board, 5, 13, 0) == 0 );


char* board931735195 = gamma_board(board);
assert( board931735195 != NULL );
assert( strcmp(board931735195, 
"144...2.344.32133\n"
".4..523541.4....3\n"
".333.3.3...4.41..\n"
".1.53..134..34.14\n"
".255342154522.241\n"
"5311..554.5.3.4.1\n"
"1455............2\n"
"42..5.2222.125242\n"
"4112233.3..11.323\n"
".222.4455.34154.1\n"
"3...35544.2.25414\n"
"5.114232122412113\n"
"512.25..5211.2..5\n"
"..444.43311....23\n"
"1..3.5.531.132223\n"
"51.22331..225.114\n"
".5512.52.552..534\n"
"2415514.24.2.1.54\n"
"431413.33552.2.11\n"
"111.4..5.4242245.\n"
"215231.1.311252.1\n"
"411455.111..41151\n"
".3222.55352115513\n"
"244..33233..55312\n") == 0);
free(board931735195);
board931735195 = NULL;
assert( gamma_move(board, 1, 16, 23) == 0 );
assert( gamma_move(board, 3, 18, 4) == 0 );
assert( gamma_move(board, 3, 8, 7) == 0 );
assert( gamma_move(board, 4, 12, 13) == 0 );
assert( gamma_move(board, 4, 16, 18) == 0 );
assert( gamma_free_fields(board, 4) == 46 );
assert( gamma_move(board, 5, 15, 6) == 0 );
assert( gamma_move(board, 1, 4, 16) == 0 );
assert( gamma_move(board, 1, 11, 12) == 0 );
assert( gamma_move(board, 2, 22, 15) == 0 );
assert( gamma_move(board, 3, 12, 6) == 0 );
assert( gamma_move(board, 3, 6, 19) == 0 );
assert( gamma_move(board, 4, 4, 16) == 0 );
assert( gamma_move(board, 4, 2, 21) == 0 );
assert( gamma_move(board, 5, 16, 3) == 0 );
assert( gamma_move(board, 5, 5, 8) == 0 );
assert( gamma_move(board, 1, 8, 9) == 0 );
assert( gamma_move(board, 1, 4, 10) == 0 );
assert( gamma_free_fields(board, 1) == 48 );
assert( gamma_move(board, 2, 20, 0) == 0 );
assert( gamma_move(board, 2, 15, 3) == 1 );
assert( gamma_move(board, 3, 6, 7) == 0 );
assert( gamma_move(board, 3, 3, 23) == 0 );
assert( gamma_move(board, 4, 11, 12) == 0 );
assert( gamma_move(board, 5, 5, 12) == 0 );
assert( gamma_free_fields(board, 5) == 45 );
assert( gamma_move(board, 1, 3, 22) == 0 );
assert( gamma_move(board, 1, 5, 10) == 0 );
assert( gamma_busy_fields(board, 1) == 68 );
assert( gamma_move(board, 2, 21, 16) == 0 );
assert( gamma_move(board, 2, 15, 3) == 0 );
assert( gamma_move(board, 3, 17, 13) == 0 );
assert( gamma_move(board, 4, 13, 15) == 0 );
assert( gamma_move(board, 4, 10, 3) == 0 );
assert( gamma_move(board, 5, 23, 3) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 1, 17, 8) == 0 );
assert( gamma_move(board, 2, 12, 1) == 0 );
assert( gamma_move(board, 2, 11, 1) == 0 );
assert( gamma_free_fields(board, 2) == 58 );
assert( gamma_move(board, 3, 8, 13) == 0 );
assert( gamma_move(board, 3, 8, 5) == 0 );
assert( gamma_busy_fields(board, 3) == 51 );
assert( gamma_move(board, 4, 14, 0) == 0 );
assert( gamma_move(board, 5, 11, 9) == 0 );
assert( gamma_move(board, 5, 3, 20) == 0 );


char* board399440227 = gamma_board(board);
assert( board399440227 != NULL );
assert( strcmp(board399440227, 
"144...2.344.32133\n"
".4..523541.4....3\n"
".333.3.3...4.41..\n"
".1.53..134..34.14\n"
".255342154522.241\n"
"5311..554.5.3.4.1\n"
"1455............2\n"
"42..5.2222.125242\n"
"4112233.3..11.323\n"
".222.4455.34154.1\n"
"3...35544.2.25414\n"
"5.114232122412113\n"
"512.25..5211.2..5\n"
"..444.43311....23\n"
"1..3.5.531.132223\n"
"51.22331..225.114\n"
".5512.52.552..534\n"
"2415514.24.2.1.54\n"
"431413.33552.2.11\n"
"111.4..5.4242245.\n"
"215231.1.31125221\n"
"411455.111..41151\n"
".3222.55352115513\n"
"244..33233..55312\n") == 0);
free(board399440227);
board399440227 = NULL;
assert( gamma_move(board, 1, 17, 11) == 0 );
assert( gamma_move(board, 1, 8, 16) == 0 );
assert( gamma_move(board, 2, 22, 10) == 0 );
assert( gamma_busy_fields(board, 2) == 65 );
assert( gamma_move(board, 3, 21, 0) == 0 );
assert( gamma_move(board, 3, 4, 1) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 8, 18) == 0 );
assert( gamma_move(board, 4, 4, 0) == 0 );
assert( gamma_move(board, 1, 10, 12) == 0 );
assert( gamma_move(board, 2, 8, 2) == 0 );
assert( gamma_move(board, 3, 8, 12) == 0 );
assert( gamma_busy_fields(board, 3) == 51 );
assert( gamma_move(board, 4, 10, 21) == 1 );
assert( gamma_move(board, 4, 12, 1) == 0 );
assert( gamma_move(board, 5, 9, 5) == 0 );
assert( gamma_move(board, 5, 13, 13) == 0 );
assert( gamma_busy_fields(board, 2) == 65 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_golden_move(board, 2, 7, 9) == 0 );
assert( gamma_move(board, 3, 17, 4) == 0 );
assert( gamma_move(board, 3, 1, 17) == 0 );
assert( gamma_move(board, 4, 7, 0) == 0 );
assert( gamma_busy_fields(board, 4) == 53 );
assert( gamma_move(board, 5, 14, 4) == 0 );
assert( gamma_move(board, 5, 16, 11) == 0 );
assert( gamma_move(board, 1, 13, 1) == 0 );
assert( gamma_move(board, 1, 5, 4) == 1 );
assert( gamma_move(board, 2, 18, 13) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 3, 17) == 0 );
assert( gamma_move(board, 3, 8, 21) == 1 );
assert( gamma_busy_fields(board, 3) == 52 );
assert( gamma_golden_move(board, 3, 12, 11) == 0 );
assert( gamma_move(board, 4, 21, 15) == 0 );
assert( gamma_move(board, 4, 7, 16) == 0 );
assert( gamma_free_fields(board, 4) == 43 );
assert( gamma_move(board, 5, 0, 11) == 0 );
assert( gamma_move(board, 5, 15, 0) == 0 );
assert( gamma_move(board, 1, 2, 6) == 0 );
assert( gamma_move(board, 1, 16, 16) == 0 );
assert( gamma_move(board, 2, 15, 10) == 0 );
assert( gamma_move(board, 2, 8, 2) == 0 );
assert( gamma_free_fields(board, 2) == 58 );
assert( gamma_move(board, 3, 14, 16) == 0 );
assert( gamma_move(board, 3, 2, 1) == 0 );
assert( gamma_move(board, 4, 0, 9) == 0 );
assert( gamma_move(board, 4, 16, 16) == 0 );
assert( gamma_move(board, 5, 0, 16) == 0 );
assert( gamma_move(board, 5, 1, 14) == 0 );
assert( gamma_move(board, 1, 17, 7) == 0 );
assert( gamma_move(board, 3, 0, 11) == 0 );
assert( gamma_busy_fields(board, 4) == 53 );
assert( gamma_move(board, 5, 10, 12) == 0 );
assert( gamma_move(board, 1, 17, 13) == 0 );
assert( gamma_move(board, 1, 10, 19) == 0 );
assert( gamma_move(board, 2, 2, 8) == 1 );
assert( gamma_move(board, 3, 9, 4) == 0 );
assert( gamma_move(board, 3, 0, 3) == 0 );
assert( gamma_move(board, 4, 4, 5) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 1, 5) == 0 );
assert( gamma_move(board, 1, 20, 5) == 0 );
assert( gamma_move(board, 1, 1, 16) == 0 );
assert( gamma_free_fields(board, 1) == 46 );
assert( gamma_move(board, 2, 6, 14) == 0 );
assert( gamma_move(board, 2, 11, 5) == 0 );
assert( gamma_move(board, 3, 23, 5) == 0 );
assert( gamma_move(board, 4, 8, 20) == 0 );
assert( gamma_move(board, 5, 1, 16) == 0 );
assert( gamma_move(board, 2, 20, 11) == 0 );
assert( gamma_move(board, 2, 15, 14) == 1 );
assert( gamma_move(board, 3, 13, 1) == 0 );
assert( gamma_move(board, 4, 20, 0) == 0 );
assert( gamma_move(board, 4, 5, 22) == 0 );
assert( gamma_move(board, 5, 17, 14) == 0 );
assert( gamma_move(board, 5, 9, 3) == 0 );
assert( gamma_move(board, 1, 11, 15) == 0 );
assert( gamma_move(board, 1, 3, 0) == 0 );
assert( gamma_busy_fields(board, 1) == 69 );
assert( gamma_move(board, 2, 5, 3) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 5, 12) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 7, 0) == 0 );
assert( gamma_move(board, 4, 12, 12) == 0 );
assert( gamma_move(board, 5, 3, 14) == 0 );
assert( gamma_move(board, 1, 7, 18) == 0 );
assert( gamma_move(board, 1, 8, 19) == 0 );
assert( gamma_move(board, 2, 13, 2) == 0 );
assert( gamma_busy_fields(board, 2) == 67 );
assert( gamma_move(board, 3, 18, 15) == 0 );
assert( gamma_move(board, 3, 0, 2) == 0 );
assert( gamma_move(board, 4, 4, 18) == 0 );
assert( gamma_move(board, 1, 4, 21) == 0 );
assert( gamma_move(board, 1, 8, 10) == 0 );
assert( gamma_move(board, 2, 10, 12) == 0 );
assert( gamma_move(board, 3, 18, 13) == 0 );
assert( gamma_move(board, 4, 14, 4) == 0 );
assert( gamma_move(board, 4, 14, 21) == 0 );
assert( gamma_move(board, 5, 11, 6) == 0 );
assert( gamma_free_fields(board, 5) == 44 );
assert( gamma_move(board, 2, 10, 12) == 0 );
assert( gamma_move(board, 2, 7, 23) == 1 );
assert( gamma_free_fields(board, 2) == 56 );
assert( gamma_golden_move(board, 2, 2, 5) == 0 );
assert( gamma_move(board, 3, 23, 4) == 0 );
assert( gamma_free_fields(board, 3) == 111 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 8, 9) == 0 );
assert( gamma_golden_move(board, 4, 20, 15) == 0 );
assert( gamma_move(board, 1, 2, 9) == 0 );
assert( gamma_move(board, 1, 8, 21) == 0 );
assert( gamma_move(board, 2, 8, 21) == 0 );
assert( gamma_move(board, 2, 15, 5) == 0 );
assert( gamma_move(board, 3, 15, 9) == 0 );
assert( gamma_move(board, 4, 17, 5) == 0 );
assert( gamma_move(board, 4, 7, 7) == 0 );
assert( gamma_move(board, 5, 7, 12) == 0 );
assert( gamma_move(board, 5, 14, 8) == 0 );
assert( gamma_free_fields(board, 5) == 43 );
assert( gamma_move(board, 1, 16, 2) == 0 );
assert( gamma_move(board, 1, 3, 7) == 0 );
assert( gamma_move(board, 2, 18, 5) == 0 );
assert( gamma_move(board, 2, 2, 14) == 0 );
assert( gamma_move(board, 3, 17, 9) == 0 );
assert( gamma_move(board, 5, 17, 15) == 0 );
assert( gamma_move(board, 5, 6, 19) == 0 );
assert( gamma_move(board, 1, 11, 12) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 22, 10) == 0 );
assert( gamma_move(board, 3, 20, 2) == 0 );
assert( gamma_move(board, 3, 8, 23) == 0 );
assert( gamma_free_fields(board, 4) == 42 );
assert( gamma_move(board, 5, 15, 13) == 0 );
assert( gamma_move(board, 1, 6, 4) == 1 );
assert( gamma_move(board, 1, 10, 1) == 0 );
assert( gamma_move(board, 2, 22, 0) == 0 );
assert( gamma_move(board, 2, 10, 15) == 0 );
assert( gamma_golden_move(board, 2, 14, 16) == 0 );
assert( gamma_move(board, 3, 19, 13) == 0 );
assert( gamma_move(board, 3, 4, 4) == 0 );
assert( gamma_move(board, 4, 1, 21) == 0 );
assert( gamma_move(board, 4, 15, 1) == 0 );
assert( gamma_busy_fields(board, 4) == 53 );
assert( gamma_move(board, 5, 5, 14) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 1, 11, 3) == 0 );
assert( gamma_move(board, 2, 7, 8) == 0 );
assert( gamma_move(board, 2, 9, 22) == 0 );
assert( gamma_move(board, 3, 14, 20) == 1 );
assert( gamma_move(board, 3, 16, 13) == 0 );
assert( gamma_busy_fields(board, 3) == 53 );
assert( gamma_move(board, 4, 3, 13) == 0 );
assert( gamma_move(board, 1, 11, 22) == 0 );
assert( gamma_free_fields(board, 1) == 44 );
assert( gamma_move(board, 4, 20, 5) == 0 );
assert( gamma_move(board, 4, 8, 19) == 0 );


char* board693586664 = gamma_board(board);
assert( board693586664 != NULL );
assert( strcmp(board693586664, 
"144...22344.32133\n"
".4..523541.4....3\n"
".333.3.33.44.41..\n"
".1.53..134..34314\n"
".255342154522.241\n"
"5311..554.5.3.4.1\n"
"1455............2\n"
"42..5.2222.125242\n"
"4112233.3..11.323\n"
".222.4455.3415421\n"
"3...35544.2.25414\n"
"5.114232122412113\n"
"512.25..5211.2..5\n"
"..444.43311....23\n"
"1..3.5.531.132223\n"
"51222331..225.114\n"
".5512.52.552..534\n"
"2415514.24.2.1.54\n"
"431413.33552.2.11\n"
"111.4115.4242245.\n"
"215231.1.31125221\n"
"411455.111..41151\n"
".3222.55352115513\n"
"244..33233..55312\n") == 0);
free(board693586664);
board693586664 = NULL;
assert( gamma_move(board, 5, 15, 15) == 0 );
assert( gamma_move(board, 1, 16, 3) == 0 );
assert( gamma_move(board, 1, 15, 22) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 15, 10) == 0 );
assert( gamma_move(board, 2, 3, 18) == 0 );
assert( gamma_move(board, 3, 22, 2) == 0 );
assert( gamma_move(board, 4, 7, 0) == 0 );
assert( gamma_move(board, 5, 16, 5) == 0 );
assert( gamma_free_fields(board, 5) == 42 );
assert( gamma_busy_fields(board, 1) == 70 );
assert( gamma_move(board, 2, 13, 2) == 0 );
assert( gamma_move(board, 2, 4, 11) == 0 );
assert( gamma_move(board, 3, 0, 3) == 0 );
assert( gamma_free_fields(board, 3) == 44 );
assert( gamma_move(board, 4, 11, 14) == 0 );
assert( gamma_move(board, 5, 16, 6) == 0 );
assert( gamma_move(board, 5, 5, 2) == 0 );
assert( gamma_move(board, 1, 22, 10) == 0 );
assert( gamma_move(board, 1, 5, 6) == 0 );
assert( gamma_move(board, 2, 15, 19) == 0 );
assert( gamma_move(board, 3, 12, 1) == 0 );
assert( gamma_move(board, 3, 15, 13) == 0 );
assert( gamma_move(board, 4, 11, 14) == 0 );
assert( gamma_move(board, 4, 3, 3) == 0 );
assert( gamma_move(board, 5, 1, 1) == 0 );
assert( gamma_move(board, 2, 10, 5) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 16, 3) == 0 );
assert( gamma_move(board, 3, 14, 15) == 0 );
assert( gamma_move(board, 4, 10, 2) == 0 );
assert( gamma_move(board, 4, 4, 18) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );


char* board852601291 = gamma_board(board);
assert( board852601291 != NULL );
assert( strcmp(board852601291, 
"144...22344.32133\n"
".4..523541.4....3\n"
".333.3.33.44.41..\n"
".1.53..134..34314\n"
".255342154522.241\n"
"5311..554.5.3.4.1\n"
"1455............2\n"
"42..5.2222.125242\n"
"4112233.3..11.323\n"
".222.4455.3415421\n"
"3...35544.2.25414\n"
"5.114232122412113\n"
"512.25..5211.2..5\n"
"..444.43311....23\n"
"1..3.5.531.132223\n"
"51222331..225.114\n"
".5512.52.552..534\n"
"2415514.24.2.1.54\n"
"431413.33552.2.11\n"
"111.4115.4242245.\n"
"215231.1.31125221\n"
"411455.111..41151\n"
".3222.55352115513\n"
"244..33233..55312\n") == 0);
free(board852601291);
board852601291 = NULL;
assert( gamma_move(board, 5, 20, 11) == 0 );
assert( gamma_move(board, 1, 18, 5) == 0 );


gamma_delete(board);

    return 0;
}
