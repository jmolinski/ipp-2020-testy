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
uuid: 449210449
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(15, 20, 5, 39);
assert( board != NULL );


assert( gamma_move(board, 1, 4, 11) == 1 );
assert( gamma_move(board, 1, 13, 8) == 1 );
assert( gamma_move(board, 2, 5, 8) == 1 );
assert( gamma_move(board, 2, 1, 10) == 1 );


char* board854068587 = gamma_board(board);
assert( board854068587 != NULL );
assert( strcmp(board854068587, 
"...............\n"
"...............\n"
"...............\n"
"...............\n"
"...............\n"
"...............\n"
"...............\n"
"...............\n"
"....1..........\n"
".2.............\n"
"...............\n"
".....2.......1.\n"
"...............\n"
"...............\n"
"...............\n"
"...............\n"
"...............\n"
"...............\n"
"...............\n"
"...............\n") == 0);
free(board854068587);
board854068587 = NULL;
assert( gamma_move(board, 3, 11, 11) == 1 );
assert( gamma_move(board, 3, 0, 19) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 14, 17) == 1 );
assert( gamma_move(board, 5, 11, 9) == 1 );
assert( gamma_move(board, 5, 12, 11) == 1 );
assert( gamma_move(board, 1, 3, 2) == 1 );
assert( gamma_move(board, 1, 4, 19) == 1 );
assert( gamma_move(board, 2, 10, 4) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 2, 17) == 1 );
assert( gamma_move(board, 3, 5, 5) == 1 );
assert( gamma_move(board, 4, 2, 8) == 1 );
assert( gamma_move(board, 4, 0, 11) == 1 );
assert( gamma_move(board, 5, 3, 3) == 1 );
assert( gamma_move(board, 1, 8, 7) == 1 );
assert( gamma_move(board, 1, 9, 3) == 1 );
assert( gamma_move(board, 2, 6, 7) == 1 );
assert( gamma_move(board, 3, 14, 5) == 1 );
assert( gamma_move(board, 3, 0, 19) == 0 );
assert( gamma_free_fields(board, 3) == 279 );
assert( gamma_move(board, 4, 10, 4) == 0 );
assert( gamma_golden_move(board, 4, 4, 10) == 0 );
assert( gamma_move(board, 5, 10, 7) == 1 );
assert( gamma_move(board, 1, 18, 11) == 0 );
assert( gamma_move(board, 2, 10, 18) == 1 );
assert( gamma_move(board, 3, 12, 10) == 1 );
assert( gamma_busy_fields(board, 3) == 6 );
assert( gamma_move(board, 4, 4, 15) == 1 );
assert( gamma_move(board, 4, 0, 4) == 1 );
assert( gamma_move(board, 5, 10, 7) == 0 );
assert( gamma_move(board, 1, 7, 13) == 1 );
assert( gamma_move(board, 1, 2, 5) == 1 );
assert( gamma_move(board, 2, 13, 5) == 1 );
assert( gamma_free_fields(board, 2) == 271 );
assert( gamma_golden_move(board, 2, 8, 2) == 0 );
assert( gamma_move(board, 3, 0, 14) == 1 );
assert( gamma_move(board, 3, 4, 13) == 1 );
assert( gamma_free_fields(board, 3) == 269 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 0, 4) == 0 );
assert( gamma_move(board, 4, 11, 6) == 1 );
assert( gamma_move(board, 5, 13, 11) == 1 );
assert( gamma_move(board, 5, 5, 1) == 1 );
assert( gamma_busy_fields(board, 5) == 6 );
assert( gamma_move(board, 1, 19, 10) == 0 );
assert( gamma_move(board, 2, 13, 10) == 1 );
assert( gamma_move(board, 2, 10, 10) == 1 );
assert( gamma_busy_fields(board, 2) == 8 );
assert( gamma_busy_fields(board, 3) == 8 );


char* board754283788 = gamma_board(board);
assert( board754283788 != NULL );
assert( strcmp(board754283788, 
"3...1..........\n"
"..........2....\n"
"..3...........4\n"
"...............\n"
"....4..........\n"
"3..............\n"
"....3..1.......\n"
"...............\n"
"4...1......355.\n"
".2........2.32.\n"
"...........5...\n"
"..4..2.......1.\n"
"......2.1.5....\n"
"...........4...\n"
"..1..3.......23\n"
"4.........2....\n"
"...5.....1.....\n"
"...1...........\n"
".....5.........\n"
"...............\n") == 0);
free(board754283788);
board754283788 = NULL;
assert( gamma_move(board, 5, 6, 9) == 1 );
assert( gamma_move(board, 5, 10, 17) == 1 );
assert( gamma_move(board, 1, 14, 14) == 1 );
assert( gamma_move(board, 2, 17, 5) == 0 );
assert( gamma_free_fields(board, 3) == 261 );
assert( gamma_move(board, 4, 2, 3) == 1 );
assert( gamma_move(board, 5, 3, 5) == 1 );
assert( gamma_move(board, 1, 3, 2) == 0 );
assert( gamma_move(board, 1, 0, 0) == 1 );
assert( gamma_move(board, 2, 0, 13) == 1 );
assert( gamma_move(board, 2, 6, 17) == 1 );
assert( gamma_move(board, 3, 4, 14) == 1 );
assert( gamma_move(board, 4, 13, 9) == 1 );
assert( gamma_move(board, 4, 13, 7) == 1 );
assert( gamma_move(board, 5, 0, 15) == 1 );


char* board249646332 = gamma_board(board);
assert( board249646332 != NULL );
assert( strcmp(board249646332, 
"3...1..........\n"
"..........2....\n"
"..3...2...5...4\n"
"...............\n"
"5...4..........\n"
"3...3.........1\n"
"2...3..1.......\n"
"...............\n"
"4...1......355.\n"
".2........2.32.\n"
"......5....5.4.\n"
"..4..2.......1.\n"
"......2.1.5..4.\n"
"...........4...\n"
"..15.3.......23\n"
"4.........2....\n"
"..45.....1.....\n"
"...1...........\n"
".....5.........\n"
"1..............\n") == 0);
free(board249646332);
board249646332 = NULL;
assert( gamma_move(board, 1, 6, 12) == 1 );
assert( gamma_move(board, 1, 4, 9) == 1 );
assert( gamma_move(board, 2, 4, 13) == 0 );
assert( gamma_move(board, 3, 1, 13) == 1 );
assert( gamma_move(board, 3, 14, 3) == 1 );
assert( gamma_move(board, 4, 3, 17) == 1 );
assert( gamma_busy_fields(board, 4) == 10 );
assert( gamma_move(board, 5, 3, 1) == 1 );
assert( gamma_move(board, 1, 19, 2) == 0 );
assert( gamma_move(board, 2, 3, 6) == 1 );
assert( gamma_move(board, 2, 10, 14) == 1 );
assert( gamma_free_fields(board, 2) == 244 );
assert( gamma_move(board, 3, 8, 12) == 1 );
assert( gamma_move(board, 3, 2, 13) == 1 );
assert( gamma_move(board, 4, 13, 10) == 0 );
assert( gamma_move(board, 4, 5, 18) == 1 );
assert( gamma_move(board, 5, 16, 3) == 0 );
assert( gamma_move(board, 5, 11, 9) == 0 );
assert( gamma_golden_move(board, 5, 6, 11) == 0 );
assert( gamma_move(board, 1, 11, 1) == 1 );


char* board185188742 = gamma_board(board);
assert( board185188742 != NULL );
assert( strcmp(board185188742, 
"3...1..........\n"
".....4....2....\n"
"..34..2...5...4\n"
"...............\n"
"5...4..........\n"
"3...3.....2...1\n"
"233.3..1.......\n"
"......1.3......\n"
"4...1......355.\n"
".2........2.32.\n"
"....1.5....5.4.\n"
"..4..2.......1.\n"
"......2.1.5..4.\n"
"...2.......4...\n"
"..15.3.......23\n"
"4.........2....\n"
"..45.....1....3\n"
"...1...........\n"
"...5.5.....1...\n"
"1..............\n") == 0);
free(board185188742);
board185188742 = NULL;
assert( gamma_move(board, 2, 11, 16) == 1 );
assert( gamma_free_fields(board, 2) == 239 );
assert( gamma_move(board, 3, 14, 1) == 1 );
assert( gamma_move(board, 3, 12, 18) == 1 );
assert( gamma_golden_move(board, 3, 13, 0) == 0 );
assert( gamma_move(board, 4, 7, 12) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 10, 11) == 1 );
assert( gamma_move(board, 5, 0, 12) == 1 );
assert( gamma_move(board, 1, 1, 6) == 1 );
assert( gamma_free_fields(board, 1) == 233 );
assert( gamma_move(board, 2, 15, 8) == 0 );
assert( gamma_move(board, 3, 10, 12) == 1 );
assert( gamma_move(board, 4, 10, 0) == 1 );
assert( gamma_move(board, 4, 12, 9) == 1 );
assert( gamma_move(board, 5, 2, 2) == 1 );
assert( gamma_move(board, 5, 11, 14) == 1 );
assert( gamma_busy_fields(board, 5) == 15 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 1, 8, 10) == 1 );
assert( gamma_move(board, 1, 0, 7) == 1 );


char* board378948996 = gamma_board(board);
assert( board378948996 != NULL );
assert( strcmp(board378948996, 
"3...1..........\n"
".....4....2.3..\n"
"..34..2...5...4\n"
"...........2...\n"
"5...4..........\n"
"3...3.....25..1\n"
"233.3..1.......\n"
"5.....143.3....\n"
"4...1.....5355.\n"
".2......1.2.32.\n"
"....1.5....544.\n"
"..4..2.......1.\n"
"1.....2.1.5..4.\n"
".1.2.......4...\n"
"..15.3.......23\n"
"4.........2....\n"
"..45.....1....3\n"
"..51...........\n"
"...5.5.....1..3\n"
"1.........4....\n") == 0);
free(board378948996);
board378948996 = NULL;
assert( gamma_move(board, 2, 8, 19) == 1 );
assert( gamma_move(board, 3, 19, 7) == 0 );
assert( gamma_move(board, 3, 13, 13) == 1 );
assert( gamma_move(board, 4, 4, 6) == 1 );
assert( gamma_move(board, 5, 18, 2) == 0 );
assert( gamma_move(board, 5, 5, 16) == 1 );
assert( gamma_move(board, 1, 2, 18) == 1 );
assert( gamma_move(board, 2, 7, 6) == 1 );
assert( gamma_move(board, 3, 0, 1) == 1 );
assert( gamma_move(board, 4, 9, 9) == 1 );
assert( gamma_free_fields(board, 4) == 218 );
assert( gamma_move(board, 5, 5, 8) == 0 );
assert( gamma_move(board, 5, 0, 4) == 0 );
assert( gamma_move(board, 1, 16, 9) == 0 );
assert( gamma_move(board, 2, 4, 5) == 1 );
assert( gamma_move(board, 2, 9, 2) == 1 );
assert( gamma_free_fields(board, 2) == 216 );
assert( gamma_move(board, 3, 1, 16) == 1 );
assert( gamma_move(board, 4, 17, 12) == 0 );
assert( gamma_move(board, 4, 14, 10) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );


char* board840684630 = gamma_board(board);
assert( board840684630 != NULL );
assert( strcmp(board840684630, 
"3...1...2......\n"
"..1..4....2.3..\n"
"..34..2...5...4\n"
".3...5.....2...\n"
"5...4..........\n"
"3...3.....25..1\n"
"233.3..1.....3.\n"
"5.....143.3....\n"
"4...1.....5355.\n"
".2......1.2.324\n"
"....1.5..4.544.\n"
"..4..2.......1.\n"
"1.....2.1.5..4.\n"
".1.24..2...4...\n"
"..1523.......23\n"
"4.........2....\n"
"..45.....1....3\n"
"..51.....2.....\n"
"3..5.5.....1..3\n"
"1.........4....\n") == 0);
free(board840684630);
board840684630 = NULL;
assert( gamma_move(board, 5, 2, 11) == 1 );
assert( gamma_move(board, 5, 6, 16) == 1 );
assert( gamma_move(board, 1, 5, 10) == 1 );
assert( gamma_move(board, 1, 8, 16) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 1, 9) == 1 );
assert( gamma_move(board, 3, 19, 3) == 0 );
assert( gamma_move(board, 4, 4, 3) == 1 );
assert( gamma_move(board, 4, 8, 17) == 1 );
assert( gamma_free_fields(board, 4) == 207 );
assert( gamma_free_fields(board, 5) == 207 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 1, 7, 11) == 1 );


char* board172906332 = gamma_board(board);
assert( board172906332 != NULL );
assert( strcmp(board172906332, 
"3...1...2......\n"
"..1..4....2.3..\n"
"..34..2.4.5...4\n"
".3...55.1..2...\n"
"5...4..........\n"
"3...3.....25..1\n"
"233.3..1.....3.\n"
"5.....143.3....\n"
"4.5.1..1..5355.\n"
".2...1..1.2.324\n"
".2..1.5..4.544.\n"
"..4..2.......1.\n"
"1.....2.1.5..4.\n"
".1.24..2...4...\n"
"..1523.......23\n"
"4.........2....\n"
"..454....1....3\n"
"..51.....2.....\n"
"3..5.5.....1..3\n"
"1.........4....\n") == 0);
free(board172906332);
board172906332 = NULL;
assert( gamma_move(board, 2, 7, 19) == 1 );
assert( gamma_move(board, 2, 3, 16) == 1 );
assert( gamma_move(board, 3, 5, 4) == 1 );
assert( gamma_free_fields(board, 3) == 203 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 6, 2) == 1 );
assert( gamma_move(board, 4, 6, 7) == 0 );
assert( gamma_busy_fields(board, 4) == 20 );
assert( gamma_move(board, 5, 8, 1) == 1 );
assert( gamma_move(board, 2, 2, 0) == 1 );
assert( gamma_move(board, 2, 11, 4) == 1 );
assert( gamma_move(board, 3, 8, 8) == 1 );
assert( gamma_move(board, 4, 16, 4) == 0 );
assert( gamma_move(board, 4, 0, 8) == 1 );
assert( gamma_move(board, 5, 14, 6) == 1 );
assert( gamma_move(board, 1, 7, 5) == 1 );
assert( gamma_move(board, 2, 16, 2) == 0 );
assert( gamma_move(board, 3, 12, 11) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 2, 19) == 1 );
assert( gamma_move(board, 4, 12, 7) == 1 );
assert( gamma_move(board, 5, 1, 7) == 1 );
assert( gamma_move(board, 5, 0, 11) == 0 );
assert( gamma_move(board, 1, 1, 9) == 0 );
assert( gamma_move(board, 2, 1, 0) == 1 );
assert( gamma_move(board, 2, 0, 17) == 1 );
assert( gamma_move(board, 3, 10, 9) == 1 );
assert( gamma_move(board, 3, 2, 3) == 0 );
assert( gamma_golden_move(board, 3, 13, 0) == 0 );


char* board223723413 = gamma_board(board);
assert( board223723413 != NULL );
assert( strcmp(board223723413, 
"3.4.1..22......\n"
"..1..4....2.3..\n"
"2.34..2.4.5...4\n"
".3.2.55.1..2...\n"
"5...4..........\n"
"3...3.....25..1\n"
"233.3..1.....3.\n"
"5.....143.3....\n"
"4.5.1..1..5355.\n"
".2...1..1.2.324\n"
".2..1.5..43544.\n"
"4.4..2..3....1.\n"
"15....2.1.5.44.\n"
".1.24..2...4..5\n"
"..1523.1.....23\n"
"4....3....22...\n"
"..454....1....3\n"
"..51..4..2.....\n"
"3..5.5..5..1..3\n"
"122.......4....\n") == 0);
free(board223723413);
board223723413 = NULL;
assert( gamma_move(board, 4, 13, 13) == 0 );
assert( gamma_move(board, 5, 1, 7) == 0 );
assert( gamma_move(board, 1, 6, 9) == 0 );
assert( gamma_move(board, 2, 8, 6) == 1 );
assert( gamma_busy_fields(board, 3) == 22 );
assert( gamma_move(board, 4, 8, 14) == 1 );
assert( gamma_move(board, 5, 5, 6) == 1 );
assert( gamma_move(board, 5, 9, 7) == 1 );
assert( gamma_free_fields(board, 5) == 185 );
assert( gamma_golden_move(board, 5, 1, 14) == 0 );
assert( gamma_move(board, 1, 3, 10) == 1 );
assert( gamma_move(board, 1, 10, 4) == 0 );
assert( gamma_move(board, 3, 7, 3) == 1 );
assert( gamma_move(board, 3, 2, 9) == 1 );
assert( gamma_move(board, 4, 1, 18) == 1 );
assert( gamma_move(board, 5, 1, 10) == 0 );
assert( gamma_move(board, 5, 4, 5) == 0 );
assert( gamma_free_fields(board, 5) == 181 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 2, 1) == 1 );
assert( gamma_move(board, 3, 19, 12) == 0 );
assert( gamma_move(board, 4, 8, 7) == 0 );
assert( gamma_move(board, 5, 12, 5) == 1 );
assert( gamma_move(board, 5, 7, 8) == 1 );
assert( gamma_free_fields(board, 5) == 178 );
assert( gamma_move(board, 1, 12, 3) == 1 );
assert( gamma_free_fields(board, 1) == 177 );
assert( gamma_move(board, 2, 3, 8) == 1 );
assert( gamma_move(board, 3, 7, 5) == 0 );
assert( gamma_move(board, 3, 4, 1) == 1 );
assert( gamma_move(board, 4, 4, 1) == 0 );
assert( gamma_move(board, 5, 8, 5) == 1 );
assert( gamma_move(board, 5, 6, 10) == 1 );
assert( gamma_move(board, 1, 5, 10) == 0 );
assert( gamma_move(board, 2, 6, 2) == 0 );
assert( gamma_move(board, 2, 4, 3) == 0 );
assert( gamma_busy_fields(board, 2) == 27 );
assert( gamma_free_fields(board, 2) == 173 );
assert( gamma_move(board, 3, 11, 11) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );


char* board651183007 = gamma_board(board);
assert( board651183007 != NULL );
assert( strcmp(board651183007, 
"3.4.1..22......\n"
".41..4....2.3..\n"
"2.34..2.4.5...4\n"
".3.2.55.1..2...\n"
"5...4..........\n"
"3...3...4.25..1\n"
"233.3..1.....3.\n"
"5.....143.3....\n"
"4.5.1..1..5355.\n"
".2.1.15.1.2.324\n"
".23.1.5..43544.\n"
"4.42.2.53....1.\n"
"15....2.155.44.\n"
".1.245.22..4..5\n"
"..1523.15...523\n"
"4....3....22...\n"
"..454..3.1..1.3\n"
"..51..4..2.....\n"
"3.2535..5..1..3\n"
"122.......4....\n") == 0);
free(board651183007);
board651183007 = NULL;
assert( gamma_move(board, 4, 6, 9) == 0 );


char* board875925457 = gamma_board(board);
assert( board875925457 != NULL );
assert( strcmp(board875925457, 
"3.4.1..22......\n"
".41..4....2.3..\n"
"2.34..2.4.5...4\n"
".3.2.55.1..2...\n"
"5...4..........\n"
"3...3...4.25..1\n"
"233.3..1.....3.\n"
"5.....143.3....\n"
"4.5.1..1..5355.\n"
".2.1.15.1.2.324\n"
".23.1.5..43544.\n"
"4.42.2.53....1.\n"
"15....2.155.44.\n"
".1.245.22..4..5\n"
"..1523.15...523\n"
"4....3....22...\n"
"..454..3.1..1.3\n"
"..51..4..2.....\n"
"3.2535..5..1..3\n"
"122.......4....\n") == 0);
free(board875925457);
board875925457 = NULL;
assert( gamma_move(board, 5, 12, 13) == 1 );
assert( gamma_move(board, 5, 13, 19) == 1 );
assert( gamma_move(board, 1, 17, 12) == 0 );
assert( gamma_move(board, 1, 12, 9) == 0 );
assert( gamma_move(board, 2, 15, 12) == 0 );
assert( gamma_move(board, 2, 7, 9) == 1 );
assert( gamma_move(board, 3, 5, 6) == 0 );
assert( gamma_free_fields(board, 3) == 170 );
assert( gamma_move(board, 4, 8, 4) == 1 );
assert( gamma_move(board, 5, 5, 12) == 1 );
assert( gamma_move(board, 5, 2, 2) == 0 );
assert( gamma_busy_fields(board, 5) == 30 );
assert( gamma_move(board, 1, 17, 9) == 0 );
assert( gamma_move(board, 2, 4, 9) == 0 );
assert( gamma_move(board, 3, 7, 16) == 1 );
assert( gamma_move(board, 4, 8, 4) == 0 );
assert( gamma_move(board, 5, 6, 12) == 0 );
assert( gamma_move(board, 5, 12, 13) == 0 );
assert( gamma_move(board, 1, 3, 5) == 0 );
assert( gamma_move(board, 1, 14, 18) == 1 );
assert( gamma_move(board, 2, 2, 7) == 1 );
assert( gamma_move(board, 3, 12, 7) == 0 );
assert( gamma_move(board, 3, 1, 14) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 6, 6) == 1 );
assert( gamma_move(board, 5, 8, 0) == 1 );
assert( gamma_move(board, 1, 9, 14) == 1 );
assert( gamma_move(board, 2, 14, 7) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_busy_fields(board, 3) == 27 );
assert( gamma_move(board, 4, 5, 10) == 0 );
assert( gamma_move(board, 5, 5, 6) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 1, 0, 10) == 1 );
assert( gamma_free_fields(board, 1) == 159 );
assert( gamma_move(board, 2, 10, 7) == 0 );
assert( gamma_move(board, 3, 9, 3) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 17, 11) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );


char* board900250911 = gamma_board(board);
assert( board900250911 != NULL );
assert( strcmp(board900250911, 
"3.4.1..22....5.\n"
".41..4....2.3.1\n"
"2.34..2.4.5...4\n"
".3.2.5531..2...\n"
"5...4..........\n"
"33..3...4125..1\n"
"233.3..1....53.\n"
"5....5143.3....\n"
"4.5.1..1..5355.\n"
"12.1.15.1.2.324\n"
".23.1.52.43544.\n"
"4.42.2.53....1.\n"
"152...2.155.442\n"
".1.245522..4..5\n"
"..1523.15...523\n"
"4....3..4.22...\n"
"..454..3.1..1.3\n"
"..51..4..2.....\n"
"3.2535..5..1..3\n"
"122.....5.4....\n") == 0);
free(board900250911);
board900250911 = NULL;
assert( gamma_move(board, 5, 0, 9) == 1 );
assert( gamma_free_fields(board, 5) == 158 );
assert( gamma_move(board, 1, 8, 14) == 0 );
assert( gamma_move(board, 1, 0, 10) == 0 );
assert( gamma_move(board, 2, 3, 0) == 1 );
assert( gamma_move(board, 3, 0, 13) == 0 );
assert( gamma_golden_move(board, 4, 2, 9) == 1 );
assert( gamma_move(board, 5, 18, 6) == 0 );
assert( gamma_move(board, 1, 11, 16) == 0 );
assert( gamma_move(board, 1, 6, 18) == 1 );
assert( gamma_move(board, 2, 11, 3) == 1 );
assert( gamma_move(board, 3, 0, 17) == 0 );
assert( gamma_move(board, 3, 3, 10) == 0 );
assert( gamma_move(board, 4, 13, 8) == 0 );
assert( gamma_move(board, 4, 4, 17) == 1 );
assert( gamma_free_fields(board, 4) == 154 );
assert( gamma_move(board, 5, 3, 6) == 0 );
assert( gamma_move(board, 5, 11, 16) == 0 );
assert( gamma_move(board, 1, 17, 5) == 0 );
assert( gamma_move(board, 1, 12, 9) == 0 );
assert( gamma_busy_fields(board, 1) == 27 );
assert( gamma_move(board, 2, 11, 1) == 0 );
assert( gamma_move(board, 2, 2, 19) == 0 );
assert( gamma_free_fields(board, 2) == 154 );
assert( gamma_move(board, 3, 6, 12) == 0 );
assert( gamma_busy_fields(board, 3) == 26 );
assert( gamma_move(board, 4, 1, 6) == 0 );
assert( gamma_move(board, 4, 6, 2) == 0 );
assert( gamma_move(board, 5, 16, 12) == 0 );
assert( gamma_busy_fields(board, 5) == 33 );
assert( gamma_move(board, 1, 1, 8) == 1 );
assert( gamma_move(board, 1, 8, 4) == 0 );
assert( gamma_move(board, 2, 11, 3) == 0 );
assert( gamma_move(board, 3, 5, 1) == 0 );
assert( gamma_move(board, 4, 7, 14) == 1 );
assert( gamma_busy_fields(board, 4) == 29 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 3, 6) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 1, 0, 7) == 0 );
assert( gamma_move(board, 2, 16, 0) == 0 );
assert( gamma_move(board, 3, 15, 6) == 0 );
assert( gamma_move(board, 3, 4, 4) == 1 );
assert( gamma_move(board, 4, 1, 9) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 11, 3) == 0 );
assert( gamma_move(board, 5, 8, 2) == 1 );
assert( gamma_move(board, 1, 15, 3) == 0 );
assert( gamma_move(board, 3, 7, 5) == 0 );
assert( gamma_move(board, 3, 0, 6) == 1 );
assert( gamma_move(board, 4, 12, 13) == 0 );
assert( gamma_move(board, 4, 7, 6) == 0 );
assert( gamma_move(board, 5, 2, 13) == 0 );
assert( gamma_free_fields(board, 5) == 149 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 1, 4, 12) == 1 );
assert( gamma_free_fields(board, 1) == 148 );
assert( gamma_move(board, 2, 15, 3) == 0 );
assert( gamma_move(board, 2, 8, 19) == 0 );
assert( gamma_move(board, 3, 11, 6) == 0 );
assert( gamma_move(board, 4, 19, 11) == 0 );
assert( gamma_move(board, 4, 10, 19) == 1 );
assert( gamma_move(board, 5, 6, 10) == 0 );
assert( gamma_move(board, 1, 16, 13) == 0 );
assert( gamma_move(board, 1, 3, 12) == 1 );
assert( gamma_move(board, 2, 14, 12) == 1 );
assert( gamma_move(board, 3, 16, 0) == 0 );
assert( gamma_move(board, 4, 6, 12) == 0 );
assert( gamma_move(board, 4, 9, 9) == 0 );
assert( gamma_golden_move(board, 4, 8, 5) == 0 );
assert( gamma_move(board, 5, 4, 0) == 1 );
assert( gamma_free_fields(board, 5) == 144 );
assert( gamma_move(board, 1, 1, 19) == 1 );
assert( gamma_move(board, 1, 9, 19) == 1 );
assert( gamma_move(board, 2, 3, 1) == 0 );
assert( gamma_move(board, 2, 8, 2) == 0 );
assert( gamma_busy_fields(board, 2) == 33 );
assert( gamma_move(board, 3, 10, 12) == 0 );


char* board799940393 = gamma_board(board);
assert( board799940393 != NULL );
assert( strcmp(board799940393, 
"314.1..2214..5.\n"
".41..41...2.3.1\n"
"2.344.2.4.5...4\n"
".3.2.5531..2...\n"
"5...4..........\n"
"33..3..44125..1\n"
"233.3..1....53.\n"
"5..115143.3...2\n"
"4.5.1..1..5355.\n"
"12.1.15.1.2.324\n"
"524.1.52.43544.\n"
"4142.2.53....1.\n"
"152...2.155.442\n"
"31.245522..4..5\n"
"..1523.15...523\n"
"4...33..4.22...\n"
"..454..3.1.21.3\n"
"..51..4.52.....\n"
"3.2535..5..1..3\n"
"12225...5.4....\n") == 0);
free(board799940393);
board799940393 = NULL;
assert( gamma_move(board, 4, 14, 13) == 1 );
assert( gamma_move(board, 4, 14, 6) == 0 );
assert( gamma_move(board, 5, 8, 7) == 0 );
assert( gamma_move(board, 1, 12, 2) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 15, 6) == 0 );
assert( gamma_free_fields(board, 2) == 140 );
assert( gamma_move(board, 3, 15, 10) == 0 );
assert( gamma_move(board, 3, 9, 1) == 1 );
assert( gamma_move(board, 4, 6, 3) == 1 );
assert( gamma_move(board, 4, 4, 1) == 0 );
assert( gamma_busy_fields(board, 4) == 32 );
assert( gamma_move(board, 5, 19, 3) == 0 );
assert( gamma_move(board, 5, 3, 6) == 0 );
assert( gamma_move(board, 1, 2, 18) == 0 );
assert( gamma_move(board, 1, 10, 7) == 0 );
assert( gamma_move(board, 2, 1, 12) == 1 );
assert( gamma_move(board, 2, 9, 3) == 0 );
assert( gamma_busy_fields(board, 2) == 34 );
assert( gamma_move(board, 3, 6, 13) == 1 );
assert( gamma_move(board, 4, 9, 8) == 1 );


char* board497206769 = gamma_board(board);
assert( board497206769 != NULL );
assert( strcmp(board497206769, 
"314.1..2214..5.\n"
".41..41...2.3.1\n"
"2.344.2.4.5...4\n"
".3.2.5531..2...\n"
"5...4..........\n"
"33..3..44125..1\n"
"233.3.31....534\n"
"52.115143.3...2\n"
"4.5.1..1..5355.\n"
"12.1.15.1.2.324\n"
"524.1.52.43544.\n"
"4142.2.534...1.\n"
"152...2.155.442\n"
"31.245522..4..5\n"
"..1523.15...523\n"
"4...33..4.22...\n"
"..454.43.1.21.3\n"
"..51..4.52..1..\n"
"3.2535..53.1..3\n"
"12225...5.4....\n") == 0);
free(board497206769);
board497206769 = NULL;
assert( gamma_move(board, 5, 3, 0) == 0 );
assert( gamma_move(board, 5, 13, 8) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 1, 0, 17) == 0 );
assert( gamma_move(board, 2, 13, 10) == 0 );
assert( gamma_move(board, 3, 14, 15) == 1 );


char* board992798322 = gamma_board(board);
assert( board992798322 != NULL );
assert( strcmp(board992798322, 
"314.1..2214..5.\n"
".41..41...2.3.1\n"
"2.344.2.4.5...4\n"
".3.2.5531..2...\n"
"5...4.........3\n"
"33..3..44125..1\n"
"233.3.31....534\n"
"52.115143.3...2\n"
"4.5.1..1..5355.\n"
"12.1.15.1.2.324\n"
"524.1.52.43544.\n"
"4142.2.534...1.\n"
"152...2.155.442\n"
"31.245522..4..5\n"
"..1523.15...523\n"
"4...33..4.22...\n"
"..454.43.1.21.3\n"
"..51..4.52..1..\n"
"3.2535..53.1..3\n"
"12225...5.4....\n") == 0);
free(board992798322);
board992798322 = NULL;
assert( gamma_move(board, 4, 15, 3) == 0 );
assert( gamma_move(board, 4, 9, 4) == 1 );
assert( gamma_free_fields(board, 4) == 133 );
assert( gamma_move(board, 5, 6, 19) == 1 );
assert( gamma_move(board, 1, 8, 10) == 0 );
assert( gamma_move(board, 1, 1, 5) == 1 );
assert( gamma_move(board, 2, 15, 3) == 0 );
assert( gamma_move(board, 3, 17, 13) == 0 );
assert( gamma_move(board, 4, 7, 11) == 0 );
assert( gamma_busy_fields(board, 4) == 34 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 2, 4) == 1 );
assert( gamma_move(board, 5, 1, 15) == 1 );
assert( gamma_move(board, 1, 17, 7) == 0 );
assert( gamma_move(board, 2, 7, 4) == 1 );
assert( gamma_move(board, 2, 7, 13) == 0 );
assert( gamma_move(board, 3, 6, 0) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 3, 17) == 0 );
assert( gamma_move(board, 4, 2, 14) == 1 );
assert( gamma_move(board, 5, 16, 13) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 1, 0, 7) == 0 );
assert( gamma_move(board, 1, 8, 11) == 1 );
assert( gamma_move(board, 2, 1, 8) == 0 );
assert( gamma_move(board, 2, 13, 16) == 1 );
assert( gamma_move(board, 3, 8, 14) == 0 );
assert( gamma_move(board, 3, 4, 2) == 1 );
assert( gamma_move(board, 4, 13, 5) == 0 );
assert( gamma_move(board, 4, 6, 11) == 1 );
assert( gamma_move(board, 5, 3, 13) == 1 );
assert( gamma_move(board, 1, 16, 2) == 0 );
assert( gamma_move(board, 1, 10, 2) == 1 );
assert( gamma_move(board, 2, 14, 17) == 0 );
assert( gamma_move(board, 2, 13, 14) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_golden_move(board, 2, 3, 3) == 1 );
assert( gamma_move(board, 3, 9, 6) == 1 );
assert( gamma_move(board, 4, 5, 0) == 1 );
assert( gamma_move(board, 4, 11, 17) == 1 );
assert( gamma_move(board, 5, 10, 11) == 0 );
assert( gamma_move(board, 1, 19, 14) == 0 );
assert( gamma_move(board, 1, 3, 2) == 0 );
assert( gamma_move(board, 2, 10, 3) == 1 );
assert( gamma_free_fields(board, 2) == 115 );
assert( gamma_move(board, 3, 1, 13) == 0 );
assert( gamma_move(board, 3, 6, 10) == 0 );
assert( gamma_move(board, 4, 19, 11) == 0 );
assert( gamma_move(board, 5, 4, 3) == 0 );
assert( gamma_move(board, 5, 3, 6) == 0 );
assert( gamma_free_fields(board, 5) == 115 );
assert( gamma_free_fields(board, 1) == 115 );
assert( gamma_move(board, 2, 7, 19) == 0 );
assert( gamma_move(board, 2, 10, 3) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 1, 10) == 0 );
assert( gamma_move(board, 4, 0, 12) == 0 );
assert( gamma_move(board, 5, 5, 11) == 1 );
assert( gamma_move(board, 5, 3, 5) == 0 );
assert( gamma_move(board, 1, 10, 4) == 0 );
assert( gamma_busy_fields(board, 1) == 36 );
assert( gamma_move(board, 2, 5, 16) == 0 );
assert( gamma_busy_fields(board, 2) == 39 );
assert( gamma_move(board, 3, 1, 1) == 1 );
assert( gamma_move(board, 3, 7, 17) == 1 );
assert( gamma_move(board, 4, 2, 5) == 0 );
assert( gamma_move(board, 5, 10, 19) == 0 );
assert( gamma_move(board, 5, 11, 19) == 1 );
assert( gamma_move(board, 1, 1, 13) == 0 );
assert( gamma_move(board, 1, 2, 16) == 1 );
assert( gamma_move(board, 2, 15, 11) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 13, 10) == 0 );
assert( gamma_move(board, 4, 17, 9) == 0 );
assert( gamma_move(board, 4, 5, 4) == 0 );
assert( gamma_busy_fields(board, 4) == 38 );
assert( gamma_move(board, 5, 16, 4) == 0 );
assert( gamma_move(board, 1, 2, 14) == 0 );
assert( gamma_move(board, 2, 3, 1) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 15, 10) == 0 );
assert( gamma_move(board, 3, 1, 4) == 1 );
assert( gamma_move(board, 4, 6, 2) == 0 );
assert( gamma_move(board, 5, 0, 19) == 0 );
assert( gamma_move(board, 1, 16, 9) == 0 );
assert( gamma_move(board, 1, 5, 1) == 0 );
assert( gamma_move(board, 2, 7, 5) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 1, 10) == 0 );
assert( gamma_move(board, 4, 1, 6) == 0 );
assert( gamma_free_fields(board, 4) == 109 );
assert( gamma_move(board, 5, 12, 9) == 0 );
assert( gamma_move(board, 1, 3, 0) == 0 );
assert( gamma_move(board, 1, 0, 3) == 1 );
assert( gamma_busy_fields(board, 1) == 38 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 7, 4) == 0 );
assert( gamma_move(board, 3, 11, 12) == 1 );
assert( gamma_move(board, 4, 11, 11) == 0 );
assert( gamma_move(board, 4, 10, 14) == 0 );
assert( gamma_move(board, 5, 0, 7) == 0 );
assert( gamma_move(board, 2, 11, 14) == 0 );
assert( gamma_move(board, 3, 1, 7) == 0 );


char* board487102008 = gamma_board(board);
assert( board487102008 != NULL );
assert( strcmp(board487102008, 
"314.1.522145.5.\n"
".41..41...2.3.1\n"
"2.344.234.54..4\n"
".312.5531..2.2.\n"
"55..4.........3\n"
"334.3..44125.21\n"
"23353.31....534\n"
"52.115143.33..2\n"
"4.5.15411.5355.\n"
"12.1.15.1.2.324\n"
"524.1.52.43544.\n"
"4142.2.534...1.\n"
"152...2.155.442\n"
"31.2455223.4..5\n"
".11523.15...523\n"
"435.33.24422...\n"
"1.424.43.1221.3\n"
"..513.4.521.1..\n"
"332535..53.1..3\n"
"1222543.5.4....\n") == 0);
free(board487102008);
board487102008 = NULL;
assert( gamma_move(board, 4, 7, 3) == 0 );
assert( gamma_move(board, 4, 7, 7) == 1 );
assert( gamma_move(board, 5, 5, 8) == 0 );
assert( gamma_move(board, 1, 13, 9) == 0 );
assert( gamma_move(board, 2, 2, 1) == 0 );
assert( gamma_move(board, 2, 12, 6) == 1 );
assert( gamma_move(board, 4, 2, 17) == 0 );
assert( gamma_move(board, 4, 10, 10) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 19, 5) == 0 );
assert( gamma_move(board, 5, 7, 6) == 0 );
assert( gamma_move(board, 1, 8, 6) == 0 );
assert( gamma_move(board, 2, 6, 13) == 0 );
assert( gamma_move(board, 2, 1, 12) == 0 );
assert( gamma_move(board, 3, 17, 5) == 0 );
assert( gamma_move(board, 3, 5, 4) == 0 );
assert( gamma_move(board, 4, 0, 7) == 0 );
assert( gamma_move(board, 4, 6, 12) == 0 );
assert( gamma_move(board, 5, 17, 9) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 1, 4, 9) == 0 );
assert( gamma_move(board, 2, 9, 3) == 0 );
assert( gamma_move(board, 2, 0, 19) == 0 );
assert( gamma_free_fields(board, 2) == 105 );
assert( gamma_move(board, 3, 3, 14) == 1 );
assert( gamma_busy_fields(board, 3) == 39 );
assert( gamma_busy_fields(board, 4) == 39 );
assert( gamma_move(board, 5, 13, 11) == 0 );
assert( gamma_move(board, 1, 10, 11) == 0 );
assert( gamma_move(board, 2, 4, 3) == 0 );
assert( gamma_move(board, 2, 9, 6) == 0 );
assert( gamma_move(board, 3, 14, 12) == 0 );
assert( gamma_move(board, 3, 9, 1) == 0 );
assert( gamma_busy_fields(board, 3) == 39 );
assert( gamma_move(board, 4, 12, 18) == 0 );
assert( gamma_move(board, 4, 3, 2) == 0 );
assert( gamma_move(board, 5, 2, 13) == 0 );
assert( gamma_busy_fields(board, 5) == 40 );
assert( gamma_move(board, 1, 5, 9) == 1 );
assert( gamma_move(board, 2, 8, 11) == 0 );
assert( gamma_move(board, 2, 7, 10) == 1 );
assert( gamma_move(board, 3, 19, 12) == 0 );
assert( gamma_free_fields(board, 3) == 102 );


char* board291487723 = gamma_board(board);
assert( board291487723 != NULL );
assert( strcmp(board291487723, 
"314.1.522145.5.\n"
".41..41...2.3.1\n"
"2.344.234.54..4\n"
".312.5531..2.2.\n"
"55..4.........3\n"
"33433..44125.21\n"
"23353.31....534\n"
"52.115143.33..2\n"
"4.5.15411.5355.\n"
"12.1.1521.2.324\n"
"524.1152.43544.\n"
"4142.2.534...1.\n"
"152...24155.442\n"
"31.2455223.42.5\n"
".11523.15...523\n"
"435.33.24422...\n"
"1.424.43.1221.3\n"
"..513.4.521.1..\n"
"332535..53.1..3\n"
"1222543.5.4....\n") == 0);
free(board291487723);
board291487723 = NULL;
assert( gamma_move(board, 4, 5, 0) == 0 );
assert( gamma_move(board, 4, 11, 8) == 1 );
assert( gamma_move(board, 5, 7, 1) == 1 );
assert( gamma_free_fields(board, 5) == 100 );
assert( gamma_move(board, 1, 2, 14) == 0 );
assert( gamma_move(board, 2, 15, 3) == 0 );
assert( gamma_move(board, 2, 11, 1) == 0 );
assert( gamma_move(board, 3, 6, 3) == 0 );
assert( gamma_move(board, 4, 8, 4) == 0 );
assert( gamma_move(board, 4, 10, 17) == 0 );
assert( gamma_move(board, 5, 0, 14) == 0 );
assert( gamma_move(board, 5, 3, 13) == 0 );


char* board239928988 = gamma_board(board);
assert( board239928988 != NULL );
assert( strcmp(board239928988, 
"314.1.522145.5.\n"
".41..41...2.3.1\n"
"2.344.234.54..4\n"
".312.5531..2.2.\n"
"55..4.........3\n"
"33433..44125.21\n"
"23353.31....534\n"
"52.115143.33..2\n"
"4.5.15411.5355.\n"
"12.1.1521.2.324\n"
"524.1152.43544.\n"
"4142.2.534.4.1.\n"
"152...24155.442\n"
"31.2455223.42.5\n"
".11523.15...523\n"
"435.33.24422...\n"
"1.424.43.1221.3\n"
"..513.4.521.1..\n"
"332535.553.1..3\n"
"1222543.5.4....\n") == 0);
free(board239928988);
board239928988 = NULL;
assert( gamma_move(board, 1, 5, 11) == 0 );
assert( gamma_move(board, 2, 18, 3) == 0 );
assert( gamma_busy_fields(board, 2) == 41 );
assert( gamma_move(board, 3, 13, 15) == 1 );
assert( gamma_move(board, 4, 15, 12) == 0 );
assert( gamma_move(board, 4, 3, 13) == 0 );
assert( gamma_move(board, 5, 2, 9) == 0 );
assert( gamma_move(board, 1, 12, 2) == 0 );
assert( gamma_move(board, 1, 12, 18) == 0 );
assert( gamma_move(board, 2, 6, 5) == 1 );
assert( gamma_move(board, 3, 0, 14) == 0 );
assert( gamma_move(board, 3, 7, 16) == 0 );
assert( gamma_move(board, 4, 18, 0) == 0 );
assert( gamma_move(board, 4, 5, 7) == 1 );
assert( gamma_busy_fields(board, 4) == 41 );
assert( gamma_move(board, 5, 12, 13) == 0 );
assert( gamma_move(board, 1, 6, 2) == 0 );
assert( gamma_move(board, 1, 1, 2) == 1 );
assert( gamma_move(board, 2, 5, 0) == 0 );
assert( gamma_move(board, 3, 1, 12) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 0, 0) == 0 );
assert( gamma_move(board, 5, 2, 0) == 0 );
assert( gamma_move(board, 5, 3, 11) == 1 );
assert( gamma_move(board, 1, 6, 2) == 0 );
assert( gamma_move(board, 1, 14, 12) == 0 );
assert( gamma_move(board, 2, 17, 12) == 0 );
assert( gamma_move(board, 2, 8, 7) == 0 );
assert( gamma_busy_fields(board, 2) == 42 );
assert( gamma_move(board, 3, 10, 2) == 0 );
assert( gamma_move(board, 4, 8, 4) == 0 );


char* board461223064 = gamma_board(board);
assert( board461223064 != NULL );
assert( strcmp(board461223064, 
"314.1.522145.5.\n"
".41..41...2.3.1\n"
"2.344.234.54..4\n"
".312.5531..2.2.\n"
"55..4........33\n"
"33433..44125.21\n"
"23353.31....534\n"
"52.115143.33..2\n"
"4.5515411.5355.\n"
"12.1.1521.2.324\n"
"524.1152.43544.\n"
"4142.2.534.4.1.\n"
"152..424155.442\n"
"31.2455223.42.5\n"
".11523215...523\n"
"435.33.24422...\n"
"1.424.43.1221.3\n"
".1513.4.521.1..\n"
"332535.553.1..3\n"
"1222543.5.4....\n") == 0);
free(board461223064);
board461223064 = NULL;
assert( gamma_move(board, 5, 19, 3) == 0 );
assert( gamma_move(board, 5, 9, 2) == 0 );
assert( gamma_move(board, 1, 8, 9) == 1 );
assert( gamma_move(board, 2, 5, 2) == 1 );
assert( gamma_move(board, 2, 9, 5) == 1 );
assert( gamma_move(board, 3, 10, 13) == 1 );
assert( gamma_move(board, 4, 17, 1) == 0 );
assert( gamma_move(board, 4, 14, 6) == 0 );
assert( gamma_free_fields(board, 4) == 91 );
assert( gamma_move(board, 5, 10, 11) == 0 );
assert( gamma_busy_fields(board, 5) == 42 );
assert( gamma_move(board, 1, 4, 5) == 0 );
assert( gamma_move(board, 2, 6, 18) == 0 );
assert( gamma_move(board, 2, 13, 15) == 0 );
assert( gamma_free_fields(board, 2) == 91 );
assert( gamma_move(board, 3, 18, 3) == 0 );
assert( gamma_move(board, 3, 3, 17) == 0 );
assert( gamma_move(board, 4, 15, 2) == 0 );
assert( gamma_free_fields(board, 4) == 91 );
assert( gamma_move(board, 5, 19, 12) == 0 );
assert( gamma_busy_fields(board, 5) == 42 );
assert( gamma_move(board, 1, 11, 13) == 1 );
assert( gamma_move(board, 1, 5, 1) == 0 );
assert( gamma_move(board, 2, 6, 5) == 0 );
assert( gamma_move(board, 3, 1, 19) == 0 );
assert( gamma_move(board, 3, 11, 12) == 0 );
assert( gamma_free_fields(board, 3) == 90 );


char* board674643196 = gamma_board(board);
assert( board674643196 != NULL );
assert( strcmp(board674643196, 
"314.1.522145.5.\n"
".41..41...2.3.1\n"
"2.344.234.54..4\n"
".312.5531..2.2.\n"
"55..4........33\n"
"33433..44125.21\n"
"23353.31..31534\n"
"52.115143.33..2\n"
"4.5515411.5355.\n"
"12.1.1521.2.324\n"
"524.1152143544.\n"
"4142.2.534.4.1.\n"
"152..424155.442\n"
"31.2455223.42.5\n"
".115232152..523\n"
"435.33.24422...\n"
"1.424.43.1221.3\n"
".151324.521.1..\n"
"332535.553.1..3\n"
"1222543.5.4....\n") == 0);
free(board674643196);
board674643196 = NULL;
assert( gamma_move(board, 4, 0, 7) == 0 );
assert( gamma_move(board, 4, 9, 19) == 0 );
assert( gamma_free_fields(board, 4) == 90 );
assert( gamma_move(board, 5, 7, 1) == 0 );
assert( gamma_free_fields(board, 5) == 90 );
assert( gamma_move(board, 1, 12, 13) == 0 );
assert( gamma_move(board, 1, 2, 3) == 0 );
assert( gamma_golden_move(board, 1, 8, 7) == 0 );
assert( gamma_move(board, 2, 4, 6) == 0 );
assert( gamma_move(board, 3, 18, 9) == 0 );
assert( gamma_move(board, 3, 7, 11) == 0 );
assert( gamma_free_fields(board, 3) == 90 );
assert( gamma_move(board, 4, 8, 6) == 0 );
assert( gamma_move(board, 4, 4, 2) == 0 );
assert( gamma_free_fields(board, 4) == 90 );


char* board345825395 = gamma_board(board);
assert( board345825395 != NULL );
assert( strcmp(board345825395, 
"314.1.522145.5.\n"
".41..41...2.3.1\n"
"2.344.234.54..4\n"
".312.5531..2.2.\n"
"55..4........33\n"
"33433..44125.21\n"
"23353.31..31534\n"
"52.115143.33..2\n"
"4.5515411.5355.\n"
"12.1.1521.2.324\n"
"524.1152143544.\n"
"4142.2.534.4.1.\n"
"152..424155.442\n"
"31.2455223.42.5\n"
".115232152..523\n"
"435.33.24422...\n"
"1.424.43.1221.3\n"
".151324.521.1..\n"
"332535.553.1..3\n"
"1222543.5.4....\n") == 0);
free(board345825395);
board345825395 = NULL;
assert( gamma_move(board, 5, 3, 8) == 0 );
assert( gamma_move(board, 5, 0, 17) == 0 );
assert( gamma_busy_fields(board, 5) == 42 );
assert( gamma_move(board, 1, 13, 6) == 1 );
assert( gamma_free_fields(board, 1) == 89 );


char* board362133123 = gamma_board(board);
assert( board362133123 != NULL );
assert( strcmp(board362133123, 
"314.1.522145.5.\n"
".41..41...2.3.1\n"
"2.344.234.54..4\n"
".312.5531..2.2.\n"
"55..4........33\n"
"33433..44125.21\n"
"23353.31..31534\n"
"52.115143.33..2\n"
"4.5515411.5355.\n"
"12.1.1521.2.324\n"
"524.1152143544.\n"
"4142.2.534.4.1.\n"
"152..424155.442\n"
"31.2455223.4215\n"
".115232152..523\n"
"435.33.24422...\n"
"1.424.43.1221.3\n"
".151324.521.1..\n"
"332535.553.1..3\n"
"1222543.5.4....\n") == 0);
free(board362133123);
board362133123 = NULL;
assert( gamma_move(board, 2, 15, 10) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_busy_fields(board, 3) == 41 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 18, 9) == 0 );
assert( gamma_move(board, 4, 10, 7) == 0 );
assert( gamma_move(board, 5, 1, 13) == 0 );
assert( gamma_busy_fields(board, 5) == 42 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 1, 16, 9) == 0 );
assert( gamma_golden_move(board, 1, 16, 1) == 0 );
assert( gamma_move(board, 2, 6, 0) == 0 );
assert( gamma_golden_move(board, 2, 3, 6) == 0 );
assert( gamma_move(board, 3, 11, 1) == 0 );
assert( gamma_move(board, 4, 15, 3) == 0 );
assert( gamma_move(board, 4, 1, 16) == 0 );
assert( gamma_move(board, 5, 19, 5) == 0 );
assert( gamma_move(board, 5, 2, 3) == 0 );


char* board868722554 = gamma_board(board);
assert( board868722554 != NULL );
assert( strcmp(board868722554, 
"314.1.522145.5.\n"
".41..41...2.3.1\n"
"2.344.234.54..4\n"
".312.5531..2.2.\n"
"55..4........33\n"
"33433..44125.21\n"
"23353.31..31534\n"
"52.115143.33..2\n"
"4.5515411.5355.\n"
"12.1.1521.2.324\n"
"524.1152143544.\n"
"4142.2.534.4.1.\n"
"152..424155.442\n"
"31.2455223.4215\n"
".115232152..523\n"
"435.33.24422...\n"
"1.424.43.1221.3\n"
".151324.521.1..\n"
"332535.553.1..3\n"
"1222543.5.4....\n") == 0);
free(board868722554);
board868722554 = NULL;
assert( gamma_move(board, 1, 10, 4) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 13, 6) == 0 );
assert( gamma_move(board, 2, 10, 14) == 0 );
assert( gamma_move(board, 3, 19, 12) == 0 );
assert( gamma_move(board, 4, 9, 14) == 0 );
assert( gamma_move(board, 5, 12, 18) == 0 );
assert( gamma_move(board, 1, 12, 5) == 0 );
assert( gamma_move(board, 2, 5, 0) == 0 );
assert( gamma_move(board, 2, 11, 5) == 1 );


char* board711786014 = gamma_board(board);
assert( board711786014 != NULL );
assert( strcmp(board711786014, 
"314.1.522145.5.\n"
".41..41...2.3.1\n"
"2.344.234.54..4\n"
".312.5531..2.2.\n"
"55..4........33\n"
"33433..44125.21\n"
"23353.31..31534\n"
"52.115143.33..2\n"
"4.5515411.5355.\n"
"12.1.1521.2.324\n"
"524.1152143544.\n"
"4142.2.534.4.1.\n"
"152..424155.442\n"
"31.2455223.4215\n"
".115232152.2523\n"
"435.33.24422...\n"
"1.424.43.1221.3\n"
".151324.521.1..\n"
"332535.553.1..3\n"
"1222543.5.4....\n") == 0);
free(board711786014);
board711786014 = NULL;
assert( gamma_move(board, 3, 0, 11) == 0 );
assert( gamma_free_fields(board, 3) == 88 );
assert( gamma_move(board, 4, 10, 17) == 0 );
assert( gamma_move(board, 5, 19, 12) == 0 );
assert( gamma_move(board, 5, 9, 11) == 1 );
assert( gamma_move(board, 2, 9, 2) == 0 );
assert( gamma_move(board, 3, 15, 7) == 0 );
assert( gamma_move(board, 3, 7, 1) == 0 );


char* board117223272 = gamma_board(board);
assert( board117223272 != NULL );
assert( strcmp(board117223272, 
"314.1.522145.5.\n"
".41..41...2.3.1\n"
"2.344.234.54..4\n"
".312.5531..2.2.\n"
"55..4........33\n"
"33433..44125.21\n"
"23353.31..31534\n"
"52.115143.33..2\n"
"4.551541155355.\n"
"12.1.1521.2.324\n"
"524.1152143544.\n"
"4142.2.534.4.1.\n"
"152..424155.442\n"
"31.2455223.4215\n"
".115232152.2523\n"
"435.33.24422...\n"
"1.424.43.1221.3\n"
".151324.521.1..\n"
"332535.553.1..3\n"
"1222543.5.4....\n") == 0);
free(board117223272);
board117223272 = NULL;
assert( gamma_move(board, 4, 8, 4) == 0 );
assert( gamma_move(board, 4, 13, 17) == 1 );
assert( gamma_move(board, 5, 13, 15) == 0 );
assert( gamma_move(board, 1, 3, 5) == 0 );
assert( gamma_move(board, 1, 12, 4) == 1 );


char* board915927890 = gamma_board(board);
assert( board915927890 != NULL );
assert( strcmp(board915927890, 
"314.1.522145.5.\n"
".41..41...2.3.1\n"
"2.344.234.54.44\n"
".312.5531..2.2.\n"
"55..4........33\n"
"33433..44125.21\n"
"23353.31..31534\n"
"52.115143.33..2\n"
"4.551541155355.\n"
"12.1.1521.2.324\n"
"524.1152143544.\n"
"4142.2.534.4.1.\n"
"152..424155.442\n"
"31.2455223.4215\n"
".115232152.2523\n"
"435.33.244221..\n"
"1.424.43.1221.3\n"
".151324.521.1..\n"
"332535.553.1..3\n"
"1222543.5.4....\n") == 0);
free(board915927890);
board915927890 = NULL;
assert( gamma_move(board, 2, 13, 7) == 0 );
assert( gamma_move(board, 2, 13, 3) == 1 );
assert( gamma_move(board, 3, 10, 11) == 0 );
assert( gamma_move(board, 4, 6, 10) == 0 );


char* board520853980 = gamma_board(board);
assert( board520853980 != NULL );
assert( strcmp(board520853980, 
"314.1.522145.5.\n"
".41..41...2.3.1\n"
"2.344.234.54.44\n"
".312.5531..2.2.\n"
"55..4........33\n"
"33433..44125.21\n"
"23353.31..31534\n"
"52.115143.33..2\n"
"4.551541155355.\n"
"12.1.1521.2.324\n"
"524.1152143544.\n"
"4142.2.534.4.1.\n"
"152..424155.442\n"
"31.2455223.4215\n"
".115232152.2523\n"
"435.33.244221..\n"
"1.424.43.122123\n"
".151324.521.1..\n"
"332535.553.1..3\n"
"1222543.5.4....\n") == 0);
free(board520853980);
board520853980 = NULL;
assert( gamma_move(board, 5, 1, 12) == 0 );
assert( gamma_move(board, 1, 3, 4) == 1 );
assert( gamma_move(board, 2, 4, 7) == 1 );
assert( gamma_move(board, 3, 13, 1) == 1 );
assert( gamma_busy_fields(board, 3) == 42 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 8, 12) == 0 );
assert( gamma_move(board, 4, 9, 17) == 1 );
assert( gamma_move(board, 5, 13, 19) == 0 );
assert( gamma_move(board, 1, 2, 14) == 0 );
assert( gamma_move(board, 1, 7, 4) == 0 );
assert( gamma_busy_fields(board, 1) == 45 );
assert( gamma_move(board, 2, 0, 11) == 0 );
assert( gamma_move(board, 2, 2, 15) == 1 );
assert( gamma_move(board, 3, 1, 12) == 0 );
assert( gamma_busy_fields(board, 3) == 42 );
assert( gamma_move(board, 4, 0, 9) == 0 );
assert( gamma_move(board, 5, 1, 9) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 1, 5, 10) == 0 );
assert( gamma_move(board, 2, 10, 9) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 4, 15, 3) == 0 );
assert( gamma_move(board, 5, 1, 7) == 0 );
assert( gamma_free_fields(board, 5) == 79 );


char* board923954173 = gamma_board(board);
assert( board923954173 != NULL );
assert( strcmp(board923954173, 
"314.1.522145.5.\n"
".41..41...2.3.1\n"
"2.344.234454.44\n"
".312.5531..2.2.\n"
"552.4........33\n"
"33433..44125.21\n"
"23353.31..31534\n"
"52.115143.33..2\n"
"4.551541155355.\n"
"12.1.1521.2.324\n"
"524.1152143544.\n"
"4142.2.534.4.1.\n"
"152.2424155.442\n"
"31.2455223.4215\n"
".115232152.2523\n"
"435133.244221..\n"
"1.424.43.122123\n"
".151324.521.1..\n"
"332535.553.1.33\n"
"1222543.5.4....\n") == 0);
free(board923954173);
board923954173 = NULL;
assert( gamma_move(board, 1, 4, 13) == 0 );
assert( gamma_move(board, 1, 3, 16) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 4, 15) == 0 );
assert( gamma_move(board, 2, 1, 18) == 0 );
assert( gamma_move(board, 3, 8, 4) == 0 );
assert( gamma_move(board, 4, 19, 5) == 0 );
assert( gamma_move(board, 5, 17, 12) == 0 );
assert( gamma_move(board, 5, 5, 10) == 0 );
assert( gamma_move(board, 1, 13, 17) == 0 );
assert( gamma_move(board, 2, 0, 11) == 0 );
assert( gamma_move(board, 2, 5, 12) == 0 );
assert( gamma_free_fields(board, 2) == 79 );
assert( gamma_golden_move(board, 2, 14, 14) == 0 );
assert( gamma_move(board, 3, 2, 0) == 0 );
assert( gamma_move(board, 3, 13, 0) == 1 );
assert( gamma_busy_fields(board, 3) == 43 );
assert( gamma_free_fields(board, 3) == 78 );
assert( gamma_move(board, 4, 18, 11) == 0 );
assert( gamma_move(board, 4, 7, 18) == 1 );
assert( gamma_move(board, 5, 4, 14) == 0 );
assert( gamma_move(board, 5, 10, 11) == 0 );
assert( gamma_move(board, 1, 8, 4) == 0 );
assert( gamma_move(board, 1, 14, 1) == 0 );
assert( gamma_move(board, 2, 19, 14) == 0 );
assert( gamma_move(board, 2, 8, 7) == 0 );
assert( gamma_busy_fields(board, 2) == 48 );
assert( gamma_move(board, 3, 3, 15) == 1 );
assert( gamma_move(board, 4, 17, 1) == 0 );
assert( gamma_move(board, 4, 7, 5) == 0 );
assert( gamma_free_fields(board, 4) == 76 );
assert( gamma_move(board, 5, 17, 1) == 0 );
assert( gamma_busy_fields(board, 5) == 43 );
assert( gamma_move(board, 1, 13, 9) == 0 );
assert( gamma_move(board, 1, 4, 8) == 1 );
assert( gamma_move(board, 2, 0, 14) == 0 );
assert( gamma_move(board, 2, 10, 5) == 1 );
assert( gamma_move(board, 3, 15, 8) == 0 );
assert( gamma_move(board, 4, 15, 7) == 0 );
assert( gamma_move(board, 4, 6, 5) == 0 );
assert( gamma_move(board, 5, 8, 10) == 0 );
assert( gamma_move(board, 1, 2, 7) == 0 );
assert( gamma_move(board, 1, 14, 0) == 1 );
assert( gamma_move(board, 2, 2, 11) == 0 );
assert( gamma_move(board, 2, 4, 16) == 1 );
assert( gamma_move(board, 3, 10, 10) == 0 );
assert( gamma_move(board, 4, 15, 6) == 0 );
assert( gamma_move(board, 4, 6, 1) == 1 );
assert( gamma_move(board, 5, 5, 0) == 0 );
assert( gamma_move(board, 1, 16, 14) == 0 );
assert( gamma_move(board, 2, 10, 14) == 0 );
assert( gamma_move(board, 3, 18, 8) == 0 );
assert( gamma_move(board, 3, 7, 1) == 0 );
assert( gamma_busy_fields(board, 3) == 44 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 14, 19) == 1 );
assert( gamma_move(board, 5, 12, 1) == 1 );
assert( gamma_move(board, 1, 8, 13) == 1 );
assert( gamma_move(board, 1, 6, 12) == 0 );
assert( gamma_busy_fields(board, 1) == 48 );
assert( gamma_move(board, 3, 15, 12) == 0 );
assert( gamma_move(board, 3, 0, 5) == 1 );
assert( gamma_move(board, 4, 18, 8) == 0 );
assert( gamma_move(board, 4, 11, 8) == 0 );
assert( gamma_move(board, 5, 18, 8) == 0 );
assert( gamma_move(board, 1, 8, 10) == 0 );
assert( gamma_move(board, 1, 0, 5) == 0 );
assert( gamma_move(board, 2, 3, 8) == 0 );
assert( gamma_move(board, 3, 12, 9) == 0 );
assert( gamma_move(board, 3, 1, 1) == 0 );
assert( gamma_move(board, 4, 0, 13) == 0 );
assert( gamma_move(board, 5, 8, 1) == 0 );
assert( gamma_free_fields(board, 5) == 67 );
assert( gamma_move(board, 1, 7, 15) == 1 );
assert( gamma_free_fields(board, 1) == 66 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 18, 13) == 0 );
assert( gamma_move(board, 2, 7, 3) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 15, 9) == 0 );


char* board351446278 = gamma_board(board);
assert( board351446278 != NULL );
assert( strcmp(board351446278, 
"314.1.522145.54\n"
".41..414..2.3.1\n"
"2.344.234454.44\n"
".31225531..2.2.\n"
"55234..1.....33\n"
"33433..44125.21\n"
"23353.311.31534\n"
"52.115143.33..2\n"
"4.551541155355.\n"
"12.1.1521.2.324\n"
"524.1152143544.\n"
"414212.534.4.1.\n"
"152.2424155.442\n"
"31.2455223.4215\n"
"311523215222523\n"
"435133.244221..\n"
"1.424.43.122123\n"
".151324.521.1..\n"
"3325354553.1533\n"
"1222543.5.4..31\n") == 0);
free(board351446278);
board351446278 = NULL;
assert( gamma_move(board, 4, 1, 13) == 0 );
assert( gamma_move(board, 4, 0, 0) == 0 );
assert( gamma_move(board, 5, 16, 10) == 0 );
assert( gamma_move(board, 1, 14, 6) == 0 );
assert( gamma_move(board, 2, 14, 6) == 0 );
assert( gamma_move(board, 2, 8, 9) == 0 );
assert( gamma_move(board, 3, 15, 5) == 0 );
assert( gamma_move(board, 4, 12, 9) == 0 );
assert( gamma_busy_fields(board, 4) == 46 );
assert( gamma_move(board, 5, 2, 0) == 0 );
assert( gamma_move(board, 5, 11, 18) == 1 );
assert( gamma_move(board, 2, 18, 0) == 0 );
assert( gamma_move(board, 2, 11, 3) == 0 );
assert( gamma_move(board, 3, 13, 5) == 0 );
assert( gamma_move(board, 3, 10, 17) == 0 );
assert( gamma_move(board, 4, 18, 0) == 0 );
assert( gamma_move(board, 4, 1, 11) == 1 );
assert( gamma_move(board, 5, 2, 15) == 0 );
assert( gamma_move(board, 1, 18, 4) == 0 );
assert( gamma_move(board, 2, 0, 8) == 0 );
assert( gamma_move(board, 2, 5, 4) == 0 );
assert( gamma_busy_fields(board, 2) == 50 );
assert( gamma_move(board, 3, 6, 10) == 0 );


char* board409317801 = gamma_board(board);
assert( board409317801 != NULL );
assert( strcmp(board409317801, 
"314.1.522145.54\n"
".41..414..253.1\n"
"2.344.234454.44\n"
".31225531..2.2.\n"
"55234..1.....33\n"
"33433..44125.21\n"
"23353.311.31534\n"
"52.115143.33..2\n"
"44551541155355.\n"
"12.1.1521.2.324\n"
"524.1152143544.\n"
"414212.534.4.1.\n"
"152.2424155.442\n"
"31.2455223.4215\n"
"311523215222523\n"
"435133.244221..\n"
"1.424.43.122123\n"
".151324.521.1..\n"
"3325354553.1533\n"
"1222543.5.4..31\n") == 0);
free(board409317801);
board409317801 = NULL;
assert( gamma_move(board, 4, 8, 6) == 0 );
assert( gamma_move(board, 4, 8, 18) == 1 );
assert( gamma_move(board, 5, 13, 3) == 0 );
assert( gamma_move(board, 5, 10, 1) == 1 );
assert( gamma_free_fields(board, 5) == 62 );
assert( gamma_move(board, 1, 0, 7) == 0 );
assert( gamma_move(board, 2, 8, 11) == 0 );
assert( gamma_busy_fields(board, 2) == 50 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 2, 0) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 5, 14, 5) == 0 );
assert( gamma_move(board, 5, 12, 19) == 1 );
assert( gamma_move(board, 1, 13, 13) == 0 );
assert( gamma_move(board, 1, 11, 3) == 0 );
assert( gamma_golden_move(board, 1, 2, 6) == 0 );
assert( gamma_move(board, 2, 9, 14) == 0 );
assert( gamma_move(board, 2, 5, 13) == 1 );
assert( gamma_move(board, 3, 2, 0) == 0 );
assert( gamma_move(board, 4, 14, 5) == 0 );
assert( gamma_move(board, 4, 7, 1) == 0 );
assert( gamma_move(board, 5, 17, 12) == 0 );
assert( gamma_move(board, 5, 5, 13) == 0 );
assert( gamma_move(board, 1, 10, 6) == 1 );
assert( gamma_move(board, 2, 8, 2) == 0 );
assert( gamma_move(board, 3, 8, 7) == 0 );
assert( gamma_golden_move(board, 3, 19, 2) == 0 );
assert( gamma_move(board, 4, 6, 6) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );


char* board586424824 = gamma_board(board);
assert( board586424824 != NULL );
assert( strcmp(board586424824, 
"314.1.522145554\n"
".41..4144.253.1\n"
"2.344.234454.44\n"
".31225531..2.2.\n"
"55234..1.....33\n"
"33433..44125.21\n"
"233532311.31534\n"
"52.115143.33..2\n"
"44551541155355.\n"
"12.1.1521.2.324\n"
"524.1152143544.\n"
"414212.534.4.1.\n"
"152.2424155.442\n"
"31.245522314215\n"
"311523215222523\n"
"435133.244221..\n"
"1.424.43.122123\n"
".151324.521.1..\n"
"332535455351533\n"
"1222543.5.4..31\n") == 0);
free(board586424824);
board586424824 = NULL;
assert( gamma_move(board, 5, 17, 12) == 0 );
assert( gamma_move(board, 1, 12, 9) == 0 );
assert( gamma_move(board, 1, 11, 3) == 0 );
assert( gamma_move(board, 2, 15, 10) == 0 );
assert( gamma_move(board, 3, 12, 16) == 1 );
assert( gamma_move(board, 4, 6, 19) == 0 );
assert( gamma_move(board, 5, 10, 9) == 0 );
assert( gamma_move(board, 5, 11, 8) == 0 );
assert( gamma_move(board, 1, 11, 14) == 0 );
assert( gamma_move(board, 2, 3, 0) == 0 );
assert( gamma_move(board, 2, 13, 18) == 1 );
assert( gamma_move(board, 3, 13, 18) == 0 );
assert( gamma_move(board, 4, 10, 2) == 0 );
assert( gamma_move(board, 4, 6, 3) == 0 );


char* board344209779 = gamma_board(board);
assert( board344209779 != NULL );
assert( strcmp(board344209779, 
"314.1.522145554\n"
".41..4144.25321\n"
"2.344.234454.44\n"
".31225531..232.\n"
"55234..1.....33\n"
"33433..44125.21\n"
"233532311.31534\n"
"52.115143.33..2\n"
"44551541155355.\n"
"12.1.1521.2.324\n"
"524.1152143544.\n"
"414212.534.4.1.\n"
"152.2424155.442\n"
"31.245522314215\n"
"311523215222523\n"
"435133.244221..\n"
"1.424.43.122123\n"
".151324.521.1..\n"
"332535455351533\n"
"1222543.5.4..31\n") == 0);
free(board344209779);
board344209779 = NULL;
assert( gamma_move(board, 5, 11, 14) == 0 );
assert( gamma_move(board, 1, 9, 9) == 0 );
assert( gamma_move(board, 1, 3, 5) == 0 );
assert( gamma_free_fields(board, 1) == 57 );
assert( gamma_move(board, 2, 4, 4) == 0 );
assert( gamma_free_fields(board, 2) == 57 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 2, 11) == 0 );
assert( gamma_move(board, 4, 6, 6) == 0 );
assert( gamma_move(board, 4, 3, 4) == 0 );
assert( gamma_move(board, 5, 10, 0) == 0 );
assert( gamma_move(board, 1, 0, 11) == 0 );
assert( gamma_move(board, 2, 12, 3) == 0 );
assert( gamma_move(board, 2, 7, 14) == 0 );
assert( gamma_move(board, 3, 19, 5) == 0 );
assert( gamma_move(board, 3, 6, 7) == 0 );
assert( gamma_busy_fields(board, 4) == 48 );
assert( gamma_move(board, 5, 4, 13) == 0 );
assert( gamma_move(board, 5, 9, 11) == 0 );
assert( gamma_move(board, 1, 7, 3) == 0 );
assert( gamma_move(board, 2, 2, 0) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 19, 5) == 0 );
assert( gamma_move(board, 3, 3, 0) == 0 );


char* board459686202 = gamma_board(board);
assert( board459686202 != NULL );
assert( strcmp(board459686202, 
"314.1.522145554\n"
".41..4144.25321\n"
"2.344.234454.44\n"
".31225531..232.\n"
"55234..1.....33\n"
"33433..44125.21\n"
"233532311.31534\n"
"52.115143.33..2\n"
"44551541155355.\n"
"12.1.1521.2.324\n"
"524.1152143544.\n"
"414212.534.4.1.\n"
"152.2424155.442\n"
"31.245522314215\n"
"311523215222523\n"
"435133.244221..\n"
"1.424.43.122123\n"
".151324.521.1..\n"
"332535455351533\n"
"1222543.5.4..31\n") == 0);
free(board459686202);
board459686202 = NULL;
assert( gamma_move(board, 4, 14, 6) == 0 );
assert( gamma_move(board, 4, 2, 6) == 1 );


char* board868813575 = gamma_board(board);
assert( board868813575 != NULL );
assert( strcmp(board868813575, 
"314.1.522145554\n"
".41..4144.25321\n"
"2.344.234454.44\n"
".31225531..232.\n"
"55234..1.....33\n"
"33433..44125.21\n"
"233532311.31534\n"
"52.115143.33..2\n"
"44551541155355.\n"
"12.1.1521.2.324\n"
"524.1152143544.\n"
"414212.534.4.1.\n"
"152.2424155.442\n"
"314245522314215\n"
"311523215222523\n"
"435133.244221..\n"
"1.424.43.122123\n"
".151324.521.1..\n"
"332535455351533\n"
"1222543.5.4..31\n") == 0);
free(board868813575);
board868813575 = NULL;
assert( gamma_move(board, 5, 3, 1) == 0 );
assert( gamma_move(board, 5, 6, 18) == 0 );
assert( gamma_golden_move(board, 5, 14, 0) == 1 );
assert( gamma_move(board, 1, 9, 14) == 0 );
assert( gamma_move(board, 2, 0, 9) == 0 );
assert( gamma_move(board, 4, 19, 3) == 0 );
assert( gamma_move(board, 4, 6, 12) == 0 );
assert( gamma_move(board, 5, 8, 14) == 0 );
assert( gamma_move(board, 5, 2, 8) == 0 );
assert( gamma_move(board, 1, 2, 0) == 0 );
assert( gamma_move(board, 2, 10, 4) == 0 );
assert( gamma_move(board, 3, 9, 14) == 0 );
assert( gamma_move(board, 4, 14, 12) == 0 );
assert( gamma_move(board, 5, 18, 3) == 0 );
assert( gamma_move(board, 5, 3, 18) == 1 );
assert( gamma_free_fields(board, 5) == 55 );
assert( gamma_move(board, 1, 13, 9) == 0 );
assert( gamma_free_fields(board, 1) == 55 );
assert( gamma_golden_move(board, 1, 3, 6) == 1 );
assert( gamma_move(board, 3, 17, 12) == 0 );
assert( gamma_busy_fields(board, 3) == 46 );
assert( gamma_move(board, 4, 9, 0) == 1 );
assert( gamma_move(board, 5, 0, 15) == 0 );
assert( gamma_move(board, 1, 10, 11) == 0 );
assert( gamma_move(board, 2, 17, 12) == 0 );
assert( gamma_move(board, 2, 12, 0) == 1 );
assert( gamma_busy_fields(board, 2) == 52 );
assert( gamma_move(board, 3, 2, 0) == 0 );
assert( gamma_move(board, 3, 1, 17) == 1 );
assert( gamma_move(board, 4, 13, 10) == 0 );
assert( gamma_move(board, 5, 11, 0) == 1 );
assert( gamma_move(board, 1, 3, 10) == 0 );
assert( gamma_move(board, 1, 1, 11) == 0 );


char* board874981032 = gamma_board(board);
assert( board874981032 != NULL );
assert( strcmp(board874981032, 
"314.1.522145554\n"
".415.4144.25321\n"
"23344.234454.44\n"
".31225531..232.\n"
"55234..1.....33\n"
"33433..44125.21\n"
"233532311.31534\n"
"52.115143.33..2\n"
"44551541155355.\n"
"12.1.1521.2.324\n"
"524.1152143544.\n"
"414212.534.4.1.\n"
"152.2424155.442\n"
"314145522314215\n"
"311523215222523\n"
"435133.244221..\n"
"1.424.43.122123\n"
".151324.521.1..\n"
"332535455351533\n"
"1222543.5445235\n") == 0);
free(board874981032);
board874981032 = NULL;
assert( gamma_move(board, 2, 4, 6) == 0 );
assert( gamma_move(board, 2, 1, 16) == 0 );
assert( gamma_move(board, 3, 0, 6) == 0 );
assert( gamma_move(board, 4, 3, 9) == 1 );
assert( gamma_busy_fields(board, 4) == 51 );
assert( gamma_move(board, 5, 8, 10) == 0 );
assert( gamma_move(board, 1, 16, 9) == 0 );
assert( gamma_move(board, 1, 4, 3) == 0 );
assert( gamma_busy_fields(board, 1) == 50 );
assert( gamma_move(board, 2, 14, 5) == 0 );
assert( gamma_move(board, 3, 14, 12) == 0 );
assert( gamma_move(board, 3, 11, 9) == 0 );
assert( gamma_move(board, 4, 3, 2) == 0 );
assert( gamma_golden_move(board, 4, 13, 13) == 0 );
assert( gamma_move(board, 1, 13, 9) == 0 );
assert( gamma_busy_fields(board, 1) == 50 );
assert( gamma_move(board, 2, 15, 5) == 0 );
assert( gamma_free_fields(board, 3) == 50 );
assert( gamma_move(board, 4, 19, 5) == 0 );
assert( gamma_move(board, 4, 10, 11) == 0 );
assert( gamma_busy_fields(board, 4) == 51 );
assert( gamma_move(board, 5, 2, 0) == 0 );
assert( gamma_move(board, 5, 6, 15) == 1 );
assert( gamma_move(board, 1, 8, 3) == 1 );
assert( gamma_move(board, 1, 11, 8) == 0 );
assert( gamma_move(board, 2, 17, 12) == 0 );
assert( gamma_move(board, 2, 2, 16) == 0 );
assert( gamma_free_fields(board, 2) == 48 );
assert( gamma_move(board, 3, 18, 9) == 0 );
assert( gamma_busy_fields(board, 3) == 47 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 15, 5) == 0 );
assert( gamma_move(board, 4, 10, 16) == 1 );
assert( gamma_busy_fields(board, 4) == 52 );
assert( gamma_move(board, 5, 15, 11) == 0 );
assert( gamma_move(board, 2, 6, 18) == 0 );
assert( gamma_free_fields(board, 2) == 47 );
assert( gamma_move(board, 3, 12, 18) == 0 );
assert( gamma_free_fields(board, 4) == 47 );
assert( gamma_move(board, 5, 6, 7) == 0 );
assert( gamma_move(board, 1, 14, 1) == 0 );
assert( gamma_move(board, 1, 3, 8) == 0 );
assert( gamma_move(board, 2, 15, 11) == 0 );
assert( gamma_move(board, 2, 10, 9) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 8, 10) == 0 );
assert( gamma_move(board, 3, 3, 18) == 0 );
assert( gamma_move(board, 4, 8, 6) == 0 );
assert( gamma_move(board, 5, 15, 11) == 0 );
assert( gamma_move(board, 1, 9, 10) == 1 );
assert( gamma_move(board, 2, 4, 6) == 0 );
assert( gamma_move(board, 2, 0, 19) == 0 );
assert( gamma_move(board, 3, 4, 13) == 0 );
assert( gamma_move(board, 3, 5, 10) == 0 );
assert( gamma_move(board, 4, 3, 1) == 0 );
assert( gamma_move(board, 4, 9, 2) == 0 );
assert( gamma_move(board, 5, 11, 14) == 0 );
assert( gamma_move(board, 1, 10, 4) == 0 );
assert( gamma_move(board, 2, 15, 10) == 0 );
assert( gamma_move(board, 3, 12, 12) == 1 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 8, 17) == 0 );
assert( gamma_move(board, 5, 6, 9) == 0 );
assert( gamma_move(board, 1, 4, 6) == 0 );
assert( gamma_move(board, 1, 7, 3) == 0 );
assert( gamma_move(board, 2, 8, 10) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 11, 14) == 0 );
assert( gamma_free_fields(board, 4) == 45 );
assert( gamma_move(board, 1, 19, 3) == 0 );
assert( gamma_move(board, 1, 2, 3) == 0 );
assert( gamma_free_fields(board, 1) == 45 );
assert( gamma_move(board, 2, 16, 14) == 0 );
assert( gamma_move(board, 3, 14, 5) == 0 );
assert( gamma_busy_fields(board, 3) == 48 );
assert( gamma_move(board, 4, 4, 14) == 0 );
assert( gamma_free_fields(board, 4) == 45 );
assert( gamma_busy_fields(board, 5) == 51 );
assert( gamma_move(board, 1, 0, 11) == 0 );
assert( gamma_move(board, 1, 11, 2) == 1 );
assert( gamma_move(board, 2, 4, 11) == 0 );
assert( gamma_move(board, 2, 13, 9) == 0 );


char* board551887531 = gamma_board(board);
assert( board551887531 != NULL );
assert( strcmp(board551887531, 
"314.1.522145554\n"
".415.4144.25321\n"
"23344.234454.44\n"
".31225531.4232.\n"
"55234.51.....33\n"
"33433..44125.21\n"
"233532311.31534\n"
"52.115143.333.2\n"
"44551541155355.\n"
"12.1.152112.324\n"
"52441152143544.\n"
"414212.534.4.1.\n"
"152.2424155.442\n"
"314145522314215\n"
"311523215222523\n"
"435133.244221..\n"
"1.424.431122123\n"
".151324.52111..\n"
"332535455351533\n"
"1222543.5445235\n") == 0);
free(board551887531);
board551887531 = NULL;
assert( gamma_move(board, 3, 4, 6) == 0 );
assert( gamma_move(board, 3, 12, 18) == 0 );
assert( gamma_move(board, 4, 2, 7) == 0 );
assert( gamma_move(board, 4, 14, 16) == 1 );
assert( gamma_move(board, 5, 11, 14) == 0 );
assert( gamma_move(board, 1, 12, 9) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 3, 6) == 0 );
assert( gamma_move(board, 2, 2, 17) == 0 );
assert( gamma_move(board, 3, 7, 11) == 0 );
assert( gamma_move(board, 3, 2, 18) == 0 );
assert( gamma_free_fields(board, 4) == 43 );
assert( gamma_move(board, 5, 4, 5) == 0 );
assert( gamma_move(board, 5, 9, 12) == 1 );
assert( gamma_move(board, 1, 14, 5) == 0 );
assert( gamma_move(board, 1, 8, 7) == 0 );
assert( gamma_move(board, 2, 9, 11) == 0 );
assert( gamma_busy_fields(board, 2) == 52 );
assert( gamma_move(board, 3, 8, 12) == 0 );


char* board278445555 = gamma_board(board);
assert( board278445555 != NULL );
assert( strcmp(board278445555, 
"314.1.522145554\n"
".415.4144.25321\n"
"23344.234454.44\n"
".31225531.42324\n"
"55234.51.....33\n"
"33433..44125.21\n"
"233532311.31534\n"
"52.1151435333.2\n"
"44551541155355.\n"
"12.1.152112.324\n"
"52441152143544.\n"
"414212.534.4.1.\n"
"152.2424155.442\n"
"314145522314215\n"
"311523215222523\n"
"435133.244221..\n"
"1.424.431122123\n"
".151324.52111..\n"
"332535455351533\n"
"1222543.5445235\n") == 0);
free(board278445555);
board278445555 = NULL;
assert( gamma_move(board, 4, 13, 10) == 0 );
assert( gamma_move(board, 4, 6, 9) == 0 );
assert( gamma_move(board, 5, 2, 14) == 0 );
assert( gamma_move(board, 1, 12, 19) == 0 );
assert( gamma_move(board, 1, 9, 18) == 1 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_golden_move(board, 1, 1, 14) == 0 );
assert( gamma_move(board, 2, 10, 3) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 8, 14) == 0 );
assert( gamma_move(board, 3, 13, 0) == 0 );
assert( gamma_move(board, 4, 2, 14) == 0 );
assert( gamma_move(board, 5, 19, 3) == 0 );
assert( gamma_move(board, 5, 8, 18) == 0 );
assert( gamma_move(board, 1, 4, 14) == 0 );
assert( gamma_move(board, 1, 4, 15) == 0 );
assert( gamma_golden_move(board, 1, 3, 2) == 0 );
assert( gamma_move(board, 2, 10, 5) == 0 );
assert( gamma_move(board, 2, 2, 10) == 1 );
assert( gamma_busy_fields(board, 3) == 48 );
assert( gamma_move(board, 4, 7, 8) == 0 );
assert( gamma_move(board, 4, 1, 12) == 0 );


char* board335987814 = gamma_board(board);
assert( board335987814 != NULL );
assert( strcmp(board335987814, 
"314.1.522145554\n"
".415.4144125321\n"
"23344.234454.44\n"
".31225531.42324\n"
"55234.51.....33\n"
"33433..44125.21\n"
"233532311.31534\n"
"52.1151435333.2\n"
"44551541155355.\n"
"1221.152112.324\n"
"52441152143544.\n"
"414212.534.4.1.\n"
"152.2424155.442\n"
"314145522314215\n"
"311523215222523\n"
"435133.244221..\n"
"1.424.431122123\n"
".151324.52111..\n"
"332535455351533\n"
"1222543.5445235\n") == 0);
free(board335987814);
board335987814 = NULL;
assert( gamma_move(board, 5, 10, 4) == 0 );
assert( gamma_move(board, 5, 2, 10) == 0 );
assert( gamma_move(board, 1, 17, 5) == 0 );
assert( gamma_busy_fields(board, 1) == 54 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 3, 15, 9) == 0 );
assert( gamma_move(board, 3, 10, 12) == 0 );
assert( gamma_busy_fields(board, 3) == 48 );
assert( gamma_move(board, 4, 12, 13) == 0 );
assert( gamma_move(board, 4, 3, 1) == 0 );
assert( gamma_busy_fields(board, 4) == 53 );
assert( gamma_move(board, 5, 17, 12) == 0 );
assert( gamma_move(board, 5, 0, 8) == 0 );
assert( gamma_move(board, 1, 15, 8) == 0 );
assert( gamma_move(board, 1, 9, 15) == 1 );
assert( gamma_move(board, 2, 10, 4) == 0 );
assert( gamma_move(board, 3, 9, 18) == 0 );
assert( gamma_busy_fields(board, 3) == 48 );
assert( gamma_move(board, 4, 4, 14) == 0 );
assert( gamma_move(board, 5, 4, 16) == 0 );
assert( gamma_move(board, 1, 8, 12) == 0 );
assert( gamma_move(board, 2, 8, 6) == 0 );
assert( gamma_move(board, 3, 14, 5) == 0 );
assert( gamma_move(board, 3, 3, 17) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 2, 14) == 0 );
assert( gamma_move(board, 5, 9, 9) == 0 );
assert( gamma_move(board, 5, 14, 12) == 0 );


char* board715872232 = gamma_board(board);
assert( board715872232 != NULL );
assert( strcmp(board715872232, 
"314.1.522145554\n"
".415.4144125321\n"
"23344.234454.44\n"
".31225531.42324\n"
"55234.51.1...33\n"
"33433..44125.21\n"
"233532311.31534\n"
"52.1151435333.2\n"
"44551541155355.\n"
"1221.152112.324\n"
"52441152143544.\n"
"414212.534.4.1.\n"
"152.2424155.442\n"
"314145522314215\n"
"311523215222523\n"
"435133.244221..\n"
"1.424.431122123\n"
".151324.52111..\n"
"332535455351533\n"
"1222543.5445235\n") == 0);
free(board715872232);
board715872232 = NULL;
assert( gamma_move(board, 1, 19, 5) == 0 );
assert( gamma_move(board, 2, 8, 4) == 0 );
assert( gamma_move(board, 2, 7, 1) == 0 );
assert( gamma_move(board, 3, 17, 12) == 0 );
assert( gamma_free_fields(board, 3) == 39 );
assert( gamma_move(board, 4, 9, 12) == 0 );
assert( gamma_move(board, 4, 12, 2) == 0 );
assert( gamma_move(board, 5, 7, 11) == 0 );
assert( gamma_move(board, 5, 3, 1) == 0 );
assert( gamma_busy_fields(board, 5) == 52 );
assert( gamma_golden_possible(board, 5) == 0 );


gamma_delete(board);

    return 0;
}
