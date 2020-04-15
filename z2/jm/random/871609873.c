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
uuid: 871609873
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(16, 17, 9, 42);
assert( board != NULL );


assert( gamma_move(board, 1, 15, 14) == 1 );
assert( gamma_move(board, 1, 12, 7) == 1 );
assert( gamma_move(board, 3, 1, 2) == 1 );
assert( gamma_move(board, 3, 5, 7) == 1 );
assert( gamma_move(board, 4, 2, 15) == 1 );
assert( gamma_move(board, 4, 4, 7) == 1 );
assert( gamma_busy_fields(board, 4) == 2 );


char* board804930949 = gamma_board(board);
assert( board804930949 != NULL );
assert( strcmp(board804930949, 
"................\n"
"..4.............\n"
"...............1\n"
"................\n"
"................\n"
"................\n"
"................\n"
"................\n"
"................\n"
"....43......1...\n"
"................\n"
"................\n"
"................\n"
"................\n"
".3..............\n"
"................\n"
"................\n") == 0);
free(board804930949);
board804930949 = NULL;
assert( gamma_move(board, 5, 6, 15) == 1 );
assert( gamma_move(board, 6, 13, 0) == 1 );
assert( gamma_move(board, 6, 13, 4) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 3, 3) == 1 );
assert( gamma_move(board, 7, 13, 0) == 0 );
assert( gamma_move(board, 8, 8, 0) == 1 );
assert( gamma_move(board, 9, 3, 11) == 1 );
assert( gamma_move(board, 1, 12, 1) == 1 );
assert( gamma_move(board, 2, 4, 7) == 0 );
assert( gamma_move(board, 2, 11, 12) == 1 );
assert( gamma_move(board, 3, 1, 12) == 1 );
assert( gamma_move(board, 3, 8, 5) == 1 );
assert( gamma_free_fields(board, 3) == 256 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 12, 12) == 1 );
assert( gamma_move(board, 4, 2, 7) == 1 );
assert( gamma_move(board, 5, 12, 0) == 1 );
assert( gamma_move(board, 5, 11, 7) == 1 );
assert( gamma_move(board, 6, 11, 15) == 1 );
assert( gamma_move(board, 6, 9, 1) == 1 );
assert( gamma_move(board, 7, 12, 6) == 1 );
assert( gamma_move(board, 7, 5, 11) == 1 );


char* board891183612 = gamma_board(board);
assert( board891183612 != NULL );
assert( strcmp(board891183612, 
"................\n"
"..4...5....6....\n"
"...............1\n"
"................\n"
".3.........24...\n"
"...9.7..........\n"
"................\n"
"................\n"
"................\n"
"..4.43.....51...\n"
"............7...\n"
"........3.......\n"
".............6..\n"
"...7............\n"
".3..............\n"
".........6..1...\n"
"........8...56..\n") == 0);
free(board891183612);
board891183612 = NULL;
assert( gamma_move(board, 8, 14, 6) == 1 );
assert( gamma_move(board, 8, 6, 9) == 1 );
assert( gamma_move(board, 9, 7, 6) == 1 );
assert( gamma_move(board, 9, 11, 14) == 1 );
assert( gamma_move(board, 1, 3, 14) == 1 );
assert( gamma_free_fields(board, 1) == 243 );
assert( gamma_move(board, 2, 9, 12) == 1 );
assert( gamma_move(board, 3, 3, 4) == 1 );
assert( gamma_move(board, 3, 7, 7) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_golden_move(board, 3, 6, 12) == 0 );
assert( gamma_move(board, 4, 3, 10) == 1 );
assert( gamma_move(board, 5, 7, 14) == 1 );
assert( gamma_free_fields(board, 5) == 238 );
assert( gamma_move(board, 6, 1, 0) == 1 );
assert( gamma_move(board, 7, 3, 0) == 1 );
assert( gamma_move(board, 8, 14, 1) == 1 );
assert( gamma_move(board, 9, 13, 2) == 1 );
assert( gamma_move(board, 1, 13, 13) == 1 );
assert( gamma_move(board, 2, 5, 4) == 1 );
assert( gamma_move(board, 2, 1, 13) == 1 );
assert( gamma_move(board, 3, 0, 5) == 1 );
assert( gamma_move(board, 3, 10, 11) == 1 );


char* board112525150 = gamma_board(board);
assert( board112525150 != NULL );
assert( strcmp(board112525150, 
"................\n"
"..4...5....6....\n"
"...1...5...9...1\n"
".2...........1..\n"
".3.......2.24...\n"
"...9.7....3.....\n"
"...4............\n"
"......8.........\n"
"................\n"
"..4.43.3...51...\n"
".......9....7.8.\n"
"3.......3.......\n"
"...3.2.......6..\n"
"...7............\n"
".3...........9..\n"
".........6..1.8.\n"
".6.7....8...56..\n") == 0);
free(board112525150);
board112525150 = NULL;
assert( gamma_move(board, 4, 7, 1) == 1 );
assert( gamma_move(board, 4, 1, 3) == 1 );
assert( gamma_busy_fields(board, 4) == 7 );
assert( gamma_move(board, 5, 9, 4) == 1 );
assert( gamma_move(board, 5, 15, 11) == 1 );
assert( gamma_move(board, 6, 3, 6) == 1 );
assert( gamma_move(board, 7, 8, 0) == 0 );
assert( gamma_move(board, 7, 8, 7) == 1 );
assert( gamma_move(board, 8, 2, 2) == 1 );
assert( gamma_move(board, 8, 7, 6) == 0 );
assert( gamma_move(board, 9, 3, 10) == 0 );
assert( gamma_move(board, 9, 6, 5) == 1 );
assert( gamma_busy_fields(board, 9) == 5 );
assert( gamma_move(board, 1, 9, 3) == 1 );
assert( gamma_busy_fields(board, 1) == 6 );
assert( gamma_move(board, 2, 12, 5) == 1 );
assert( gamma_move(board, 3, 3, 7) == 1 );
assert( gamma_move(board, 4, 14, 9) == 1 );
assert( gamma_free_fields(board, 4) == 217 );
assert( gamma_move(board, 5, 10, 7) == 1 );
assert( gamma_move(board, 6, 3, 0) == 0 );
assert( gamma_free_fields(board, 6) == 216 );
assert( gamma_move(board, 7, 11, 14) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 12, 2) == 1 );
assert( gamma_move(board, 9, 9, 4) == 0 );
assert( gamma_move(board, 1, 0, 7) == 1 );
assert( gamma_move(board, 2, 6, 10) == 1 );
assert( gamma_move(board, 3, 11, 3) == 1 );
assert( gamma_move(board, 4, 1, 5) == 1 );
assert( gamma_move(board, 4, 9, 15) == 1 );
assert( gamma_busy_fields(board, 4) == 10 );
assert( gamma_move(board, 5, 2, 11) == 1 );
assert( gamma_move(board, 5, 10, 13) == 1 );
assert( gamma_move(board, 6, 4, 16) == 1 );
assert( gamma_move(board, 7, 16, 9) == 0 );
assert( gamma_move(board, 8, 0, 15) == 1 );
assert( gamma_move(board, 8, 12, 9) == 1 );
assert( gamma_move(board, 9, 9, 8) == 1 );
assert( gamma_move(board, 9, 14, 7) == 1 );
assert( gamma_move(board, 1, 10, 11) == 0 );
assert( gamma_move(board, 1, 6, 16) == 1 );
assert( gamma_move(board, 2, 8, 14) == 1 );
assert( gamma_busy_fields(board, 2) == 7 );
assert( gamma_move(board, 3, 15, 1) == 1 );
assert( gamma_move(board, 3, 5, 5) == 1 );
assert( gamma_busy_fields(board, 3) == 12 );
assert( gamma_move(board, 4, 0, 13) == 1 );
assert( gamma_move(board, 5, 10, 1) == 1 );
assert( gamma_golden_move(board, 5, 8, 9) == 0 );
assert( gamma_move(board, 6, 12, 6) == 0 );
assert( gamma_move(board, 6, 4, 10) == 1 );
assert( gamma_move(board, 7, 3, 7) == 0 );
assert( gamma_move(board, 7, 3, 11) == 0 );
assert( gamma_move(board, 8, 0, 13) == 0 );
assert( gamma_move(board, 9, 15, 13) == 1 );
assert( gamma_move(board, 9, 13, 14) == 1 );
assert( gamma_golden_move(board, 9, 0, 12) == 0 );
assert( gamma_move(board, 1, 16, 14) == 0 );
assert( gamma_move(board, 2, 9, 11) == 1 );
assert( gamma_move(board, 2, 10, 1) == 0 );
assert( gamma_golden_move(board, 2, 15, 9) == 0 );


char* board984738182 = gamma_board(board);
assert( board984738182 != NULL );
assert( strcmp(board984738182, 
"....6.1.........\n"
"8.4...5..4.6....\n"
"...1...52..9.9.1\n"
"42........5..1.9\n"
".3.......2.24...\n"
"..59.7...23....5\n"
"...46.2.........\n"
"......8.....8.4.\n"
".........9......\n"
"1.4343.37.551.9.\n"
"...6...9....7.8.\n"
"34...39.3...2...\n"
"...3.2...5...6..\n"
".4.7.....1.3....\n"
".38.........89..\n"
".......4.65.1.83\n"
".6.7....8...56..\n") == 0);
free(board984738182);
board984738182 = NULL;
assert( gamma_move(board, 3, 9, 10) == 1 );
assert( gamma_move(board, 3, 11, 4) == 1 );
assert( gamma_move(board, 4, 4, 1) == 1 );
assert( gamma_move(board, 4, 8, 11) == 1 );
assert( gamma_busy_fields(board, 4) == 13 );
assert( gamma_free_fields(board, 4) == 189 );
assert( gamma_move(board, 5, 7, 2) == 1 );
assert( gamma_move(board, 6, 11, 15) == 0 );
assert( gamma_move(board, 7, 11, 14) == 0 );
assert( gamma_move(board, 7, 13, 15) == 1 );
assert( gamma_move(board, 8, 15, 1) == 0 );
assert( gamma_move(board, 9, 12, 7) == 0 );
assert( gamma_move(board, 9, 13, 3) == 1 );
assert( gamma_move(board, 1, 4, 1) == 0 );
assert( gamma_move(board, 1, 9, 13) == 1 );
assert( gamma_free_fields(board, 1) == 185 );
assert( gamma_move(board, 2, 12, 6) == 0 );
assert( gamma_move(board, 2, 0, 15) == 0 );
assert( gamma_move(board, 3, 10, 6) == 1 );
assert( gamma_move(board, 3, 8, 16) == 1 );
assert( gamma_move(board, 4, 13, 8) == 1 );
assert( gamma_move(board, 5, 15, 0) == 1 );
assert( gamma_move(board, 6, 13, 16) == 1 );
assert( gamma_move(board, 7, 13, 14) == 0 );
assert( gamma_busy_fields(board, 7) == 6 );
assert( gamma_move(board, 8, 1, 2) == 0 );
assert( gamma_move(board, 8, 11, 0) == 1 );


char* board809586487 = gamma_board(board);
assert( board809586487 != NULL );
assert( strcmp(board809586487, 
"....6.1.3....6..\n"
"8.4...5..4.6.7..\n"
"...1...52..9.9.1\n"
"42.......15..1.9\n"
".3.......2.24...\n"
"..59.7..423....5\n"
"...46.2..3......\n"
"......8.....8.4.\n"
".........9...4..\n"
"1.4343.37.551.9.\n"
"...6...9..3.7.8.\n"
"34...39.3...2...\n"
"...3.2...5.3.6..\n"
".4.7.....1.3.9..\n"
".38....5....89..\n"
"....4..4.65.1.83\n"
".6.7....8..856.5\n") == 0);
free(board809586487);
board809586487 = NULL;
assert( gamma_move(board, 1, 16, 15) == 0 );
assert( gamma_move(board, 2, 0, 0) == 1 );
assert( gamma_move(board, 2, 1, 3) == 0 );
assert( gamma_move(board, 3, 15, 4) == 1 );
assert( gamma_move(board, 4, 5, 4) == 0 );
assert( gamma_move(board, 4, 4, 2) == 1 );
assert( gamma_move(board, 5, 16, 12) == 0 );
assert( gamma_move(board, 5, 2, 2) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 1, 5) == 0 );
assert( gamma_move(board, 7, 6, 11) == 1 );
assert( gamma_move(board, 8, 2, 11) == 0 );


char* board360623977 = gamma_board(board);
assert( board360623977 != NULL );
assert( strcmp(board360623977, 
"....6.1.3....6..\n"
"8.4...5..4.6.7..\n"
"...1...52..9.9.1\n"
"42.......15..1.9\n"
".3.......2.24...\n"
"..59.77.423....5\n"
"...46.2..3......\n"
"......8.....8.4.\n"
".........9...4..\n"
"1.4343.37.551.9.\n"
"...6...9..3.7.8.\n"
"34...39.3...2...\n"
"...3.2...5.3.6.3\n"
".4.7.....1.3.9..\n"
".38.4..5....89..\n"
"....4..4.65.1.83\n"
"26.7....8..856.5\n") == 0);
free(board360623977);
board360623977 = NULL;
assert( gamma_move(board, 9, 14, 2) == 1 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 1, 2, 5) == 1 );
assert( gamma_move(board, 1, 4, 8) == 1 );
assert( gamma_move(board, 2, 14, 16) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );


char* board262968879 = gamma_board(board);
assert( board262968879 != NULL );
assert( strcmp(board262968879, 
"....6.1.3....62.\n"
"8.4...5..4.6.7..\n"
"...1...52..9.9.1\n"
"42.......15..1.9\n"
".3.......2.24...\n"
"..59.77.423....5\n"
"...46.2..3......\n"
"......8.....8.4.\n"
"....1....9...4..\n"
"1.4343.37.551.9.\n"
"...6...9..3.7.8.\n"
"341..39.3...2...\n"
"...3.2...5.3.6.3\n"
".4.7.....1.3.9..\n"
".38.4..5....899.\n"
"....4..4.65.1.83\n"
"26.7....8..856.5\n") == 0);
free(board262968879);
board262968879 = NULL;
assert( gamma_move(board, 3, 2, 15) == 0 );
assert( gamma_move(board, 4, 12, 3) == 1 );
assert( gamma_move(board, 4, 13, 5) == 1 );
assert( gamma_move(board, 5, 16, 11) == 0 );
assert( gamma_move(board, 6, 12, 4) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 11, 1) == 1 );
assert( gamma_busy_fields(board, 7) == 8 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 7, 6) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 3, 2) == 1 );
assert( gamma_move(board, 1, 13, 15) == 0 );


char* board441899862 = gamma_board(board);
assert( board441899862 != NULL );
assert( strcmp(board441899862, 
"....6.1.3....62.\n"
"8.4...5..4.6.7..\n"
"...1...52..9.9.1\n"
"42.......15..1.9\n"
".3.......2.24...\n"
"..59.77.423....5\n"
"...46.2..3......\n"
"......8.....8.4.\n"
"....1....9...4..\n"
"1.4343.37.551.9.\n"
"...6...9..3.7.8.\n"
"341..39.3...24..\n"
"...3.2...5.366.3\n"
".4.7.....1.349..\n"
".3894..5....899.\n"
"....4..4.6571.83\n"
"26.7....8..856.5\n") == 0);
free(board441899862);
board441899862 = NULL;
assert( gamma_move(board, 2, 9, 15) == 0 );
assert( gamma_free_fields(board, 2) == 166 );
assert( gamma_move(board, 3, 16, 15) == 0 );
assert( gamma_move(board, 4, 13, 7) == 1 );
assert( gamma_golden_move(board, 4, 4, 5) == 0 );
assert( gamma_move(board, 5, 8, 0) == 0 );
assert( gamma_move(board, 5, 10, 16) == 1 );
assert( gamma_move(board, 6, 12, 14) == 1 );
assert( gamma_move(board, 7, 12, 13) == 1 );
assert( gamma_move(board, 8, 9, 3) == 0 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 1, 9, 7) == 1 );
assert( gamma_move(board, 1, 0, 14) == 1 );
assert( gamma_move(board, 2, 9, 5) == 1 );
assert( gamma_move(board, 2, 4, 15) == 1 );


char* board529929211 = gamma_board(board);
assert( board529929211 != NULL );
assert( strcmp(board529929211, 
"....6.1.3.5..62.\n"
"8.4.2.5..4.6.7..\n"
"1..1...52..969.1\n"
"42.......15.71.9\n"
".3.......2.24...\n"
"..59.77.423....5\n"
"...46.2..3......\n"
"......8.....8.4.\n"
"....1....9...4..\n"
"1.4343.37155149.\n"
"...6...9..3.7.8.\n"
"341..39.32..24..\n"
"...3.2...5.366.3\n"
".4.7.....1.349..\n"
".3894..5....899.\n"
"....4..4.6571.83\n"
"26.7....8..856.5\n") == 0);
free(board529929211);
board529929211 = NULL;
assert( gamma_move(board, 3, 4, 0) == 1 );
assert( gamma_free_fields(board, 3) == 157 );
assert( gamma_move(board, 4, 11, 13) == 1 );
assert( gamma_move(board, 5, 14, 0) == 1 );
assert( gamma_move(board, 6, 3, 10) == 0 );
assert( gamma_move(board, 7, 13, 8) == 0 );
assert( gamma_move(board, 8, 5, 4) == 0 );
assert( gamma_move(board, 9, 16, 0) == 0 );
assert( gamma_move(board, 9, 7, 5) == 1 );
assert( gamma_golden_move(board, 9, 12, 11) == 0 );
assert( gamma_move(board, 1, 4, 2) == 0 );
assert( gamma_move(board, 2, 8, 13) == 1 );
assert( gamma_move(board, 3, 9, 8) == 0 );
assert( gamma_free_fields(board, 3) == 153 );
assert( gamma_move(board, 4, 8, 14) == 0 );
assert( gamma_move(board, 4, 0, 12) == 1 );
assert( gamma_free_fields(board, 4) == 152 );
assert( gamma_move(board, 5, 1, 14) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 16, 5) == 0 );
assert( gamma_move(board, 7, 1, 12) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 0, 6) == 1 );
assert( gamma_move(board, 8, 7, 15) == 1 );
assert( gamma_busy_fields(board, 8) == 11 );
assert( gamma_move(board, 9, 15, 1) == 0 );
assert( gamma_move(board, 9, 8, 1) == 1 );
assert( gamma_move(board, 1, 10, 0) == 1 );
assert( gamma_move(board, 1, 8, 3) == 1 );
assert( gamma_move(board, 2, 13, 5) == 0 );
assert( gamma_golden_move(board, 2, 1, 8) == 0 );
assert( gamma_move(board, 3, 0, 9) == 1 );
assert( gamma_move(board, 4, 7, 5) == 0 );
assert( gamma_golden_move(board, 4, 2, 13) == 0 );
assert( gamma_move(board, 5, 8, 9) == 1 );
assert( gamma_move(board, 6, 9, 5) == 0 );
assert( gamma_free_fields(board, 6) == 144 );
assert( gamma_move(board, 7, 13, 6) == 1 );
assert( gamma_move(board, 7, 14, 11) == 1 );
assert( gamma_golden_move(board, 7, 0, 4) == 0 );
assert( gamma_move(board, 8, 5, 14) == 1 );
assert( gamma_move(board, 9, 10, 2) == 1 );
assert( gamma_move(board, 9, 0, 1) == 1 );
assert( gamma_move(board, 1, 14, 0) == 0 );
assert( gamma_move(board, 2, 16, 0) == 0 );
assert( gamma_move(board, 2, 5, 2) == 1 );
assert( gamma_golden_move(board, 3, 13, 12) == 0 );
assert( gamma_move(board, 6, 6, 11) == 0 );
assert( gamma_move(board, 7, 2, 9) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 10, 1) == 0 );
assert( gamma_move(board, 8, 5, 10) == 1 );
assert( gamma_move(board, 9, 12, 4) == 0 );
assert( gamma_move(board, 9, 9, 9) == 1 );
assert( gamma_move(board, 1, 16, 9) == 0 );


char* board877565483 = gamma_board(board);
assert( board877565483 != NULL );
assert( strcmp(board877565483, 
"....6.1.3.5..62.\n"
"8.4.2.58.4.6.7..\n"
"15.1.8.52..969.1\n"
"42......215471.9\n"
"43.......2.24...\n"
"..59.77.423...75\n"
"...4682..3......\n"
"3.7...8.59..8.4.\n"
"....1....9...4..\n"
"1.4343.37155149.\n"
"8..6...9..3.778.\n"
"341..39932..24..\n"
"...3.2...5.366.3\n"
".4.7....11.349..\n"
".38942.5..9.899.\n"
"9...4..496571.83\n"
"26.73...8.185655\n") == 0);
free(board877565483);
board877565483 = NULL;
assert( gamma_move(board, 2, 15, 8) == 1 );
assert( gamma_move(board, 3, 14, 12) == 1 );
assert( gamma_free_fields(board, 3) == 133 );
assert( gamma_move(board, 4, 10, 15) == 1 );
assert( gamma_move(board, 5, 13, 7) == 0 );
assert( gamma_move(board, 5, 10, 8) == 1 );
assert( gamma_move(board, 6, 0, 2) == 1 );
assert( gamma_move(board, 6, 4, 5) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 8, 11) == 0 );
assert( gamma_move(board, 8, 10, 7) == 0 );
assert( gamma_move(board, 8, 15, 1) == 0 );
assert( gamma_move(board, 9, 14, 4) == 1 );
assert( gamma_move(board, 1, 10, 9) == 1 );
assert( gamma_free_fields(board, 1) == 127 );
assert( gamma_move(board, 2, 12, 11) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 13, 4) == 0 );
assert( gamma_move(board, 3, 12, 6) == 0 );
assert( gamma_move(board, 4, 10, 15) == 0 );
assert( gamma_move(board, 4, 13, 0) == 0 );
assert( gamma_busy_fields(board, 4) == 21 );
assert( gamma_move(board, 5, 5, 14) == 0 );
assert( gamma_move(board, 5, 0, 10) == 1 );
assert( gamma_move(board, 6, 9, 1) == 0 );
assert( gamma_free_fields(board, 6) == 125 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 2, 9) == 0 );
assert( gamma_move(board, 7, 12, 1) == 0 );
assert( gamma_move(board, 8, 3, 10) == 0 );
assert( gamma_move(board, 8, 8, 8) == 1 );


char* board989483719 = gamma_board(board);
assert( board989483719 != NULL );
assert( strcmp(board989483719, 
"....6.1.3.5..62.\n"
"8.4.2.58.446.7..\n"
"15.1.8.52..969.1\n"
"42......215471.9\n"
"43.......2.24.3.\n"
"..59.77.423.2.75\n"
"5..4682..3......\n"
"3.7...8.591.8.4.\n"
"....1...895..4.2\n"
"1.4343.37155149.\n"
"8..6...9..3.778.\n"
"341.639932..24..\n"
"...3.2...5.36693\n"
".4.7....11.349..\n"
"638942.5..9.899.\n"
"9...4..496571.83\n"
"26.73...8.185655\n") == 0);
free(board989483719);
board989483719 = NULL;
assert( gamma_move(board, 9, 10, 15) == 0 );
assert( gamma_move(board, 9, 11, 5) == 1 );
assert( gamma_move(board, 1, 9, 7) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 1, 1) == 1 );
assert( gamma_move(board, 2, 5, 11) == 0 );
assert( gamma_move(board, 4, 13, 6) == 0 );
assert( gamma_move(board, 5, 9, 1) == 0 );
assert( gamma_move(board, 5, 3, 10) == 0 );
assert( gamma_busy_fields(board, 5) == 18 );
assert( gamma_move(board, 6, 6, 4) == 1 );
assert( gamma_move(board, 7, 8, 13) == 0 );
assert( gamma_move(board, 7, 5, 6) == 1 );
assert( gamma_move(board, 8, 8, 2) == 1 );
assert( gamma_move(board, 9, 16, 2) == 0 );
assert( gamma_move(board, 1, 14, 14) == 1 );
assert( gamma_move(board, 2, 3, 7) == 0 );
assert( gamma_move(board, 2, 3, 2) == 0 );
assert( gamma_move(board, 3, 3, 3) == 0 );
assert( gamma_move(board, 4, 12, 11) == 0 );
assert( gamma_move(board, 4, 14, 13) == 1 );
assert( gamma_move(board, 5, 16, 0) == 0 );
assert( gamma_move(board, 6, 12, 7) == 0 );
assert( gamma_move(board, 6, 11, 11) == 1 );
assert( gamma_move(board, 7, 3, 6) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 1, 2) == 0 );
assert( gamma_move(board, 8, 8, 11) == 0 );
assert( gamma_move(board, 1, 3, 10) == 0 );
assert( gamma_busy_fields(board, 1) == 17 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 15, 10) == 1 );
assert( gamma_move(board, 3, 8, 13) == 0 );
assert( gamma_move(board, 4, 9, 7) == 0 );
assert( gamma_move(board, 5, 15, 5) == 1 );
assert( gamma_move(board, 6, 3, 2) == 0 );
assert( gamma_golden_move(board, 6, 7, 3) == 0 );
assert( gamma_move(board, 7, 0, 7) == 0 );
assert( gamma_move(board, 7, 4, 8) == 0 );


char* board581993061 = gamma_board(board);
assert( board581993061 != NULL );
assert( strcmp(board581993061, 
"....6.1.3.5..62.\n"
"8.4.2.58.446.7..\n"
"15.1.8.52..96911\n"
"42......21547149\n"
"43.......2.24.3.\n"
"..59.77.42362.75\n"
"5..4682..3.....3\n"
"3.7...8.591.8.4.\n"
"....1...895..4.2\n"
"1.4343.37155149.\n"
"8..6.7.9..3.778.\n"
"341.639932.924.5\n"
"...3.26..5.36693\n"
".4.7....11.349..\n"
"638942.58.9.899.\n"
"92..4..496571.83\n"
"26.73...8.185655\n") == 0);
free(board581993061);
board581993061 = NULL;
assert( gamma_move(board, 8, 8, 3) == 0 );
assert( gamma_move(board, 8, 0, 16) == 1 );
assert( gamma_move(board, 1, 15, 15) == 1 );
assert( gamma_move(board, 1, 14, 15) == 1 );
assert( gamma_move(board, 2, 6, 15) == 0 );
assert( gamma_move(board, 2, 11, 9) == 1 );
assert( gamma_move(board, 3, 2, 0) == 1 );
assert( gamma_move(board, 4, 12, 4) == 0 );
assert( gamma_move(board, 4, 2, 7) == 0 );
assert( gamma_move(board, 5, 0, 7) == 0 );
assert( gamma_move(board, 5, 12, 14) == 0 );
assert( gamma_busy_fields(board, 5) == 19 );
assert( gamma_move(board, 6, 14, 9) == 0 );
assert( gamma_golden_move(board, 6, 15, 9) == 0 );
assert( gamma_move(board, 7, 16, 11) == 0 );
assert( gamma_move(board, 7, 2, 10) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 15, 16) == 1 );
assert( gamma_move(board, 8, 15, 5) == 0 );


char* board920383499 = gamma_board(board);
assert( board920383499 != NULL );
assert( strcmp(board920383499, 
"8...6.1.3.5..628\n"
"8.4.2.58.446.711\n"
"15.1.8.52..96911\n"
"42......21547149\n"
"43.......2.24.3.\n"
"..59.77.42362.75\n"
"5.74682..3.....3\n"
"3.7...8.59128.4.\n"
"....1...895..4.2\n"
"1.4343.37155149.\n"
"8..6.7.9..3.778.\n"
"341.639932.924.5\n"
"...3.26..5.36693\n"
".4.7....11.349..\n"
"638942.58.9.899.\n"
"92..4..496571.83\n"
"26373...8.185655\n") == 0);
free(board920383499);
board920383499 = NULL;
assert( gamma_move(board, 9, 13, 5) == 0 );
assert( gamma_move(board, 2, 3, 5) == 1 );
assert( gamma_free_fields(board, 2) == 106 );


char* board239315210 = gamma_board(board);
assert( board239315210 != NULL );
assert( strcmp(board239315210, 
"8...6.1.3.5..628\n"
"8.4.2.58.446.711\n"
"15.1.8.52..96911\n"
"42......21547149\n"
"43.......2.24.3.\n"
"..59.77.42362.75\n"
"5.74682..3.....3\n"
"3.7...8.59128.4.\n"
"....1...895..4.2\n"
"1.4343.37155149.\n"
"8..6.7.9..3.778.\n"
"3412639932.924.5\n"
"...3.26..5.36693\n"
".4.7....11.349..\n"
"638942.58.9.899.\n"
"92..4..496571.83\n"
"26373...8.185655\n") == 0);
free(board239315210);
board239315210 = NULL;
assert( gamma_move(board, 3, 4, 10) == 0 );
assert( gamma_move(board, 4, 10, 14) == 1 );
assert( gamma_move(board, 5, 9, 9) == 0 );
assert( gamma_move(board, 6, 11, 7) == 0 );
assert( gamma_busy_fields(board, 6) == 15 );
assert( gamma_move(board, 7, 1, 3) == 0 );
assert( gamma_move(board, 7, 5, 11) == 0 );
assert( gamma_move(board, 8, 12, 3) == 0 );
assert( gamma_move(board, 8, 10, 15) == 0 );
assert( gamma_move(board, 9, 8, 0) == 0 );
assert( gamma_move(board, 9, 3, 2) == 0 );
assert( gamma_move(board, 1, 0, 5) == 0 );
assert( gamma_move(board, 1, 8, 7) == 0 );
assert( gamma_move(board, 2, 0, 9) == 0 );
assert( gamma_move(board, 2, 15, 2) == 1 );


char* board275862982 = gamma_board(board);
assert( board275862982 != NULL );
assert( strcmp(board275862982, 
"8...6.1.3.5..628\n"
"8.4.2.58.446.711\n"
"15.1.8.52.496911\n"
"42......21547149\n"
"43.......2.24.3.\n"
"..59.77.42362.75\n"
"5.74682..3.....3\n"
"3.7...8.59128.4.\n"
"....1...895..4.2\n"
"1.4343.37155149.\n"
"8..6.7.9..3.778.\n"
"3412639932.924.5\n"
"...3.26..5.36693\n"
".4.7....11.349..\n"
"638942.58.9.8992\n"
"92..4..496571.83\n"
"26373...8.185655\n") == 0);
free(board275862982);
board275862982 = NULL;
assert( gamma_move(board, 3, 1, 13) == 0 );
assert( gamma_free_fields(board, 3) == 104 );
assert( gamma_move(board, 4, 12, 2) == 0 );
assert( gamma_golden_move(board, 4, 4, 15) == 1 );
assert( gamma_move(board, 5, 4, 10) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_golden_move(board, 5, 1, 9) == 0 );
assert( gamma_move(board, 6, 8, 12) == 1 );
assert( gamma_move(board, 7, 8, 11) == 0 );
assert( gamma_move(board, 8, 5, 14) == 0 );
assert( gamma_move(board, 8, 15, 3) == 1 );
assert( gamma_free_fields(board, 8) == 102 );
assert( gamma_move(board, 9, 0, 16) == 0 );
assert( gamma_move(board, 1, 1, 5) == 0 );
assert( gamma_free_fields(board, 1) == 102 );
assert( gamma_move(board, 2, 16, 11) == 0 );
assert( gamma_free_fields(board, 2) == 102 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 2, 13) == 1 );
assert( gamma_busy_fields(board, 3) == 23 );
assert( gamma_move(board, 4, 14, 6) == 0 );
assert( gamma_move(board, 5, 8, 0) == 0 );
assert( gamma_move(board, 5, 14, 0) == 0 );
assert( gamma_golden_move(board, 5, 11, 10) == 0 );
assert( gamma_move(board, 6, 1, 16) == 1 );
assert( gamma_move(board, 7, 9, 1) == 0 );
assert( gamma_golden_move(board, 7, 11, 11) == 1 );
assert( gamma_move(board, 8, 8, 2) == 0 );
assert( gamma_move(board, 8, 3, 9) == 1 );
assert( gamma_move(board, 9, 6, 2) == 1 );
assert( gamma_move(board, 1, 0, 6) == 0 );
assert( gamma_move(board, 1, 10, 1) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 4, 2) == 0 );
assert( gamma_move(board, 2, 5, 5) == 0 );
assert( gamma_golden_move(board, 2, 15, 7) == 0 );
assert( gamma_move(board, 3, 13, 15) == 0 );
assert( gamma_move(board, 3, 2, 1) == 1 );
assert( gamma_move(board, 4, 15, 13) == 0 );
assert( gamma_move(board, 5, 3, 0) == 0 );
assert( gamma_move(board, 5, 6, 13) == 1 );
assert( gamma_move(board, 6, 0, 14) == 0 );


char* board738937094 = gamma_board(board);
assert( board738937094 != NULL );
assert( strcmp(board738937094, 
"86..6.1.3.5..628\n"
"8.4.4.58.446.711\n"
"15.1.8.52.496911\n"
"423...5.21547149\n"
"43......62.24.3.\n"
"..59.77.42372.75\n"
"5.74682..3.....3\n"
"3.78..8.59128.4.\n"
"....1...895..4.2\n"
"1.4343.37155149.\n"
"8..6.7.9..3.778.\n"
"3412639932.924.5\n"
"...3.26..5.36693\n"
".4.7....11.349.8\n"
"638942958.9.8992\n"
"923.4..496571.83\n"
"26373...8.185655\n") == 0);
free(board738937094);
board738937094 = NULL;
assert( gamma_move(board, 7, 12, 15) == 1 );
assert( gamma_move(board, 8, 10, 13) == 0 );
assert( gamma_move(board, 8, 10, 6) == 0 );
assert( gamma_move(board, 9, 1, 16) == 0 );
assert( gamma_busy_fields(board, 9) == 20 );
assert( gamma_move(board, 1, 12, 15) == 0 );
assert( gamma_move(board, 1, 0, 1) == 0 );
assert( gamma_move(board, 2, 3, 14) == 0 );
assert( gamma_move(board, 2, 13, 14) == 0 );
assert( gamma_move(board, 3, 2, 11) == 0 );
assert( gamma_move(board, 4, 12, 10) == 1 );
assert( gamma_free_fields(board, 5) == 94 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 15, 3) == 0 );
assert( gamma_move(board, 6, 6, 9) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 7, 14) == 0 );
assert( gamma_move(board, 7, 10, 12) == 1 );
assert( gamma_move(board, 9, 14, 6) == 0 );
assert( gamma_golden_move(board, 9, 1, 11) == 0 );
assert( gamma_move(board, 1, 11, 4) == 0 );
assert( gamma_move(board, 2, 14, 15) == 0 );
assert( gamma_move(board, 2, 0, 16) == 0 );
assert( gamma_move(board, 3, 4, 7) == 0 );
assert( gamma_move(board, 4, 14, 5) == 1 );
assert( gamma_move(board, 6, 4, 1) == 0 );
assert( gamma_move(board, 6, 10, 0) == 0 );
assert( gamma_free_fields(board, 6) == 92 );
assert( gamma_move(board, 7, 6, 9) == 0 );
assert( gamma_move(board, 8, 0, 9) == 0 );
assert( gamma_move(board, 8, 8, 2) == 0 );
assert( gamma_move(board, 9, 3, 7) == 0 );
assert( gamma_move(board, 9, 11, 13) == 0 );
assert( gamma_golden_move(board, 9, 2, 15) == 1 );
assert( gamma_move(board, 1, 13, 4) == 0 );
assert( gamma_busy_fields(board, 1) == 19 );
assert( gamma_move(board, 2, 0, 7) == 0 );
assert( gamma_move(board, 3, 14, 2) == 0 );
assert( gamma_move(board, 3, 2, 11) == 0 );
assert( gamma_move(board, 4, 3, 1) == 1 );
assert( gamma_busy_fields(board, 4) == 26 );
assert( gamma_move(board, 5, 3, 3) == 0 );
assert( gamma_move(board, 5, 8, 12) == 0 );
assert( gamma_move(board, 6, 3, 14) == 0 );
assert( gamma_move(board, 6, 10, 1) == 0 );
assert( gamma_move(board, 7, 3, 6) == 0 );
assert( gamma_move(board, 7, 13, 15) == 0 );
assert( gamma_move(board, 8, 14, 9) == 0 );
assert( gamma_move(board, 8, 4, 1) == 0 );
assert( gamma_move(board, 9, 7, 15) == 0 );
assert( gamma_move(board, 1, 15, 2) == 0 );
assert( gamma_move(board, 2, 3, 0) == 0 );
assert( gamma_move(board, 2, 5, 1) == 1 );
assert( gamma_move(board, 3, 11, 9) == 0 );


char* board603914308 = gamma_board(board);
assert( board603914308 != NULL );
assert( strcmp(board603914308, 
"86..6.1.3.5..628\n"
"8.9.4.58.4467711\n"
"15.1.8.52.496911\n"
"423...5.21547149\n"
"43......62724.3.\n"
"..59.77.42372.75\n"
"5.74682..3..4..3\n"
"3.78..8.59128.4.\n"
"....1...895..4.2\n"
"1.4343.37155149.\n"
"8..6.7.9..3.778.\n"
"3412639932.92445\n"
"...3.26..5.36693\n"
".4.7....11.349.8\n"
"638942958.9.8992\n"
"923442.496571.83\n"
"26373...8.185655\n") == 0);
free(board603914308);
board603914308 = NULL;
assert( gamma_move(board, 4, 0, 5) == 0 );
assert( gamma_move(board, 5, 6, 1) == 1 );
assert( gamma_busy_fields(board, 5) == 21 );
assert( gamma_move(board, 6, 3, 14) == 0 );
assert( gamma_move(board, 6, 6, 8) == 1 );
assert( gamma_free_fields(board, 6) == 88 );
assert( gamma_move(board, 7, 9, 7) == 0 );
assert( gamma_move(board, 9, 9, 5) == 0 );
assert( gamma_move(board, 9, 13, 2) == 0 );
assert( gamma_busy_fields(board, 9) == 21 );
assert( gamma_golden_possible(board, 9) == 0 );
assert( gamma_move(board, 1, 8, 14) == 0 );
assert( gamma_busy_fields(board, 1) == 19 );
assert( gamma_move(board, 2, 13, 7) == 0 );
assert( gamma_busy_fields(board, 2) == 20 );
assert( gamma_move(board, 3, 5, 10) == 0 );
assert( gamma_busy_fields(board, 3) == 24 );
assert( gamma_move(board, 4, 13, 4) == 0 );
assert( gamma_move(board, 4, 1, 6) == 1 );
assert( gamma_move(board, 5, 10, 7) == 0 );
assert( gamma_move(board, 5, 10, 4) == 1 );
assert( gamma_golden_move(board, 5, 12, 1) == 1 );
assert( gamma_move(board, 6, 11, 7) == 0 );
assert( gamma_busy_fields(board, 6) == 17 );
assert( gamma_move(board, 7, 6, 9) == 0 );
assert( gamma_move(board, 7, 6, 9) == 0 );
assert( gamma_free_fields(board, 7) == 86 );
assert( gamma_move(board, 8, 6, 9) == 0 );
assert( gamma_move(board, 8, 12, 16) == 1 );
assert( gamma_free_fields(board, 8) == 85 );
assert( gamma_move(board, 9, 11, 4) == 0 );
assert( gamma_busy_fields(board, 9) == 21 );
assert( gamma_free_fields(board, 9) == 85 );
assert( gamma_move(board, 1, 3, 7) == 0 );
assert( gamma_free_fields(board, 1) == 85 );
assert( gamma_move(board, 2, 5, 14) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 12, 4) == 0 );
assert( gamma_move(board, 3, 1, 0) == 0 );
assert( gamma_busy_fields(board, 3) == 24 );
assert( gamma_golden_move(board, 3, 10, 4) == 1 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 2, 9) == 0 );
assert( gamma_move(board, 6, 4, 15) == 0 );
assert( gamma_free_fields(board, 6) == 85 );
assert( gamma_move(board, 7, 8, 5) == 0 );
assert( gamma_move(board, 8, 3, 4) == 0 );
assert( gamma_free_fields(board, 8) == 85 );
assert( gamma_move(board, 9, 16, 7) == 0 );
assert( gamma_move(board, 9, 2, 9) == 0 );
assert( gamma_golden_possible(board, 9) == 0 );
assert( gamma_move(board, 1, 8, 5) == 0 );
assert( gamma_free_fields(board, 1) == 85 );
assert( gamma_move(board, 2, 15, 8) == 0 );
assert( gamma_move(board, 3, 8, 11) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 9, 7) == 0 );
assert( gamma_move(board, 5, 13, 7) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 8, 12) == 0 );
assert( gamma_move(board, 6, 14, 12) == 0 );
assert( gamma_golden_move(board, 6, 13, 6) == 1 );
assert( gamma_move(board, 7, 9, 5) == 0 );
assert( gamma_move(board, 7, 1, 6) == 0 );
assert( gamma_move(board, 8, 15, 15) == 0 );
assert( gamma_move(board, 8, 5, 12) == 1 );
assert( gamma_move(board, 9, 10, 11) == 0 );
assert( gamma_move(board, 1, 11, 4) == 0 );
assert( gamma_move(board, 1, 6, 0) == 1 );
assert( gamma_move(board, 3, 12, 7) == 0 );
assert( gamma_golden_move(board, 3, 0, 1) == 0 );
assert( gamma_move(board, 4, 16, 9) == 0 );
assert( gamma_move(board, 4, 11, 8) == 1 );
assert( gamma_move(board, 5, 13, 13) == 0 );
assert( gamma_move(board, 5, 1, 2) == 0 );
assert( gamma_move(board, 6, 8, 7) == 0 );
assert( gamma_move(board, 6, 3, 15) == 1 );


char* board450308472 = gamma_board(board);
assert( board450308472 != NULL );
assert( strcmp(board450308472, 
"86..6.1.3.5.8628\n"
"8.964.58.4467711\n"
"15.1.8.52.496911\n"
"423...5.21547149\n"
"43...8..62724.3.\n"
"..59.77.42372.75\n"
"5.74682..3..4..3\n"
"3.78..8.59128.4.\n"
"....1.6.8954.4.2\n"
"1.4343.37155149.\n"
"84.6.7.9..3.768.\n"
"3412639932.92445\n"
"...3.26..5336693\n"
".4.7....11.349.8\n"
"638942958.9.8992\n"
"9234425496575.83\n"
"26373.1.8.185655\n") == 0);
free(board450308472);
board450308472 = NULL;
assert( gamma_move(board, 7, 13, 3) == 0 );
assert( gamma_move(board, 8, 5, 9) == 1 );
assert( gamma_move(board, 8, 11, 3) == 0 );
assert( gamma_move(board, 9, 8, 2) == 0 );
assert( gamma_move(board, 9, 11, 10) == 1 );
assert( gamma_free_fields(board, 9) == 79 );
assert( gamma_move(board, 1, 6, 14) == 1 );
assert( gamma_move(board, 2, 5, 1) == 0 );
assert( gamma_move(board, 2, 1, 10) == 1 );
assert( gamma_golden_move(board, 2, 1, 8) == 0 );
assert( gamma_move(board, 3, 10, 14) == 0 );
assert( gamma_move(board, 3, 0, 11) == 1 );
assert( gamma_move(board, 4, 14, 12) == 0 );
assert( gamma_move(board, 5, 6, 6) == 1 );
assert( gamma_move(board, 5, 12, 5) == 0 );
assert( gamma_busy_fields(board, 5) == 23 );
assert( gamma_move(board, 6, 8, 2) == 0 );
assert( gamma_move(board, 7, 3, 6) == 0 );
assert( gamma_move(board, 7, 2, 14) == 1 );
assert( gamma_move(board, 8, 11, 3) == 0 );
assert( gamma_move(board, 9, 13, 3) == 0 );
assert( gamma_move(board, 9, 12, 12) == 0 );
assert( gamma_move(board, 1, 16, 5) == 0 );
assert( gamma_move(board, 2, 3, 5) == 0 );
assert( gamma_move(board, 2, 15, 1) == 0 );
assert( gamma_move(board, 3, 6, 11) == 0 );
assert( gamma_golden_move(board, 3, 14, 10) == 0 );
assert( gamma_move(board, 4, 4, 14) == 1 );
assert( gamma_move(board, 4, 6, 10) == 0 );
assert( gamma_golden_move(board, 4, 16, 8) == 0 );
assert( gamma_move(board, 5, 2, 0) == 0 );
assert( gamma_move(board, 5, 11, 6) == 1 );
assert( gamma_move(board, 6, 4, 16) == 0 );
assert( gamma_move(board, 7, 7, 1) == 0 );
assert( gamma_move(board, 7, 3, 1) == 0 );
assert( gamma_golden_move(board, 7, 0, 15) == 0 );
assert( gamma_move(board, 8, 16, 7) == 0 );
assert( gamma_move(board, 8, 2, 3) == 1 );
assert( gamma_move(board, 9, 2, 8) == 1 );
assert( gamma_move(board, 1, 11, 1) == 0 );
assert( gamma_move(board, 2, 4, 1) == 0 );
assert( gamma_move(board, 2, 5, 2) == 0 );
assert( gamma_move(board, 3, 1, 13) == 0 );
assert( gamma_move(board, 3, 15, 11) == 0 );
assert( gamma_free_fields(board, 3) == 70 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 0, 5) == 0 );
assert( gamma_move(board, 5, 4, 2) == 0 );
assert( gamma_move(board, 5, 2, 4) == 1 );
assert( gamma_move(board, 6, 9, 3) == 0 );
assert( gamma_busy_fields(board, 6) == 19 );
assert( gamma_move(board, 7, 8, 1) == 0 );
assert( gamma_move(board, 7, 2, 2) == 0 );
assert( gamma_move(board, 8, 8, 15) == 1 );
assert( gamma_move(board, 9, 3, 8) == 1 );
assert( gamma_move(board, 1, 9, 4) == 0 );


char* board979629915 = gamma_board(board);
assert( board979629915 != NULL );
assert( strcmp(board979629915, 
"86..6.1.3.5.8628\n"
"8.964.5884467711\n"
"157148152.496911\n"
"423...5.21547149\n"
"43...8..62724.3.\n"
"3.59.77.42372.75\n"
"5274682..3.94..3\n"
"3.78.88.59128.4.\n"
"..991.6.8954.4.2\n"
"1.4343.37155149.\n"
"84.6.759..35768.\n"
"3412639932.92445\n"
"..53.26..5336693\n"
".487....11.349.8\n"
"638942958.9.8992\n"
"9234425496575.83\n"
"26373.1.8.185655\n") == 0);
free(board979629915);
board979629915 = NULL;
assert( gamma_move(board, 2, 4, 11) == 1 );
assert( gamma_move(board, 3, 4, 0) == 0 );
assert( gamma_move(board, 3, 8, 3) == 0 );
assert( gamma_move(board, 4, 3, 0) == 0 );
assert( gamma_move(board, 4, 11, 8) == 0 );
assert( gamma_busy_fields(board, 4) == 29 );
assert( gamma_free_fields(board, 4) == 66 );
assert( gamma_move(board, 5, 0, 5) == 0 );
assert( gamma_move(board, 5, 2, 8) == 0 );
assert( gamma_move(board, 6, 6, 2) == 0 );
assert( gamma_move(board, 7, 6, 9) == 0 );
assert( gamma_move(board, 8, 6, 4) == 0 );
assert( gamma_move(board, 8, 14, 2) == 0 );
assert( gamma_move(board, 9, 12, 3) == 0 );
assert( gamma_move(board, 9, 15, 15) == 0 );
assert( gamma_move(board, 1, 10, 10) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 6, 3) == 1 );
assert( gamma_move(board, 3, 14, 7) == 0 );
assert( gamma_move(board, 4, 10, 7) == 0 );
assert( gamma_move(board, 4, 3, 9) == 0 );
assert( gamma_free_fields(board, 4) == 64 );
assert( gamma_move(board, 5, 11, 7) == 0 );
assert( gamma_move(board, 6, 7, 12) == 1 );
assert( gamma_move(board, 6, 15, 9) == 1 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 7, 10, 14) == 0 );
assert( gamma_golden_possible(board, 7) == 0 );
assert( gamma_move(board, 8, 9, 1) == 0 );
assert( gamma_move(board, 9, 15, 1) == 0 );
assert( gamma_move(board, 9, 6, 15) == 0 );
assert( gamma_move(board, 1, 3, 7) == 0 );
assert( gamma_move(board, 2, 12, 6) == 0 );
assert( gamma_move(board, 3, 13, 7) == 0 );
assert( gamma_busy_fields(board, 5) == 25 );


char* board982376270 = gamma_board(board);
assert( board982376270 != NULL );
assert( strcmp(board982376270, 
"86..6.1.3.5.8628\n"
"8.964.5884467711\n"
"157148152.496911\n"
"423...5.21547149\n"
"43...8.662724.3.\n"
"3.59277.42372.75\n"
"5274682..3194..3\n"
"3.78.88.59128.46\n"
"..991.6.8954.4.2\n"
"1.4343.37155149.\n"
"84.6.759..35768.\n"
"3412639932.92445\n"
"..53.26..5336693\n"
".487..2.11.349.8\n"
"638942958.9.8992\n"
"9234425496575.83\n"
"26373.1.8.185655\n") == 0);
free(board982376270);
board982376270 = NULL;
assert( gamma_move(board, 6, 3, 7) == 0 );
assert( gamma_move(board, 6, 5, 14) == 0 );
assert( gamma_golden_move(board, 6, 6, 0) == 0 );
assert( gamma_move(board, 7, 6, 1) == 0 );
assert( gamma_busy_fields(board, 7) == 17 );
assert( gamma_move(board, 8, 0, 7) == 0 );
assert( gamma_busy_fields(board, 8) == 24 );
assert( gamma_free_fields(board, 8) == 62 );
assert( gamma_move(board, 9, 12, 10) == 0 );
assert( gamma_move(board, 9, 10, 12) == 0 );
assert( gamma_move(board, 1, 4, 1) == 0 );
assert( gamma_move(board, 1, 15, 8) == 0 );
assert( gamma_move(board, 2, 12, 4) == 0 );
assert( gamma_move(board, 2, 7, 14) == 0 );
assert( gamma_move(board, 3, 3, 11) == 0 );
assert( gamma_move(board, 4, 1, 16) == 0 );
assert( gamma_move(board, 5, 8, 0) == 0 );
assert( gamma_move(board, 5, 13, 14) == 0 );
assert( gamma_move(board, 6, 3, 5) == 0 );
assert( gamma_move(board, 6, 3, 1) == 0 );
assert( gamma_busy_fields(board, 6) == 21 );
assert( gamma_golden_move(board, 6, 16, 15) == 0 );
assert( gamma_move(board, 7, 0, 5) == 0 );
assert( gamma_move(board, 7, 9, 11) == 0 );
assert( gamma_move(board, 8, 15, 1) == 0 );
assert( gamma_move(board, 8, 13, 5) == 0 );
assert( gamma_move(board, 9, 2, 10) == 0 );
assert( gamma_move(board, 9, 4, 10) == 0 );
assert( gamma_free_fields(board, 9) == 62 );
assert( gamma_golden_possible(board, 9) == 0 );
assert( gamma_move(board, 1, 10, 8) == 0 );
assert( gamma_move(board, 1, 11, 9) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 8, 10) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );


char* board381432052 = gamma_board(board);
assert( board381432052 != NULL );
assert( strcmp(board381432052, 
"86..6.1.3.5.8628\n"
"8.964.5884467711\n"
"157148152.496911\n"
"423...5.21547149\n"
"43...8.662724.3.\n"
"3.59277.42372.75\n"
"5274682.23194..3\n"
"3.78.88.59128.46\n"
"..991.6.8954.4.2\n"
"1.4343.37155149.\n"
"84.6.759..35768.\n"
"3412639932.92445\n"
"..53.26..5336693\n"
".487..2.11.349.8\n"
"638942958.9.8992\n"
"9234425496575.83\n"
"26373.1.8.185655\n") == 0);
free(board381432052);
board381432052 = NULL;
assert( gamma_move(board, 3, 9, 13) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 1, 13) == 0 );
assert( gamma_move(board, 5, 12, 15) == 0 );
assert( gamma_move(board, 6, 13, 7) == 0 );
assert( gamma_busy_fields(board, 6) == 21 );
assert( gamma_move(board, 7, 16, 7) == 0 );
assert( gamma_move(board, 8, 16, 7) == 0 );
assert( gamma_move(board, 8, 5, 13) == 1 );
assert( gamma_move(board, 9, 15, 1) == 0 );
assert( gamma_move(board, 9, 4, 2) == 0 );
assert( gamma_move(board, 1, 3, 7) == 0 );
assert( gamma_move(board, 2, 9, 4) == 0 );
assert( gamma_move(board, 3, 6, 8) == 0 );
assert( gamma_move(board, 4, 5, 7) == 0 );
assert( gamma_move(board, 4, 8, 9) == 0 );
assert( gamma_move(board, 5, 6, 14) == 0 );
assert( gamma_move(board, 5, 14, 1) == 0 );
assert( gamma_free_fields(board, 5) == 60 );
assert( gamma_move(board, 6, 4, 8) == 0 );
assert( gamma_move(board, 7, 14, 9) == 0 );
assert( gamma_move(board, 8, 13, 7) == 0 );
assert( gamma_move(board, 9, 6, 7) == 1 );
assert( gamma_golden_move(board, 9, 0, 15) == 0 );


char* board800459008 = gamma_board(board);
assert( board800459008 != NULL );
assert( strcmp(board800459008, 
"86..6.1.3.5.8628\n"
"8.964.5884467711\n"
"157148152.496911\n"
"423..85.21547149\n"
"43...8.662724.3.\n"
"3.59277.42372.75\n"
"5274682.23194..3\n"
"3.78.88.59128.46\n"
"..991.6.8954.4.2\n"
"1.4343937155149.\n"
"84.6.759..35768.\n"
"3412639932.92445\n"
"..53.26..5336693\n"
".487..2.11.349.8\n"
"638942958.9.8992\n"
"9234425496575.83\n"
"26373.1.8.185655\n") == 0);
free(board800459008);
board800459008 = NULL;
assert( gamma_move(board, 1, 6, 15) == 0 );
assert( gamma_busy_fields(board, 1) == 21 );
assert( gamma_move(board, 2, 10, 12) == 0 );
assert( gamma_move(board, 2, 10, 15) == 0 );
assert( gamma_move(board, 3, 8, 15) == 0 );
assert( gamma_move(board, 3, 6, 4) == 0 );
assert( gamma_move(board, 5, 8, 0) == 0 );
assert( gamma_move(board, 5, 8, 11) == 0 );


char* board805900684 = gamma_board(board);
assert( board805900684 != NULL );
assert( strcmp(board805900684, 
"86..6.1.3.5.8628\n"
"8.964.5884467711\n"
"157148152.496911\n"
"423..85.21547149\n"
"43...8.662724.3.\n"
"3.59277.42372.75\n"
"5274682.23194..3\n"
"3.78.88.59128.46\n"
"..991.6.8954.4.2\n"
"1.4343937155149.\n"
"84.6.759..35768.\n"
"3412639932.92445\n"
"..53.26..5336693\n"
".487..2.11.349.8\n"
"638942958.9.8992\n"
"9234425496575.83\n"
"26373.1.8.185655\n") == 0);
free(board805900684);
board805900684 = NULL;
assert( gamma_free_fields(board, 6) == 59 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 7, 6, 8) == 0 );
assert( gamma_move(board, 8, 6, 9) == 0 );
assert( gamma_move(board, 8, 12, 3) == 0 );
assert( gamma_busy_fields(board, 8) == 25 );


char* board874822379 = gamma_board(board);
assert( board874822379 != NULL );
assert( strcmp(board874822379, 
"86..6.1.3.5.8628\n"
"8.964.5884467711\n"
"157148152.496911\n"
"423..85.21547149\n"
"43...8.662724.3.\n"
"3.59277.42372.75\n"
"5274682.23194..3\n"
"3.78.88.59128.46\n"
"..991.6.8954.4.2\n"
"1.4343937155149.\n"
"84.6.759..35768.\n"
"3412639932.92445\n"
"..53.26..5336693\n"
".487..2.11.349.8\n"
"638942958.9.8992\n"
"9234425496575.83\n"
"26373.1.8.185655\n") == 0);
free(board874822379);
board874822379 = NULL;
assert( gamma_move(board, 9, 10, 13) == 0 );
assert( gamma_move(board, 9, 6, 16) == 0 );
assert( gamma_move(board, 1, 10, 14) == 0 );
assert( gamma_move(board, 1, 10, 15) == 0 );
assert( gamma_move(board, 2, 7, 3) == 1 );
assert( gamma_move(board, 2, 8, 16) == 0 );
assert( gamma_move(board, 3, 2, 11) == 0 );
assert( gamma_move(board, 4, 6, 4) == 0 );
assert( gamma_move(board, 4, 6, 0) == 0 );
assert( gamma_busy_fields(board, 4) == 29 );
assert( gamma_move(board, 5, 9, 13) == 0 );
assert( gamma_free_fields(board, 5) == 58 );
assert( gamma_move(board, 6, 3, 14) == 0 );
assert( gamma_move(board, 6, 6, 14) == 0 );
assert( gamma_move(board, 7, 8, 12) == 0 );
assert( gamma_move(board, 7, 5, 14) == 0 );
assert( gamma_move(board, 8, 13, 7) == 0 );
assert( gamma_move(board, 9, 11, 13) == 0 );
assert( gamma_move(board, 9, 9, 4) == 0 );
assert( gamma_busy_fields(board, 9) == 25 );
assert( gamma_free_fields(board, 9) == 58 );
assert( gamma_move(board, 1, 3, 14) == 0 );
assert( gamma_move(board, 1, 9, 11) == 0 );
assert( gamma_move(board, 2, 16, 5) == 0 );
assert( gamma_move(board, 3, 13, 3) == 0 );
assert( gamma_move(board, 4, 0, 5) == 0 );
assert( gamma_move(board, 5, 6, 4) == 0 );
assert( gamma_move(board, 5, 10, 6) == 0 );
assert( gamma_busy_fields(board, 5) == 25 );
assert( gamma_move(board, 6, 0, 7) == 0 );
assert( gamma_free_fields(board, 6) == 58 );
assert( gamma_move(board, 7, 1, 4) == 1 );
assert( gamma_move(board, 8, 9, 13) == 0 );
assert( gamma_move(board, 8, 3, 14) == 0 );
assert( gamma_golden_move(board, 8, 7, 0) == 0 );
assert( gamma_move(board, 9, 14, 9) == 0 );
assert( gamma_move(board, 9, 2, 2) == 0 );
assert( gamma_move(board, 1, 7, 10) == 1 );
assert( gamma_move(board, 2, 8, 2) == 0 );
assert( gamma_busy_fields(board, 2) == 25 );
assert( gamma_move(board, 3, 11, 7) == 0 );
assert( gamma_move(board, 3, 6, 12) == 1 );
assert( gamma_move(board, 4, 4, 4) == 1 );
assert( gamma_move(board, 5, 5, 10) == 0 );
assert( gamma_move(board, 5, 6, 14) == 0 );
assert( gamma_move(board, 6, 9, 0) == 1 );
assert( gamma_move(board, 8, 5, 10) == 0 );
assert( gamma_move(board, 8, 8, 9) == 0 );
assert( gamma_busy_fields(board, 8) == 25 );
assert( gamma_move(board, 9, 12, 4) == 0 );
assert( gamma_move(board, 1, 11, 13) == 0 );
assert( gamma_move(board, 1, 6, 9) == 0 );
assert( gamma_move(board, 2, 4, 0) == 0 );
assert( gamma_move(board, 2, 2, 3) == 0 );
assert( gamma_busy_fields(board, 2) == 25 );
assert( gamma_move(board, 3, 3, 5) == 0 );
assert( gamma_move(board, 3, 12, 11) == 0 );
assert( gamma_free_fields(board, 3) == 53 );
assert( gamma_move(board, 4, 6, 9) == 0 );
assert( gamma_move(board, 4, 1, 10) == 0 );
assert( gamma_free_fields(board, 4) == 53 );
assert( gamma_move(board, 5, 12, 2) == 0 );
assert( gamma_move(board, 6, 5, 10) == 0 );
assert( gamma_move(board, 7, 2, 7) == 0 );
assert( gamma_move(board, 7, 3, 16) == 1 );
assert( gamma_move(board, 8, 16, 5) == 0 );
assert( gamma_busy_fields(board, 8) == 25 );
assert( gamma_move(board, 9, 2, 16) == 1 );
assert( gamma_move(board, 9, 10, 9) == 0 );
assert( gamma_move(board, 1, 12, 13) == 0 );
assert( gamma_golden_move(board, 1, 2, 8) == 1 );
assert( gamma_move(board, 2, 1, 5) == 0 );
assert( gamma_move(board, 3, 4, 0) == 0 );
assert( gamma_move(board, 4, 9, 1) == 0 );
assert( gamma_move(board, 4, 8, 7) == 0 );
assert( gamma_move(board, 6, 7, 14) == 0 );
assert( gamma_move(board, 7, 1, 5) == 0 );
assert( gamma_move(board, 7, 15, 1) == 0 );
assert( gamma_move(board, 8, 6, 1) == 0 );
assert( gamma_golden_move(board, 8, 11, 15) == 1 );
assert( gamma_move(board, 9, 13, 4) == 0 );
assert( gamma_move(board, 1, 8, 0) == 0 );
assert( gamma_move(board, 1, 3, 8) == 0 );
assert( gamma_move(board, 2, 3, 5) == 0 );
assert( gamma_busy_fields(board, 2) == 25 );
assert( gamma_move(board, 3, 12, 15) == 0 );
assert( gamma_move(board, 4, 9, 8) == 0 );
assert( gamma_move(board, 5, 9, 5) == 0 );
assert( gamma_move(board, 5, 2, 9) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 12, 11) == 0 );
assert( gamma_move(board, 6, 15, 14) == 0 );
assert( gamma_free_fields(board, 6) == 51 );
assert( gamma_move(board, 7, 12, 14) == 0 );
assert( gamma_busy_fields(board, 7) == 19 );
assert( gamma_move(board, 8, 9, 13) == 0 );
assert( gamma_move(board, 8, 3, 5) == 0 );
assert( gamma_move(board, 1, 3, 14) == 0 );
assert( gamma_move(board, 1, 3, 8) == 0 );
assert( gamma_free_fields(board, 1) == 51 );
assert( gamma_move(board, 2, 6, 8) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 8, 5) == 0 );
assert( gamma_move(board, 4, 8, 1) == 0 );
assert( gamma_move(board, 4, 2, 7) == 0 );
assert( gamma_move(board, 5, 15, 1) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 14, 11) == 0 );
assert( gamma_move(board, 6, 14, 0) == 0 );
assert( gamma_move(board, 7, 13, 16) == 0 );
assert( gamma_move(board, 8, 15, 5) == 0 );
assert( gamma_move(board, 8, 1, 0) == 0 );
assert( gamma_golden_move(board, 8, 15, 2) == 0 );
assert( gamma_move(board, 9, 7, 11) == 1 );
assert( gamma_move(board, 1, 4, 7) == 0 );
assert( gamma_move(board, 1, 5, 11) == 0 );
assert( gamma_move(board, 2, 6, 8) == 0 );
assert( gamma_move(board, 2, 2, 16) == 0 );
assert( gamma_move(board, 3, 8, 0) == 0 );
assert( gamma_move(board, 3, 1, 3) == 0 );
assert( gamma_move(board, 4, 11, 13) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_golden_move(board, 4, 9, 3) == 0 );
assert( gamma_move(board, 5, 3, 10) == 0 );
assert( gamma_move(board, 5, 5, 6) == 0 );
assert( gamma_move(board, 7, 16, 11) == 0 );
assert( gamma_move(board, 7, 15, 14) == 0 );
assert( gamma_busy_fields(board, 7) == 19 );
assert( gamma_move(board, 8, 6, 4) == 0 );
assert( gamma_move(board, 8, 1, 6) == 0 );
assert( gamma_golden_possible(board, 8) == 0 );
assert( gamma_move(board, 9, 12, 2) == 0 );
assert( gamma_move(board, 9, 10, 0) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 13, 3) == 0 );
assert( gamma_move(board, 3, 4, 13) == 1 );
assert( gamma_busy_fields(board, 3) == 28 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 15, 5) == 0 );
assert( gamma_busy_fields(board, 4) == 30 );
assert( gamma_move(board, 5, 14, 9) == 0 );
assert( gamma_move(board, 5, 0, 2) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 11, 8) == 0 );
assert( gamma_move(board, 7, 6, 2) == 0 );
assert( gamma_move(board, 7, 7, 8) == 1 );
assert( gamma_move(board, 8, 9, 7) == 0 );
assert( gamma_move(board, 8, 0, 4) == 1 );
assert( gamma_move(board, 9, 10, 10) == 0 );
assert( gamma_move(board, 1, 10, 13) == 0 );
assert( gamma_move(board, 1, 7, 11) == 0 );
assert( gamma_move(board, 2, 0, 5) == 0 );
assert( gamma_move(board, 2, 5, 11) == 0 );
assert( gamma_move(board, 3, 8, 5) == 0 );
assert( gamma_move(board, 4, 0, 5) == 0 );
assert( gamma_move(board, 4, 10, 16) == 0 );
assert( gamma_move(board, 5, 2, 11) == 0 );
assert( gamma_move(board, 6, 3, 5) == 0 );
assert( gamma_move(board, 6, 2, 10) == 0 );
assert( gamma_free_fields(board, 6) == 47 );
assert( gamma_move(board, 7, 3, 14) == 0 );
assert( gamma_move(board, 7, 0, 1) == 0 );
assert( gamma_golden_possible(board, 7) == 0 );
assert( gamma_move(board, 8, 12, 16) == 0 );
assert( gamma_move(board, 8, 9, 7) == 0 );
assert( gamma_golden_possible(board, 8) == 0 );


char* board879618027 = gamma_board(board);
assert( board879618027 != NULL );
assert( strcmp(board879618027, 
"86976.1.3.5.8628\n"
"8.964.5884487711\n"
"157148152.496911\n"
"423.385.21547149\n"
"43...83662724.3.\n"
"3.59277942372.75\n"
"5274682123194..3\n"
"3.78.88.59128.46\n"
"..191.678954.4.2\n"
"1.4343937155149.\n"
"84.6.759..35768.\n"
"3412639932.92445\n"
"8753426..5336693\n"
".487..2211.349.8\n"
"638942958.9.8992\n"
"9234425496575.83\n"
"26373.1.86185655\n") == 0);
free(board879618027);
board879618027 = NULL;
assert( gamma_move(board, 9, 6, 0) == 0 );
assert( gamma_move(board, 1, 2, 4) == 0 );
assert( gamma_golden_move(board, 1, 0, 4) == 0 );
assert( gamma_move(board, 2, 12, 4) == 0 );
assert( gamma_move(board, 2, 7, 9) == 1 );
assert( gamma_free_fields(board, 2) == 46 );
assert( gamma_golden_move(board, 2, 1, 2) == 1 );
assert( gamma_move(board, 3, 1, 16) == 0 );
assert( gamma_move(board, 3, 3, 4) == 0 );
assert( gamma_move(board, 4, 8, 12) == 0 );
assert( gamma_golden_move(board, 4, 11, 5) == 0 );
assert( gamma_move(board, 5, 10, 14) == 0 );
assert( gamma_move(board, 6, 9, 13) == 0 );
assert( gamma_free_fields(board, 6) == 46 );
assert( gamma_move(board, 7, 9, 4) == 0 );
assert( gamma_move(board, 7, 14, 2) == 0 );
assert( gamma_move(board, 8, 13, 7) == 0 );


char* board184726824 = gamma_board(board);
assert( board184726824 != NULL );
assert( strcmp(board184726824, 
"86976.1.3.5.8628\n"
"8.964.5884487711\n"
"157148152.496911\n"
"423.385.21547149\n"
"43...83662724.3.\n"
"3.59277942372.75\n"
"5274682123194..3\n"
"3.78.88259128.46\n"
"..191.678954.4.2\n"
"1.4343937155149.\n"
"84.6.759..35768.\n"
"3412639932.92445\n"
"8753426..5336693\n"
".487..2211.349.8\n"
"628942958.9.8992\n"
"9234425496575.83\n"
"26373.1.86185655\n") == 0);
free(board184726824);
board184726824 = NULL;
assert( gamma_move(board, 9, 8, 5) == 0 );
assert( gamma_move(board, 9, 3, 14) == 0 );
assert( gamma_move(board, 1, 12, 3) == 0 );
assert( gamma_free_fields(board, 1) == 46 );
assert( gamma_move(board, 2, 6, 9) == 0 );
assert( gamma_move(board, 3, 5, 10) == 0 );
assert( gamma_move(board, 4, 2, 1) == 0 );
assert( gamma_move(board, 6, 16, 11) == 0 );
assert( gamma_busy_fields(board, 6) == 21 );
assert( gamma_move(board, 7, 12, 3) == 0 );
assert( gamma_move(board, 8, 8, 12) == 0 );
assert( gamma_move(board, 8, 13, 13) == 0 );
assert( gamma_move(board, 9, 1, 13) == 0 );
assert( gamma_golden_move(board, 9, 14, 7) == 0 );
assert( gamma_move(board, 1, 8, 14) == 0 );
assert( gamma_move(board, 1, 12, 9) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 12, 11) == 0 );
assert( gamma_move(board, 3, 0, 11) == 0 );
assert( gamma_move(board, 3, 7, 6) == 0 );
assert( gamma_busy_fields(board, 3) == 27 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 12, 1) == 0 );
assert( gamma_busy_fields(board, 4) == 30 );
assert( gamma_move(board, 5, 14, 9) == 0 );
assert( gamma_move(board, 5, 15, 15) == 0 );
assert( gamma_busy_fields(board, 5) == 25 );
assert( gamma_move(board, 6, 13, 7) == 0 );
assert( gamma_move(board, 7, 15, 0) == 0 );
assert( gamma_move(board, 8, 8, 14) == 0 );
assert( gamma_move(board, 9, 3, 4) == 0 );
assert( gamma_move(board, 9, 10, 2) == 0 );
assert( gamma_move(board, 1, 0, 14) == 0 );
assert( gamma_busy_fields(board, 1) == 23 );
assert( gamma_move(board, 2, 3, 9) == 0 );


char* board156595049 = gamma_board(board);
assert( board156595049 != NULL );
assert( strcmp(board156595049, 
"86976.1.3.5.8628\n"
"8.964.5884487711\n"
"157148152.496911\n"
"423.385.21547149\n"
"43...83662724.3.\n"
"3.59277942372.75\n"
"5274682123194..3\n"
"3.78.88259128.46\n"
"..191.678954.4.2\n"
"1.4343937155149.\n"
"84.6.759..35768.\n"
"3412639932.92445\n"
"8753426..5336693\n"
".487..2211.349.8\n"
"628942958.9.8992\n"
"9234425496575.83\n"
"26373.1.86185655\n") == 0);
free(board156595049);
board156595049 = NULL;
assert( gamma_move(board, 3, 4, 7) == 0 );
assert( gamma_move(board, 4, 3, 4) == 0 );
assert( gamma_golden_move(board, 4, 13, 10) == 0 );
assert( gamma_move(board, 5, 8, 5) == 0 );
assert( gamma_move(board, 6, 1, 10) == 0 );
assert( gamma_move(board, 7, 4, 8) == 0 );
assert( gamma_move(board, 7, 13, 8) == 0 );
assert( gamma_move(board, 8, 11, 13) == 0 );
assert( gamma_free_fields(board, 8) == 46 );


char* board880508982 = gamma_board(board);
assert( board880508982 != NULL );
assert( strcmp(board880508982, 
"86976.1.3.5.8628\n"
"8.964.5884487711\n"
"157148152.496911\n"
"423.385.21547149\n"
"43...83662724.3.\n"
"3.59277942372.75\n"
"5274682123194..3\n"
"3.78.88259128.46\n"
"..191.678954.4.2\n"
"1.4343937155149.\n"
"84.6.759..35768.\n"
"3412639932.92445\n"
"8753426..5336693\n"
".487..2211.349.8\n"
"628942958.9.8992\n"
"9234425496575.83\n"
"26373.1.86185655\n") == 0);
free(board880508982);
board880508982 = NULL;
assert( gamma_move(board, 9, 16, 11) == 0 );
assert( gamma_move(board, 1, 1, 13) == 0 );
assert( gamma_move(board, 1, 1, 6) == 0 );
assert( gamma_move(board, 2, 4, 9) == 1 );
assert( gamma_busy_fields(board, 2) == 28 );
assert( gamma_move(board, 4, 6, 2) == 0 );
assert( gamma_move(board, 5, 9, 2) == 1 );
assert( gamma_move(board, 6, 11, 1) == 0 );
assert( gamma_move(board, 6, 7, 16) == 1 );
assert( gamma_move(board, 7, 5, 10) == 0 );
assert( gamma_move(board, 8, 6, 9) == 0 );


char* board930048329 = gamma_board(board);
assert( board930048329 != NULL );
assert( strcmp(board930048329, 
"86976.163.5.8628\n"
"8.964.5884487711\n"
"157148152.496911\n"
"423.385.21547149\n"
"43...83662724.3.\n"
"3.59277942372.75\n"
"5274682123194..3\n"
"3.78288259128.46\n"
"..191.678954.4.2\n"
"1.4343937155149.\n"
"84.6.759..35768.\n"
"3412639932.92445\n"
"8753426..5336693\n"
".487..2211.349.8\n"
"62894295859.8992\n"
"9234425496575.83\n"
"26373.1.86185655\n") == 0);
free(board930048329);
board930048329 = NULL;
assert( gamma_move(board, 9, 13, 10) == 1 );
assert( gamma_move(board, 9, 2, 13) == 0 );
assert( gamma_move(board, 1, 15, 5) == 0 );
assert( gamma_move(board, 1, 12, 12) == 0 );
assert( gamma_move(board, 2, 14, 16) == 0 );
assert( gamma_move(board, 2, 11, 14) == 0 );
assert( gamma_golden_move(board, 2, 11, 9) == 0 );
assert( gamma_move(board, 3, 3, 5) == 0 );
assert( gamma_move(board, 4, 12, 2) == 0 );
assert( gamma_move(board, 4, 11, 16) == 1 );
assert( gamma_move(board, 5, 3, 10) == 0 );
assert( gamma_golden_move(board, 5, 5, 11) == 0 );
assert( gamma_move(board, 6, 12, 15) == 0 );
assert( gamma_busy_fields(board, 6) == 22 );
assert( gamma_free_fields(board, 6) == 41 );
assert( gamma_move(board, 7, 12, 2) == 0 );
assert( gamma_move(board, 7, 12, 4) == 0 );
assert( gamma_move(board, 8, 8, 1) == 0 );
assert( gamma_move(board, 8, 9, 14) == 1 );
assert( gamma_move(board, 9, 7, 15) == 0 );
assert( gamma_move(board, 1, 4, 7) == 0 );
assert( gamma_move(board, 2, 14, 10) == 1 );
assert( gamma_move(board, 2, 6, 4) == 0 );
assert( gamma_move(board, 3, 6, 15) == 0 );
assert( gamma_move(board, 4, 15, 0) == 0 );
assert( gamma_move(board, 4, 8, 9) == 0 );


gamma_delete(board);

    return 0;
}
