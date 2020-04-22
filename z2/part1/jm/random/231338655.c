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
uuid: 231338655
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(18, 20, 4, 38);
assert( board != NULL );


assert( gamma_move(board, 1, 19, 0) == 0 );
assert( gamma_move(board, 2, 11, 4) == 1 );
assert( gamma_move(board, 2, 14, 1) == 1 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 14, 13) == 1 );
assert( gamma_move(board, 4, 6, 13) == 1 );
assert( gamma_free_fields(board, 4) == 356 );
assert( gamma_move(board, 1, 0, 5) == 1 );
assert( gamma_free_fields(board, 1) == 355 );
assert( gamma_move(board, 2, 12, 0) == 1 );
assert( gamma_move(board, 2, 3, 10) == 1 );
assert( gamma_move(board, 4, 15, 9) == 1 );
assert( gamma_move(board, 4, 6, 0) == 1 );
assert( gamma_busy_fields(board, 4) == 3 );
assert( gamma_move(board, 1, 5, 5) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 11, 15) == 1 );
assert( gamma_move(board, 2, 5, 18) == 1 );
assert( gamma_move(board, 3, 4, 10) == 1 );
assert( gamma_move(board, 3, 16, 18) == 1 );
assert( gamma_move(board, 1, 3, 17) == 1 );
assert( gamma_move(board, 1, 7, 9) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 2, 4) == 1 );
assert( gamma_move(board, 3, 6, 12) == 1 );


char* board859265806 = gamma_board(board);
assert( board859265806 != NULL );
assert( strcmp(board859265806, 
"..................\n"
".....2..........3.\n"
"...1..............\n"
"..................\n"
"...........2......\n"
"..................\n"
"......4.......3...\n"
"......3...........\n"
"..................\n"
"...23.............\n"
".......1.......4..\n"
"..................\n"
"..................\n"
"..................\n"
"1....1............\n"
"..3........2......\n"
"..................\n"
"..................\n"
"..............2...\n"
"......4.....2.....\n") == 0);
free(board859265806);
board859265806 = NULL;
assert( gamma_move(board, 4, 10, 13) == 1 );
assert( gamma_move(board, 1, 0, 19) == 1 );


char* board571939385 = gamma_board(board);
assert( board571939385 != NULL );
assert( strcmp(board571939385, 
"1.................\n"
".....2..........3.\n"
"...1..............\n"
"..................\n"
"...........2......\n"
"..................\n"
"......4...4...3...\n"
"......3...........\n"
"..................\n"
"...23.............\n"
".......1.......4..\n"
"..................\n"
"..................\n"
"..................\n"
"1....1............\n"
"..3........2......\n"
"..................\n"
"..................\n"
"..............2...\n"
"......4.....2.....\n") == 0);
free(board571939385);
board571939385 = NULL;
assert( gamma_move(board, 2, 16, 3) == 1 );
assert( gamma_move(board, 2, 8, 10) == 1 );
assert( gamma_move(board, 3, 17, 13) == 1 );
assert( gamma_move(board, 4, 17, 0) == 1 );
assert( gamma_move(board, 1, 14, 2) == 1 );
assert( gamma_move(board, 2, 15, 13) == 1 );
assert( gamma_move(board, 4, 15, 5) == 1 );
assert( gamma_move(board, 4, 1, 4) == 1 );
assert( gamma_move(board, 1, 9, 6) == 1 );
assert( gamma_move(board, 1, 8, 17) == 1 );
assert( gamma_move(board, 2, 14, 13) == 0 );
assert( gamma_move(board, 3, 2, 8) == 1 );
assert( gamma_move(board, 4, 1, 9) == 1 );
assert( gamma_move(board, 1, 18, 0) == 0 );
assert( gamma_busy_fields(board, 1) == 8 );
assert( gamma_move(board, 2, 5, 17) == 1 );
assert( gamma_move(board, 3, 7, 11) == 1 );
assert( gamma_move(board, 3, 17, 0) == 0 );
assert( gamma_golden_move(board, 3, 4, 1) == 0 );
assert( gamma_move(board, 4, 8, 13) == 1 );
assert( gamma_move(board, 4, 12, 19) == 1 );
assert( gamma_move(board, 1, 18, 2) == 0 );
assert( gamma_busy_fields(board, 1) == 8 );
assert( gamma_move(board, 2, 14, 12) == 1 );
assert( gamma_move(board, 3, 11, 11) == 1 );


char* board491045392 = gamma_board(board);
assert( board491045392 != NULL );
assert( strcmp(board491045392, 
"1...........4.....\n"
".....2..........3.\n"
"...1.2..1.........\n"
"..................\n"
"...........2......\n"
"..................\n"
"......4.4.4...32.3\n"
"......3.......2...\n"
".......3...3......\n"
"...23...2.........\n"
".4.....1.......4..\n"
"..3...............\n"
"..................\n"
".........1........\n"
"1....1.........4..\n"
".43........2......\n"
"................2.\n"
"..............1...\n"
"..............2...\n"
"......4.....2....4\n") == 0);
free(board491045392);
board491045392 = NULL;
assert( gamma_move(board, 4, 8, 14) == 1 );
assert( gamma_move(board, 1, 15, 8) == 1 );
assert( gamma_move(board, 2, 9, 4) == 1 );
assert( gamma_move(board, 2, 10, 16) == 1 );
assert( gamma_move(board, 3, 17, 15) == 1 );
assert( gamma_move(board, 4, 2, 10) == 1 );
assert( gamma_move(board, 4, 8, 10) == 0 );
assert( gamma_move(board, 1, 1, 17) == 1 );
assert( gamma_move(board, 1, 13, 6) == 1 );
assert( gamma_free_fields(board, 2) == 314 );
assert( gamma_move(board, 3, 13, 11) == 1 );
assert( gamma_move(board, 4, 6, 1) == 1 );
assert( gamma_move(board, 1, 10, 10) == 1 );
assert( gamma_move(board, 1, 0, 17) == 1 );
assert( gamma_move(board, 2, 6, 0) == 0 );
assert( gamma_move(board, 3, 5, 1) == 1 );


char* board386222000 = gamma_board(board);
assert( board386222000 != NULL );
assert( strcmp(board386222000, 
"1...........4.....\n"
".....2..........3.\n"
"11.1.2..1.........\n"
"..........2.......\n"
"...........2.....3\n"
"........4.........\n"
"......4.4.4...32.3\n"
"......3.......2...\n"
".......3...3.3....\n"
"..423...2.1.......\n"
".4.....1.......4..\n"
"..3............1..\n"
"..................\n"
".........1...1....\n"
"1....1.........4..\n"
".43......2.2......\n"
"................2.\n"
"..............1...\n"
".....34.......2...\n"
"......4.....2....4\n") == 0);
free(board386222000);
board386222000 = NULL;
assert( gamma_move(board, 4, 17, 11) == 1 );
assert( gamma_busy_fields(board, 4) == 14 );
assert( gamma_move(board, 1, 5, 3) == 1 );
assert( gamma_move(board, 1, 13, 8) == 1 );
assert( gamma_move(board, 2, 16, 12) == 1 );
assert( gamma_move(board, 3, 18, 7) == 0 );
assert( gamma_move(board, 3, 5, 19) == 1 );
assert( gamma_busy_fields(board, 3) == 13 );
assert( gamma_move(board, 4, 13, 12) == 1 );
assert( gamma_move(board, 4, 10, 1) == 1 );
assert( gamma_free_fields(board, 4) == 302 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 2, 1) == 1 );
assert( gamma_move(board, 1, 2, 9) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );


char* board535776549 = gamma_board(board);
assert( board535776549 != NULL );
assert( strcmp(board535776549, 
"1....3......4.....\n"
".....2..........3.\n"
"11.1.2..1.........\n"
"..........2.......\n"
"...........2.....3\n"
"........4.........\n"
"......4.4.4...32.3\n"
"......3......42.2.\n"
".......3...3.3...4\n"
"..423...2.1.......\n"
".41....1.......4..\n"
"..3..........1.1..\n"
"..................\n"
".........1...1....\n"
"1....1.........4..\n"
".43......2.2......\n"
".....1..........2.\n"
"..............1...\n"
"..1..34...4...2...\n"
"......4.....2....4\n") == 0);
free(board535776549);
board535776549 = NULL;
assert( gamma_move(board, 2, 10, 7) == 1 );
assert( gamma_move(board, 2, 9, 11) == 1 );
assert( gamma_move(board, 3, 13, 3) == 1 );
assert( gamma_move(board, 4, 1, 17) == 0 );
assert( gamma_move(board, 1, 10, 16) == 0 );
assert( gamma_move(board, 1, 2, 7) == 1 );
assert( gamma_move(board, 2, 6, 2) == 1 );
assert( gamma_move(board, 3, 2, 3) == 1 );
assert( gamma_move(board, 4, 3, 15) == 1 );
assert( gamma_move(board, 2, 19, 7) == 0 );
assert( gamma_move(board, 2, 11, 16) == 1 );
assert( gamma_golden_move(board, 2, 17, 8) == 0 );


char* board427448781 = gamma_board(board);
assert( board427448781 != NULL );
assert( strcmp(board427448781, 
"1....3......4.....\n"
".....2..........3.\n"
"11.1.2..1.........\n"
"..........22......\n"
"...4.......2.....3\n"
"........4.........\n"
"......4.4.4...32.3\n"
"......3......42.2.\n"
".......3.2.3.3...4\n"
"..423...2.1.......\n"
".41....1.......4..\n"
"..3..........1.1..\n"
"..1.......2.......\n"
".........1...1....\n"
"1....1.........4..\n"
".43......2.2......\n"
"..3..1.......3..2.\n"
"......2.......1...\n"
"..1..34...4...2...\n"
"......4.....2....4\n") == 0);
free(board427448781);
board427448781 = NULL;
assert( gamma_move(board, 3, 0, 15) == 1 );
assert( gamma_move(board, 4, 8, 8) == 1 );
assert( gamma_move(board, 4, 17, 12) == 1 );
assert( gamma_move(board, 1, 7, 16) == 1 );
assert( gamma_move(board, 2, 15, 12) == 1 );
assert( gamma_move(board, 2, 15, 0) == 1 );
assert( gamma_busy_fields(board, 2) == 20 );
assert( gamma_move(board, 3, 5, 16) == 1 );
assert( gamma_move(board, 4, 14, 16) == 1 );
assert( gamma_move(board, 1, 13, 11) == 0 );
assert( gamma_move(board, 2, 9, 6) == 0 );
assert( gamma_move(board, 2, 12, 16) == 1 );
assert( gamma_move(board, 4, 7, 9) == 0 );
assert( gamma_move(board, 1, 3, 10) == 0 );
assert( gamma_move(board, 1, 9, 0) == 1 );
assert( gamma_move(board, 2, 16, 2) == 1 );
assert( gamma_move(board, 3, 1, 4) == 0 );
assert( gamma_move(board, 4, 11, 16) == 0 );
assert( gamma_move(board, 4, 3, 2) == 1 );
assert( gamma_move(board, 1, 12, 10) == 1 );
assert( gamma_move(board, 2, 14, 2) == 0 );
assert( gamma_move(board, 2, 8, 18) == 1 );
assert( gamma_move(board, 3, 6, 2) == 0 );
assert( gamma_move(board, 3, 0, 14) == 1 );
assert( gamma_move(board, 4, 18, 12) == 0 );
assert( gamma_move(board, 1, 5, 1) == 0 );
assert( gamma_move(board, 2, 18, 2) == 0 );
assert( gamma_move(board, 2, 2, 18) == 1 );
assert( gamma_move(board, 3, 13, 12) == 0 );
assert( gamma_move(board, 4, 0, 1) == 1 );
assert( gamma_move(board, 4, 14, 8) == 1 );
assert( gamma_move(board, 1, 14, 14) == 1 );
assert( gamma_move(board, 1, 11, 11) == 0 );
assert( gamma_move(board, 2, 14, 5) == 1 );
assert( gamma_move(board, 3, 12, 17) == 1 );
assert( gamma_move(board, 3, 8, 0) == 1 );
assert( gamma_golden_move(board, 3, 17, 8) == 0 );
assert( gamma_move(board, 4, 12, 4) == 1 );
assert( gamma_move(board, 4, 3, 11) == 1 );
assert( gamma_move(board, 1, 1, 13) == 1 );
assert( gamma_move(board, 2, 3, 5) == 1 );
assert( gamma_move(board, 3, 3, 12) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 11, 12) == 1 );
assert( gamma_move(board, 4, 14, 2) == 0 );
assert( gamma_move(board, 1, 19, 4) == 0 );
assert( gamma_busy_fields(board, 1) == 23 );
assert( gamma_move(board, 2, 12, 5) == 1 );
assert( gamma_move(board, 2, 9, 3) == 1 );
assert( gamma_move(board, 3, 3, 0) == 1 );
assert( gamma_golden_move(board, 3, 2, 14) == 0 );
assert( gamma_move(board, 4, 4, 0) == 1 );
assert( gamma_move(board, 4, 14, 8) == 0 );


char* board167186173 = gamma_board(board);
assert( board167186173 != NULL );
assert( strcmp(board167186173, 
"1....3......4.....\n"
"..2..2..2.......3.\n"
"11.1.2..1...3.....\n"
".....3.1..222.4...\n"
"3..4.......2.....3\n"
"3.......4.....1...\n"
".1....4.4.4...32.3\n"
"...3..3....4.42224\n"
"...4...3.2.3.3...4\n"
"..423...2.1.1.....\n"
".41....1.......4..\n"
"..3.....4....141..\n"
"..1.......2.......\n"
".........1...1....\n"
"1..2.1......2.24..\n"
".43......2.24.....\n"
"..3..1...2...3..2.\n"
"...4..2.......1.2.\n"
"4.1..34...4...2...\n"
"...34.4.31..2..2.4\n") == 0);
free(board167186173);
board167186173 = NULL;
assert( gamma_move(board, 1, 3, 3) == 1 );
assert( gamma_move(board, 1, 13, 17) == 1 );
assert( gamma_move(board, 2, 17, 6) == 1 );
assert( gamma_move(board, 3, 16, 8) == 1 );
assert( gamma_busy_fields(board, 3) == 23 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 18, 13) == 0 );
assert( gamma_move(board, 4, 9, 2) == 1 );
assert( gamma_move(board, 1, 7, 3) == 1 );
assert( gamma_move(board, 1, 10, 13) == 0 );
assert( gamma_free_fields(board, 1) == 254 );
assert( gamma_move(board, 2, 6, 18) == 1 );
assert( gamma_free_fields(board, 2) == 253 );
assert( gamma_move(board, 3, 12, 0) == 0 );
assert( gamma_busy_fields(board, 3) == 23 );
assert( gamma_move(board, 4, 11, 4) == 0 );
assert( gamma_move(board, 1, 19, 1) == 0 );
assert( gamma_move(board, 1, 2, 17) == 1 );
assert( gamma_free_fields(board, 1) == 252 );
assert( gamma_move(board, 2, 18, 10) == 0 );
assert( gamma_move(board, 3, 12, 4) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 1, 7, 4) == 1 );
assert( gamma_free_fields(board, 1) == 251 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 2, 8) == 0 );
assert( gamma_move(board, 2, 6, 9) == 1 );
assert( gamma_move(board, 3, 9, 9) == 1 );
assert( gamma_move(board, 3, 13, 9) == 1 );
assert( gamma_move(board, 4, 15, 16) == 1 );
assert( gamma_move(board, 1, 5, 13) == 1 );
assert( gamma_move(board, 1, 5, 0) == 1 );


char* board386107734 = gamma_board(board);
assert( board386107734 != NULL );
assert( strcmp(board386107734, 
"1....3......4.....\n"
"..2..22.2.......3.\n"
"1111.2..1...31....\n"
".....3.1..222.44..\n"
"3..4.......2.....3\n"
"3.......4.....1...\n"
".1...14.4.4...32.3\n"
"...3..3....4.42224\n"
"...4...3.2.3.3...4\n"
"..423...2.1.1.....\n"
".41...21.3...3.4..\n"
"..3.....4....1413.\n"
"..1.......2.......\n"
".........1...1...2\n"
"1..2.1......2.24..\n"
".43....1.2.24.....\n"
"..31.1.1.2...3..2.\n"
"...4..2..4....1.2.\n"
"4.1..34...4...2...\n"
"...3414.31..2..2.4\n") == 0);
free(board386107734);
board386107734 = NULL;
assert( gamma_move(board, 2, 17, 16) == 1 );
assert( gamma_busy_fields(board, 2) == 32 );
assert( gamma_move(board, 3, 14, 5) == 0 );
assert( gamma_busy_fields(board, 3) == 25 );
assert( gamma_move(board, 4, 4, 10) == 0 );
assert( gamma_free_fields(board, 4) == 244 );
assert( gamma_move(board, 1, 18, 1) == 0 );
assert( gamma_move(board, 2, 17, 11) == 0 );
assert( gamma_move(board, 3, 14, 7) == 1 );
assert( gamma_move(board, 3, 11, 10) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 16, 1) == 1 );
assert( gamma_free_fields(board, 4) == 241 );
assert( gamma_move(board, 1, 0, 1) == 0 );
assert( gamma_move(board, 3, 13, 2) == 1 );
assert( gamma_move(board, 4, 17, 9) == 1 );
assert( gamma_move(board, 4, 6, 11) == 1 );
assert( gamma_move(board, 2, 8, 0) == 0 );
assert( gamma_move(board, 3, 17, 3) == 1 );
assert( gamma_move(board, 4, 15, 8) == 0 );
assert( gamma_move(board, 1, 13, 4) == 1 );
assert( gamma_move(board, 1, 12, 10) == 0 );
assert( gamma_move(board, 2, 14, 10) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 0, 11) == 1 );
assert( gamma_move(board, 4, 6, 12) == 0 );
assert( gamma_move(board, 1, 0, 0) == 1 );
assert( gamma_move(board, 2, 8, 0) == 0 );
assert( gamma_move(board, 2, 12, 5) == 0 );
assert( gamma_move(board, 3, 17, 16) == 0 );
assert( gamma_golden_move(board, 3, 19, 0) == 0 );
assert( gamma_move(board, 4, 2, 12) == 1 );
assert( gamma_move(board, 4, 2, 1) == 0 );
assert( gamma_move(board, 1, 13, 3) == 0 );
assert( gamma_free_fields(board, 1) == 232 );
assert( gamma_move(board, 2, 0, 2) == 1 );
assert( gamma_move(board, 2, 8, 12) == 1 );
assert( gamma_move(board, 3, 0, 11) == 0 );
assert( gamma_move(board, 4, 14, 9) == 1 );
assert( gamma_move(board, 1, 18, 0) == 0 );
assert( gamma_move(board, 2, 1, 9) == 0 );
assert( gamma_move(board, 2, 12, 15) == 1 );
assert( gamma_move(board, 3, 16, 16) == 1 );
assert( gamma_move(board, 4, 18, 0) == 0 );
assert( gamma_move(board, 4, 17, 14) == 1 );
assert( gamma_move(board, 1, 8, 13) == 0 );
assert( gamma_move(board, 1, 6, 5) == 1 );
assert( gamma_busy_fields(board, 1) == 33 );
assert( gamma_move(board, 2, 16, 0) == 1 );
assert( gamma_move(board, 2, 4, 6) == 1 );
assert( gamma_move(board, 3, 5, 4) == 1 );
assert( gamma_move(board, 3, 14, 15) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 7, 9) == 0 );
assert( gamma_move(board, 4, 9, 19) == 1 );
assert( gamma_move(board, 1, 12, 12) == 1 );
assert( gamma_move(board, 1, 2, 3) == 0 );
assert( gamma_move(board, 2, 6, 2) == 0 );
assert( gamma_move(board, 3, 1, 1) == 1 );
assert( gamma_move(board, 3, 0, 6) == 1 );
assert( gamma_move(board, 4, 0, 11) == 0 );
assert( gamma_move(board, 2, 16, 4) == 1 );
assert( gamma_move(board, 2, 14, 7) == 0 );
assert( gamma_move(board, 3, 15, 11) == 1 );
assert( gamma_busy_fields(board, 3) == 36 );
assert( gamma_move(board, 4, 14, 1) == 0 );
assert( gamma_move(board, 1, 8, 5) == 1 );
assert( gamma_move(board, 2, 3, 11) == 0 );
assert( gamma_move(board, 2, 0, 7) == 1 );
assert( gamma_busy_fields(board, 2) == 40 );
assert( gamma_move(board, 3, 14, 0) == 1 );
assert( gamma_golden_move(board, 3, 16, 14) == 0 );
assert( gamma_move(board, 4, 2, 11) == 1 );
assert( gamma_move(board, 4, 6, 11) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 6, 6) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 2, 10) == 0 );
assert( gamma_move(board, 2, 15, 11) == 0 );
assert( gamma_busy_fields(board, 2) == 40 );
assert( gamma_move(board, 4, 17, 16) == 0 );
assert( gamma_free_fields(board, 4) == 210 );
assert( gamma_move(board, 1, 17, 4) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 7, 9) == 0 );
assert( gamma_move(board, 3, 3, 19) == 1 );
assert( gamma_busy_fields(board, 3) == 38 );
assert( gamma_move(board, 4, 4, 2) == 1 );
assert( gamma_move(board, 1, 3, 4) == 1 );
assert( gamma_move(board, 2, 2, 15) == 1 );
assert( gamma_move(board, 2, 8, 0) == 0 );
assert( gamma_move(board, 3, 16, 15) == 1 );
assert( gamma_move(board, 4, 6, 5) == 0 );
assert( gamma_move(board, 1, 7, 11) == 0 );
assert( gamma_move(board, 1, 13, 13) == 1 );
assert( gamma_move(board, 2, 18, 3) == 0 );
assert( gamma_move(board, 2, 1, 7) == 1 );
assert( gamma_move(board, 3, 6, 12) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 4, 7) == 1 );
assert( gamma_move(board, 4, 1, 0) == 1 );
assert( gamma_busy_fields(board, 4) == 40 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 2, 10) == 0 );
assert( gamma_move(board, 2, 19, 4) == 0 );
assert( gamma_move(board, 2, 7, 11) == 0 );
assert( gamma_free_fields(board, 2) == 200 );
assert( gamma_move(board, 3, 2, 11) == 0 );
assert( gamma_move(board, 4, 15, 1) == 1 );
assert( gamma_move(board, 1, 6, 14) == 1 );
assert( gamma_move(board, 2, 12, 7) == 1 );
assert( gamma_move(board, 2, 10, 4) == 1 );
assert( gamma_move(board, 3, 8, 17) == 0 );
assert( gamma_move(board, 3, 12, 14) == 1 );
assert( gamma_move(board, 4, 1, 8) == 1 );
assert( gamma_move(board, 4, 5, 4) == 0 );
assert( gamma_move(board, 1, 11, 5) == 1 );
assert( gamma_free_fields(board, 1) == 193 );
assert( gamma_move(board, 2, 3, 1) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 3, 4) == 0 );
assert( gamma_move(board, 4, 9, 4) == 0 );
assert( gamma_move(board, 1, 3, 11) == 0 );
assert( gamma_move(board, 2, 14, 0) == 0 );
assert( gamma_move(board, 2, 0, 6) == 0 );
assert( gamma_move(board, 3, 6, 8) == 1 );
assert( gamma_move(board, 3, 6, 13) == 0 );
assert( gamma_free_fields(board, 3) == 191 );
assert( gamma_move(board, 4, 8, 15) == 1 );
assert( gamma_move(board, 1, 17, 3) == 0 );


char* board444542175 = gamma_board(board);
assert( board444542175 != NULL );
assert( strcmp(board444542175, 
"1..3.3...4..4.....\n"
"..2..22.2.......3.\n"
"1111.2..1...31....\n"
".....3.1..222.4432\n"
"3.24....4..22.3.33\n"
"3.....1.4...3.1..4\n"
".1...14.4.4..132.3\n"
"..43..3.2..4142224\n"
"3.44..43.2.3.3.3.4\n"
"..423...2.131.2...\n"
".41...21.3...344.4\n"
".43...3.4....1413.\n"
"221.4.....2.2.3...\n"
"3...2.1..1...1...2\n"
"1..2.11.1..12.24..\n"
".431.3.1.22241..21\n"
"..31.1.1.2...3..23\n"
"2..44.2..4...31.2.\n"
"4312.34...4...244.\n"
"14.3414.31..2.3224\n") == 0);
free(board444542175);
board444542175 = NULL;
assert( gamma_move(board, 2, 6, 3) == 1 );
assert( gamma_move(board, 3, 19, 1) == 0 );
assert( gamma_move(board, 4, 19, 13) == 0 );
assert( gamma_move(board, 4, 10, 17) == 1 );
assert( gamma_move(board, 2, 2, 5) == 1 );
assert( gamma_move(board, 3, 15, 13) == 0 );
assert( gamma_move(board, 3, 10, 19) == 1 );
assert( gamma_busy_fields(board, 3) == 42 );
assert( gamma_golden_move(board, 3, 4, 1) == 0 );
assert( gamma_move(board, 4, 14, 13) == 0 );
assert( gamma_move(board, 4, 1, 15) == 1 );
assert( gamma_move(board, 1, 6, 7) == 1 );
assert( gamma_move(board, 1, 1, 11) == 1 );
assert( gamma_move(board, 2, 19, 17) == 0 );
assert( gamma_move(board, 2, 13, 8) == 0 );
assert( gamma_move(board, 3, 7, 15) == 1 );
assert( gamma_move(board, 4, 2, 0) == 1 );
assert( gamma_free_fields(board, 4) == 181 );
assert( gamma_golden_move(board, 4, 10, 10) == 1 );
assert( gamma_move(board, 1, 4, 4) == 1 );
assert( gamma_move(board, 1, 16, 17) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_golden_move(board, 1, 3, 17) == 0 );
assert( gamma_move(board, 2, 12, 4) == 0 );
assert( gamma_move(board, 3, 6, 12) == 0 );
assert( gamma_free_fields(board, 3) == 179 );
assert( gamma_golden_move(board, 3, 8, 15) == 1 );
assert( gamma_move(board, 4, 16, 14) == 1 );
assert( gamma_move(board, 1, 15, 7) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 16, 13) == 1 );
assert( gamma_move(board, 3, 14, 5) == 0 );
assert( gamma_move(board, 3, 17, 1) == 1 );
assert( gamma_move(board, 4, 0, 17) == 0 );
assert( gamma_move(board, 4, 9, 1) == 1 );
assert( gamma_golden_move(board, 4, 8, 6) == 0 );
assert( gamma_move(board, 1, 12, 1) == 1 );
assert( gamma_busy_fields(board, 1) == 46 );
assert( gamma_move(board, 2, 19, 8) == 0 );
assert( gamma_move(board, 4, 19, 6) == 0 );
assert( gamma_move(board, 4, 15, 10) == 1 );
assert( gamma_busy_fields(board, 4) == 49 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 1, 4, 15) == 1 );
assert( gamma_free_fields(board, 1) == 171 );
assert( gamma_move(board, 2, 12, 5) == 0 );
assert( gamma_move(board, 2, 2, 17) == 0 );
assert( gamma_move(board, 3, 19, 7) == 0 );
assert( gamma_move(board, 3, 4, 1) == 1 );


char* board297940959 = gamma_board(board);
assert( board297940959 != NULL );
assert( strcmp(board297940959, 
"1..3.3...43.4.....\n"
"..2..22.2.......3.\n"
"1111.2..1.4.31..1.\n"
".....3.1..222.4432\n"
"34241..33..22.3.33\n"
"3.....1.4...3.1.44\n"
".1...14.4.4..13223\n"
"..43..3.2..4142224\n"
"3144..43.2.3.3.3.4\n"
"..423...2.431.24..\n"
".41...21.3...344.4\n"
".43...3.4....1413.\n"
"221.4.1...2.2.31..\n"
"3...2.1..1...1...2\n"
"1.22.11.1..12.24..\n"
".43113.1.22241..21\n"
"..31.121.2...3..23\n"
"2..44.2..4...31.2.\n"
"4312334..44.1.2443\n"
"1443414.31..2.3224\n") == 0);
free(board297940959);
board297940959 = NULL;
assert( gamma_move(board, 4, 19, 17) == 0 );
assert( gamma_move(board, 1, 12, 9) == 1 );
assert( gamma_move(board, 1, 6, 2) == 0 );
assert( gamma_move(board, 2, 16, 4) == 0 );
assert( gamma_move(board, 2, 2, 3) == 0 );
assert( gamma_free_fields(board, 2) == 169 );
assert( gamma_move(board, 3, 13, 3) == 0 );
assert( gamma_move(board, 4, 13, 4) == 0 );
assert( gamma_move(board, 4, 12, 10) == 0 );
assert( gamma_move(board, 1, 9, 8) == 1 );
assert( gamma_move(board, 1, 12, 15) == 0 );
assert( gamma_move(board, 2, 16, 3) == 0 );
assert( gamma_move(board, 2, 4, 11) == 1 );
assert( gamma_move(board, 3, 13, 3) == 0 );
assert( gamma_move(board, 3, 7, 16) == 0 );


char* board415198481 = gamma_board(board);
assert( board415198481 != NULL );
assert( strcmp(board415198481, 
"1..3.3...43.4.....\n"
"..2..22.2.......3.\n"
"1111.2..1.4.31..1.\n"
".....3.1..222.4432\n"
"34241..33..22.3.33\n"
"3.....1.4...3.1.44\n"
".1...14.4.4..13223\n"
"..43..3.2..4142224\n"
"31442.43.2.3.3.3.4\n"
"..423...2.431.24..\n"
".41...21.3..1344.4\n"
".43...3.41...1413.\n"
"221.4.1...2.2.31..\n"
"3...2.1..1...1...2\n"
"1.22.11.1..12.24..\n"
".43113.1.22241..21\n"
"..31.121.2...3..23\n"
"2..44.2..4...31.2.\n"
"4312334..44.1.2443\n"
"1443414.31..2.3224\n") == 0);
free(board415198481);
board415198481 = NULL;
assert( gamma_move(board, 4, 3, 1) == 0 );
assert( gamma_move(board, 1, 6, 14) == 0 );
assert( gamma_busy_fields(board, 2) == 49 );
assert( gamma_move(board, 3, 3, 1) == 0 );
assert( gamma_move(board, 3, 4, 19) == 1 );
assert( gamma_free_fields(board, 3) == 166 );
assert( gamma_move(board, 4, 18, 9) == 0 );
assert( gamma_free_fields(board, 4) == 166 );


char* board368523741 = gamma_board(board);
assert( board368523741 != NULL );
assert( strcmp(board368523741, 
"1..333...43.4.....\n"
"..2..22.2.......3.\n"
"1111.2..1.4.31..1.\n"
".....3.1..222.4432\n"
"34241..33..22.3.33\n"
"3.....1.4...3.1.44\n"
".1...14.4.4..13223\n"
"..43..3.2..4142224\n"
"31442.43.2.3.3.3.4\n"
"..423...2.431.24..\n"
".41...21.3..1344.4\n"
".43...3.41...1413.\n"
"221.4.1...2.2.31..\n"
"3...2.1..1...1...2\n"
"1.22.11.1..12.24..\n"
".43113.1.22241..21\n"
"..31.121.2...3..23\n"
"2..44.2..4...31.2.\n"
"4312334..44.1.2443\n"
"1443414.31..2.3224\n") == 0);
free(board368523741);
board368523741 = NULL;
assert( gamma_move(board, 1, 14, 2) == 0 );
assert( gamma_move(board, 1, 7, 6) == 1 );
assert( gamma_move(board, 2, 14, 18) == 1 );
assert( gamma_move(board, 3, 12, 9) == 0 );
assert( gamma_move(board, 3, 2, 11) == 0 );
assert( gamma_free_fields(board, 3) == 164 );
assert( gamma_move(board, 4, 2, 5) == 0 );
assert( gamma_move(board, 4, 2, 6) == 1 );
assert( gamma_move(board, 1, 6, 12) == 0 );
assert( gamma_move(board, 2, 7, 11) == 0 );
assert( gamma_move(board, 3, 18, 1) == 0 );
assert( gamma_busy_fields(board, 3) == 47 );
assert( gamma_move(board, 4, 1, 0) == 0 );
assert( gamma_move(board, 1, 4, 13) == 1 );
assert( gamma_move(board, 2, 9, 11) == 0 );
assert( gamma_free_fields(board, 2) == 162 );
assert( gamma_move(board, 3, 2, 1) == 0 );
assert( gamma_move(board, 3, 8, 14) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 1, 7) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 1, 17, 7) == 0 );
assert( gamma_move(board, 2, 9, 16) == 1 );
assert( gamma_move(board, 2, 3, 9) == 1 );
assert( gamma_move(board, 3, 12, 9) == 0 );
assert( gamma_move(board, 3, 4, 9) == 1 );
assert( gamma_move(board, 4, 4, 6) == 0 );
assert( gamma_move(board, 1, 14, 15) == 0 );
assert( gamma_move(board, 2, 17, 9) == 0 );
assert( gamma_move(board, 3, 11, 5) == 0 );
assert( gamma_move(board, 4, 10, 7) == 0 );
assert( gamma_move(board, 1, 6, 10) == 0 );
assert( gamma_move(board, 1, 7, 11) == 0 );
assert( gamma_free_fields(board, 2) == 159 );
assert( gamma_move(board, 3, 4, 14) == 1 );
assert( gamma_move(board, 3, 13, 19) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 17, 15) == 0 );
assert( gamma_move(board, 1, 14, 5) == 0 );
assert( gamma_move(board, 1, 14, 15) == 0 );
assert( gamma_move(board, 2, 13, 9) == 0 );
assert( gamma_move(board, 4, 7, 2) == 1 );
assert( gamma_move(board, 4, 15, 13) == 0 );
assert( gamma_move(board, 2, 18, 9) == 0 );
assert( gamma_move(board, 2, 5, 4) == 0 );
assert( gamma_busy_fields(board, 2) == 52 );
assert( gamma_move(board, 4, 2, 2) == 1 );
assert( gamma_move(board, 4, 2, 7) == 0 );
assert( gamma_move(board, 1, 13, 0) == 0 );
assert( gamma_move(board, 1, 4, 8) == 0 );
assert( gamma_busy_fields(board, 1) == 51 );
assert( gamma_move(board, 2, 12, 9) == 0 );
assert( gamma_move(board, 2, 6, 2) == 0 );
assert( gamma_golden_move(board, 2, 14, 6) == 0 );
assert( gamma_move(board, 3, 17, 7) == 0 );
assert( gamma_move(board, 1, 14, 11) == 0 );
assert( gamma_move(board, 1, 10, 3) == 0 );
assert( gamma_move(board, 2, 10, 12) == 1 );
assert( gamma_move(board, 3, 12, 4) == 0 );
assert( gamma_move(board, 3, 6, 2) == 0 );
assert( gamma_move(board, 4, 19, 16) == 0 );
assert( gamma_move(board, 4, 5, 17) == 0 );
assert( gamma_move(board, 1, 13, 6) == 0 );
assert( gamma_move(board, 1, 10, 11) == 0 );
assert( gamma_move(board, 2, 2, 11) == 0 );
assert( gamma_free_fields(board, 3) == 69 );
assert( gamma_move(board, 4, 2, 15) == 0 );
assert( gamma_move(board, 4, 5, 1) == 0 );
assert( gamma_move(board, 1, 14, 9) == 0 );
assert( gamma_move(board, 1, 13, 12) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 10, 16) == 0 );
assert( gamma_move(board, 2, 3, 16) == 1 );
assert( gamma_busy_fields(board, 2) == 54 );
assert( gamma_free_fields(board, 2) == 154 );
assert( gamma_move(board, 4, 8, 10) == 0 );
assert( gamma_move(board, 4, 2, 14) == 1 );
assert( gamma_free_fields(board, 4) == 153 );
assert( gamma_golden_move(board, 1, 1, 5) == 0 );
assert( gamma_move(board, 2, 4, 6) == 0 );
assert( gamma_free_fields(board, 2) == 153 );
assert( gamma_move(board, 3, 2, 10) == 0 );
assert( gamma_move(board, 4, 8, 19) == 1 );
assert( gamma_move(board, 4, 11, 3) == 1 );


char* board691981324 = gamma_board(board);
assert( board691981324 != NULL );
assert( strcmp(board691981324, 
"1..333..443.4.....\n"
"..2..22.2.....2.3.\n"
"1111.2..1.4.31..1.\n"
"...2.3.1.2222.4432\n"
"34241..33..22.3.33\n"
"3.4.3.1.4...3.1.44\n"
".1..114.4.4..13223\n"
"..43..3.2.24142224\n"
"31442.43.2.3.3.3.4\n"
"..423...2.431.24..\n"
".4123.21.3..1344.4\n"
".43...3.41...1413.\n"
"221.4.1...2.2.31..\n"
"3.4.2.11.1...1...2\n"
"1.22.11.1..12.24..\n"
".43113.1.22241..21\n"
"..31.121.2.4.3..23\n"
"2.444.24.4...31.2.\n"
"4312334..44.1.2443\n"
"1443414.31..2.3224\n") == 0);
free(board691981324);
board691981324 = NULL;
assert( gamma_move(board, 1, 19, 17) == 0 );
assert( gamma_free_fields(board, 1) == 74 );
assert( gamma_move(board, 3, 1, 17) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 4, 6) == 0 );
assert( gamma_move(board, 4, 2, 14) == 0 );
assert( gamma_move(board, 1, 14, 18) == 0 );
assert( gamma_move(board, 1, 11, 18) == 0 );
assert( gamma_move(board, 2, 10, 16) == 0 );
assert( gamma_busy_fields(board, 2) == 54 );
assert( gamma_free_fields(board, 2) == 151 );
assert( gamma_move(board, 3, 7, 6) == 0 );
assert( gamma_move(board, 4, 8, 8) == 0 );
assert( gamma_move(board, 4, 9, 17) == 1 );
assert( gamma_busy_fields(board, 4) == 56 );
assert( gamma_move(board, 1, 19, 14) == 0 );
assert( gamma_move(board, 2, 13, 2) == 0 );
assert( gamma_move(board, 2, 11, 0) == 1 );
assert( gamma_move(board, 3, 14, 7) == 0 );
assert( gamma_move(board, 4, 5, 13) == 0 );
assert( gamma_move(board, 4, 16, 12) == 0 );
assert( gamma_free_fields(board, 4) == 149 );
assert( gamma_move(board, 1, 5, 1) == 0 );
assert( gamma_move(board, 2, 11, 16) == 0 );
assert( gamma_move(board, 2, 11, 12) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_golden_move(board, 2, 15, 14) == 0 );
assert( gamma_move(board, 3, 15, 6) == 0 );
assert( gamma_move(board, 3, 7, 8) == 1 );
assert( gamma_move(board, 4, 12, 16) == 0 );
assert( gamma_busy_fields(board, 4) == 56 );
assert( gamma_free_fields(board, 4) == 148 );
assert( gamma_move(board, 1, 7, 16) == 0 );
assert( gamma_move(board, 2, 9, 10) == 1 );
assert( gamma_move(board, 3, 13, 12) == 0 );
assert( gamma_move(board, 4, 16, 6) == 1 );
assert( gamma_move(board, 1, 9, 19) == 0 );
assert( gamma_move(board, 2, 14, 13) == 0 );
assert( gamma_move(board, 2, 12, 17) == 0 );
assert( gamma_move(board, 4, 10, 1) == 0 );
assert( gamma_move(board, 1, 14, 10) == 0 );
assert( gamma_move(board, 2, 5, 19) == 0 );
assert( gamma_move(board, 2, 8, 16) == 1 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 4, 18) == 1 );
assert( gamma_move(board, 1, 2, 11) == 0 );
assert( gamma_move(board, 2, 12, 7) == 0 );
assert( gamma_busy_fields(board, 2) == 57 );
assert( gamma_move(board, 3, 14, 11) == 1 );
assert( gamma_move(board, 3, 9, 2) == 0 );
assert( gamma_move(board, 4, 13, 2) == 0 );
assert( gamma_move(board, 1, 13, 3) == 0 );
assert( gamma_move(board, 2, 8, 12) == 0 );
assert( gamma_move(board, 3, 2, 11) == 0 );
assert( gamma_move(board, 4, 10, 12) == 0 );
assert( gamma_move(board, 1, 7, 17) == 1 );
assert( gamma_move(board, 2, 6, 14) == 0 );
assert( gamma_move(board, 2, 16, 6) == 0 );
assert( gamma_move(board, 3, 8, 3) == 1 );
assert( gamma_move(board, 3, 0, 17) == 0 );
assert( gamma_free_fields(board, 3) == 67 );
assert( gamma_move(board, 4, 5, 13) == 0 );
assert( gamma_move(board, 4, 14, 8) == 0 );
assert( gamma_move(board, 1, 1, 17) == 0 );
assert( gamma_free_fields(board, 1) == 141 );
assert( gamma_move(board, 2, 3, 16) == 0 );
assert( gamma_move(board, 3, 10, 0) == 0 );
assert( gamma_move(board, 3, 1, 9) == 0 );
assert( gamma_free_fields(board, 3) == 67 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 13, 17) == 0 );
assert( gamma_move(board, 1, 6, 9) == 0 );
assert( gamma_move(board, 2, 14, 3) == 1 );
assert( gamma_move(board, 2, 5, 18) == 0 );
assert( gamma_move(board, 3, 9, 5) == 0 );
assert( gamma_move(board, 3, 6, 12) == 0 );
assert( gamma_golden_move(board, 3, 16, 17) == 0 );
assert( gamma_move(board, 4, 7, 3) == 0 );
assert( gamma_move(board, 4, 5, 17) == 0 );
assert( gamma_move(board, 1, 14, 5) == 0 );
assert( gamma_move(board, 2, 0, 10) == 1 );
assert( gamma_move(board, 2, 17, 13) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 4, 17, 4) == 0 );
assert( gamma_move(board, 1, 2, 10) == 0 );
assert( gamma_move(board, 2, 19, 6) == 0 );
assert( gamma_move(board, 2, 16, 6) == 0 );
assert( gamma_move(board, 3, 9, 10) == 0 );
assert( gamma_move(board, 3, 9, 6) == 0 );
assert( gamma_move(board, 4, 14, 17) == 1 );
assert( gamma_free_fields(board, 4) == 64 );
assert( gamma_move(board, 1, 4, 14) == 0 );
assert( gamma_free_fields(board, 1) == 138 );
assert( gamma_move(board, 2, 8, 3) == 0 );
assert( gamma_move(board, 2, 3, 0) == 0 );
assert( gamma_move(board, 3, 4, 14) == 0 );
assert( gamma_move(board, 4, 2, 17) == 0 );
assert( gamma_move(board, 1, 3, 1) == 0 );
assert( gamma_move(board, 2, 11, 8) == 1 );
assert( gamma_busy_fields(board, 2) == 60 );
assert( gamma_move(board, 3, 15, 9) == 0 );


char* board268414921 = gamma_board(board);
assert( board268414921 != NULL );
assert( strcmp(board268414921, 
"1..333..443.4.....\n"
"..2.422.2.....2.3.\n"
"1111.2.1144.314.1.\n"
"...2.3.122222.4432\n"
"34241..33..22.3.33\n"
"3.4.3.1.4...3.1.44\n"
".1..114.4.4..13223\n"
"..43..3.2.24142224\n"
"31442.43.2.3.333.4\n"
"2.423...22431.24..\n"
".4123.21.3..1344.4\n"
".43...3341.2.1413.\n"
"221.4.1...2.2.31..\n"
"3.4.2.11.1...1..42\n"
"1.22.11.1..12.24..\n"
".43113.1.22241..21\n"
"..31.12132.4.32.23\n"
"2.444.24.4...31.2.\n"
"4312334..44.1.2443\n"
"1443414.31.22.3224\n") == 0);
free(board268414921);
board268414921 = NULL;
assert( gamma_move(board, 4, 16, 13) == 0 );
assert( gamma_move(board, 4, 2, 16) == 0 );
assert( gamma_golden_move(board, 4, 0, 8) == 0 );
assert( gamma_move(board, 2, 9, 12) == 1 );
assert( gamma_move(board, 3, 3, 11) == 0 );
assert( gamma_move(board, 3, 3, 16) == 0 );
assert( gamma_move(board, 4, 2, 1) == 0 );
assert( gamma_free_fields(board, 4) == 64 );
assert( gamma_move(board, 1, 12, 5) == 0 );
assert( gamma_move(board, 1, 14, 19) == 1 );
assert( gamma_move(board, 2, 13, 0) == 1 );
assert( gamma_move(board, 2, 1, 17) == 0 );
assert( gamma_busy_fields(board, 2) == 62 );
assert( gamma_move(board, 3, 11, 8) == 0 );
assert( gamma_move(board, 4, 12, 6) == 0 );
assert( gamma_move(board, 1, 0, 16) == 1 );
assert( gamma_move(board, 2, 5, 18) == 0 );
assert( gamma_move(board, 2, 6, 16) == 1 );
assert( gamma_free_fields(board, 2) == 132 );
assert( gamma_move(board, 3, 2, 8) == 0 );
assert( gamma_busy_fields(board, 3) == 52 );
assert( gamma_move(board, 4, 8, 6) == 0 );
assert( gamma_move(board, 1, 4, 18) == 0 );
assert( gamma_move(board, 1, 2, 1) == 0 );
assert( gamma_move(board, 2, 10, 16) == 0 );
assert( gamma_move(board, 2, 12, 4) == 0 );
assert( gamma_free_fields(board, 2) == 132 );
assert( gamma_move(board, 4, 3, 10) == 0 );
assert( gamma_move(board, 4, 3, 16) == 0 );
assert( gamma_golden_move(board, 4, 15, 11) == 0 );
assert( gamma_move(board, 1, 6, 12) == 0 );
assert( gamma_move(board, 1, 7, 2) == 0 );
assert( gamma_move(board, 2, 18, 17) == 0 );
assert( gamma_move(board, 3, 1, 5) == 0 );
assert( gamma_move(board, 4, 6, 11) == 0 );
assert( gamma_move(board, 1, 7, 16) == 0 );
assert( gamma_busy_fields(board, 1) == 54 );
assert( gamma_move(board, 2, 5, 9) == 1 );
assert( gamma_move(board, 2, 1, 15) == 0 );


char* board841905245 = gamma_board(board);
assert( board841905245 != NULL );
assert( strcmp(board841905245, 
"1..333..443.4.1...\n"
"..2.422.2.....2.3.\n"
"1111.2.1144.314.1.\n"
"1..2.32122222.4432\n"
"34241..33..22.3.33\n"
"3.4.3.1.4...3.1.44\n"
".1..114.4.4..13223\n"
"..43..3.2224142224\n"
"31442.43.2.3.333.4\n"
"2.423...22431.24..\n"
".4123221.3..1344.4\n"
".43...3341.2.1413.\n"
"221.4.1...2.2.31..\n"
"3.4.2.11.1...1..42\n"
"1.22.11.1..12.24..\n"
".43113.1.22241..21\n"
"..31.12132.4.32.23\n"
"2.444.24.4...31.2.\n"
"4312334..44.1.2443\n"
"1443414.31.2223224\n") == 0);
free(board841905245);
board841905245 = NULL;
assert( gamma_move(board, 3, 19, 1) == 0 );
assert( gamma_move(board, 3, 9, 12) == 0 );
assert( gamma_move(board, 4, 18, 11) == 0 );
assert( gamma_golden_move(board, 4, 17, 2) == 0 );
assert( gamma_move(board, 1, 3, 0) == 0 );
assert( gamma_move(board, 2, 7, 0) == 1 );
assert( gamma_move(board, 3, 8, 14) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 8, 10) == 0 );
assert( gamma_move(board, 1, 18, 1) == 0 );
assert( gamma_move(board, 1, 13, 7) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 7, 16) == 0 );
assert( gamma_move(board, 3, 7, 16) == 0 );
assert( gamma_move(board, 3, 2, 4) == 0 );
assert( gamma_busy_fields(board, 3) == 52 );
assert( gamma_move(board, 4, 8, 5) == 0 );
assert( gamma_golden_move(board, 4, 3, 10) == 0 );
assert( gamma_move(board, 1, 3, 10) == 0 );
assert( gamma_move(board, 2, 0, 3) == 1 );
assert( gamma_move(board, 3, 2, 18) == 0 );
assert( gamma_move(board, 3, 5, 17) == 0 );
assert( gamma_move(board, 4, 5, 4) == 0 );
assert( gamma_move(board, 1, 12, 19) == 0 );
assert( gamma_move(board, 2, 15, 19) == 1 );
assert( gamma_move(board, 3, 5, 7) == 0 );
assert( gamma_move(board, 3, 9, 15) == 1 );
assert( gamma_free_fields(board, 3) == 60 );
assert( gamma_move(board, 1, 17, 6) == 0 );
assert( gamma_move(board, 1, 17, 12) == 0 );
assert( gamma_move(board, 2, 13, 3) == 0 );
assert( gamma_move(board, 2, 5, 8) == 1 );
assert( gamma_move(board, 3, 14, 11) == 0 );
assert( gamma_move(board, 4, 14, 3) == 0 );
assert( gamma_move(board, 1, 3, 15) == 0 );
assert( gamma_move(board, 1, 6, 4) == 1 );


char* board822699843 = gamma_board(board);
assert( board822699843 != NULL );
assert( strcmp(board822699843, 
"1..333..443.4.12..\n"
"..2.422.2.....2.3.\n"
"1111.2.1144.314.1.\n"
"1..2.32122222.4432\n"
"34241..333.22.3.33\n"
"3.4.3.1.4...3.1.44\n"
".1..114.4.4..13223\n"
"..43..3.2224142224\n"
"31442.43.2.3.333.4\n"
"2.423...22431.24..\n"
".4123221.3..1344.4\n"
".43..23341.2.1413.\n"
"221.4.1...2.2131..\n"
"3.4.2.11.1...1..42\n"
"1.22.11.1..12.24..\n"
".4311311.22241..21\n"
"2.31.12132.4.32.23\n"
"2.444.24.4...31.2.\n"
"4312334..44.1.2443\n"
"1443414231.2223224\n") == 0);
free(board822699843);
board822699843 = NULL;
assert( gamma_move(board, 2, 12, 0) == 0 );
assert( gamma_move(board, 2, 10, 17) == 0 );
assert( gamma_busy_fields(board, 2) == 68 );
assert( gamma_move(board, 3, 6, 8) == 0 );
assert( gamma_move(board, 3, 16, 6) == 0 );
assert( gamma_move(board, 4, 1, 13) == 0 );
assert( gamma_move(board, 4, 1, 8) == 0 );
assert( gamma_move(board, 2, 18, 7) == 0 );
assert( gamma_free_fields(board, 2) == 124 );
assert( gamma_move(board, 3, 1, 7) == 0 );
assert( gamma_move(board, 3, 12, 9) == 0 );
assert( gamma_move(board, 4, 10, 8) == 0 );
assert( gamma_free_fields(board, 4) == 63 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 1, 8, 12) == 0 );
assert( gamma_move(board, 2, 4, 15) == 0 );
assert( gamma_move(board, 2, 8, 2) == 1 );


char* board593796485 = gamma_board(board);
assert( board593796485 != NULL );
assert( strcmp(board593796485, 
"1..333..443.4.12..\n"
"..2.422.2.....2.3.\n"
"1111.2.1144.314.1.\n"
"1..2.32122222.4432\n"
"34241..333.22.3.33\n"
"3.4.3.1.4...3.1.44\n"
".1..114.4.4..13223\n"
"..43..3.2224142224\n"
"31442.43.2.3.333.4\n"
"2.423...22431.24..\n"
".4123221.3..1344.4\n"
".43..23341.2.1413.\n"
"221.4.1...2.2131..\n"
"3.4.2.11.1...1..42\n"
"1.22.11.1..12.24..\n"
".4311311.22241..21\n"
"2.31.12132.4.32.23\n"
"2.444.2424...31.2.\n"
"4312334..44.1.2443\n"
"1443414231.2223224\n") == 0);
free(board593796485);
board593796485 = NULL;
assert( gamma_move(board, 3, 5, 9) == 0 );
assert( gamma_move(board, 3, 15, 9) == 0 );
assert( gamma_move(board, 4, 2, 5) == 0 );
assert( gamma_move(board, 1, 15, 10) == 0 );
assert( gamma_move(board, 1, 16, 7) == 1 );
assert( gamma_move(board, 2, 6, 3) == 0 );
assert( gamma_move(board, 3, 15, 11) == 0 );
assert( gamma_move(board, 3, 0, 8) == 0 );
assert( gamma_free_fields(board, 3) == 56 );
assert( gamma_move(board, 4, 1, 6) == 1 );
assert( gamma_move(board, 1, 19, 16) == 0 );
assert( gamma_move(board, 1, 6, 4) == 0 );
assert( gamma_move(board, 2, 19, 6) == 0 );
assert( gamma_move(board, 3, 7, 7) == 1 );
assert( gamma_move(board, 4, 18, 17) == 0 );
assert( gamma_move(board, 4, 17, 9) == 0 );
assert( gamma_move(board, 1, 10, 9) == 1 );
assert( gamma_move(board, 1, 7, 15) == 0 );
assert( gamma_move(board, 2, 8, 8) == 0 );
assert( gamma_move(board, 2, 9, 12) == 0 );
assert( gamma_move(board, 3, 7, 18) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 9, 8) == 0 );
assert( gamma_move(board, 1, 17, 4) == 0 );
assert( gamma_move(board, 1, 14, 6) == 1 );
assert( gamma_move(board, 3, 8, 12) == 0 );
assert( gamma_move(board, 3, 9, 16) == 0 );
assert( gamma_move(board, 4, 2, 2) == 0 );
assert( gamma_move(board, 4, 0, 18) == 0 );
assert( gamma_busy_fields(board, 4) == 60 );
assert( gamma_move(board, 1, 5, 17) == 0 );
assert( gamma_golden_move(board, 1, 15, 16) == 1 );
assert( gamma_move(board, 3, 18, 9) == 0 );
assert( gamma_move(board, 4, 9, 16) == 0 );
assert( gamma_move(board, 2, 13, 11) == 0 );
assert( gamma_move(board, 2, 14, 10) == 0 );
assert( gamma_move(board, 3, 2, 0) == 0 );
assert( gamma_move(board, 4, 11, 16) == 0 );
assert( gamma_move(board, 1, 6, 9) == 0 );
assert( gamma_move(board, 1, 17, 13) == 0 );


char* board914061612 = gamma_board(board);
assert( board914061612 != NULL );
assert( strcmp(board914061612, 
"1..333..443.4.12..\n"
"..2.422.2.....2.3.\n"
"1111.2.1144.314.1.\n"
"1..2.32122222.4132\n"
"34241..333.22.3.33\n"
"3.4.3.1.4...3.1.44\n"
".1..114.4.4..13223\n"
"..43..3.2224142224\n"
"31442.43.2.3.333.4\n"
"2.423...22431.24..\n"
".4123221.31.1344.4\n"
".43..23341.2.1413.\n"
"221.4.13..2.21311.\n"
"344.2.11.1...11.42\n"
"1.22.11.1..12.24..\n"
".4311311.22241..21\n"
"2.31.12132.4.32.23\n"
"2.444.2424...31.2.\n"
"4312334..44.1.2443\n"
"1443414231.2223224\n") == 0);
free(board914061612);
board914061612 = NULL;
assert( gamma_move(board, 2, 10, 12) == 0 );
assert( gamma_move(board, 2, 10, 10) == 0 );
assert( gamma_golden_move(board, 2, 16, 14) == 1 );
assert( gamma_move(board, 3, 12, 7) == 0 );
assert( gamma_busy_fields(board, 3) == 54 );
assert( gamma_move(board, 4, 15, 15) == 0 );
assert( gamma_move(board, 4, 7, 9) == 0 );
assert( gamma_move(board, 1, 2, 17) == 0 );
assert( gamma_move(board, 1, 2, 15) == 0 );
assert( gamma_free_fields(board, 1) == 65 );
assert( gamma_move(board, 2, 2, 11) == 0 );
assert( gamma_move(board, 2, 13, 5) == 1 );
assert( gamma_move(board, 3, 6, 5) == 0 );
assert( gamma_move(board, 3, 3, 11) == 0 );
assert( gamma_move(board, 4, 7, 3) == 0 );
assert( gamma_move(board, 1, 11, 8) == 0 );
assert( gamma_busy_fields(board, 1) == 60 );
assert( gamma_move(board, 2, 11, 12) == 0 );
assert( gamma_free_fields(board, 2) == 117 );
assert( gamma_move(board, 3, 1, 8) == 0 );
assert( gamma_move(board, 3, 15, 0) == 0 );
assert( gamma_move(board, 4, 5, 9) == 0 );
assert( gamma_free_fields(board, 4) == 57 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 1, 10, 17) == 0 );
assert( gamma_move(board, 1, 8, 13) == 0 );
assert( gamma_move(board, 2, 2, 15) == 0 );
assert( gamma_move(board, 2, 12, 1) == 0 );


char* board567524480 = gamma_board(board);
assert( board567524480 != NULL );
assert( strcmp(board567524480, 
"1..333..443.4.12..\n"
"..2.422.2.....2.3.\n"
"1111.2.1144.314.1.\n"
"1..2.32122222.4132\n"
"34241..333.22.3.33\n"
"3.4.3.1.4...3.1.24\n"
".1..114.4.4..13223\n"
"..43..3.2224142224\n"
"31442.43.2.3.333.4\n"
"2.423...22431.24..\n"
".4123221.31.1344.4\n"
".43..23341.2.1413.\n"
"221.4.13..2.21311.\n"
"344.2.11.1...11.42\n"
"1.22.11.1..12224..\n"
".4311311.22241..21\n"
"2.31.12132.4.32.23\n"
"2.444.2424...31.2.\n"
"4312334..44.1.2443\n"
"1443414231.2223224\n") == 0);
free(board567524480);
board567524480 = NULL;
assert( gamma_move(board, 3, 15, 4) == 0 );
assert( gamma_move(board, 4, 11, 5) == 0 );
assert( gamma_free_fields(board, 4) == 57 );
assert( gamma_move(board, 1, 12, 0) == 0 );
assert( gamma_free_fields(board, 1) == 64 );
assert( gamma_move(board, 3, 16, 7) == 0 );
assert( gamma_move(board, 4, 11, 5) == 0 );
assert( gamma_move(board, 4, 2, 14) == 0 );
assert( gamma_move(board, 1, 17, 17) == 1 );
assert( gamma_move(board, 1, 0, 14) == 0 );
assert( gamma_move(board, 2, 7, 17) == 0 );
assert( gamma_free_fields(board, 2) == 116 );
assert( gamma_free_fields(board, 3) == 53 );
assert( gamma_move(board, 4, 4, 0) == 0 );
assert( gamma_move(board, 4, 2, 14) == 0 );
assert( gamma_move(board, 1, 2, 1) == 0 );
assert( gamma_move(board, 1, 16, 11) == 0 );
assert( gamma_busy_fields(board, 1) == 61 );
assert( gamma_move(board, 2, 10, 7) == 0 );
assert( gamma_free_fields(board, 2) == 116 );
assert( gamma_move(board, 3, 7, 5) == 0 );
assert( gamma_move(board, 3, 6, 18) == 0 );
assert( gamma_move(board, 4, 0, 7) == 0 );
assert( gamma_move(board, 4, 16, 18) == 0 );
assert( gamma_move(board, 1, 8, 3) == 0 );
assert( gamma_move(board, 1, 1, 2) == 0 );
assert( gamma_free_fields(board, 2) == 116 );
assert( gamma_move(board, 3, 13, 16) == 0 );
assert( gamma_move(board, 4, 5, 1) == 0 );
assert( gamma_move(board, 4, 2, 17) == 0 );
assert( gamma_busy_fields(board, 4) == 58 );
assert( gamma_move(board, 2, 19, 11) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 19, 16) == 0 );
assert( gamma_move(board, 3, 9, 19) == 0 );
assert( gamma_free_fields(board, 3) == 53 );
assert( gamma_move(board, 4, 12, 4) == 0 );
assert( gamma_move(board, 1, 14, 1) == 0 );
assert( gamma_move(board, 1, 4, 2) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 18, 15) == 0 );


char* board460193059 = gamma_board(board);
assert( board460193059 != NULL );
assert( strcmp(board460193059, 
"1..333..443.4.12..\n"
"..2.422.2.....2.3.\n"
"1111.2.1144.314.11\n"
"1..2.32122222.4132\n"
"34241..333.22.3.33\n"
"3.4.3.1.4...3.1.24\n"
".1..114.4.4..13223\n"
"..43..3.2224142224\n"
"31442.43.2.3.333.4\n"
"2.423...22431.24..\n"
".4123221.31.1344.4\n"
".43..23341.2.1413.\n"
"221.4.13..2.21311.\n"
"344.2.11.1...11.42\n"
"1.22.11.1..12224..\n"
".4311311.22241..21\n"
"2.31.12132.4.32.23\n"
"2.444.2424...31.2.\n"
"4312334..44.1.2443\n"
"1443414231.2223224\n") == 0);
free(board460193059);
board460193059 = NULL;
assert( gamma_move(board, 3, 9, 0) == 0 );
assert( gamma_move(board, 3, 3, 14) == 1 );


char* board131706293 = gamma_board(board);
assert( board131706293 != NULL );
assert( strcmp(board131706293, 
"1..333..443.4.12..\n"
"..2.422.2.....2.3.\n"
"1111.2.1144.314.11\n"
"1..2.32122222.4132\n"
"34241..333.22.3.33\n"
"3.433.1.4...3.1.24\n"
".1..114.4.4..13223\n"
"..43..3.2224142224\n"
"31442.43.2.3.333.4\n"
"2.423...22431.24..\n"
".4123221.31.1344.4\n"
".43..23341.2.1413.\n"
"221.4.13..2.21311.\n"
"344.2.11.1...11.42\n"
"1.22.11.1..12224..\n"
".4311311.22241..21\n"
"2.31.12132.4.32.23\n"
"2.444.2424...31.2.\n"
"4312334..44.1.2443\n"
"1443414231.2223224\n") == 0);
free(board131706293);
board131706293 = NULL;
assert( gamma_move(board, 4, 7, 12) == 0 );
assert( gamma_busy_fields(board, 1) == 61 );
assert( gamma_move(board, 2, 8, 0) == 0 );
assert( gamma_move(board, 3, 5, 19) == 0 );
assert( gamma_move(board, 4, 11, 5) == 0 );
assert( gamma_move(board, 4, 9, 6) == 0 );
assert( gamma_busy_fields(board, 4) == 58 );
assert( gamma_move(board, 1, 15, 10) == 0 );
assert( gamma_move(board, 1, 6, 17) == 1 );
assert( gamma_move(board, 2, 11, 2) == 1 );
assert( gamma_move(board, 2, 10, 18) == 1 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 11, 12) == 0 );
assert( gamma_move(board, 3, 6, 14) == 0 );
assert( gamma_free_fields(board, 3) == 51 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 3, 12) == 0 );
assert( gamma_move(board, 4, 6, 12) == 0 );
assert( gamma_move(board, 1, 16, 9) == 0 );
assert( gamma_move(board, 1, 13, 19) == 1 );
assert( gamma_move(board, 2, 8, 18) == 0 );
assert( gamma_move(board, 2, 16, 3) == 0 );
assert( gamma_move(board, 3, 10, 1) == 0 );
assert( gamma_move(board, 3, 14, 5) == 0 );
assert( gamma_free_fields(board, 3) == 51 );
assert( gamma_move(board, 4, 5, 3) == 0 );
assert( gamma_move(board, 4, 17, 2) == 0 );
assert( gamma_move(board, 1, 19, 17) == 0 );
assert( gamma_free_fields(board, 1) == 62 );
assert( gamma_move(board, 2, 7, 11) == 0 );
assert( gamma_move(board, 2, 13, 6) == 0 );
assert( gamma_move(board, 3, 7, 9) == 0 );
assert( gamma_move(board, 3, 10, 4) == 0 );
assert( gamma_move(board, 4, 1, 4) == 0 );
assert( gamma_move(board, 4, 14, 19) == 0 );
assert( gamma_move(board, 1, 16, 13) == 0 );
assert( gamma_move(board, 1, 1, 3) == 0 );
assert( gamma_golden_move(board, 1, 12, 3) == 0 );
assert( gamma_move(board, 2, 18, 1) == 0 );
assert( gamma_move(board, 3, 1, 8) == 0 );
assert( gamma_move(board, 3, 9, 13) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 6, 5) == 0 );
assert( gamma_move(board, 1, 7, 17) == 0 );
assert( gamma_move(board, 2, 5, 7) == 1 );
assert( gamma_move(board, 2, 5, 16) == 0 );
assert( gamma_move(board, 3, 9, 8) == 0 );
assert( gamma_move(board, 3, 5, 19) == 0 );
assert( gamma_move(board, 4, 4, 17) == 1 );
assert( gamma_move(board, 1, 11, 13) == 0 );
assert( gamma_move(board, 2, 1, 7) == 0 );
assert( gamma_move(board, 2, 3, 10) == 0 );
assert( gamma_move(board, 3, 1, 2) == 1 );
assert( gamma_busy_fields(board, 3) == 56 );


char* board401677907 = gamma_board(board);
assert( board401677907 != NULL );
assert( strcmp(board401677907, 
"1..333..443.4112..\n"
"..2.422.2.2...2.3.\n"
"11114211144.314.11\n"
"1..2.32122222.4132\n"
"34241..333.22.3.33\n"
"3.433.1.4...3.1.24\n"
".1..114.4.4..13223\n"
"..43..3.2224142224\n"
"31442.43.2.3.333.4\n"
"2.423...22431.24..\n"
".4123221.31.1344.4\n"
".43..23341.2.1413.\n"
"221.4213..2.21311.\n"
"344.2.11.1...11.42\n"
"1.22.11.1..12224..\n"
".4311311.22241..21\n"
"2.31.12132.4.32.23\n"
"23444.2424.2.31.2.\n"
"4312334..44.1.2443\n"
"1443414231.2223224\n") == 0);
free(board401677907);
board401677907 = NULL;
assert( gamma_move(board, 4, 17, 15) == 0 );
assert( gamma_move(board, 1, 17, 3) == 0 );
assert( gamma_free_fields(board, 1) == 60 );
assert( gamma_move(board, 3, 16, 7) == 0 );
assert( gamma_move(board, 3, 17, 5) == 0 );
assert( gamma_free_fields(board, 3) == 50 );
assert( gamma_move(board, 4, 8, 10) == 0 );
assert( gamma_move(board, 1, 1, 8) == 0 );
assert( gamma_busy_fields(board, 1) == 63 );
assert( gamma_move(board, 2, 13, 8) == 0 );
assert( gamma_move(board, 3, 5, 16) == 0 );


char* board623500943 = gamma_board(board);
assert( board623500943 != NULL );
assert( strcmp(board623500943, 
"1..333..443.4112..\n"
"..2.422.2.2...2.3.\n"
"11114211144.314.11\n"
"1..2.32122222.4132\n"
"34241..333.22.3.33\n"
"3.433.1.4...3.1.24\n"
".1..114.4.4..13223\n"
"..43..3.2224142224\n"
"31442.43.2.3.333.4\n"
"2.423...22431.24..\n"
".4123221.31.1344.4\n"
".43..23341.2.1413.\n"
"221.4213..2.21311.\n"
"344.2.11.1...11.42\n"
"1.22.11.1..12224..\n"
".4311311.22241..21\n"
"2.31.12132.4.32.23\n"
"23444.2424.2.31.2.\n"
"4312334..44.1.2443\n"
"1443414231.2223224\n") == 0);
free(board623500943);
board623500943 = NULL;
assert( gamma_move(board, 4, 8, 3) == 0 );
assert( gamma_busy_fields(board, 4) == 59 );
assert( gamma_move(board, 1, 18, 11) == 0 );
assert( gamma_move(board, 1, 0, 10) == 0 );
assert( gamma_move(board, 2, 14, 15) == 0 );
assert( gamma_move(board, 3, 14, 5) == 0 );
assert( gamma_move(board, 3, 5, 7) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 1, 13) == 0 );
assert( gamma_move(board, 4, 1, 16) == 1 );
assert( gamma_move(board, 1, 1, 7) == 0 );
assert( gamma_move(board, 2, 5, 17) == 0 );
assert( gamma_busy_fields(board, 2) == 74 );
assert( gamma_move(board, 3, 6, 5) == 0 );
assert( gamma_busy_fields(board, 3) == 56 );


char* board223912634 = gamma_board(board);
assert( board223912634 != NULL );
assert( strcmp(board223912634, 
"1..333..443.4112..\n"
"..2.422.2.2...2.3.\n"
"11114211144.314.11\n"
"14.2.32122222.4132\n"
"34241..333.22.3.33\n"
"3.433.1.4...3.1.24\n"
".1..114.4.4..13223\n"
"..43..3.2224142224\n"
"31442.43.2.3.333.4\n"
"2.423...22431.24..\n"
".4123221.31.1344.4\n"
".43..23341.2.1413.\n"
"221.4213..2.21311.\n"
"344.2.11.1...11.42\n"
"1.22.11.1..12224..\n"
".4311311.22241..21\n"
"2.31.12132.4.32.23\n"
"23444.2424.2.31.2.\n"
"4312334..44.1.2443\n"
"1443414231.2223224\n") == 0);
free(board223912634);
board223912634 = NULL;
assert( gamma_move(board, 4, 2, 11) == 0 );
assert( gamma_move(board, 1, 6, 3) == 0 );
assert( gamma_move(board, 1, 16, 7) == 0 );
assert( gamma_move(board, 2, 3, 17) == 0 );
assert( gamma_move(board, 2, 8, 17) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 6, 10) == 0 );
assert( gamma_move(board, 3, 7, 10) == 1 );
assert( gamma_move(board, 4, 2, 12) == 0 );
assert( gamma_move(board, 1, 5, 1) == 0 );
assert( gamma_move(board, 1, 10, 9) == 0 );
assert( gamma_move(board, 2, 2, 12) == 0 );
assert( gamma_golden_move(board, 2, 5, 15) == 0 );
assert( gamma_move(board, 3, 13, 3) == 0 );
assert( gamma_move(board, 3, 2, 13) == 0 );
assert( gamma_move(board, 4, 4, 13) == 0 );
assert( gamma_move(board, 1, 2, 3) == 0 );
assert( gamma_move(board, 2, 5, 10) == 1 );
assert( gamma_move(board, 3, 12, 16) == 0 );
assert( gamma_move(board, 3, 3, 4) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 13, 11) == 0 );
assert( gamma_move(board, 1, 3, 14) == 0 );
assert( gamma_move(board, 2, 3, 0) == 0 );
assert( gamma_golden_move(board, 2, 14, 0) == 0 );
assert( gamma_move(board, 3, 14, 10) == 0 );
assert( gamma_move(board, 3, 5, 5) == 0 );
assert( gamma_golden_move(board, 3, 9, 3) == 0 );
assert( gamma_move(board, 4, 15, 5) == 0 );
assert( gamma_move(board, 4, 17, 16) == 0 );


char* board751861462 = gamma_board(board);
assert( board751861462 != NULL );
assert( strcmp(board751861462, 
"1..333..443.4112..\n"
"..2.422.2.2...2.3.\n"
"11114211144.314.11\n"
"14.2.32122222.4132\n"
"34241..333.22.3.33\n"
"3.433.1.4...3.1.24\n"
".1..114.4.4..13223\n"
"..43..3.2224142224\n"
"31442.43.2.3.333.4\n"
"2.4232.322431.24..\n"
".4123221.31.1344.4\n"
".43..23341.2.1413.\n"
"221.4213..2.21311.\n"
"344.2.11.1...11.42\n"
"1.22.11.1..12224..\n"
".4311311.22241..21\n"
"2.31.12132.4.32.23\n"
"23444.2424.2.31.2.\n"
"4312334..44.1.2443\n"
"1443414231.2223224\n") == 0);
free(board751861462);
board751861462 = NULL;
assert( gamma_move(board, 1, 11, 1) == 1 );
assert( gamma_move(board, 1, 13, 0) == 0 );
assert( gamma_move(board, 2, 2, 10) == 0 );
assert( gamma_move(board, 2, 5, 17) == 0 );
assert( gamma_free_fields(board, 2) == 66 );
assert( gamma_move(board, 3, 3, 1) == 0 );
assert( gamma_move(board, 3, 16, 1) == 0 );
assert( gamma_move(board, 4, 12, 10) == 0 );
assert( gamma_move(board, 1, 18, 7) == 0 );
assert( gamma_move(board, 2, 14, 3) == 0 );
assert( gamma_move(board, 3, 8, 12) == 0 );
assert( gamma_move(board, 3, 15, 11) == 0 );
assert( gamma_move(board, 4, 5, 4) == 0 );
assert( gamma_move(board, 1, 12, 12) == 0 );
assert( gamma_move(board, 1, 3, 10) == 0 );
assert( gamma_move(board, 2, 3, 9) == 0 );
assert( gamma_move(board, 2, 16, 16) == 0 );
assert( gamma_move(board, 3, 11, 12) == 0 );
assert( gamma_move(board, 4, 5, 1) == 0 );
assert( gamma_move(board, 1, 1, 8) == 0 );
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_move(board, 2, 3, 18) == 1 );
assert( gamma_move(board, 3, 10, 16) == 0 );
assert( gamma_move(board, 3, 17, 16) == 0 );
assert( gamma_move(board, 4, 11, 16) == 0 );
assert( gamma_move(board, 1, 18, 12) == 0 );
assert( gamma_busy_fields(board, 1) == 64 );
assert( gamma_move(board, 2, 14, 7) == 0 );
assert( gamma_move(board, 2, 12, 16) == 0 );
assert( gamma_move(board, 4, 16, 10) == 1 );
assert( gamma_move(board, 1, 1, 8) == 0 );
assert( gamma_move(board, 3, 6, 15) == 1 );
assert( gamma_move(board, 3, 11, 18) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 6, 3) == 0 );
assert( gamma_move(board, 4, 12, 5) == 0 );


char* board234130706 = gamma_board(board);
assert( board234130706 != NULL );
assert( strcmp(board234130706, 
"1..333..443.4112..\n"
"..22422.2.2...2.3.\n"
"11114211144.314.11\n"
"14.2.32122222.4132\n"
"34241.3333.22.3.33\n"
"3.433.1.4...3.1.24\n"
".1..114.4.4..13223\n"
"..43..3.2224142224\n"
"31442.43.2.3.333.4\n"
"2.4232.322431.244.\n"
".4123221.31.1344.4\n"
".43..23341.2.1413.\n"
"221.4213..2.21311.\n"
"344.2.11.1...11.42\n"
"1.22.11.1..12224..\n"
".4311311.22241..21\n"
"2.31.12132.4.32.23\n"
"23444.2424.2.31.2.\n"
"4312334..4411.2443\n"
"1443414231.2223224\n") == 0);
free(board234130706);
board234130706 = NULL;
assert( gamma_move(board, 1, 5, 4) == 0 );
assert( gamma_move(board, 2, 6, 10) == 1 );
assert( gamma_move(board, 3, 3, 15) == 0 );
assert( gamma_move(board, 3, 7, 15) == 0 );
assert( gamma_free_fields(board, 3) == 46 );
assert( gamma_move(board, 4, 3, 4) == 0 );
assert( gamma_move(board, 1, 19, 11) == 0 );
assert( gamma_free_fields(board, 1) == 55 );
assert( gamma_move(board, 2, 11, 14) == 1 );
assert( gamma_move(board, 3, 19, 16) == 0 );
assert( gamma_move(board, 3, 1, 1) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 2, 12) == 0 );
assert( gamma_move(board, 1, 10, 4) == 0 );
assert( gamma_move(board, 1, 3, 6) == 0 );
assert( gamma_move(board, 2, 19, 7) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 8, 10) == 0 );
assert( gamma_move(board, 1, 7, 8) == 0 );
assert( gamma_move(board, 2, 15, 7) == 0 );
assert( gamma_move(board, 2, 14, 13) == 0 );
assert( gamma_move(board, 3, 12, 7) == 0 );
assert( gamma_free_fields(board, 3) == 45 );
assert( gamma_move(board, 4, 1, 13) == 0 );
assert( gamma_move(board, 2, 11, 10) == 0 );
assert( gamma_move(board, 3, 13, 2) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 1, 18, 15) == 0 );
assert( gamma_move(board, 2, 12, 4) == 0 );
assert( gamma_move(board, 3, 18, 17) == 0 );
assert( gamma_move(board, 3, 10, 14) == 0 );
assert( gamma_move(board, 4, 14, 1) == 0 );
assert( gamma_move(board, 4, 14, 10) == 0 );
assert( gamma_move(board, 1, 18, 15) == 0 );
assert( gamma_move(board, 1, 15, 1) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 15, 1) == 0 );
assert( gamma_free_fields(board, 2) == 64 );
assert( gamma_move(board, 3, 3, 12) == 0 );
assert( gamma_move(board, 3, 6, 19) == 1 );
assert( gamma_move(board, 4, 14, 5) == 0 );
assert( gamma_move(board, 4, 1, 3) == 1 );
assert( gamma_busy_fields(board, 4) == 62 );
assert( gamma_move(board, 1, 8, 16) == 0 );
assert( gamma_move(board, 2, 19, 17) == 0 );
assert( gamma_move(board, 3, 3, 4) == 0 );
assert( gamma_move(board, 3, 14, 18) == 0 );
assert( gamma_move(board, 4, 10, 17) == 0 );
assert( gamma_move(board, 1, 7, 3) == 0 );
assert( gamma_move(board, 1, 15, 11) == 0 );
assert( gamma_free_fields(board, 1) == 55 );
assert( gamma_move(board, 2, 10, 13) == 0 );
assert( gamma_move(board, 3, 2, 5) == 0 );
assert( gamma_busy_fields(board, 3) == 59 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 18, 11) == 0 );
assert( gamma_move(board, 4, 6, 7) == 0 );
assert( gamma_move(board, 1, 9, 8) == 0 );
assert( gamma_move(board, 1, 11, 7) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 15, 5) == 0 );
assert( gamma_move(board, 2, 5, 6) == 1 );
assert( gamma_busy_fields(board, 2) == 79 );
assert( gamma_move(board, 3, 12, 1) == 0 );
assert( gamma_move(board, 4, 1, 2) == 0 );
assert( gamma_move(board, 4, 16, 0) == 0 );
assert( gamma_move(board, 1, 9, 0) == 0 );
assert( gamma_move(board, 1, 1, 14) == 1 );
assert( gamma_move(board, 2, 13, 14) == 1 );
assert( gamma_move(board, 2, 8, 3) == 0 );
assert( gamma_move(board, 3, 6, 15) == 0 );
assert( gamma_move(board, 3, 5, 15) == 1 );
assert( gamma_golden_move(board, 3, 9, 1) == 0 );
assert( gamma_move(board, 4, 6, 11) == 0 );
assert( gamma_move(board, 4, 17, 12) == 0 );
assert( gamma_move(board, 1, 18, 17) == 0 );
assert( gamma_move(board, 2, 16, 13) == 0 );
assert( gamma_move(board, 4, 11, 16) == 0 );
assert( gamma_move(board, 4, 3, 14) == 0 );
assert( gamma_move(board, 1, 17, 17) == 0 );
assert( gamma_move(board, 1, 2, 8) == 0 );
assert( gamma_free_fields(board, 1) == 51 );
assert( gamma_move(board, 2, 4, 8) == 1 );


char* board696038643 = gamma_board(board);
assert( board696038643 != NULL );
assert( strcmp(board696038643, 
"1..3333.443.4112..\n"
"..22422.2.2...2.3.\n"
"11114211144.314.11\n"
"14.2.32122222.4132\n"
"3424133333.22.3.33\n"
"31433.1.4..2321.24\n"
".1..114.4.4..13223\n"
"..43..3.2224142224\n"
"31442.43.2.3.333.4\n"
"2.42322322431.244.\n"
".4123221.31.1344.4\n"
".43.223341.2.1413.\n"
"221.4213..2.21311.\n"
"344.2211.1...11.42\n"
"1.22.11.1..12224..\n"
".4311311.22241..21\n"
"2431.12132.4.32.23\n"
"23444.2424.2.31.2.\n"
"4312334..4411.2443\n"
"1443414231.2223224\n") == 0);
free(board696038643);
board696038643 = NULL;
assert( gamma_move(board, 3, 10, 3) == 1 );
assert( gamma_move(board, 3, 17, 9) == 0 );
assert( gamma_move(board, 4, 2, 10) == 0 );
assert( gamma_free_fields(board, 4) == 43 );
assert( gamma_move(board, 1, 7, 9) == 0 );
assert( gamma_busy_fields(board, 1) == 65 );
assert( gamma_move(board, 2, 8, 12) == 0 );
assert( gamma_move(board, 3, 11, 3) == 0 );
assert( gamma_move(board, 3, 0, 7) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 10, 17) == 0 );
assert( gamma_move(board, 4, 8, 3) == 0 );
assert( gamma_free_fields(board, 4) == 43 );
assert( gamma_move(board, 1, 14, 9) == 0 );
assert( gamma_move(board, 1, 13, 13) == 0 );
assert( gamma_move(board, 2, 2, 17) == 0 );
assert( gamma_move(board, 3, 7, 17) == 0 );
assert( gamma_move(board, 3, 10, 18) == 0 );
assert( gamma_move(board, 4, 8, 11) == 0 );
assert( gamma_busy_fields(board, 4) == 62 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 1, 6, 15) == 0 );
assert( gamma_move(board, 1, 14, 16) == 0 );


char* board460997711 = gamma_board(board);
assert( board460997711 != NULL );
assert( strcmp(board460997711, 
"1..3333.443.4112..\n"
"..22422.2.2...2.3.\n"
"11114211144.314.11\n"
"14.2.32122222.4132\n"
"3424133333.22.3.33\n"
"31433.1.4..2321.24\n"
".1..114.4.4..13223\n"
"..43..3.2224142224\n"
"31442.43.2.3.333.4\n"
"2.42322322431.244.\n"
".4123221.31.1344.4\n"
".43.223341.2.1413.\n"
"221.4213..2.21311.\n"
"344.2211.1...11.42\n"
"1.22.11.1..12224..\n"
".4311311.22241..21\n"
"2431.1213234.32.23\n"
"23444.2424.2.31.2.\n"
"4312334..4411.2443\n"
"1443414231.2223224\n") == 0);
free(board460997711);
board460997711 = NULL;
assert( gamma_move(board, 2, 10, 13) == 0 );
assert( gamma_move(board, 3, 12, 0) == 0 );
assert( gamma_move(board, 3, 5, 18) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_golden_move(board, 3, 7, 2) == 0 );
assert( gamma_move(board, 4, 13, 18) == 0 );
assert( gamma_free_fields(board, 4) == 43 );
assert( gamma_move(board, 1, 5, 9) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 19, 17) == 0 );
assert( gamma_free_fields(board, 2) == 59 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 12, 17) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 1, 13, 12) == 0 );
assert( gamma_move(board, 2, 3, 10) == 0 );
assert( gamma_move(board, 3, 14, 16) == 0 );
assert( gamma_move(board, 4, 6, 15) == 0 );
assert( gamma_move(board, 4, 1, 13) == 0 );
assert( gamma_move(board, 1, 4, 14) == 0 );


char* board430130289 = gamma_board(board);
assert( board430130289 != NULL );
assert( strcmp(board430130289, 
"1..3333.443.4112..\n"
"..22422.2.2...2.3.\n"
"11114211144.314.11\n"
"14.2.32122222.4132\n"
"3424133333.22.3.33\n"
"31433.1.4..2321.24\n"
".1..114.4.4..13223\n"
"..43..3.2224142224\n"
"31442.43.2.3.333.4\n"
"2.42322322431.244.\n"
".4123221.31.1344.4\n"
".43.223341.2.1413.\n"
"221.4213..2.21311.\n"
"344.2211.1...11.42\n"
"1.22.11.1..12224..\n"
".4311311.22241..21\n"
"2431.1213234.32.23\n"
"23444.2424.2.31.2.\n"
"4312334..4411.2443\n"
"1443414231.2223224\n") == 0);
free(board430130289);
board430130289 = NULL;
assert( gamma_move(board, 2, 6, 9) == 0 );
assert( gamma_move(board, 2, 0, 6) == 0 );
assert( gamma_move(board, 3, 18, 17) == 0 );
assert( gamma_move(board, 3, 13, 12) == 0 );
assert( gamma_move(board, 4, 17, 19) == 0 );
assert( gamma_move(board, 1, 1, 8) == 0 );
assert( gamma_move(board, 2, 16, 4) == 0 );
assert( gamma_move(board, 2, 3, 7) == 0 );
assert( gamma_move(board, 3, 19, 17) == 0 );
assert( gamma_move(board, 3, 12, 13) == 1 );
assert( gamma_move(board, 4, 10, 17) == 0 );
assert( gamma_busy_fields(board, 4) == 62 );
assert( gamma_move(board, 1, 11, 12) == 0 );
assert( gamma_move(board, 2, 3, 4) == 0 );
assert( gamma_move(board, 3, 9, 11) == 0 );
assert( gamma_move(board, 3, 3, 6) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 6, 11) == 0 );
assert( gamma_move(board, 4, 12, 17) == 0 );
assert( gamma_move(board, 1, 7, 2) == 0 );
assert( gamma_move(board, 2, 14, 11) == 0 );
assert( gamma_move(board, 2, 6, 14) == 0 );


char* board212820854 = gamma_board(board);
assert( board212820854 != NULL );
assert( strcmp(board212820854, 
"1..3333.443.4112..\n"
"..22422.2.2...2.3.\n"
"11114211144.314.11\n"
"14.2.32122222.4132\n"
"3424133333.22.3.33\n"
"31433.1.4..2321.24\n"
".1..114.4.4.313223\n"
"..43..3.2224142224\n"
"31442.43.2.3.333.4\n"
"2.42322322431.244.\n"
".4123221.31.1344.4\n"
".43.223341.2.1413.\n"
"221.4213..2.21311.\n"
"344.2211.1...11.42\n"
"1.22.11.1..12224..\n"
".4311311.22241..21\n"
"2431.1213234.32.23\n"
"23444.2424.2.31.2.\n"
"4312334..4411.2443\n"
"1443414231.2223224\n") == 0);
free(board212820854);
board212820854 = NULL;
assert( gamma_move(board, 3, 2, 12) == 0 );
assert( gamma_move(board, 4, 1, 1) == 0 );
assert( gamma_busy_fields(board, 4) == 62 );
assert( gamma_move(board, 2, 5, 17) == 0 );
assert( gamma_free_fields(board, 2) == 59 );
assert( gamma_move(board, 3, 1, 8) == 0 );
assert( gamma_move(board, 4, 13, 5) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 2, 6, 8) == 0 );
assert( gamma_move(board, 2, 3, 9) == 0 );
assert( gamma_move(board, 3, 9, 0) == 0 );
assert( gamma_move(board, 4, 13, 9) == 0 );
assert( gamma_move(board, 1, 14, 10) == 0 );
assert( gamma_move(board, 1, 7, 18) == 1 );
assert( gamma_busy_fields(board, 2) == 81 );
assert( gamma_move(board, 3, 2, 16) == 0 );
assert( gamma_move(board, 3, 4, 6) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 11, 16) == 0 );
assert( gamma_move(board, 4, 9, 12) == 0 );
assert( gamma_move(board, 1, 14, 13) == 0 );
assert( gamma_move(board, 1, 6, 14) == 0 );
assert( gamma_free_fields(board, 1) == 50 );
assert( gamma_move(board, 2, 10, 6) == 1 );
assert( gamma_busy_fields(board, 2) == 82 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 9, 16) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 10, 15) == 0 );
assert( gamma_move(board, 4, 13, 2) == 0 );
assert( gamma_move(board, 1, 3, 12) == 0 );
assert( gamma_move(board, 1, 0, 10) == 0 );
assert( gamma_free_fields(board, 1) == 49 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 3, 6) == 1 );
assert( gamma_move(board, 2, 4, 13) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 13, 11) == 0 );
assert( gamma_move(board, 3, 17, 19) == 0 );
assert( gamma_move(board, 4, 1, 7) == 0 );
assert( gamma_move(board, 4, 3, 1) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 1, 7, 6) == 0 );
assert( gamma_move(board, 1, 7, 12) == 0 );
assert( gamma_move(board, 2, 15, 10) == 0 );
assert( gamma_free_fields(board, 2) == 87 );
assert( gamma_move(board, 3, 12, 7) == 0 );
assert( gamma_busy_fields(board, 3) == 62 );
assert( gamma_move(board, 4, 18, 15) == 0 );
assert( gamma_move(board, 4, 13, 4) == 0 );
assert( gamma_move(board, 1, 2, 13) == 1 );
assert( gamma_move(board, 2, 11, 8) == 0 );
assert( gamma_free_fields(board, 2) == 86 );
assert( gamma_move(board, 3, 9, 11) == 0 );
assert( gamma_busy_fields(board, 3) == 62 );
assert( gamma_move(board, 4, 13, 11) == 0 );
assert( gamma_move(board, 2, 5, 3) == 0 );
assert( gamma_move(board, 2, 1, 13) == 0 );
assert( gamma_golden_move(board, 2, 17, 4) == 0 );
assert( gamma_move(board, 3, 18, 9) == 0 );
assert( gamma_move(board, 4, 14, 5) == 0 );
assert( gamma_move(board, 4, 10, 8) == 0 );
assert( gamma_move(board, 1, 18, 15) == 0 );
assert( gamma_free_fields(board, 1) == 48 );


char* board152372054 = gamma_board(board);
assert( board152372054 != NULL );
assert( strcmp(board152372054, 
"1..3333.443.4112..\n"
"..2242212.2...2.3.\n"
"11114211144.314.11\n"
"14.2.32122222.4132\n"
"3424133333.22.3.33\n"
"31433.1.4..2321.24\n"
".11.114.4.4.313223\n"
"..43..3.2224142224\n"
"31442.43.2.3.333.4\n"
"2.42322322431.244.\n"
".4123221.31.1344.4\n"
".43.223341.2.1413.\n"
"221.4213..2.21311.\n"
"34422211.12..11.42\n"
"1.22.11.1..12224..\n"
".4311311.22241..21\n"
"2431.1213234.32.23\n"
"23444.2424.2.31.2.\n"
"4312334..4411.2443\n"
"1443414231.2223224\n") == 0);
free(board152372054);
board152372054 = NULL;
assert( gamma_move(board, 2, 11, 10) == 0 );
assert( gamma_move(board, 2, 10, 4) == 0 );
assert( gamma_move(board, 3, 16, 18) == 0 );
assert( gamma_move(board, 3, 4, 12) == 1 );
assert( gamma_free_fields(board, 3) == 40 );
assert( gamma_move(board, 4, 16, 9) == 1 );
assert( gamma_busy_fields(board, 4) == 63 );
assert( gamma_move(board, 1, 7, 9) == 0 );
assert( gamma_move(board, 2, 5, 10) == 0 );
assert( gamma_move(board, 2, 11, 0) == 0 );
assert( gamma_move(board, 3, 16, 1) == 0 );
assert( gamma_move(board, 4, 16, 2) == 0 );
assert( gamma_move(board, 1, 15, 13) == 0 );
assert( gamma_busy_fields(board, 1) == 67 );
assert( gamma_move(board, 2, 1, 8) == 0 );
assert( gamma_move(board, 2, 6, 17) == 0 );
assert( gamma_move(board, 3, 1, 7) == 0 );
assert( gamma_move(board, 3, 11, 3) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 11, 18) == 1 );
assert( gamma_move(board, 4, 15, 9) == 0 );
assert( gamma_move(board, 1, 5, 10) == 0 );
assert( gamma_move(board, 1, 10, 18) == 0 );
assert( gamma_move(board, 2, 1, 8) == 0 );
assert( gamma_golden_move(board, 2, 4, 3) == 0 );
assert( gamma_move(board, 4, 7, 6) == 0 );
assert( gamma_move(board, 1, 5, 17) == 0 );
assert( gamma_move(board, 2, 9, 11) == 0 );
assert( gamma_move(board, 3, 2, 17) == 0 );
assert( gamma_move(board, 3, 16, 8) == 0 );
assert( gamma_move(board, 4, 15, 10) == 0 );
assert( gamma_free_fields(board, 4) == 40 );
assert( gamma_move(board, 1, 14, 15) == 0 );
assert( gamma_free_fields(board, 1) == 47 );
assert( gamma_move(board, 2, 17, 9) == 0 );
assert( gamma_move(board, 2, 8, 10) == 0 );
assert( gamma_move(board, 3, 9, 8) == 0 );
assert( gamma_move(board, 3, 15, 5) == 0 );
assert( gamma_move(board, 4, 17, 17) == 0 );
assert( gamma_move(board, 1, 14, 5) == 0 );
assert( gamma_move(board, 2, 0, 10) == 0 );
assert( gamma_move(board, 2, 0, 3) == 0 );
assert( gamma_move(board, 3, 18, 1) == 0 );
assert( gamma_move(board, 3, 2, 14) == 0 );
assert( gamma_busy_fields(board, 3) == 63 );
assert( gamma_move(board, 1, 2, 17) == 0 );
assert( gamma_move(board, 1, 3, 17) == 0 );
assert( gamma_move(board, 2, 12, 7) == 0 );
assert( gamma_move(board, 2, 14, 12) == 0 );
assert( gamma_move(board, 3, 3, 15) == 0 );
assert( gamma_move(board, 3, 15, 15) == 1 );
assert( gamma_move(board, 4, 19, 7) == 0 );
assert( gamma_busy_fields(board, 4) == 64 );
assert( gamma_free_fields(board, 4) == 40 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 1, 19, 2) == 0 );
assert( gamma_move(board, 2, 18, 1) == 0 );
assert( gamma_move(board, 2, 10, 7) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 17, 10) == 1 );
assert( gamma_move(board, 3, 13, 11) == 0 );
assert( gamma_move(board, 4, 11, 10) == 0 );
assert( gamma_move(board, 1, 4, 14) == 0 );
assert( gamma_move(board, 1, 12, 13) == 0 );
assert( gamma_busy_fields(board, 1) == 67 );


char* board698025245 = gamma_board(board);
assert( board698025245 != NULL );
assert( strcmp(board698025245, 
"1..3333.443.4112..\n"
"..2242212.24..2.3.\n"
"11114211144.314.11\n"
"14.2.32122222.4132\n"
"3424133333.22.3333\n"
"31433.1.4..2321.24\n"
".11.114.4.4.313223\n"
"..433.3.2224142224\n"
"31442.43.2.3.333.4\n"
"2.42322322431.2443\n"
".4123221.31.134444\n"
".43.223341.2.1413.\n"
"221.4213..2.21311.\n"
"34422211.12..11.42\n"
"1.22.11.1..12224..\n"
".4311311.22241..21\n"
"2431.1213234.32.23\n"
"23444.2424.2.31.2.\n"
"4312334..4411.2443\n"
"1443414231.2223224\n") == 0);
free(board698025245);
board698025245 = NULL;
assert( gamma_move(board, 2, 1, 13) == 0 );
assert( gamma_move(board, 2, 6, 4) == 0 );
assert( gamma_busy_fields(board, 2) == 83 );
assert( gamma_move(board, 3, 8, 3) == 0 );


char* board709932093 = gamma_board(board);
assert( board709932093 != NULL );
assert( strcmp(board709932093, 
"1..3333.443.4112..\n"
"..2242212.24..2.3.\n"
"11114211144.314.11\n"
"14.2.32122222.4132\n"
"3424133333.22.3333\n"
"31433.1.4..2321.24\n"
".11.114.4.4.313223\n"
"..433.3.2224142224\n"
"31442.43.2.3.333.4\n"
"2.42322322431.2443\n"
".4123221.31.134444\n"
".43.223341.2.1413.\n"
"221.4213..2.21311.\n"
"34422211.12..11.42\n"
"1.22.11.1..12224..\n"
".4311311.22241..21\n"
"2431.1213234.32.23\n"
"23444.2424.2.31.2.\n"
"4312334..4411.2443\n"
"1443414231.2223224\n") == 0);
free(board709932093);
board709932093 = NULL;
assert( gamma_move(board, 4, 19, 16) == 0 );
assert( gamma_move(board, 4, 4, 17) == 0 );
assert( gamma_move(board, 1, 8, 0) == 0 );
assert( gamma_move(board, 1, 6, 0) == 0 );


char* board235225508 = gamma_board(board);
assert( board235225508 != NULL );
assert( strcmp(board235225508, 
"1..3333.443.4112..\n"
"..2242212.24..2.3.\n"
"11114211144.314.11\n"
"14.2.32122222.4132\n"
"3424133333.22.3333\n"
"31433.1.4..2321.24\n"
".11.114.4.4.313223\n"
"..433.3.2224142224\n"
"31442.43.2.3.333.4\n"
"2.42322322431.2443\n"
".4123221.31.134444\n"
".43.223341.2.1413.\n"
"221.4213..2.21311.\n"
"34422211.12..11.42\n"
"1.22.11.1..12224..\n"
".4311311.22241..21\n"
"2431.1213234.32.23\n"
"23444.2424.2.31.2.\n"
"4312334..4411.2443\n"
"1443414231.2223224\n") == 0);
free(board235225508);
board235225508 = NULL;
assert( gamma_move(board, 2, 6, 11) == 0 );
assert( gamma_move(board, 3, 4, 8) == 0 );
assert( gamma_busy_fields(board, 3) == 65 );
assert( gamma_move(board, 4, 19, 7) == 0 );
assert( gamma_move(board, 4, 2, 3) == 0 );
assert( gamma_move(board, 1, 3, 4) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 3, 3) == 0 );
assert( gamma_move(board, 3, 6, 11) == 0 );
assert( gamma_move(board, 3, 4, 17) == 0 );
assert( gamma_move(board, 4, 10, 14) == 1 );


gamma_delete(board);

    return 0;
}
