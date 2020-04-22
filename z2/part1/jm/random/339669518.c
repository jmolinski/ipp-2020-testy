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
uuid: 339669518
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(18, 21, 6, 41);
assert( board != NULL );


assert( gamma_move(board, 1, 9, 12) == 1 );
assert( gamma_move(board, 2, 2, 15) == 1 );
assert( gamma_move(board, 2, 8, 6) == 1 );
assert( gamma_move(board, 3, 7, 8) == 1 );
assert( gamma_move(board, 3, 7, 1) == 1 );
assert( gamma_busy_fields(board, 3) == 2 );
assert( gamma_move(board, 4, 10, 5) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 9, 16) == 1 );
assert( gamma_move(board, 5, 3, 12) == 1 );
assert( gamma_move(board, 6, 17, 16) == 1 );
assert( gamma_move(board, 1, 16, 5) == 1 );
assert( gamma_move(board, 2, 17, 7) == 1 );
assert( gamma_move(board, 2, 4, 16) == 1 );
assert( gamma_move(board, 3, 17, 15) == 1 );
assert( gamma_move(board, 4, 4, 0) == 1 );
assert( gamma_move(board, 5, 14, 10) == 1 );
assert( gamma_move(board, 5, 17, 7) == 0 );


char* board327174985 = gamma_board(board);
assert( board327174985 != NULL );
assert( strcmp(board327174985, 
"..................\n"
"..................\n"
"..................\n"
"..................\n"
"....2....5.......6\n"
"..2..............3\n"
"..................\n"
"..................\n"
"...5.....1........\n"
"..................\n"
"..............5...\n"
"..................\n"
".......3..........\n"
".................2\n"
"........2.........\n"
"..........4.....1.\n"
"..................\n"
"..................\n"
"..................\n"
".......3..........\n"
"....4.............\n") == 0);
free(board327174985);
board327174985 = NULL;
assert( gamma_move(board, 6, 17, 7) == 0 );
assert( gamma_move(board, 6, 16, 7) == 1 );
assert( gamma_move(board, 1, 7, 6) == 1 );
assert( gamma_move(board, 1, 12, 6) == 1 );
assert( gamma_free_fields(board, 1) == 360 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 0, 19) == 1 );
assert( gamma_move(board, 2, 11, 7) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 10, 15) == 1 );
assert( gamma_move(board, 4, 10, 13) == 1 );
assert( gamma_free_fields(board, 4) == 356 );
assert( gamma_move(board, 5, 13, 13) == 1 );
assert( gamma_move(board, 5, 5, 9) == 1 );
assert( gamma_move(board, 6, 11, 13) == 1 );
assert( gamma_move(board, 6, 16, 17) == 1 );
assert( gamma_move(board, 1, 12, 11) == 1 );
assert( gamma_move(board, 1, 14, 3) == 1 );
assert( gamma_move(board, 2, 2, 4) == 1 );
assert( gamma_busy_fields(board, 2) == 7 );
assert( gamma_move(board, 3, 10, 4) == 1 );
assert( gamma_move(board, 3, 8, 11) == 1 );
assert( gamma_busy_fields(board, 3) == 6 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 14, 1) == 1 );
assert( gamma_move(board, 4, 7, 11) == 1 );
assert( gamma_move(board, 5, 1, 1) == 1 );
assert( gamma_move(board, 6, 3, 15) == 1 );
assert( gamma_move(board, 1, 3, 17) == 1 );
assert( gamma_free_fields(board, 1) == 342 );
assert( gamma_move(board, 2, 2, 3) == 1 );
assert( gamma_move(board, 2, 17, 11) == 1 );
assert( gamma_move(board, 3, 9, 13) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 2, 4) == 0 );
assert( gamma_move(board, 4, 2, 1) == 1 );
assert( gamma_move(board, 5, 3, 17) == 0 );
assert( gamma_move(board, 5, 2, 17) == 1 );
assert( gamma_move(board, 6, 3, 13) == 1 );
assert( gamma_move(board, 6, 15, 10) == 1 );
assert( gamma_move(board, 1, 2, 2) == 1 );
assert( gamma_move(board, 1, 1, 1) == 0 );
assert( gamma_busy_fields(board, 1) == 8 );
assert( gamma_move(board, 2, 6, 11) == 1 );
assert( gamma_busy_fields(board, 2) == 10 );
assert( gamma_free_fields(board, 2) == 333 );
assert( gamma_move(board, 3, 9, 4) == 1 );
assert( gamma_move(board, 3, 8, 19) == 1 );
assert( gamma_busy_fields(board, 3) == 9 );
assert( gamma_free_fields(board, 3) == 331 );
assert( gamma_golden_move(board, 3, 6, 7) == 0 );
assert( gamma_move(board, 4, 10, 16) == 1 );
assert( gamma_move(board, 5, 10, 2) == 1 );
assert( gamma_move(board, 5, 11, 3) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 7, 6) == 0 );
assert( gamma_move(board, 2, 13, 0) == 1 );
assert( gamma_move(board, 3, 3, 17) == 0 );
assert( gamma_move(board, 3, 11, 5) == 1 );


char* board262107427 = gamma_board(board);
assert( board262107427 != NULL );
assert( strcmp(board262107427, 
"..................\n"
"2.......3.........\n"
"..................\n"
"..51............6.\n"
"....2....54......6\n"
"..26......3......3\n"
"..................\n"
"...6.....346.5....\n"
"...5.....1........\n"
"......243...1....2\n"
"..............56..\n"
".....5............\n"
".......3..........\n"
"...........2....62\n"
".......12...1.....\n"
"..........43....1.\n"
"..2......33.......\n"
"..2........5..1...\n"
"..1.......5.......\n"
".54....3......4...\n"
"....4........2....\n") == 0);
free(board262107427);
board262107427 = NULL;
assert( gamma_move(board, 4, 0, 11) == 1 );
assert( gamma_move(board, 4, 11, 5) == 0 );
assert( gamma_move(board, 5, 6, 1) == 1 );
assert( gamma_move(board, 5, 13, 9) == 1 );
assert( gamma_move(board, 6, 11, 16) == 1 );
assert( gamma_move(board, 6, 1, 20) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 1, 12) == 1 );
assert( gamma_move(board, 2, 5, 14) == 1 );
assert( gamma_move(board, 2, 2, 19) == 1 );
assert( gamma_move(board, 3, 12, 17) == 1 );
assert( gamma_move(board, 4, 14, 11) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 11, 11) == 1 );
assert( gamma_move(board, 5, 13, 20) == 1 );
assert( gamma_free_fields(board, 5) == 314 );
assert( gamma_move(board, 6, 13, 14) == 1 );


char* board962981905 = gamma_board(board);
assert( board962981905 != NULL );
assert( strcmp(board962981905, 
".6...........5....\n"
"2.2.....3.........\n"
"..................\n"
"..51........3...6.\n"
"....2....546.....6\n"
"..26......3......3\n"
".....2.......6....\n"
"...6.....346.5....\n"
".1.5.....1........\n"
"4.....243..51.4..2\n"
"..............56..\n"
".....5.......5....\n"
".......3..........\n"
"...........2....62\n"
".......12...1.....\n"
"..........43....1.\n"
"..2......33.......\n"
"..2........5..1...\n"
"..1.......5.......\n"
".54...53......4...\n"
"....4........2....\n") == 0);
free(board962981905);
board962981905 = NULL;
assert( gamma_move(board, 1, 0, 5) == 1 );
assert( gamma_move(board, 1, 9, 3) == 1 );
assert( gamma_move(board, 2, 12, 20) == 1 );
assert( gamma_move(board, 3, 8, 1) == 1 );
assert( gamma_move(board, 3, 4, 5) == 1 );
assert( gamma_move(board, 4, 16, 18) == 1 );
assert( gamma_busy_fields(board, 4) == 10 );
assert( gamma_move(board, 5, 14, 8) == 1 );
assert( gamma_move(board, 6, 17, 4) == 1 );
assert( gamma_move(board, 6, 5, 20) == 1 );
assert( gamma_free_fields(board, 6) == 304 );
assert( gamma_move(board, 1, 8, 5) == 1 );
assert( gamma_move(board, 1, 13, 12) == 1 );
assert( gamma_move(board, 2, 0, 16) == 1 );
assert( gamma_move(board, 3, 15, 9) == 1 );
assert( gamma_move(board, 3, 14, 18) == 1 );
assert( gamma_golden_move(board, 3, 13, 11) == 0 );
assert( gamma_move(board, 4, 14, 1) == 0 );
assert( gamma_move(board, 4, 6, 8) == 1 );
assert( gamma_move(board, 5, 9, 16) == 0 );
assert( gamma_move(board, 5, 14, 10) == 0 );
assert( gamma_free_fields(board, 5) == 298 );
assert( gamma_move(board, 6, 1, 13) == 1 );
assert( gamma_move(board, 1, 10, 8) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 4, 18) == 1 );
assert( gamma_move(board, 2, 5, 2) == 1 );
assert( gamma_golden_move(board, 2, 4, 9) == 0 );
assert( gamma_move(board, 3, 8, 12) == 1 );
assert( gamma_move(board, 4, 2, 20) == 1 );
assert( gamma_move(board, 5, 8, 9) == 1 );
assert( gamma_move(board, 5, 17, 3) == 1 );
assert( gamma_move(board, 6, 10, 19) == 1 );
assert( gamma_busy_fields(board, 6) == 14 );
assert( gamma_move(board, 1, 16, 13) == 1 );
assert( gamma_move(board, 1, 9, 16) == 0 );
assert( gamma_move(board, 2, 3, 5) == 1 );
assert( gamma_move(board, 2, 5, 12) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 8, 2) == 1 );
assert( gamma_move(board, 3, 17, 3) == 0 );
assert( gamma_move(board, 4, 14, 1) == 0 );
assert( gamma_move(board, 4, 12, 2) == 1 );
assert( gamma_free_fields(board, 4) == 284 );
assert( gamma_move(board, 5, 15, 8) == 1 );
assert( gamma_move(board, 5, 3, 1) == 1 );
assert( gamma_free_fields(board, 5) == 282 );
assert( gamma_move(board, 6, 9, 9) == 1 );
assert( gamma_move(board, 1, 13, 17) == 1 );
assert( gamma_busy_fields(board, 1) == 16 );
assert( gamma_move(board, 2, 0, 11) == 0 );
assert( gamma_move(board, 2, 8, 14) == 1 );
assert( gamma_move(board, 3, 1, 17) == 1 );
assert( gamma_move(board, 3, 5, 7) == 1 );
assert( gamma_move(board, 4, 6, 15) == 1 );
assert( gamma_busy_fields(board, 4) == 14 );
assert( gamma_move(board, 5, 17, 4) == 0 );
assert( gamma_move(board, 5, 4, 0) == 0 );
assert( gamma_busy_fields(board, 5) == 18 );
assert( gamma_move(board, 1, 13, 2) == 1 );
assert( gamma_free_fields(board, 2) == 275 );
assert( gamma_move(board, 3, 12, 14) == 1 );
assert( gamma_move(board, 3, 17, 14) == 1 );
assert( gamma_free_fields(board, 3) == 273 );
assert( gamma_busy_fields(board, 4) == 14 );
assert( gamma_move(board, 5, 17, 6) == 1 );
assert( gamma_move(board, 5, 16, 17) == 0 );
assert( gamma_move(board, 1, 6, 12) == 1 );
assert( gamma_move(board, 2, 12, 17) == 0 );
assert( gamma_move(board, 2, 8, 11) == 0 );
assert( gamma_busy_fields(board, 2) == 20 );
assert( gamma_move(board, 3, 14, 1) == 0 );
assert( gamma_move(board, 4, 8, 9) == 0 );
assert( gamma_move(board, 5, 2, 11) == 1 );
assert( gamma_move(board, 5, 4, 4) == 1 );
assert( gamma_busy_fields(board, 5) == 21 );
assert( gamma_move(board, 6, 17, 4) == 0 );
assert( gamma_move(board, 6, 11, 11) == 0 );
assert( gamma_move(board, 1, 14, 2) == 1 );
assert( gamma_move(board, 1, 10, 13) == 0 );
assert( gamma_busy_fields(board, 1) == 19 );
assert( gamma_move(board, 2, 2, 19) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 7, 6) == 0 );
assert( gamma_move(board, 3, 15, 10) == 0 );
assert( gamma_move(board, 4, 4, 6) == 1 );
assert( gamma_move(board, 4, 13, 0) == 0 );
assert( gamma_busy_fields(board, 4) == 15 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 9, 2) == 1 );
assert( gamma_move(board, 5, 14, 5) == 1 );
assert( gamma_busy_fields(board, 5) == 23 );
assert( gamma_move(board, 1, 3, 19) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 2, 1) == 0 );
assert( gamma_move(board, 2, 16, 5) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 13, 6) == 1 );
assert( gamma_move(board, 4, 8, 3) == 1 );
assert( gamma_move(board, 5, 20, 0) == 0 );
assert( gamma_move(board, 5, 6, 8) == 0 );
assert( gamma_move(board, 6, 0, 10) == 1 );
assert( gamma_move(board, 6, 10, 0) == 1 );
assert( gamma_move(board, 1, 13, 15) == 1 );
assert( gamma_move(board, 1, 10, 11) == 1 );
assert( gamma_move(board, 2, 10, 15) == 0 );
assert( gamma_move(board, 3, 10, 6) == 1 );
assert( gamma_busy_fields(board, 3) == 23 );
assert( gamma_move(board, 4, 11, 11) == 0 );
assert( gamma_free_fields(board, 4) == 257 );
assert( gamma_move(board, 5, 6, 8) == 0 );
assert( gamma_move(board, 6, 20, 11) == 0 );
assert( gamma_move(board, 6, 10, 5) == 0 );
assert( gamma_move(board, 1, 18, 1) == 0 );
assert( gamma_move(board, 2, 0, 16) == 0 );
assert( gamma_busy_fields(board, 2) == 20 );
assert( gamma_golden_move(board, 2, 13, 11) == 0 );
assert( gamma_move(board, 3, 4, 9) == 1 );
assert( gamma_move(board, 3, 8, 17) == 1 );
assert( gamma_free_fields(board, 3) == 255 );
assert( gamma_move(board, 4, 10, 2) == 0 );
assert( gamma_move(board, 4, 17, 1) == 1 );
assert( gamma_free_fields(board, 4) == 254 );
assert( gamma_move(board, 5, 20, 10) == 0 );
assert( gamma_move(board, 5, 4, 19) == 1 );
assert( gamma_move(board, 6, 3, 4) == 1 );
assert( gamma_move(board, 1, 4, 6) == 0 );
assert( gamma_move(board, 2, 2, 0) == 1 );
assert( gamma_move(board, 2, 15, 19) == 1 );
assert( gamma_golden_move(board, 2, 6, 17) == 0 );
assert( gamma_move(board, 3, 0, 10) == 0 );
assert( gamma_move(board, 3, 4, 15) == 1 );
assert( gamma_busy_fields(board, 3) == 26 );
assert( gamma_move(board, 4, 18, 13) == 0 );
assert( gamma_move(board, 4, 5, 1) == 1 );
assert( gamma_golden_move(board, 4, 6, 17) == 0 );
assert( gamma_move(board, 6, 1, 15) == 1 );
assert( gamma_move(board, 6, 12, 4) == 1 );
assert( gamma_move(board, 1, 9, 14) == 1 );
assert( gamma_move(board, 1, 4, 2) == 1 );
assert( gamma_move(board, 2, 4, 6) == 0 );
assert( gamma_move(board, 2, 1, 18) == 1 );
assert( gamma_move(board, 3, 3, 16) == 1 );
assert( gamma_move(board, 3, 7, 2) == 1 );
assert( gamma_free_fields(board, 3) == 241 );
assert( gamma_golden_move(board, 3, 6, 7) == 0 );
assert( gamma_move(board, 4, 9, 8) == 1 );
assert( gamma_move(board, 5, 12, 2) == 0 );
assert( gamma_golden_move(board, 5, 9, 15) == 0 );
assert( gamma_move(board, 6, 8, 19) == 0 );
assert( gamma_move(board, 1, 0, 5) == 0 );


char* board715650051 = gamma_board(board);
assert( board715650051 != NULL );
assert( strcmp(board715650051, 
".64..6......25....\n"
"2.215...3.6....2..\n"
".2..2.........3.4.\n"
".351....3...31..6.\n"
"2..32....546.....6\n"
".6263.4...3..1...3\n"
".....2..21..36...3\n"
".6.6.....346.5..1.\n"
".1.5.21.31...1....\n"
"4.5...243.151.4..2\n"
"6.............56..\n"
"....35..56...5.3..\n"
"......43.41...55..\n"
".....3.....2....62\n"
"....4..12.3.13...5\n"
"1..23...1.43..5.1.\n"
"..265....33.6....6\n"
"..2.....41.5..1..5\n"
"..1.12.3355.411...\n"
".545.4533.....4..4\n"
"..2.4.....6..2....\n") == 0);
free(board715650051);
board715650051 = NULL;
assert( gamma_move(board, 2, 10, 4) == 0 );
assert( gamma_move(board, 3, 20, 10) == 0 );
assert( gamma_move(board, 3, 1, 17) == 0 );
assert( gamma_move(board, 4, 8, 0) == 1 );
assert( gamma_move(board, 4, 3, 3) == 1 );
assert( gamma_move(board, 5, 15, 0) == 1 );
assert( gamma_move(board, 5, 8, 9) == 0 );
assert( gamma_free_fields(board, 5) == 237 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 1, 16) == 1 );
assert( gamma_move(board, 6, 9, 10) == 1 );
assert( gamma_free_fields(board, 6) == 235 );
assert( gamma_move(board, 1, 20, 6) == 0 );
assert( gamma_move(board, 2, 4, 16) == 0 );
assert( gamma_move(board, 3, 14, 2) == 0 );
assert( gamma_move(board, 3, 7, 5) == 1 );
assert( gamma_free_fields(board, 3) == 234 );
assert( gamma_move(board, 4, 0, 6) == 1 );
assert( gamma_move(board, 4, 7, 19) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 15, 14) == 1 );
assert( gamma_move(board, 5, 10, 17) == 1 );
assert( gamma_move(board, 6, 17, 12) == 1 );
assert( gamma_move(board, 6, 14, 9) == 1 );
assert( gamma_move(board, 1, 4, 0) == 0 );
assert( gamma_move(board, 1, 14, 17) == 1 );
assert( gamma_move(board, 2, 9, 6) == 1 );
assert( gamma_move(board, 2, 11, 1) == 1 );
assert( gamma_move(board, 3, 4, 8) == 1 );
assert( gamma_move(board, 3, 6, 12) == 0 );
assert( gamma_move(board, 4, 18, 6) == 0 );
assert( gamma_move(board, 4, 12, 2) == 0 );
assert( gamma_move(board, 5, 4, 1) == 1 );
assert( gamma_move(board, 6, 7, 0) == 1 );
assert( gamma_busy_fields(board, 6) == 25 );
assert( gamma_move(board, 1, 18, 15) == 0 );
assert( gamma_move(board, 1, 6, 0) == 1 );
assert( gamma_move(board, 2, 0, 9) == 1 );
assert( gamma_move(board, 3, 9, 1) == 1 );
assert( gamma_busy_fields(board, 3) == 31 );
assert( gamma_move(board, 4, 6, 16) == 1 );
assert( gamma_move(board, 5, 13, 5) == 1 );
assert( gamma_move(board, 5, 6, 7) == 1 );
assert( gamma_free_fields(board, 5) == 216 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 20, 14) == 0 );
assert( gamma_move(board, 1, 0, 9) == 0 );
assert( gamma_move(board, 1, 10, 0) == 0 );
assert( gamma_move(board, 2, 1, 4) == 1 );
assert( gamma_move(board, 3, 17, 9) == 1 );
assert( gamma_move(board, 4, 4, 9) == 0 );
assert( gamma_free_fields(board, 4) == 214 );
assert( gamma_move(board, 5, 13, 2) == 0 );
assert( gamma_move(board, 5, 15, 12) == 1 );
assert( gamma_move(board, 6, 12, 12) == 1 );
assert( gamma_move(board, 1, 0, 12) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 4, 0) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_golden_move(board, 2, 14, 13) == 0 );
assert( gamma_move(board, 3, 6, 16) == 0 );
assert( gamma_move(board, 4, 18, 6) == 0 );
assert( gamma_move(board, 4, 12, 16) == 1 );
assert( gamma_busy_fields(board, 4) == 25 );
assert( gamma_move(board, 5, 18, 10) == 0 );
assert( gamma_move(board, 6, 14, 7) == 1 );
assert( gamma_move(board, 1, 6, 2) == 1 );
assert( gamma_move(board, 2, 17, 17) == 1 );
assert( gamma_move(board, 3, 5, 6) == 1 );
assert( gamma_move(board, 4, 15, 11) == 1 );
assert( gamma_move(board, 4, 9, 7) == 1 );
assert( gamma_move(board, 5, 16, 15) == 1 );
assert( gamma_move(board, 6, 18, 7) == 0 );
assert( gamma_move(board, 6, 17, 7) == 0 );


char* board938874050 = gamma_board(board);
assert( board938874050 != NULL );
assert( strcmp(board938874050, 
".64..6......25....\n"
"2.215..43.6....2..\n"
".2..2.........3.4.\n"
".351....3.5.311.62\n"
"26.32.4..5464....6\n"
".6263.4...3..1..53\n"
".....2..21..36.5.3\n"
".6.6.....346.5..1.\n"
"11.5.21.31..61.5.6\n"
"4.5...243.151.44.2\n"
"6........6....56..\n"
"2...35..56...563.3\n"
"....3.43.41...55..\n"
".....35..4.2..6.62\n"
"4...43.1223.13...5\n"
"1..23..31.43.55.1.\n"
".2265....33.6....6\n"
"..24....41.5..1..5\n"
"..1.1213355.411...\n"
".545545333.2..4..4\n"
"..2.4.164.6..2.5..\n") == 0);
free(board938874050);
board938874050 = NULL;
assert( gamma_move(board, 2, 4, 11) == 1 );
assert( gamma_free_fields(board, 2) == 202 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 2, 3) == 0 );
assert( gamma_move(board, 4, 9, 0) == 1 );
assert( gamma_move(board, 5, 4, 9) == 0 );


char* board505544931 = gamma_board(board);
assert( board505544931 != NULL );
assert( strcmp(board505544931, 
".64..6......25....\n"
"2.215..43.6....2..\n"
".2..2.........3.4.\n"
".351....3.5.311.62\n"
"26.32.4..5464....6\n"
".6263.4...3..1..53\n"
".....2..21..36.5.3\n"
".6.6.....346.5..1.\n"
"11.5.21.31..61.5.6\n"
"4.5.2.243.151.44.2\n"
"6........6....56..\n"
"2...35..56...563.3\n"
"....3.43.41...55..\n"
".....35..4.2..6.62\n"
"4...43.1223.13...5\n"
"1..23..31.43.55.1.\n"
".2265....33.6....6\n"
"..24....41.5..1..5\n"
"..1.1213355.411...\n"
".545545333.2..4..4\n"
"..2.4.16446..2.5..\n") == 0);
free(board505544931);
board505544931 = NULL;
assert( gamma_move(board, 6, 10, 19) == 0 );
assert( gamma_move(board, 6, 16, 13) == 0 );
assert( gamma_move(board, 1, 5, 15) == 1 );
assert( gamma_move(board, 1, 14, 0) == 1 );
assert( gamma_move(board, 2, 2, 14) == 1 );
assert( gamma_move(board, 3, 3, 6) == 1 );
assert( gamma_move(board, 3, 10, 11) == 0 );
assert( gamma_move(board, 4, 12, 7) == 1 );
assert( gamma_move(board, 4, 11, 5) == 0 );
assert( gamma_busy_fields(board, 4) == 29 );
assert( gamma_move(board, 5, 7, 13) == 1 );
assert( gamma_move(board, 5, 4, 4) == 0 );
assert( gamma_move(board, 6, 11, 12) == 1 );


char* board788216403 = gamma_board(board);
assert( board788216403 != NULL );
assert( strcmp(board788216403, 
".64..6......25....\n"
"2.215..43.6....2..\n"
".2..2.........3.4.\n"
".351....3.5.311.62\n"
"26.32.4..5464....6\n"
".626314...3..1..53\n"
"..2..2..21..36.5.3\n"
".6.6...5.346.5..1.\n"
"11.5.21.31.661.5.6\n"
"4.5.2.243.151.44.2\n"
"6........6....56..\n"
"2...35..56...563.3\n"
"....3.43.41...55..\n"
".....35..4.24.6.62\n"
"4..343.1223.13...5\n"
"1..23..31.43.55.1.\n"
".2265....33.6....6\n"
"..24....41.5..1..5\n"
"..1.1213355.411...\n"
".545545333.2..4..4\n"
"..2.4.16446..215..\n") == 0);
free(board788216403);
board788216403 = NULL;
assert( gamma_move(board, 1, 11, 14) == 1 );
assert( gamma_move(board, 2, 8, 7) == 1 );
assert( gamma_move(board, 2, 12, 15) == 1 );
assert( gamma_golden_move(board, 2, 15, 5) == 0 );


char* board195418773 = gamma_board(board);
assert( board195418773 != NULL );
assert( strcmp(board195418773, 
".64..6......25....\n"
"2.215..43.6....2..\n"
".2..2.........3.4.\n"
".351....3.5.311.62\n"
"26.32.4..5464....6\n"
".626314...3.21..53\n"
"..2..2..21.136.5.3\n"
".6.6...5.346.5..1.\n"
"11.5.21.31.661.5.6\n"
"4.5.2.243.151.44.2\n"
"6........6....56..\n"
"2...35..56...563.3\n"
"....3.43.41...55..\n"
".....35.24.24.6.62\n"
"4..343.1223.13...5\n"
"1..23..31.43.55.1.\n"
".2265....33.6....6\n"
"..24....41.5..1..5\n"
"..1.1213355.411...\n"
".545545333.2..4..4\n"
"..2.4.16446..215..\n") == 0);
free(board195418773);
board195418773 = NULL;
assert( gamma_move(board, 4, 9, 10) == 0 );
assert( gamma_free_fields(board, 4) == 191 );
assert( gamma_move(board, 5, 7, 13) == 0 );
assert( gamma_move(board, 5, 14, 17) == 0 );
assert( gamma_move(board, 6, 17, 18) == 1 );
assert( gamma_move(board, 1, 1, 15) == 0 );
assert( gamma_golden_move(board, 1, 4, 3) == 0 );
assert( gamma_move(board, 2, 5, 12) == 0 );
assert( gamma_move(board, 2, 10, 10) == 1 );
assert( gamma_free_fields(board, 2) == 189 );
assert( gamma_move(board, 3, 14, 7) == 0 );
assert( gamma_move(board, 3, 16, 0) == 1 );


char* board150794922 = gamma_board(board);
assert( board150794922 != NULL );
assert( strcmp(board150794922, 
".64..6......25....\n"
"2.215..43.6....2..\n"
".2..2.........3.46\n"
".351....3.5.311.62\n"
"26.32.4..5464....6\n"
".626314...3.21..53\n"
"..2..2..21.136.5.3\n"
".6.6...5.346.5..1.\n"
"11.5.21.31.661.5.6\n"
"4.5.2.243.151.44.2\n"
"6........62...56..\n"
"2...35..56...563.3\n"
"....3.43.41...55..\n"
".....35.24.24.6.62\n"
"4..343.1223.13...5\n"
"1..23..31.43.55.1.\n"
".2265....33.6....6\n"
"..24....41.5..1..5\n"
"..1.1213355.411...\n"
".545545333.2..4..4\n"
"..2.4.16446..2153.\n") == 0);
free(board150794922);
board150794922 = NULL;
assert( gamma_move(board, 4, 12, 1) == 1 );
assert( gamma_move(board, 5, 3, 7) == 1 );
assert( gamma_move(board, 5, 17, 15) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );


char* board772594303 = gamma_board(board);
assert( board772594303 != NULL );
assert( strcmp(board772594303, 
".64..6......25....\n"
"2.215..43.6....2..\n"
".2..2.........3.46\n"
".351....3.5.311.62\n"
"26.32.4..5464....6\n"
".626314...3.21..53\n"
"..2..2..21.136.5.3\n"
".6.6...5.346.5..1.\n"
"11.5.21.31.661.5.6\n"
"4.5.2.243.151.44.2\n"
"6........62...56..\n"
"2...35..56...563.3\n"
"....3.43.41...55..\n"
"...5.35.24.24.6.62\n"
"4..343.1223.13...5\n"
"1..23..31.43.55.1.\n"
".2265....33.6....6\n"
"..24....41.5..1..5\n"
"..1.1213355.411...\n"
".545545333.24.4..4\n"
"..2.4.16446..2153.\n") == 0);
free(board772594303);
board772594303 = NULL;
assert( gamma_move(board, 6, 9, 6) == 0 );
assert( gamma_move(board, 6, 1, 1) == 0 );
assert( gamma_busy_fields(board, 6) == 29 );
assert( gamma_move(board, 1, 15, 11) == 0 );
assert( gamma_move(board, 2, 10, 5) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 20, 10) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 13, 5) == 0 );


char* board856999032 = gamma_board(board);
assert( board856999032 != NULL );
assert( strcmp(board856999032, 
".64..6......25....\n"
"2.215..43.6....2..\n"
".2..2.........3.46\n"
".351....3.5.311.62\n"
"26.32.4..5464....6\n"
".626314...3.21..53\n"
"..2..2..21.136.5.3\n"
".6.6...5.346.5..1.\n"
"11.5.21.31.661.5.6\n"
"4.5.2.243.151.44.2\n"
"6........62...56..\n"
"2...35..56...563.3\n"
"....3.43.41...55..\n"
"...5.35.24.24.6.62\n"
"4..343.1223.13...5\n"
"1..23..31.43.55.1.\n"
".2265....33.6....6\n"
"..24....41.5..1..5\n"
"..1.1213355.411...\n"
".545545333.24.4..4\n"
"..2.4.16446..2153.\n") == 0);
free(board856999032);
board856999032 = NULL;
assert( gamma_move(board, 5, 15, 13) == 1 );
assert( gamma_move(board, 5, 3, 7) == 0 );
assert( gamma_move(board, 6, 14, 6) == 1 );
assert( gamma_move(board, 6, 0, 9) == 0 );
assert( gamma_move(board, 1, 14, 14) == 1 );
assert( gamma_move(board, 1, 4, 1) == 0 );
assert( gamma_move(board, 2, 4, 12) == 1 );
assert( gamma_move(board, 3, 0, 11) == 0 );
assert( gamma_move(board, 4, 13, 14) == 0 );
assert( gamma_move(board, 5, 3, 5) == 0 );
assert( gamma_move(board, 5, 16, 4) == 1 );
assert( gamma_free_fields(board, 5) == 181 );
assert( gamma_move(board, 6, 7, 6) == 0 );
assert( gamma_move(board, 6, 9, 1) == 0 );
assert( gamma_move(board, 1, 17, 18) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 7, 15) == 1 );
assert( gamma_move(board, 3, 16, 8) == 1 );
assert( gamma_move(board, 4, 7, 0) == 0 );
assert( gamma_move(board, 4, 7, 1) == 0 );


char* board648213364 = gamma_board(board);
assert( board648213364 != NULL );
assert( strcmp(board648213364, 
".64..6......25....\n"
"2.215..43.6....2..\n"
".2..2.........3.46\n"
".351....3.5.311.62\n"
"26.32.4..5464....6\n"
".6263142..3.21..53\n"
"..2..2..21.13615.3\n"
".6.6...5.346.5.51.\n"
"11.5221.31.661.5.6\n"
"4.5.2.243.151.44.2\n"
"6........62...56..\n"
"2...35..56...563.3\n"
"....3.43.41...553.\n"
"...5.35.24.24.6.62\n"
"4..343.1223.136..5\n"
"1..23..31.43.55.1.\n"
".2265....33.6...56\n"
"..24....41.5..1..5\n"
"..1.1213355.411...\n"
".545545333.24.4..4\n"
"..2.4.16446..2153.\n") == 0);
free(board648213364);
board648213364 = NULL;
assert( gamma_move(board, 1, 11, 0) == 1 );
assert( gamma_free_fields(board, 1) == 178 );
assert( gamma_move(board, 2, 17, 4) == 0 );
assert( gamma_move(board, 2, 2, 8) == 1 );
assert( gamma_move(board, 3, 18, 3) == 0 );
assert( gamma_move(board, 4, 0, 5) == 0 );
assert( gamma_move(board, 4, 13, 5) == 0 );
assert( gamma_move(board, 5, 14, 9) == 0 );
assert( gamma_move(board, 6, 4, 5) == 0 );
assert( gamma_move(board, 6, 8, 8) == 1 );
assert( gamma_move(board, 1, 20, 8) == 0 );
assert( gamma_move(board, 1, 6, 18) == 1 );
assert( gamma_busy_fields(board, 1) == 34 );
assert( gamma_free_fields(board, 1) == 175 );
assert( gamma_move(board, 2, 6, 2) == 0 );
assert( gamma_move(board, 3, 16, 8) == 0 );
assert( gamma_move(board, 4, 0, 1) == 1 );
assert( gamma_move(board, 4, 10, 15) == 0 );
assert( gamma_move(board, 5, 1, 15) == 0 );
assert( gamma_free_fields(board, 5) == 174 );
assert( gamma_move(board, 6, 2, 11) == 0 );
assert( gamma_move(board, 6, 8, 12) == 0 );
assert( gamma_move(board, 1, 13, 8) == 1 );
assert( gamma_move(board, 1, 8, 6) == 0 );
assert( gamma_move(board, 2, 20, 17) == 0 );
assert( gamma_move(board, 2, 4, 2) == 0 );
assert( gamma_move(board, 3, 17, 3) == 0 );
assert( gamma_move(board, 3, 9, 6) == 0 );
assert( gamma_busy_fields(board, 3) == 36 );
assert( gamma_move(board, 4, 12, 14) == 0 );
assert( gamma_move(board, 4, 1, 6) == 1 );
assert( gamma_move(board, 5, 10, 6) == 0 );
assert( gamma_move(board, 6, 18, 10) == 0 );
assert( gamma_move(board, 6, 3, 18) == 1 );
assert( gamma_move(board, 1, 11, 2) == 1 );
assert( gamma_move(board, 2, 4, 15) == 0 );
assert( gamma_move(board, 3, 11, 15) == 1 );
assert( gamma_move(board, 4, 3, 12) == 0 );
assert( gamma_move(board, 5, 5, 15) == 0 );
assert( gamma_move(board, 5, 0, 17) == 1 );
assert( gamma_move(board, 6, 18, 10) == 0 );
assert( gamma_move(board, 6, 16, 18) == 0 );
assert( gamma_free_fields(board, 6) == 168 );
assert( gamma_move(board, 1, 14, 7) == 0 );
assert( gamma_move(board, 1, 3, 17) == 0 );
assert( gamma_move(board, 2, 7, 18) == 1 );
assert( gamma_move(board, 2, 0, 10) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 19, 17) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );


char* board529907386 = gamma_board(board);
assert( board529907386 != NULL );
assert( strcmp(board529907386, 
".64..6......25....\n"
"2.215..43.6....2..\n"
".2.62.12......3.46\n"
"5351....3.5.311.62\n"
"26.32.4..5464....6\n"
".6263142..3321..53\n"
"..2..2..21.13615.3\n"
".6.6...5.346.5.51.\n"
"11.5221.31.661.5.6\n"
"4.5.2.243.151.44.2\n"
"6........62...56..\n"
"2...35..56...563.3\n"
"..2.3.43641..1553.\n"
"...5.35.24.24.6.62\n"
"44.343.1223.136..5\n"
"1..23..31.43.55.1.\n"
".2265....33.6...56\n"
"..24....41.5..1..5\n"
"..1.12133551411...\n"
"4545545333.24.4..4\n"
"..2.4.164461.2153.\n") == 0);
free(board529907386);
board529907386 = NULL;
assert( gamma_move(board, 4, 20, 4) == 0 );
assert( gamma_move(board, 4, 3, 5) == 0 );
assert( gamma_move(board, 5, 6, 20) == 1 );
assert( gamma_move(board, 5, 9, 2) == 0 );
assert( gamma_move(board, 6, 16, 13) == 0 );
assert( gamma_move(board, 2, 10, 17) == 0 );
assert( gamma_move(board, 2, 11, 13) == 0 );
assert( gamma_busy_fields(board, 2) == 37 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 17, 0) == 1 );
assert( gamma_move(board, 3, 9, 12) == 0 );
assert( gamma_busy_fields(board, 3) == 38 );
assert( gamma_move(board, 4, 0, 0) == 1 );
assert( gamma_move(board, 6, 3, 8) == 1 );
assert( gamma_golden_move(board, 6, 7, 11) == 1 );
assert( gamma_move(board, 1, 20, 15) == 0 );
assert( gamma_move(board, 2, 0, 12) == 0 );
assert( gamma_move(board, 4, 8, 1) == 0 );
assert( gamma_move(board, 6, 13, 0) == 0 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 1, 8, 0) == 0 );
assert( gamma_move(board, 1, 9, 8) == 0 );
assert( gamma_move(board, 2, 19, 17) == 0 );
assert( gamma_move(board, 3, 13, 8) == 0 );
assert( gamma_move(board, 3, 1, 20) == 0 );
assert( gamma_move(board, 5, 2, 17) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 19, 13) == 0 );
assert( gamma_free_fields(board, 6) == 163 );
assert( gamma_move(board, 1, 3, 0) == 1 );
assert( gamma_move(board, 1, 6, 7) == 0 );
assert( gamma_move(board, 2, 13, 17) == 0 );
assert( gamma_move(board, 2, 9, 1) == 0 );
assert( gamma_free_fields(board, 2) == 162 );
assert( gamma_move(board, 3, 6, 16) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_golden_move(board, 3, 2, 2) == 1 );
assert( gamma_move(board, 4, 11, 3) == 0 );
assert( gamma_golden_move(board, 4, 11, 11) == 1 );
assert( gamma_move(board, 5, 19, 5) == 0 );
assert( gamma_busy_fields(board, 5) == 37 );
assert( gamma_move(board, 6, 11, 9) == 1 );
assert( gamma_move(board, 6, 16, 12) == 1 );
assert( gamma_free_fields(board, 6) == 160 );
assert( gamma_move(board, 1, 15, 9) == 0 );
assert( gamma_move(board, 1, 1, 16) == 0 );
assert( gamma_busy_fields(board, 1) == 36 );
assert( gamma_move(board, 2, 19, 16) == 0 );
assert( gamma_move(board, 3, 12, 17) == 0 );
assert( gamma_free_fields(board, 3) == 160 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 5, 7) == 0 );
assert( gamma_move(board, 4, 1, 10) == 1 );
assert( gamma_move(board, 5, 20, 0) == 0 );
assert( gamma_free_fields(board, 5) == 159 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 12, 7) == 0 );
assert( gamma_move(board, 6, 11, 4) == 1 );
assert( gamma_move(board, 1, 3, 2) == 1 );
assert( gamma_move(board, 2, 12, 14) == 0 );
assert( gamma_move(board, 3, 0, 12) == 0 );
assert( gamma_move(board, 4, 4, 14) == 1 );
assert( gamma_move(board, 4, 7, 2) == 0 );
assert( gamma_move(board, 5, 10, 11) == 0 );
assert( gamma_move(board, 5, 11, 18) == 1 );
assert( gamma_move(board, 6, 10, 17) == 0 );
assert( gamma_move(board, 6, 3, 19) == 0 );
assert( gamma_busy_fields(board, 6) == 37 );
assert( gamma_move(board, 1, 16, 9) == 1 );
assert( gamma_move(board, 2, 8, 1) == 0 );
assert( gamma_golden_move(board, 2, 17, 8) == 0 );
assert( gamma_move(board, 3, 6, 4) == 1 );
assert( gamma_move(board, 3, 11, 5) == 0 );
assert( gamma_golden_move(board, 3, 12, 3) == 0 );
assert( gamma_move(board, 4, 18, 10) == 0 );
assert( gamma_busy_fields(board, 4) == 35 );
assert( gamma_move(board, 5, 10, 16) == 0 );
assert( gamma_move(board, 5, 4, 17) == 1 );
assert( gamma_move(board, 6, 10, 11) == 0 );
assert( gamma_move(board, 6, 17, 15) == 0 );
assert( gamma_busy_fields(board, 6) == 37 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 1, 19, 12) == 0 );
assert( gamma_move(board, 1, 17, 12) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 16, 7) == 0 );
assert( gamma_busy_fields(board, 2) == 37 );
assert( gamma_free_fields(board, 2) == 152 );
assert( gamma_move(board, 3, 16, 2) == 1 );
assert( gamma_move(board, 4, 16, 7) == 0 );
assert( gamma_move(board, 5, 10, 19) == 0 );
assert( gamma_move(board, 6, 11, 1) == 0 );
assert( gamma_move(board, 1, 5, 7) == 0 );
assert( gamma_move(board, 1, 6, 18) == 0 );
assert( gamma_free_fields(board, 2) == 151 );
assert( gamma_move(board, 3, 10, 11) == 0 );
assert( gamma_move(board, 3, 12, 11) == 0 );
assert( gamma_move(board, 4, 5, 5) == 1 );
assert( gamma_move(board, 5, 3, 6) == 0 );
assert( gamma_move(board, 6, 1, 0) == 1 );
assert( gamma_move(board, 1, 8, 17) == 0 );
assert( gamma_move(board, 1, 9, 18) == 1 );
assert( gamma_move(board, 2, 13, 19) == 1 );
assert( gamma_move(board, 2, 5, 6) == 0 );
assert( gamma_move(board, 3, 8, 17) == 0 );
assert( gamma_move(board, 3, 6, 4) == 0 );
assert( gamma_busy_fields(board, 3) == 41 );
assert( gamma_move(board, 4, 14, 3) == 0 );
assert( gamma_move(board, 4, 13, 0) == 0 );
assert( gamma_free_fields(board, 4) == 147 );
assert( gamma_move(board, 5, 17, 15) == 0 );
assert( gamma_golden_move(board, 5, 6, 0) == 1 );
assert( gamma_move(board, 6, 10, 17) == 0 );
assert( gamma_free_fields(board, 6) == 147 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 1, 9, 14) == 0 );
assert( gamma_move(board, 1, 15, 8) == 0 );
assert( gamma_busy_fields(board, 1) == 38 );


char* board809392174 = gamma_board(board);
assert( board809392174 != NULL );
assert( strcmp(board809392174, 
".64..65.....25....\n"
"2.215..43.6..2.2..\n"
".2.62.12.1.5..3.46\n"
"53515...3.5.311.62\n"
"26.32.4..5464....6\n"
".6263142..3321..53\n"
"..2.42..21.13615.3\n"
".6.6...5.346.5.51.\n"
"11.5221.31.661.566\n"
"4.5.2.263.141.44.2\n"
"64.......62...56..\n"
"2...35..56.6.56313\n"
"..263.43641..1553.\n"
"...5.35.24.24.6.62\n"
"44.343.1223.136..5\n"
"1..234.31.43.55.1.\n"
".2265.3..3366...56\n"
"..24....41.5..1..5\n"
"..3112133551411.3.\n"
"4545545333.24.4..4\n"
"46214.564461.21533\n") == 0);
free(board809392174);
board809392174 = NULL;
assert( gamma_move(board, 2, 4, 5) == 0 );
assert( gamma_free_fields(board, 2) == 147 );
assert( gamma_move(board, 4, 15, 15) == 1 );
assert( gamma_move(board, 5, 16, 7) == 0 );
assert( gamma_free_fields(board, 6) == 146 );
assert( gamma_move(board, 1, 8, 4) == 1 );
assert( gamma_move(board, 1, 1, 20) == 0 );
assert( gamma_move(board, 2, 14, 1) == 0 );
assert( gamma_move(board, 3, 13, 8) == 0 );
assert( gamma_move(board, 3, 13, 4) == 1 );
assert( gamma_busy_fields(board, 3) == 42 );
assert( gamma_move(board, 4, 19, 12) == 0 );
assert( gamma_move(board, 4, 5, 19) == 1 );
assert( gamma_move(board, 5, 20, 3) == 0 );
assert( gamma_move(board, 6, 2, 15) == 0 );
assert( gamma_move(board, 6, 4, 10) == 1 );
assert( gamma_move(board, 1, 10, 12) == 1 );
assert( gamma_move(board, 1, 2, 0) == 0 );
assert( gamma_move(board, 2, 3, 1) == 0 );
assert( gamma_move(board, 2, 16, 16) == 1 );
assert( gamma_move(board, 3, 1, 10) == 0 );
assert( gamma_move(board, 3, 14, 8) == 0 );
assert( gamma_move(board, 4, 6, 16) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 13, 0) == 0 );
assert( gamma_move(board, 5, 5, 10) == 1 );
assert( gamma_move(board, 6, 16, 13) == 0 );
assert( gamma_busy_fields(board, 6) == 39 );
assert( gamma_move(board, 1, 0, 5) == 0 );
assert( gamma_move(board, 1, 2, 6) == 1 );
assert( gamma_golden_move(board, 1, 8, 16) == 0 );
assert( gamma_move(board, 2, 3, 13) == 0 );
assert( gamma_move(board, 2, 13, 19) == 0 );
assert( gamma_move(board, 3, 9, 1) == 0 );
assert( gamma_move(board, 3, 17, 8) == 1 );
assert( gamma_move(board, 5, 8, 1) == 0 );
assert( gamma_move(board, 6, 2, 6) == 0 );
assert( gamma_move(board, 1, 13, 17) == 0 );
assert( gamma_move(board, 2, 20, 17) == 0 );
assert( gamma_move(board, 2, 3, 7) == 0 );
assert( gamma_golden_move(board, 2, 5, 13) == 0 );
assert( gamma_move(board, 3, 19, 12) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 7, 0) == 0 );
assert( gamma_move(board, 5, 17, 6) == 0 );
assert( gamma_move(board, 5, 13, 0) == 0 );
assert( gamma_move(board, 6, 9, 1) == 0 );
assert( gamma_busy_fields(board, 6) == 39 );
assert( gamma_move(board, 1, 3, 1) == 0 );
assert( gamma_move(board, 1, 4, 2) == 0 );
assert( gamma_busy_fields(board, 1) == 41 );
assert( gamma_move(board, 2, 19, 1) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 0, 10) == 0 );
assert( gamma_move(board, 4, 5, 9) == 0 );
assert( gamma_busy_fields(board, 4) == 38 );
assert( gamma_move(board, 5, 12, 4) == 0 );


char* board955485081 = gamma_board(board);
assert( board955485081 != NULL );
assert( strcmp(board955485081, 
".64..65.....25....\n"
"2.2154.43.6..2.2..\n"
".2.62.12.1.5..3.46\n"
"53515...3.5.311.62\n"
"26.32.4..5464...26\n"
".6263142..3321.453\n"
"..2.42..21.13615.3\n"
".6.6...5.346.5.51.\n"
"11.5221.311661.566\n"
"4.5.2.263.141.44.2\n"
"64..65...62...56..\n"
"2...35..56.6.56313\n"
"..263.43641..15533\n"
"...5.35.24.24.6.62\n"
"441343.1223.136..5\n"
"1..234.31.43.55.1.\n"
".2265.3.133663..56\n"
"..24....41.5..1..5\n"
"..3112133551411.3.\n"
"4545545333.24.4..4\n"
"46214.564461.21533\n") == 0);
free(board955485081);
board955485081 = NULL;
assert( gamma_move(board, 6, 16, 13) == 0 );
assert( gamma_move(board, 1, 9, 12) == 0 );
assert( gamma_move(board, 1, 6, 15) == 0 );
assert( gamma_move(board, 2, 13, 6) == 0 );
assert( gamma_move(board, 3, 3, 13) == 0 );
assert( gamma_move(board, 3, 0, 14) == 1 );
assert( gamma_move(board, 4, 14, 3) == 0 );
assert( gamma_busy_fields(board, 4) == 38 );
assert( gamma_move(board, 5, 5, 2) == 0 );
assert( gamma_move(board, 5, 16, 11) == 1 );
assert( gamma_move(board, 6, 16, 7) == 0 );
assert( gamma_move(board, 1, 7, 10) == 1 );
assert( gamma_move(board, 1, 13, 19) == 0 );
assert( gamma_move(board, 2, 16, 2) == 0 );
assert( gamma_move(board, 3, 2, 19) == 0 );
assert( gamma_move(board, 4, 1, 17) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 17, 5) == 1 );
assert( gamma_move(board, 6, 15, 0) == 0 );
assert( gamma_move(board, 1, 14, 16) == 1 );
assert( gamma_move(board, 1, 10, 4) == 0 );
assert( gamma_move(board, 2, 13, 18) == 1 );
assert( gamma_move(board, 3, 18, 5) == 0 );
assert( gamma_free_fields(board, 3) == 131 );
assert( gamma_move(board, 4, 17, 6) == 0 );
assert( gamma_move(board, 5, 19, 14) == 0 );
assert( gamma_free_fields(board, 5) == 131 );
assert( gamma_move(board, 6, 3, 15) == 0 );


char* board980461799 = gamma_board(board);
assert( board980461799 != NULL );
assert( strcmp(board980461799, 
".64..65.....25....\n"
"2.2154.43.6..2.2..\n"
".2.62.12.1.5.23.46\n"
"53515...3.5.311.62\n"
"26.32.4..5464.1.26\n"
".6263142..3321.453\n"
"3.2.42..21.13615.3\n"
".6.6...5.346.5.51.\n"
"11.5221.311661.566\n"
"4.5.2.263.141.4452\n"
"64..65.1.62...56..\n"
"2...35..56.6.56313\n"
"..263.43641..15533\n"
"...5.35.24.24.6.62\n"
"441343.1223.136..5\n"
"1..234.31.43.55.15\n"
".2265.3.133663..56\n"
"..24....41.5..1..5\n"
"..3112133551411.3.\n"
"4545545333.24.4..4\n"
"46214.564461.21533\n") == 0);
free(board980461799);
board980461799 = NULL;
assert( gamma_move(board, 1, 3, 15) == 0 );
assert( gamma_move(board, 1, 1, 2) == 1 );
assert( gamma_free_fields(board, 1) == 130 );
assert( gamma_move(board, 2, 6, 2) == 0 );
assert( gamma_move(board, 3, 1, 13) == 0 );
assert( gamma_move(board, 3, 8, 1) == 0 );
assert( gamma_move(board, 4, 3, 16) == 0 );
assert( gamma_move(board, 5, 13, 0) == 0 );
assert( gamma_move(board, 5, 9, 14) == 0 );
assert( gamma_move(board, 6, 16, 2) == 0 );
assert( gamma_move(board, 6, 3, 18) == 0 );
assert( gamma_move(board, 1, 5, 1) == 0 );
assert( gamma_move(board, 2, 19, 9) == 0 );
assert( gamma_move(board, 2, 14, 8) == 0 );
assert( gamma_move(board, 3, 10, 5) == 0 );


char* board668399570 = gamma_board(board);
assert( board668399570 != NULL );
assert( strcmp(board668399570, 
".64..65.....25....\n"
"2.2154.43.6..2.2..\n"
".2.62.12.1.5.23.46\n"
"53515...3.5.311.62\n"
"26.32.4..5464.1.26\n"
".6263142..3321.453\n"
"3.2.42..21.13615.3\n"
".6.6...5.346.5.51.\n"
"11.5221.311661.566\n"
"4.5.2.263.141.4452\n"
"64..65.1.62...56..\n"
"2...35..56.6.56313\n"
"..263.43641..15533\n"
"...5.35.24.24.6.62\n"
"441343.1223.136..5\n"
"1..234.31.43.55.15\n"
".2265.3.133663..56\n"
"..24....41.5..1..5\n"
".13112133551411.3.\n"
"4545545333.24.4..4\n"
"46214.564461.21533\n") == 0);
free(board668399570);
board668399570 = NULL;
assert( gamma_move(board, 4, 6, 7) == 0 );
assert( gamma_move(board, 4, 3, 3) == 0 );
assert( gamma_move(board, 5, 16, 15) == 0 );
assert( gamma_free_fields(board, 5) == 130 );
assert( gamma_move(board, 6, 14, 7) == 0 );
assert( gamma_move(board, 6, 4, 10) == 0 );
assert( gamma_move(board, 1, 17, 15) == 0 );
assert( gamma_move(board, 1, 15, 6) == 1 );
assert( gamma_golden_move(board, 1, 10, 9) == 0 );
assert( gamma_move(board, 2, 3, 1) == 0 );
assert( gamma_move(board, 2, 2, 9) == 1 );


char* board786952101 = gamma_board(board);
assert( board786952101 != NULL );
assert( strcmp(board786952101, 
".64..65.....25....\n"
"2.2154.43.6..2.2..\n"
".2.62.12.1.5.23.46\n"
"53515...3.5.311.62\n"
"26.32.4..5464.1.26\n"
".6263142..3321.453\n"
"3.2.42..21.13615.3\n"
".6.6...5.346.5.51.\n"
"11.5221.311661.566\n"
"4.5.2.263.141.4452\n"
"64..65.1.62...56..\n"
"2.2.35..56.6.56313\n"
"..263.43641..15533\n"
"...5.35.24.24.6.62\n"
"441343.1223.1361.5\n"
"1..234.31.43.55.15\n"
".2265.3.133663..56\n"
"..24....41.5..1..5\n"
".13112133551411.3.\n"
"4545545333.24.4..4\n"
"46214.564461.21533\n") == 0);
free(board786952101);
board786952101 = NULL;
assert( gamma_move(board, 3, 10, 17) == 0 );
assert( gamma_move(board, 4, 3, 1) == 0 );
assert( gamma_move(board, 5, 15, 14) == 0 );
assert( gamma_move(board, 5, 7, 5) == 0 );
assert( gamma_move(board, 6, 12, 20) == 0 );
assert( gamma_move(board, 6, 5, 12) == 0 );
assert( gamma_move(board, 1, 6, 6) == 1 );
assert( gamma_move(board, 1, 2, 0) == 0 );
assert( gamma_move(board, 4, 0, 5) == 0 );
assert( gamma_move(board, 5, 6, 2) == 0 );
assert( gamma_move(board, 5, 16, 9) == 0 );
assert( gamma_move(board, 6, 10, 13) == 0 );
assert( gamma_move(board, 6, 4, 4) == 0 );
assert( gamma_move(board, 1, 3, 14) == 1 );
assert( gamma_move(board, 2, 15, 12) == 0 );
assert( gamma_move(board, 2, 0, 8) == 1 );
assert( gamma_move(board, 3, 19, 16) == 0 );
assert( gamma_move(board, 4, 14, 20) == 1 );
assert( gamma_busy_fields(board, 4) == 39 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 19, 1) == 0 );
assert( gamma_move(board, 5, 5, 4) == 1 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 20, 11) == 0 );
assert( gamma_move(board, 6, 12, 9) == 1 );
assert( gamma_move(board, 1, 7, 7) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 13, 14) == 0 );
assert( gamma_move(board, 4, 9, 7) == 0 );
assert( gamma_move(board, 4, 12, 12) == 0 );
assert( gamma_move(board, 5, 17, 8) == 0 );
assert( gamma_move(board, 6, 16, 15) == 0 );
assert( gamma_move(board, 6, 13, 10) == 1 );
assert( gamma_move(board, 1, 16, 2) == 0 );
assert( gamma_busy_fields(board, 1) == 48 );
assert( gamma_move(board, 2, 13, 12) == 0 );
assert( gamma_move(board, 3, 15, 0) == 0 );
assert( gamma_move(board, 3, 8, 8) == 0 );
assert( gamma_move(board, 4, 1, 17) == 0 );
assert( gamma_move(board, 5, 10, 12) == 0 );
assert( gamma_move(board, 6, 9, 11) == 1 );
assert( gamma_move(board, 6, 9, 12) == 0 );
assert( gamma_free_fields(board, 6) == 119 );
assert( gamma_move(board, 1, 17, 5) == 0 );
assert( gamma_move(board, 1, 17, 9) == 0 );
assert( gamma_move(board, 2, 6, 16) == 0 );
assert( gamma_move(board, 3, 0, 12) == 0 );
assert( gamma_move(board, 3, 8, 13) == 1 );
assert( gamma_golden_move(board, 3, 17, 16) == 0 );
assert( gamma_move(board, 4, 3, 18) == 0 );
assert( gamma_free_fields(board, 5) == 118 );
assert( gamma_move(board, 6, 15, 1) == 1 );
assert( gamma_move(board, 1, 17, 9) == 0 );
assert( gamma_move(board, 1, 1, 11) == 1 );
assert( gamma_move(board, 2, 11, 17) == 1 );
assert( gamma_move(board, 2, 2, 14) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 18, 12) == 0 );
assert( gamma_move(board, 3, 10, 16) == 0 );
assert( gamma_move(board, 4, 19, 1) == 0 );
assert( gamma_move(board, 5, 20, 3) == 0 );
assert( gamma_move(board, 5, 12, 4) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 8, 11) == 0 );
assert( gamma_move(board, 6, 11, 7) == 0 );
assert( gamma_busy_fields(board, 6) == 43 );
assert( gamma_move(board, 1, 20, 9) == 0 );
assert( gamma_move(board, 1, 16, 17) == 0 );
assert( gamma_move(board, 2, 5, 9) == 0 );
assert( gamma_move(board, 3, 13, 12) == 0 );
assert( gamma_move(board, 4, 3, 16) == 0 );
assert( gamma_free_fields(board, 4) == 115 );
assert( gamma_move(board, 5, 8, 20) == 1 );
assert( gamma_move(board, 5, 4, 12) == 0 );
assert( gamma_free_fields(board, 5) == 114 );
assert( gamma_move(board, 6, 3, 0) == 0 );
assert( gamma_move(board, 6, 11, 3) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 20, 4) == 0 );
assert( gamma_move(board, 3, 16, 13) == 0 );
assert( gamma_move(board, 4, 3, 15) == 0 );
assert( gamma_move(board, 5, 11, 9) == 0 );
assert( gamma_move(board, 6, 20, 0) == 0 );
assert( gamma_free_fields(board, 6) == 114 );
assert( gamma_move(board, 1, 1, 13) == 0 );
assert( gamma_move(board, 2, 18, 15) == 0 );
assert( gamma_golden_move(board, 3, 2, 12) == 0 );
assert( gamma_move(board, 4, 2, 0) == 0 );
assert( gamma_move(board, 4, 5, 18) == 1 );
assert( gamma_move(board, 5, 14, 6) == 0 );
assert( gamma_free_fields(board, 5) == 113 );
assert( gamma_move(board, 6, 13, 12) == 0 );
assert( gamma_move(board, 6, 17, 15) == 0 );
assert( gamma_busy_fields(board, 1) == 49 );
assert( gamma_free_fields(board, 1) == 113 );
assert( gamma_move(board, 2, 20, 4) == 0 );
assert( gamma_move(board, 2, 15, 3) == 1 );
assert( gamma_golden_move(board, 2, 12, 6) == 1 );
assert( gamma_move(board, 3, 14, 1) == 0 );
assert( gamma_move(board, 4, 2, 17) == 0 );
assert( gamma_move(board, 4, 17, 15) == 0 );
assert( gamma_free_fields(board, 4) == 112 );
assert( gamma_move(board, 5, 14, 10) == 0 );
assert( gamma_busy_fields(board, 5) == 45 );
assert( gamma_move(board, 1, 3, 10) == 1 );
assert( gamma_move(board, 2, 6, 20) == 0 );
assert( gamma_free_fields(board, 2) == 111 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 3, 0) == 0 );
assert( gamma_move(board, 3, 15, 14) == 0 );
assert( gamma_move(board, 4, 12, 13) == 1 );
assert( gamma_busy_fields(board, 4) == 41 );
assert( gamma_move(board, 5, 9, 20) == 1 );
assert( gamma_move(board, 1, 10, 11) == 0 );
assert( gamma_free_fields(board, 1) == 109 );
assert( gamma_move(board, 2, 3, 1) == 0 );
assert( gamma_move(board, 3, 5, 2) == 0 );
assert( gamma_move(board, 4, 18, 10) == 0 );
assert( gamma_move(board, 5, 3, 3) == 0 );
assert( gamma_golden_move(board, 5, 5, 10) == 0 );
assert( gamma_move(board, 6, 10, 4) == 0 );
assert( gamma_golden_move(board, 6, 9, 15) == 0 );
assert( gamma_move(board, 1, 14, 6) == 0 );
assert( gamma_move(board, 2, 16, 2) == 0 );
assert( gamma_move(board, 3, 0, 16) == 0 );
assert( gamma_move(board, 3, 3, 4) == 0 );
assert( gamma_move(board, 4, 15, 10) == 0 );
assert( gamma_move(board, 4, 15, 10) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 15, 20) == 1 );
assert( gamma_move(board, 5, 0, 1) == 0 );
assert( gamma_golden_move(board, 5, 1, 15) == 0 );
assert( gamma_move(board, 6, 1, 13) == 0 );
assert( gamma_move(board, 6, 6, 11) == 0 );
assert( gamma_move(board, 1, 12, 2) == 0 );
assert( gamma_move(board, 1, 4, 8) == 0 );
assert( gamma_move(board, 2, 19, 6) == 0 );
assert( gamma_move(board, 3, 19, 11) == 0 );
assert( gamma_move(board, 3, 5, 16) == 1 );
assert( gamma_move(board, 4, 2, 17) == 0 );
assert( gamma_move(board, 4, 11, 14) == 0 );
assert( gamma_busy_fields(board, 4) == 41 );
assert( gamma_move(board, 5, 13, 17) == 0 );
assert( gamma_busy_fields(board, 5) == 47 );
assert( gamma_move(board, 6, 3, 10) == 0 );
assert( gamma_move(board, 1, 1, 13) == 0 );
assert( gamma_move(board, 1, 8, 8) == 0 );
assert( gamma_golden_move(board, 1, 17, 0) == 1 );
assert( gamma_move(board, 2, 0, 10) == 0 );
assert( gamma_move(board, 2, 0, 7) == 1 );
assert( gamma_move(board, 3, 13, 5) == 0 );
assert( gamma_move(board, 3, 13, 1) == 1 );
assert( gamma_move(board, 4, 2, 9) == 0 );
assert( gamma_golden_move(board, 4, 8, 0) == 0 );
assert( gamma_move(board, 5, 5, 6) == 0 );
assert( gamma_move(board, 5, 2, 20) == 0 );
assert( gamma_move(board, 6, 20, 11) == 0 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_golden_move(board, 6, 1, 9) == 0 );
assert( gamma_move(board, 1, 10, 2) == 0 );
assert( gamma_move(board, 1, 9, 6) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 16, 15) == 0 );
assert( gamma_move(board, 2, 13, 1) == 0 );
assert( gamma_move(board, 3, 7, 13) == 0 );
assert( gamma_move(board, 3, 16, 11) == 0 );
assert( gamma_move(board, 4, 3, 6) == 0 );
assert( gamma_move(board, 5, 0, 7) == 0 );
assert( gamma_move(board, 6, 3, 8) == 0 );
assert( gamma_move(board, 6, 5, 16) == 0 );
assert( gamma_move(board, 1, 18, 8) == 0 );
assert( gamma_move(board, 1, 7, 20) == 1 );
assert( gamma_free_fields(board, 1) == 104 );
assert( gamma_move(board, 2, 1, 5) == 1 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 7, 15) == 0 );
assert( gamma_move(board, 4, 5, 15) == 0 );
assert( gamma_move(board, 4, 4, 18) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 16, 13) == 0 );
assert( gamma_move(board, 5, 10, 11) == 0 );
assert( gamma_move(board, 6, 9, 2) == 0 );
assert( gamma_move(board, 6, 12, 4) == 0 );
assert( gamma_move(board, 2, 15, 18) == 1 );
assert( gamma_move(board, 4, 5, 15) == 0 );
assert( gamma_move(board, 4, 13, 1) == 0 );
assert( gamma_move(board, 5, 4, 13) == 1 );
assert( gamma_free_fields(board, 5) == 101 );
assert( gamma_move(board, 6, 18, 10) == 0 );
assert( gamma_move(board, 6, 10, 3) == 1 );


char* board780486144 = gamma_board(board);
assert( board780486144 != NULL );
assert( strcmp(board780486144, 
".64..65155..2545..\n"
"2.2154.43.6..2.2..\n"
".2.62412.1.5.23246\n"
"53515...3.52311.62\n"
"26.3234..5464.1.26\n"
".6263142..3321.453\n"
"3.2142..21.13615.3\n"
".6.65..5334645.51.\n"
"11.5221.311661.566\n"
"415.2.2636141.4452\n"
"64.165.1.62..656..\n"
"2.2.35..56.6656313\n"
"2.263.43641..15533\n"
"2..5.35124.24.6.62\n"
"44134311223.2361.5\n"
"12.234.31.43.55.15\n"
".226553.133663..56\n"
"..24....4165..12.5\n"
".13112133551411.3.\n"
"4545545333.24346.4\n"
"46214.564461.21531\n") == 0);
free(board780486144);
board780486144 = NULL;
assert( gamma_move(board, 1, 2, 0) == 0 );
assert( gamma_busy_fields(board, 1) == 51 );
assert( gamma_move(board, 2, 7, 4) == 1 );
assert( gamma_move(board, 2, 0, 8) == 0 );
assert( gamma_move(board, 3, 14, 10) == 0 );
assert( gamma_move(board, 3, 13, 2) == 0 );
assert( gamma_move(board, 4, 13, 5) == 0 );
assert( gamma_move(board, 4, 7, 14) == 1 );
assert( gamma_move(board, 5, 16, 7) == 0 );
assert( gamma_move(board, 5, 2, 12) == 1 );
assert( gamma_move(board, 6, 16, 8) == 0 );
assert( gamma_move(board, 1, 5, 2) == 0 );
assert( gamma_move(board, 1, 14, 3) == 0 );
assert( gamma_free_fields(board, 2) == 97 );
assert( gamma_move(board, 3, 20, 17) == 0 );
assert( gamma_move(board, 4, 4, 0) == 0 );
assert( gamma_move(board, 4, 1, 6) == 0 );
assert( gamma_move(board, 5, 9, 7) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 5, 12) == 0 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 2, 10, 1) == 1 );
assert( gamma_move(board, 3, 15, 9) == 0 );
assert( gamma_move(board, 3, 7, 11) == 0 );
assert( gamma_move(board, 4, 0, 5) == 0 );
assert( gamma_move(board, 5, 2, 0) == 0 );
assert( gamma_move(board, 5, 5, 16) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 6, 16) == 0 );
assert( gamma_move(board, 6, 9, 16) == 0 );
assert( gamma_free_fields(board, 6) == 96 );
assert( gamma_golden_move(board, 6, 16, 10) == 0 );
assert( gamma_move(board, 1, 5, 14) == 0 );
assert( gamma_move(board, 2, 10, 11) == 0 );
assert( gamma_move(board, 2, 10, 10) == 0 );
assert( gamma_move(board, 3, 7, 2) == 0 );
assert( gamma_move(board, 5, 14, 12) == 1 );
assert( gamma_move(board, 5, 15, 9) == 0 );
assert( gamma_move(board, 6, 15, 9) == 0 );
assert( gamma_move(board, 1, 4, 14) == 0 );
assert( gamma_move(board, 2, 14, 6) == 0 );
assert( gamma_move(board, 2, 16, 0) == 0 );
assert( gamma_move(board, 3, 9, 13) == 0 );
assert( gamma_move(board, 4, 8, 1) == 0 );
assert( gamma_move(board, 4, 13, 18) == 0 );
assert( gamma_move(board, 5, 19, 9) == 0 );
assert( gamma_move(board, 6, 17, 12) == 0 );
assert( gamma_move(board, 6, 1, 15) == 0 );
assert( gamma_move(board, 1, 9, 7) == 0 );
assert( gamma_move(board, 2, 0, 3) == 1 );
assert( gamma_move(board, 3, 4, 20) == 1 );
assert( gamma_free_fields(board, 3) == 93 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 10, 17) == 0 );
assert( gamma_move(board, 5, 3, 16) == 0 );
assert( gamma_move(board, 6, 7, 15) == 0 );
assert( gamma_move(board, 6, 2, 1) == 0 );
assert( gamma_move(board, 3, 3, 9) == 1 );
assert( gamma_move(board, 4, 20, 0) == 0 );
assert( gamma_move(board, 4, 2, 13) == 1 );
assert( gamma_move(board, 5, 15, 9) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );


char* board439751999 = gamma_board(board);
assert( board439751999 != NULL );
assert( strcmp(board439751999, 
".64.365155..2545..\n"
"2.2154.43.6..2.2..\n"
".2.62412.1.5.23246\n"
"53515...3.52311.62\n"
"26.3234..5464.1.26\n"
".6263142..3321.453\n"
"3.2142.421.13615.3\n"
".6465..5334645.51.\n"
"1155221.3116615566\n"
"415.2.2636141.4452\n"
"64.165.1.62..656..\n"
"2.2335..56.6656313\n"
"2.263.43641..15533\n"
"2..5.35124.24.6.62\n"
"44134311223.2361.5\n"
"12.234.31.43.55.15\n"
".2265532133663..56\n"
"2.24....4165..12.5\n"
".13112133551411.3.\n"
"4545545333224346.4\n"
"46214.564461.21531\n") == 0);
free(board439751999);
board439751999 = NULL;
assert( gamma_move(board, 6, 13, 6) == 0 );
assert( gamma_free_fields(board, 6) == 91 );
assert( gamma_move(board, 1, 1, 4) == 0 );
assert( gamma_move(board, 2, 17, 18) == 0 );
assert( gamma_move(board, 3, 19, 14) == 0 );
assert( gamma_move(board, 4, 17, 5) == 0 );
assert( gamma_move(board, 4, 1, 4) == 0 );
assert( gamma_move(board, 5, 13, 14) == 0 );
assert( gamma_move(board, 5, 1, 16) == 0 );
assert( gamma_move(board, 6, 2, 14) == 0 );
assert( gamma_move(board, 1, 3, 12) == 0 );
assert( gamma_move(board, 1, 7, 17) == 1 );
assert( gamma_move(board, 2, 3, 12) == 0 );
assert( gamma_move(board, 2, 4, 7) == 1 );
assert( gamma_golden_move(board, 2, 7, 17) == 0 );
assert( gamma_move(board, 3, 20, 11) == 0 );
assert( gamma_move(board, 3, 0, 16) == 0 );
assert( gamma_move(board, 6, 4, 15) == 0 );
assert( gamma_move(board, 6, 7, 9) == 1 );
assert( gamma_move(board, 1, 13, 5) == 0 );
assert( gamma_move(board, 2, 19, 6) == 0 );
assert( gamma_move(board, 3, 11, 3) == 0 );
assert( gamma_move(board, 4, 18, 0) == 0 );
assert( gamma_move(board, 5, 17, 9) == 0 );
assert( gamma_move(board, 5, 13, 2) == 0 );
assert( gamma_move(board, 6, 16, 13) == 0 );


char* board287837192 = gamma_board(board);
assert( board287837192 != NULL );
assert( strcmp(board287837192, 
".64.365155..2545..\n"
"2.2154.43.6..2.2..\n"
".2.62412.1.5.23246\n"
"53515..13.52311.62\n"
"26.3234..5464.1.26\n"
".6263142..3321.453\n"
"3.2142.421.13615.3\n"
".6465..5334645.51.\n"
"1155221.3116615566\n"
"415.2.2636141.4452\n"
"64.165.1.62..656..\n"
"2.2335.656.6656313\n"
"2.263.43641..15533\n"
"2..5235124.24.6.62\n"
"44134311223.2361.5\n"
"12.234.31.43.55.15\n"
".2265532133663..56\n"
"2.24....4165..12.5\n"
".13112133551411.3.\n"
"4545545333224346.4\n"
"46214.564461.21531\n") == 0);
free(board287837192);
board287837192 = NULL;
assert( gamma_move(board, 1, 14, 0) == 0 );
assert( gamma_move(board, 1, 3, 10) == 0 );
assert( gamma_move(board, 2, 1, 16) == 0 );
assert( gamma_move(board, 2, 9, 5) == 1 );
assert( gamma_move(board, 3, 11, 5) == 0 );
assert( gamma_move(board, 3, 5, 14) == 0 );
assert( gamma_move(board, 4, 6, 8) == 0 );
assert( gamma_move(board, 4, 6, 17) == 1 );
assert( gamma_move(board, 5, 10, 6) == 0 );
assert( gamma_move(board, 6, 8, 1) == 0 );
assert( gamma_move(board, 6, 6, 11) == 0 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 1, 13, 3) == 1 );
assert( gamma_move(board, 1, 17, 0) == 0 );
assert( gamma_free_fields(board, 1) == 85 );
assert( gamma_move(board, 2, 16, 8) == 0 );
assert( gamma_move(board, 2, 3, 19) == 0 );
assert( gamma_move(board, 3, 2, 17) == 0 );
assert( gamma_busy_fields(board, 3) == 48 );
assert( gamma_move(board, 5, 17, 15) == 0 );
assert( gamma_move(board, 6, 18, 2) == 0 );
assert( gamma_move(board, 1, 15, 10) == 0 );
assert( gamma_move(board, 1, 3, 4) == 0 );
assert( gamma_move(board, 2, 0, 5) == 0 );
assert( gamma_move(board, 2, 11, 16) == 0 );
assert( gamma_move(board, 3, 14, 2) == 0 );
assert( gamma_move(board, 3, 16, 3) == 1 );
assert( gamma_move(board, 5, 3, 3) == 0 );
assert( gamma_move(board, 5, 8, 15) == 1 );
assert( gamma_move(board, 1, 10, 2) == 0 );
assert( gamma_move(board, 1, 12, 8) == 1 );
assert( gamma_move(board, 2, 2, 17) == 0 );
assert( gamma_golden_move(board, 2, 18, 0) == 0 );


char* board151361038 = gamma_board(board);
assert( board151361038 != NULL );
assert( strcmp(board151361038, 
".64.365155..2545..\n"
"2.2154.43.6..2.2..\n"
".2.62412.1.5.23246\n"
"53515.413.52311.62\n"
"26.3234..5464.1.26\n"
".62631425.3321.453\n"
"3.2142.421.13615.3\n"
".6465..5334645.51.\n"
"1155221.3116615566\n"
"415.2.2636141.4452\n"
"64.165.1.62..656..\n"
"2.2335.656.6656313\n"
"2.263.43641.115533\n"
"2..5235124.24.6.62\n"
"44134311223.2361.5\n"
"12.234.31243.55.15\n"
".2265532133663..56\n"
"2.24....4165.11235\n"
".13112133551411.3.\n"
"4545545333224346.4\n"
"46214.564461.21531\n") == 0);
free(board151361038);
board151361038 = NULL;
assert( gamma_move(board, 3, 16, 15) == 0 );
assert( gamma_move(board, 3, 9, 15) == 1 );
assert( gamma_move(board, 5, 6, 2) == 0 );
assert( gamma_move(board, 5, 12, 4) == 0 );
assert( gamma_free_fields(board, 5) == 81 );
assert( gamma_move(board, 6, 15, 0) == 0 );
assert( gamma_move(board, 6, 17, 0) == 0 );
assert( gamma_move(board, 1, 18, 2) == 0 );
assert( gamma_move(board, 1, 5, 8) == 1 );
assert( gamma_busy_fields(board, 1) == 55 );
assert( gamma_move(board, 2, 1, 3) == 1 );
assert( gamma_move(board, 2, 3, 13) == 0 );
assert( gamma_move(board, 3, 14, 3) == 0 );
assert( gamma_move(board, 4, 13, 5) == 0 );
assert( gamma_move(board, 4, 10, 8) == 0 );


char* board954870724 = gamma_board(board);
assert( board954870724 != NULL );
assert( strcmp(board954870724, 
".64.365155..2545..\n"
"2.2154.43.6..2.2..\n"
".2.62412.1.5.23246\n"
"53515.413.52311.62\n"
"26.3234..5464.1.26\n"
".6263142533321.453\n"
"3.2142.421.13615.3\n"
".6465..5334645.51.\n"
"1155221.3116615566\n"
"415.2.2636141.4452\n"
"64.165.1.62..656..\n"
"2.2335.656.6656313\n"
"2.263143641.115533\n"
"2..5235124.24.6.62\n"
"44134311223.2361.5\n"
"12.234.31243.55.15\n"
".2265532133663..56\n"
"2224....4165.11235\n"
".13112133551411.3.\n"
"4545545333224346.4\n"
"46214.564461.21531\n") == 0);
free(board954870724);
board954870724 = NULL;
assert( gamma_move(board, 5, 13, 5) == 0 );
assert( gamma_move(board, 6, 4, 14) == 0 );
assert( gamma_move(board, 6, 4, 16) == 0 );
assert( gamma_move(board, 1, 7, 1) == 0 );
assert( gamma_move(board, 1, 0, 0) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );


char* board359296823 = gamma_board(board);
assert( board359296823 != NULL );
assert( strcmp(board359296823, 
".64.365155..2545..\n"
"2.2154.43.6..2.2..\n"
".2.62412.1.5.23246\n"
"53515.413.52311.62\n"
"26.3234..5464.1.26\n"
".6263142533321.453\n"
"3.2142.421.13615.3\n"
".6465..5334645.51.\n"
"1155221.3116615566\n"
"415.2.2636141.4452\n"
"64.165.1.62..656..\n"
"2.2335.656.6656313\n"
"2.263143641.115533\n"
"2..5235124.24.6.62\n"
"44134311223.2361.5\n"
"12.234.31243.55.15\n"
".2265532133663..56\n"
"2224....4165.11235\n"
".13112133551411.3.\n"
"4545545333224346.4\n"
"46214.564461.21531\n") == 0);
free(board359296823);
board359296823 = NULL;


char* board948922324 = gamma_board(board);
assert( board948922324 != NULL );
assert( strcmp(board948922324, 
".64.365155..2545..\n"
"2.2154.43.6..2.2..\n"
".2.62412.1.5.23246\n"
"53515.413.52311.62\n"
"26.3234..5464.1.26\n"
".6263142533321.453\n"
"3.2142.421.13615.3\n"
".6465..5334645.51.\n"
"1155221.3116615566\n"
"415.2.2636141.4452\n"
"64.165.1.62..656..\n"
"2.2335.656.6656313\n"
"2.263143641.115533\n"
"2..5235124.24.6.62\n"
"44134311223.2361.5\n"
"12.234.31243.55.15\n"
".2265532133663..56\n"
"2224....4165.11235\n"
".13112133551411.3.\n"
"4545545333224346.4\n"
"46214.564461.21531\n") == 0);
free(board948922324);
board948922324 = NULL;
assert( gamma_move(board, 4, 13, 17) == 0 );
assert( gamma_golden_move(board, 4, 20, 5) == 0 );
assert( gamma_move(board, 5, 2, 17) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 13, 17) == 0 );
assert( gamma_move(board, 6, 7, 11) == 0 );
assert( gamma_move(board, 1, 8, 11) == 0 );
assert( gamma_move(board, 1, 9, 1) == 0 );
assert( gamma_move(board, 2, 6, 15) == 0 );
assert( gamma_move(board, 2, 8, 18) == 1 );
assert( gamma_move(board, 3, 10, 8) == 0 );
assert( gamma_move(board, 3, 5, 11) == 1 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 10, 11) == 0 );
assert( gamma_move(board, 4, 4, 17) == 0 );
assert( gamma_move(board, 5, 12, 11) == 0 );
assert( gamma_move(board, 6, 14, 12) == 0 );
assert( gamma_move(board, 6, 13, 0) == 0 );
assert( gamma_move(board, 1, 1, 16) == 0 );
assert( gamma_move(board, 1, 3, 2) == 0 );
assert( gamma_move(board, 2, 16, 18) == 0 );
assert( gamma_move(board, 2, 17, 7) == 0 );
assert( gamma_move(board, 3, 1, 20) == 0 );


char* board494906685 = gamma_board(board);
assert( board494906685 != NULL );
assert( strcmp(board494906685, 
".64.365155..2545..\n"
"2.2154.43.6..2.2..\n"
".2.6241221.5.23246\n"
"53515.413.52311.62\n"
"26.3234..5464.1.26\n"
".6263142533321.453\n"
"3.2142.421.13615.3\n"
".6465..5334645.51.\n"
"1155221.3116615566\n"
"415.232636141.4452\n"
"64.165.1.62..656..\n"
"2.2335.656.6656313\n"
"2.263143641.115533\n"
"2..5235124.24.6.62\n"
"44134311223.2361.5\n"
"12.234.31243.55.15\n"
".2265532133663..56\n"
"2224....4165.11235\n"
".13112133551411.3.\n"
"4545545333224346.4\n"
"46214.564461.21531\n") == 0);
free(board494906685);
board494906685 = NULL;
assert( gamma_move(board, 4, 2, 7) == 1 );
assert( gamma_move(board, 4, 15, 0) == 0 );
assert( gamma_move(board, 5, 5, 2) == 0 );
assert( gamma_move(board, 6, 13, 17) == 0 );
assert( gamma_move(board, 6, 3, 9) == 0 );
assert( gamma_golden_move(board, 6, 6, 3) == 0 );
assert( gamma_move(board, 1, 12, 7) == 0 );
assert( gamma_move(board, 2, 16, 3) == 0 );
assert( gamma_move(board, 3, 1, 16) == 0 );
assert( gamma_move(board, 4, 9, 18) == 0 );
assert( gamma_move(board, 4, 10, 19) == 0 );
assert( gamma_busy_fields(board, 4) == 45 );
assert( gamma_move(board, 5, 19, 16) == 0 );
assert( gamma_busy_fields(board, 5) == 51 );
assert( gamma_move(board, 6, 12, 16) == 0 );
assert( gamma_move(board, 6, 17, 1) == 0 );
assert( gamma_move(board, 1, 14, 6) == 0 );
assert( gamma_move(board, 1, 2, 16) == 0 );
assert( gamma_move(board, 2, 18, 2) == 0 );
assert( gamma_golden_move(board, 2, 10, 3) == 0 );
assert( gamma_move(board, 3, 0, 10) == 0 );
assert( gamma_move(board, 4, 11, 1) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 5, 0) == 1 );
assert( gamma_move(board, 6, 12, 7) == 0 );
assert( gamma_move(board, 6, 12, 18) == 1 );
assert( gamma_move(board, 1, 7, 1) == 0 );
assert( gamma_move(board, 3, 10, 12) == 0 );
assert( gamma_move(board, 4, 13, 6) == 0 );
assert( gamma_move(board, 5, 9, 1) == 0 );


char* board372842661 = gamma_board(board);
assert( board372842661 != NULL );
assert( strcmp(board372842661, 
".64.365155..2545..\n"
"2.2154.43.6..2.2..\n"
".2.6241221.5623246\n"
"53515.413.52311.62\n"
"26.3234..5464.1.26\n"
".6263142533321.453\n"
"3.2142.421.13615.3\n"
".6465..5334645.51.\n"
"1155221.3116615566\n"
"415.232636141.4452\n"
"64.165.1.62..656..\n"
"2.2335.656.6656313\n"
"2.263143641.115533\n"
"2.45235124.24.6.62\n"
"44134311223.2361.5\n"
"12.234.31243.55.15\n"
".2265532133663..56\n"
"2224....4165.11235\n"
".13112133551411.3.\n"
"4545545333224346.4\n"
"462145564461.21531\n") == 0);
free(board372842661);
board372842661 = NULL;
assert( gamma_move(board, 6, 4, 1) == 0 );
assert( gamma_move(board, 6, 0, 16) == 0 );
assert( gamma_move(board, 1, 13, 14) == 0 );
assert( gamma_move(board, 1, 14, 15) == 1 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 19, 9) == 0 );
assert( gamma_move(board, 3, 11, 5) == 0 );
assert( gamma_move(board, 3, 13, 12) == 0 );
assert( gamma_move(board, 6, 3, 5) == 0 );
assert( gamma_move(board, 2, 14, 1) == 0 );
assert( gamma_move(board, 2, 4, 20) == 0 );
assert( gamma_move(board, 3, 19, 14) == 0 );
assert( gamma_move(board, 3, 17, 8) == 0 );
assert( gamma_move(board, 4, 19, 12) == 0 );
assert( gamma_move(board, 5, 3, 10) == 0 );
assert( gamma_move(board, 5, 8, 1) == 0 );
assert( gamma_free_fields(board, 5) == 73 );
assert( gamma_move(board, 6, 3, 4) == 0 );
assert( gamma_busy_fields(board, 6) == 46 );
assert( gamma_free_fields(board, 6) == 73 );
assert( gamma_golden_move(board, 6, 8, 6) == 0 );
assert( gamma_move(board, 2, 0, 12) == 0 );
assert( gamma_move(board, 2, 8, 2) == 0 );
assert( gamma_move(board, 3, 6, 16) == 0 );
assert( gamma_move(board, 4, 12, 7) == 0 );
assert( gamma_move(board, 4, 11, 5) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 13, 6) == 0 );
assert( gamma_move(board, 5, 11, 18) == 0 );
assert( gamma_busy_fields(board, 5) == 52 );
assert( gamma_move(board, 6, 17, 12) == 0 );
assert( gamma_busy_fields(board, 6) == 46 );
assert( gamma_golden_move(board, 6, 17, 11) == 0 );
assert( gamma_move(board, 1, 17, 3) == 0 );
assert( gamma_move(board, 1, 17, 12) == 0 );
assert( gamma_move(board, 2, 3, 4) == 0 );
assert( gamma_move(board, 3, 16, 2) == 0 );
assert( gamma_move(board, 3, 0, 17) == 0 );
assert( gamma_move(board, 4, 3, 12) == 0 );
assert( gamma_move(board, 4, 12, 1) == 0 );
assert( gamma_move(board, 5, 10, 8) == 0 );
assert( gamma_busy_fields(board, 5) == 52 );
assert( gamma_busy_fields(board, 6) == 46 );
assert( gamma_free_fields(board, 6) == 73 );
assert( gamma_move(board, 1, 8, 1) == 0 );
assert( gamma_move(board, 1, 2, 8) == 0 );
assert( gamma_move(board, 2, 16, 13) == 0 );
assert( gamma_move(board, 2, 16, 4) == 0 );
assert( gamma_move(board, 3, 13, 0) == 0 );
assert( gamma_move(board, 3, 17, 16) == 0 );
assert( gamma_move(board, 5, 0, 12) == 0 );
assert( gamma_move(board, 6, 11, 13) == 0 );
assert( gamma_move(board, 1, 9, 1) == 0 );
assert( gamma_move(board, 1, 11, 7) == 0 );
assert( gamma_move(board, 2, 5, 15) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 20, 16) == 0 );
assert( gamma_move(board, 4, 17, 11) == 0 );
assert( gamma_move(board, 5, 3, 6) == 0 );
assert( gamma_move(board, 5, 12, 3) == 1 );
assert( gamma_golden_move(board, 5, 9, 0) == 0 );
assert( gamma_move(board, 6, 15, 19) == 0 );
assert( gamma_busy_fields(board, 1) == 56 );
assert( gamma_move(board, 2, 4, 7) == 0 );
assert( gamma_move(board, 3, 0, 12) == 0 );
assert( gamma_move(board, 3, 2, 3) == 0 );
assert( gamma_move(board, 4, 4, 1) == 0 );
assert( gamma_move(board, 4, 2, 17) == 0 );
assert( gamma_move(board, 5, 2, 2) == 0 );
assert( gamma_move(board, 5, 4, 8) == 0 );
assert( gamma_busy_fields(board, 5) == 53 );
assert( gamma_move(board, 6, 0, 5) == 0 );
assert( gamma_move(board, 1, 5, 12) == 0 );
assert( gamma_move(board, 1, 12, 3) == 0 );
assert( gamma_move(board, 2, 3, 7) == 0 );
assert( gamma_move(board, 2, 12, 1) == 0 );
assert( gamma_move(board, 3, 11, 12) == 0 );
assert( gamma_move(board, 4, 7, 15) == 0 );


char* board236660933 = gamma_board(board);
assert( board236660933 != NULL );
assert( strcmp(board236660933, 
".64.365155..2545..\n"
"2.2154.43.6..2.2..\n"
".2.6241221.5623246\n"
"53515.413.52311.62\n"
"26.3234..5464.1.26\n"
".62631425333211453\n"
"3.2142.421.13615.3\n"
".6465..5334645.51.\n"
"1155221.3116615566\n"
"415.232636141.4452\n"
"64.165.1.62..656..\n"
"2.2335.656.6656313\n"
"2.263143641.115533\n"
"2.45235124.24.6.62\n"
"44134311223.2361.5\n"
"12.234.31243.55.15\n"
".2265532133663..56\n"
"2224....4165511235\n"
".13112133551411.3.\n"
"4545545333224346.4\n"
"462145564461.21531\n") == 0);
free(board236660933);
board236660933 = NULL;
assert( gamma_move(board, 5, 7, 7) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 16, 2) == 0 );
assert( gamma_move(board, 1, 8, 0) == 0 );
assert( gamma_move(board, 1, 10, 7) == 1 );
assert( gamma_move(board, 2, 9, 10) == 0 );
assert( gamma_move(board, 3, 6, 11) == 0 );
assert( gamma_move(board, 3, 9, 0) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 8, 1) == 0 );
assert( gamma_free_fields(board, 4) == 71 );
assert( gamma_move(board, 5, 3, 5) == 0 );
assert( gamma_move(board, 5, 0, 13) == 1 );
assert( gamma_move(board, 6, 4, 12) == 0 );
assert( gamma_move(board, 1, 3, 4) == 0 );
assert( gamma_move(board, 2, 4, 14) == 0 );
assert( gamma_free_fields(board, 2) == 70 );


char* board834029945 = gamma_board(board);
assert( board834029945 != NULL );
assert( strcmp(board834029945, 
".64.365155..2545..\n"
"2.2154.43.6..2.2..\n"
".2.6241221.5623246\n"
"53515.413.52311.62\n"
"26.3234..5464.1.26\n"
".62631425333211453\n"
"3.2142.421.13615.3\n"
"56465..5334645.51.\n"
"1155221.3116615566\n"
"415.232636141.4452\n"
"64.165.1.62..656..\n"
"2.2335.656.6656313\n"
"2.263143641.115533\n"
"2.45235124124.6.62\n"
"44134311223.2361.5\n"
"12.234.31243.55.15\n"
".2265532133663..56\n"
"2224....4165511235\n"
".13112133551411.3.\n"
"4545545333224346.4\n"
"462145564461.21531\n") == 0);
free(board834029945);
board834029945 = NULL;
assert( gamma_move(board, 3, 3, 20) == 1 );
assert( gamma_move(board, 3, 5, 3) == 1 );
assert( gamma_move(board, 4, 18, 0) == 0 );
assert( gamma_move(board, 4, 13, 6) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 13, 14) == 0 );
assert( gamma_busy_fields(board, 5) == 54 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 0, 11) == 0 );
assert( gamma_move(board, 1, 3, 2) == 0 );
assert( gamma_move(board, 1, 4, 12) == 0 );
assert( gamma_move(board, 2, 6, 14) == 1 );
assert( gamma_move(board, 3, 13, 14) == 0 );
assert( gamma_move(board, 3, 7, 8) == 0 );
assert( gamma_busy_fields(board, 3) == 53 );
assert( gamma_move(board, 4, 6, 16) == 0 );
assert( gamma_move(board, 6, 11, 4) == 0 );
assert( gamma_move(board, 6, 13, 4) == 0 );
assert( gamma_move(board, 1, 5, 6) == 0 );
assert( gamma_move(board, 1, 5, 9) == 0 );
assert( gamma_move(board, 2, 18, 0) == 0 );
assert( gamma_move(board, 2, 14, 15) == 0 );
assert( gamma_move(board, 3, 17, 9) == 0 );
assert( gamma_move(board, 3, 7, 10) == 0 );
assert( gamma_move(board, 4, 17, 3) == 0 );
assert( gamma_move(board, 4, 4, 0) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );


char* board607879962 = gamma_board(board);
assert( board607879962 != NULL );
assert( strcmp(board607879962, 
".643365155..2545..\n"
"2.2154.43.6..2.2..\n"
".2.6241221.5623246\n"
"53515.413.52311.62\n"
"26.3234..5464.1.26\n"
".62631425333211453\n"
"3.21422421.13615.3\n"
"56465..5334645.51.\n"
"1155221.3116615566\n"
"415.232636141.4452\n"
"64.165.1.62..656..\n"
"2.2335.656.6656313\n"
"2.263143641.115533\n"
"2.45235124124.6.62\n"
"44134311223.2361.5\n"
"12.234.31243.55.15\n"
".2265532133663..56\n"
"2224.3..4165511235\n"
".13112133551411.3.\n"
"4545545333224346.4\n"
"462145564461.21531\n") == 0);
free(board607879962);
board607879962 = NULL;
assert( gamma_move(board, 5, 3, 4) == 0 );
assert( gamma_move(board, 5, 1, 11) == 0 );
assert( gamma_move(board, 6, 2, 1) == 0 );
assert( gamma_move(board, 6, 3, 15) == 0 );
assert( gamma_move(board, 1, 16, 10) == 1 );
assert( gamma_move(board, 2, 10, 6) == 0 );
assert( gamma_move(board, 3, 13, 15) == 0 );
assert( gamma_busy_fields(board, 3) == 53 );
assert( gamma_free_fields(board, 3) == 66 );
assert( gamma_move(board, 4, 3, 8) == 0 );
assert( gamma_move(board, 4, 11, 1) == 0 );
assert( gamma_free_fields(board, 5) == 66 );
assert( gamma_move(board, 6, 4, 19) == 0 );
assert( gamma_move(board, 6, 7, 12) == 1 );
assert( gamma_move(board, 1, 9, 6) == 0 );
assert( gamma_move(board, 1, 8, 9) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 8, 15) == 0 );
assert( gamma_busy_fields(board, 2) == 56 );
assert( gamma_move(board, 4, 1, 15) == 0 );
assert( gamma_move(board, 4, 17, 6) == 0 );
assert( gamma_busy_fields(board, 4) == 45 );
assert( gamma_move(board, 5, 11, 6) == 1 );
assert( gamma_move(board, 5, 6, 8) == 0 );
assert( gamma_move(board, 6, 13, 17) == 0 );
assert( gamma_move(board, 1, 14, 16) == 0 );
assert( gamma_move(board, 2, 4, 11) == 0 );
assert( gamma_move(board, 2, 10, 14) == 1 );
assert( gamma_busy_fields(board, 2) == 57 );
assert( gamma_move(board, 3, 10, 2) == 0 );
assert( gamma_free_fields(board, 3) == 63 );
assert( gamma_move(board, 4, 19, 6) == 0 );
assert( gamma_move(board, 5, 15, 12) == 0 );
assert( gamma_move(board, 5, 13, 6) == 0 );
assert( gamma_move(board, 6, 12, 0) == 1 );
assert( gamma_busy_fields(board, 6) == 48 );
assert( gamma_free_fields(board, 6) == 62 );
assert( gamma_move(board, 1, 7, 13) == 0 );
assert( gamma_move(board, 1, 1, 3) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 10, 2) == 0 );
assert( gamma_move(board, 2, 16, 14) == 1 );
assert( gamma_free_fields(board, 2) == 61 );
assert( gamma_move(board, 3, 12, 2) == 0 );
assert( gamma_move(board, 3, 15, 3) == 0 );
assert( gamma_move(board, 4, 1, 16) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 5, 12) == 0 );
assert( gamma_move(board, 5, 4, 11) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 5, 15) == 0 );
assert( gamma_move(board, 6, 5, 18) == 0 );
assert( gamma_move(board, 1, 10, 12) == 0 );
assert( gamma_move(board, 1, 14, 17) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 9, 1) == 0 );
assert( gamma_move(board, 2, 14, 7) == 0 );
assert( gamma_busy_fields(board, 2) == 58 );
assert( gamma_move(board, 3, 19, 11) == 0 );
assert( gamma_move(board, 4, 13, 5) == 0 );
assert( gamma_move(board, 5, 13, 17) == 0 );
assert( gamma_move(board, 6, 11, 0) == 0 );
assert( gamma_move(board, 6, 12, 0) == 0 );
assert( gamma_move(board, 1, 15, 17) == 1 );
assert( gamma_move(board, 1, 15, 2) == 1 );
assert( gamma_busy_fields(board, 1) == 60 );
assert( gamma_move(board, 2, 13, 14) == 0 );
assert( gamma_move(board, 3, 17, 10) == 1 );
assert( gamma_move(board, 3, 6, 13) == 1 );
assert( gamma_move(board, 4, 8, 0) == 0 );
assert( gamma_move(board, 4, 7, 17) == 0 );
assert( gamma_busy_fields(board, 4) == 45 );
assert( gamma_move(board, 5, 16, 8) == 0 );
assert( gamma_move(board, 5, 11, 8) == 1 );
assert( gamma_move(board, 6, 5, 13) == 1 );
assert( gamma_move(board, 2, 5, 12) == 0 );
assert( gamma_move(board, 3, 18, 2) == 0 );
assert( gamma_move(board, 3, 15, 14) == 0 );


char* board171824213 = gamma_board(board);
assert( board171824213 != NULL );
assert( strcmp(board171824213, 
".643365155..2545..\n"
"2.2154.43.6..2.2..\n"
".2.6241221.5623246\n"
"53515.413.52311162\n"
"26.3234..5464.1.26\n"
".62631425333211453\n"
"3.2142242121361523\n"
"56465635334645.51.\n"
"115522163116615566\n"
"415.232636141.4452\n"
"64.165.1.62..65613\n"
"2.2335.656.6656313\n"
"2.2631436415115533\n"
"2.45235124124.6.62\n"
"4413431122352361.5\n"
"12.234.31243.55.15\n"
".2265532133663..56\n"
"2224.3..4165511235\n"
".1311213355141113.\n"
"4545545333224346.4\n"
"462145564461621531\n") == 0);
free(board171824213);
board171824213 = NULL;
assert( gamma_move(board, 4, 13, 12) == 0 );
assert( gamma_move(board, 4, 3, 18) == 0 );
assert( gamma_move(board, 6, 16, 15) == 0 );
assert( gamma_move(board, 1, 11, 13) == 0 );
assert( gamma_move(board, 2, 17, 1) == 0 );
assert( gamma_move(board, 3, 2, 17) == 0 );
assert( gamma_move(board, 3, 15, 6) == 0 );
assert( gamma_move(board, 4, 9, 0) == 0 );
assert( gamma_move(board, 4, 7, 18) == 0 );
assert( gamma_move(board, 5, 5, 15) == 0 );
assert( gamma_move(board, 5, 8, 13) == 0 );
assert( gamma_busy_fields(board, 5) == 56 );
assert( gamma_move(board, 6, 17, 14) == 0 );
assert( gamma_move(board, 1, 19, 9) == 0 );
assert( gamma_move(board, 2, 3, 6) == 0 );
assert( gamma_move(board, 3, 7, 8) == 0 );
assert( gamma_move(board, 4, 3, 0) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 8, 1) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 1, 8, 1) == 0 );
assert( gamma_move(board, 2, 4, 0) == 0 );
assert( gamma_move(board, 2, 9, 10) == 0 );
assert( gamma_move(board, 3, 5, 3) == 0 );
assert( gamma_move(board, 5, 5, 15) == 0 );
assert( gamma_move(board, 5, 17, 18) == 0 );
assert( gamma_move(board, 6, 13, 14) == 0 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 1, 10, 8) == 0 );
assert( gamma_move(board, 1, 13, 5) == 0 );
assert( gamma_move(board, 2, 19, 9) == 0 );
assert( gamma_move(board, 2, 8, 14) == 0 );
assert( gamma_move(board, 3, 16, 2) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 15, 0) == 0 );
assert( gamma_move(board, 4, 0, 12) == 0 );
assert( gamma_move(board, 5, 10, 6) == 0 );
assert( gamma_move(board, 5, 10, 6) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 17, 12) == 0 );
assert( gamma_move(board, 1, 19, 1) == 0 );
assert( gamma_move(board, 1, 11, 1) == 0 );
assert( gamma_busy_fields(board, 1) == 60 );
assert( gamma_move(board, 2, 17, 9) == 0 );
assert( gamma_move(board, 3, 3, 4) == 0 );
assert( gamma_golden_move(board, 3, 4, 8) == 0 );
assert( gamma_move(board, 4, 16, 17) == 0 );
assert( gamma_move(board, 4, 15, 7) == 1 );
assert( gamma_busy_fields(board, 4) == 46 );
assert( gamma_move(board, 5, 0, 9) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );


char* board304350225 = gamma_board(board);
assert( board304350225 != NULL );
assert( strcmp(board304350225, 
".643365155..2545..\n"
"2.2154.43.6..2.2..\n"
".2.6241221.5623246\n"
"53515.413.52311162\n"
"26.3234..5464.1.26\n"
".62631425333211453\n"
"3.2142242121361523\n"
"56465635334645.51.\n"
"115522163116615566\n"
"415.232636141.4452\n"
"64.165.1.62..65613\n"
"2.2335.656.6656313\n"
"2.2631436415115533\n"
"2.45235124124.6462\n"
"4413431122352361.5\n"
"12.234.31243.55.15\n"
".2265532133663..56\n"
"2224.3..4165511235\n"
".1311213355141113.\n"
"4545545333224346.4\n"
"462145564461621531\n") == 0);
free(board304350225);
board304350225 = NULL;
assert( gamma_move(board, 2, 3, 6) == 0 );
assert( gamma_move(board, 2, 13, 2) == 0 );
assert( gamma_move(board, 3, 20, 0) == 0 );
assert( gamma_move(board, 4, 10, 2) == 0 );
assert( gamma_move(board, 5, 16, 2) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 9, 6) == 0 );
assert( gamma_move(board, 6, 11, 20) == 1 );


gamma_delete(board);

    return 0;
}
