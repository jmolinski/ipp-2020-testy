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
uuid: 797484284
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(16, 20, 6, 49);
assert( board != NULL );


assert( gamma_move(board, 1, 11, 13) == 1 );
assert( gamma_move(board, 1, 4, 12) == 1 );
assert( gamma_move(board, 2, 12, 4) == 1 );
assert( gamma_move(board, 2, 2, 12) == 1 );
assert( gamma_move(board, 3, 3, 1) == 1 );
assert( gamma_move(board, 3, 15, 8) == 1 );
assert( gamma_move(board, 4, 14, 18) == 1 );
assert( gamma_move(board, 5, 6, 10) == 1 );
assert( gamma_busy_fields(board, 5) == 1 );
assert( gamma_free_fields(board, 6) == 312 );
assert( gamma_golden_move(board, 6, 8, 15) == 0 );
assert( gamma_move(board, 1, 13, 3) == 1 );
assert( gamma_golden_move(board, 1, 18, 14) == 0 );
assert( gamma_move(board, 2, 11, 2) == 1 );
assert( gamma_move(board, 2, 5, 11) == 1 );
assert( gamma_move(board, 3, 10, 11) == 1 );
assert( gamma_move(board, 3, 9, 17) == 1 );
assert( gamma_free_fields(board, 3) == 307 );
assert( gamma_move(board, 4, 15, 6) == 1 );
assert( gamma_move(board, 4, 9, 8) == 1 );
assert( gamma_free_fields(board, 4) == 305 );
assert( gamma_move(board, 5, 15, 17) == 1 );
assert( gamma_move(board, 6, 14, 11) == 1 );
assert( gamma_move(board, 6, 15, 19) == 1 );
assert( gamma_move(board, 2, 4, 13) == 1 );
assert( gamma_move(board, 2, 0, 15) == 1 );
assert( gamma_move(board, 3, 17, 6) == 0 );
assert( gamma_busy_fields(board, 3) == 4 );
assert( gamma_move(board, 4, 13, 3) == 0 );
assert( gamma_move(board, 4, 4, 0) == 1 );
assert( gamma_move(board, 5, 9, 0) == 1 );
assert( gamma_move(board, 5, 9, 3) == 1 );
assert( gamma_move(board, 6, 19, 14) == 0 );
assert( gamma_move(board, 6, 3, 4) == 1 );
assert( gamma_free_fields(board, 6) == 296 );
assert( gamma_move(board, 1, 2, 14) == 1 );
assert( gamma_move(board, 2, 3, 5) == 1 );
assert( gamma_busy_fields(board, 2) == 7 );
assert( gamma_move(board, 3, 19, 2) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );


char* board251504536 = gamma_board(board);
assert( board251504536 != NULL );
assert( strcmp(board251504536, 
"...............6\n"
"..............4.\n"
".........3.....5\n"
"................\n"
"2...............\n"
"..1.............\n"
"....2......1....\n"
"..2.1...........\n"
".....2....3...6.\n"
"......5.........\n"
"................\n"
".........4.....3\n"
"................\n"
"...............4\n"
"...2............\n"
"...6........2...\n"
".........5...1..\n"
"...........2....\n"
"...3............\n"
"....4....5......\n") == 0);
free(board251504536);
board251504536 = NULL;
assert( gamma_free_fields(board, 4) == 294 );
assert( gamma_move(board, 5, 1, 4) == 1 );
assert( gamma_move(board, 5, 11, 18) == 1 );
assert( gamma_busy_fields(board, 5) == 6 );
assert( gamma_move(board, 6, 4, 8) == 1 );
assert( gamma_move(board, 1, 17, 1) == 0 );
assert( gamma_move(board, 2, 8, 15) == 1 );
assert( gamma_move(board, 2, 13, 8) == 1 );
assert( gamma_move(board, 3, 5, 13) == 1 );
assert( gamma_move(board, 4, 2, 10) == 1 );
assert( gamma_move(board, 5, 12, 13) == 1 );
assert( gamma_move(board, 5, 9, 14) == 1 );
assert( gamma_move(board, 6, 2, 4) == 1 );
assert( gamma_move(board, 6, 15, 0) == 1 );
assert( gamma_move(board, 1, 19, 6) == 0 );
assert( gamma_move(board, 2, 10, 6) == 1 );
assert( gamma_move(board, 3, 0, 0) == 1 );
assert( gamma_move(board, 4, 15, 7) == 1 );
assert( gamma_move(board, 4, 10, 7) == 1 );
assert( gamma_move(board, 5, 3, 15) == 1 );
assert( gamma_move(board, 5, 12, 13) == 0 );
assert( gamma_move(board, 6, 6, 7) == 1 );
assert( gamma_move(board, 1, 16, 14) == 0 );
assert( gamma_move(board, 1, 13, 11) == 1 );


char* board392302468 = gamma_board(board);
assert( board392302468 != NULL );
assert( strcmp(board392302468, 
"...............6\n"
"...........5..4.\n"
".........3.....5\n"
"................\n"
"2..5....2.......\n"
"..1......5......\n"
"....23.....15...\n"
"..2.1...........\n"
".....2....3..16.\n"
"..4...5.........\n"
"................\n"
"....6....4...2.3\n"
"......6...4....4\n"
"..........2....4\n"
"...2............\n"
".566........2...\n"
".........5...1..\n"
"...........2....\n"
"...3............\n"
"3...4....5.....6\n") == 0);
free(board392302468);
board392302468 = NULL;
assert( gamma_move(board, 2, 18, 4) == 0 );
assert( gamma_move(board, 2, 15, 13) == 1 );
assert( gamma_move(board, 3, 10, 10) == 1 );
assert( gamma_move(board, 4, 3, 11) == 1 );
assert( gamma_move(board, 4, 7, 14) == 1 );
assert( gamma_move(board, 5, 15, 1) == 1 );
assert( gamma_move(board, 6, 1, 5) == 1 );
assert( gamma_move(board, 6, 6, 11) == 1 );


char* board528074422 = gamma_board(board);
assert( board528074422 != NULL );
assert( strcmp(board528074422, 
"...............6\n"
"...........5..4.\n"
".........3.....5\n"
"................\n"
"2..5....2.......\n"
"..1....4.5......\n"
"....23.....15..2\n"
"..2.1...........\n"
"...4.26...3..16.\n"
"..4...5...3.....\n"
"................\n"
"....6....4...2.3\n"
"......6...4....4\n"
"..........2....4\n"
".6.2............\n"
".566........2...\n"
".........5...1..\n"
"...........2....\n"
"...3...........5\n"
"3...4....5.....6\n") == 0);
free(board528074422);
board528074422 = NULL;
assert( gamma_move(board, 1, 16, 15) == 0 );
assert( gamma_move(board, 1, 13, 12) == 1 );
assert( gamma_move(board, 2, 0, 11) == 1 );
assert( gamma_move(board, 3, 13, 4) == 1 );


char* board606141105 = gamma_board(board);
assert( board606141105 != NULL );
assert( strcmp(board606141105, 
"...............6\n"
"...........5..4.\n"
".........3.....5\n"
"................\n"
"2..5....2.......\n"
"..1....4.5......\n"
"....23.....15..2\n"
"..2.1........1..\n"
"2..4.26...3..16.\n"
"..4...5...3.....\n"
"................\n"
"....6....4...2.3\n"
"......6...4....4\n"
"..........2....4\n"
".6.2............\n"
".566........23..\n"
".........5...1..\n"
"...........2....\n"
"...3...........5\n"
"3...4....5.....6\n") == 0);
free(board606141105);
board606141105 = NULL;
assert( gamma_move(board, 4, 14, 10) == 1 );
assert( gamma_move(board, 5, 14, 4) == 1 );
assert( gamma_move(board, 6, 4, 6) == 1 );
assert( gamma_move(board, 2, 9, 19) == 1 );
assert( gamma_move(board, 3, 6, 7) == 0 );
assert( gamma_move(board, 4, 5, 11) == 0 );
assert( gamma_move(board, 5, 6, 0) == 1 );
assert( gamma_move(board, 5, 0, 9) == 1 );
assert( gamma_move(board, 6, 0, 13) == 1 );
assert( gamma_move(board, 6, 6, 3) == 1 );
assert( gamma_move(board, 1, 8, 16) == 1 );
assert( gamma_move(board, 5, 18, 10) == 0 );
assert( gamma_move(board, 6, 14, 16) == 1 );
assert( gamma_move(board, 1, 3, 0) == 1 );
assert( gamma_move(board, 1, 3, 9) == 1 );
assert( gamma_move(board, 2, 13, 8) == 0 );
assert( gamma_move(board, 3, 12, 0) == 1 );
assert( gamma_move(board, 3, 9, 5) == 1 );
assert( gamma_busy_fields(board, 3) == 10 );


char* board891574258 = gamma_board(board);
assert( board891574258 != NULL );
assert( strcmp(board891574258, 
".........2.....6\n"
"...........5..4.\n"
".........3.....5\n"
"........1.....6.\n"
"2..5....2.......\n"
"..1....4.5......\n"
"6...23.....15..2\n"
"..2.1........1..\n"
"2..4.26...3..16.\n"
"..4...5...3...4.\n"
"5..1............\n"
"....6....4...2.3\n"
"......6...4....4\n"
"....6.....2....4\n"
".6.2.....3......\n"
".566........235.\n"
"......6..5...1..\n"
"...........2....\n"
"...3...........5\n"
"3..14.5..5..3..6\n") == 0);
free(board891574258);
board891574258 = NULL;
assert( gamma_move(board, 4, 7, 4) == 1 );
assert( gamma_move(board, 4, 9, 3) == 0 );
assert( gamma_move(board, 5, 3, 0) == 0 );
assert( gamma_move(board, 6, 0, 10) == 1 );
assert( gamma_move(board, 6, 12, 2) == 1 );
assert( gamma_move(board, 2, 3, 10) == 1 );
assert( gamma_move(board, 3, 8, 7) == 1 );
assert( gamma_move(board, 3, 6, 2) == 1 );
assert( gamma_busy_fields(board, 3) == 12 );
assert( gamma_move(board, 4, 8, 10) == 1 );
assert( gamma_move(board, 5, 3, 2) == 1 );
assert( gamma_move(board, 6, 13, 9) == 1 );
assert( gamma_free_fields(board, 6) == 243 );
assert( gamma_golden_move(board, 6, 4, 12) == 1 );
assert( gamma_move(board, 1, 11, 11) == 1 );
assert( gamma_move(board, 1, 12, 12) == 1 );
assert( gamma_move(board, 2, 7, 14) == 0 );
assert( gamma_free_fields(board, 2) == 241 );
assert( gamma_move(board, 3, 5, 2) == 1 );
assert( gamma_move(board, 3, 0, 14) == 1 );
assert( gamma_move(board, 4, 4, 13) == 0 );
assert( gamma_move(board, 5, 12, 17) == 1 );
assert( gamma_move(board, 5, 10, 11) == 0 );
assert( gamma_move(board, 6, 1, 2) == 1 );
assert( gamma_move(board, 6, 0, 8) == 1 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 1, 5, 2) == 0 );
assert( gamma_move(board, 1, 1, 4) == 0 );
assert( gamma_move(board, 2, 11, 7) == 1 );
assert( gamma_move(board, 2, 11, 1) == 1 );
assert( gamma_move(board, 3, 8, 0) == 1 );
assert( gamma_move(board, 3, 2, 9) == 1 );
assert( gamma_move(board, 4, 17, 14) == 0 );
assert( gamma_move(board, 4, 6, 9) == 1 );
assert( gamma_golden_move(board, 4, 14, 0) == 0 );
assert( gamma_move(board, 5, 1, 18) == 1 );
assert( gamma_move(board, 5, 4, 4) == 1 );
assert( gamma_move(board, 6, 7, 7) == 1 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 1, 2, 16) == 1 );
assert( gamma_golden_move(board, 1, 1, 3) == 0 );
assert( gamma_move(board, 2, 16, 7) == 0 );
assert( gamma_move(board, 2, 8, 9) == 1 );
assert( gamma_move(board, 3, 13, 9) == 0 );
assert( gamma_move(board, 3, 11, 4) == 1 );
assert( gamma_move(board, 4, 7, 4) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 8, 12) == 1 );
assert( gamma_move(board, 6, 12, 10) == 1 );
assert( gamma_busy_fields(board, 6) == 21 );
assert( gamma_free_fields(board, 6) == 223 );
assert( gamma_move(board, 1, 16, 3) == 0 );
assert( gamma_move(board, 2, 14, 18) == 0 );
assert( gamma_move(board, 2, 7, 5) == 1 );
assert( gamma_free_fields(board, 2) == 222 );


char* board976274626 = gamma_board(board);
assert( board976274626 != NULL );
assert( strcmp(board976274626, 
".........2.....6\n"
".5.........5..4.\n"
".........3..5..5\n"
"..1.....1.....6.\n"
"2..5....2.......\n"
"3.1....4.5......\n"
"6...23.....15..2\n"
"..2.6...5...11..\n"
"2..4.26...31.16.\n"
"6.42..5.4.3.6.4.\n"
"5.31..4.2....6..\n"
"6...6....4...2.3\n"
"......663.42...4\n"
"....6.....2....4\n"
".6.2...2.3......\n"
".5665..4...3235.\n"
"......6..5...1..\n"
".6.5.33....26...\n"
"...3.......2...5\n"
"3..14.5.35..3..6\n") == 0);
free(board976274626);
board976274626 = NULL;
assert( gamma_move(board, 3, 2, 12) == 0 );
assert( gamma_move(board, 3, 15, 8) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 5, 5, 2) == 0 );
assert( gamma_move(board, 5, 6, 15) == 1 );
assert( gamma_move(board, 6, 6, 8) == 1 );
assert( gamma_move(board, 1, 6, 11) == 0 );
assert( gamma_busy_fields(board, 1) == 11 );
assert( gamma_move(board, 2, 14, 5) == 1 );
assert( gamma_move(board, 2, 4, 19) == 1 );
assert( gamma_move(board, 3, 1, 7) == 1 );
assert( gamma_move(board, 3, 15, 18) == 1 );
assert( gamma_free_fields(board, 3) == 216 );
assert( gamma_move(board, 4, 8, 2) == 1 );
assert( gamma_move(board, 4, 5, 1) == 1 );
assert( gamma_move(board, 5, 17, 6) == 0 );
assert( gamma_move(board, 5, 12, 0) == 0 );
assert( gamma_move(board, 6, 10, 4) == 1 );
assert( gamma_move(board, 1, 6, 0) == 0 );
assert( gamma_move(board, 1, 4, 8) == 0 );
assert( gamma_move(board, 2, 8, 16) == 0 );


char* board961874192 = gamma_board(board);
assert( board961874192 != NULL );
assert( strcmp(board961874192, 
"....2....2.....6\n"
".5.........5..43\n"
".........3..5..5\n"
"..1.....1.....6.\n"
"2..5..5.2.......\n"
"3.1....4.5......\n"
"6...23.....15..2\n"
"..2.6...5...11..\n"
"2..4.26...31.16.\n"
"6.42..5.4.3.6.4.\n"
"5.31..4.2....6..\n"
"6...6.6..4...2.3\n"
".3....663.42...4\n"
"....6.....2....4\n"
".6.2...2.3....2.\n"
".5665..4..63235.\n"
"......6..5...1..\n"
".6.5.33.4..26...\n"
"...3.4.....2...5\n"
"3..14.5.35..3..6\n") == 0);
free(board961874192);
board961874192 = NULL;
assert( gamma_move(board, 3, 18, 7) == 0 );
assert( gamma_move(board, 4, 11, 6) == 1 );
assert( gamma_move(board, 5, 3, 4) == 0 );
assert( gamma_move(board, 6, 2, 13) == 1 );
assert( gamma_move(board, 1, 17, 2) == 0 );
assert( gamma_move(board, 2, 15, 13) == 0 );
assert( gamma_move(board, 2, 2, 19) == 1 );
assert( gamma_move(board, 3, 10, 15) == 1 );
assert( gamma_move(board, 4, 8, 1) == 1 );
assert( gamma_move(board, 6, 16, 1) == 0 );
assert( gamma_move(board, 1, 9, 2) == 1 );
assert( gamma_move(board, 2, 10, 4) == 0 );
assert( gamma_move(board, 2, 9, 12) == 1 );
assert( gamma_move(board, 3, 1, 9) == 1 );
assert( gamma_move(board, 4, 16, 7) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 19, 10) == 0 );
assert( gamma_move(board, 5, 0, 13) == 0 );
assert( gamma_move(board, 6, 14, 14) == 1 );
assert( gamma_move(board, 1, 17, 3) == 0 );
assert( gamma_move(board, 2, 13, 9) == 0 );
assert( gamma_busy_fields(board, 2) == 22 );
assert( gamma_move(board, 3, 14, 8) == 1 );
assert( gamma_move(board, 4, 9, 9) == 1 );
assert( gamma_move(board, 5, 10, 15) == 0 );
assert( gamma_move(board, 5, 13, 14) == 1 );
assert( gamma_move(board, 6, 13, 9) == 0 );
assert( gamma_move(board, 6, 7, 12) == 1 );
assert( gamma_move(board, 1, 8, 12) == 0 );
assert( gamma_free_fields(board, 1) == 200 );
assert( gamma_move(board, 2, 6, 8) == 0 );
assert( gamma_move(board, 3, 18, 7) == 0 );
assert( gamma_move(board, 3, 12, 19) == 1 );
assert( gamma_move(board, 4, 8, 7) == 0 );
assert( gamma_move(board, 4, 13, 13) == 1 );
assert( gamma_busy_fields(board, 4) == 19 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 5, 2) == 0 );
assert( gamma_move(board, 5, 0, 13) == 0 );
assert( gamma_move(board, 6, 16, 5) == 0 );


char* board548388019 = gamma_board(board);
assert( board548388019 != NULL );
assert( strcmp(board548388019, 
"..2.2....2..3..6\n"
".5.........5..43\n"
".........3..5..5\n"
"..1.....1.....6.\n"
"2..5..5.2.3.....\n"
"3.1....4.5...56.\n"
"6.6.23.....154.2\n"
"..2.6..652..11..\n"
"2..4.26...31.16.\n"
"6.42..5.4.3.6.4.\n"
"5331..4.24...6..\n"
"6...6.6..4...233\n"
".3....663.42...4\n"
"....6.....24...4\n"
".6.2...2.3....2.\n"
".5665..4..63235.\n"
"......6..5...1..\n"
".6.5.33.41.26...\n"
"...3.4..4..2...5\n"
"3..14.5.35..3..6\n") == 0);
free(board548388019);
board548388019 = NULL;
assert( gamma_move(board, 1, 1, 9) == 0 );
assert( gamma_move(board, 1, 3, 1) == 0 );
assert( gamma_move(board, 3, 10, 4) == 0 );
assert( gamma_move(board, 3, 2, 1) == 1 );
assert( gamma_move(board, 4, 1, 4) == 0 );
assert( gamma_move(board, 5, 9, 14) == 0 );
assert( gamma_move(board, 5, 10, 11) == 0 );


char* board944461468 = gamma_board(board);
assert( board944461468 != NULL );
assert( strcmp(board944461468, 
"..2.2....2..3..6\n"
".5.........5..43\n"
".........3..5..5\n"
"..1.....1.....6.\n"
"2..5..5.2.3.....\n"
"3.1....4.5...56.\n"
"6.6.23.....154.2\n"
"..2.6..652..11..\n"
"2..4.26...31.16.\n"
"6.42..5.4.3.6.4.\n"
"5331..4.24...6..\n"
"6...6.6..4...233\n"
".3....663.42...4\n"
"....6.....24...4\n"
".6.2...2.3....2.\n"
".5665..4..63235.\n"
"......6..5...1..\n"
".6.5.33.41.26...\n"
"..33.4..4..2...5\n"
"3..14.5.35..3..6\n") == 0);
free(board944461468);
board944461468 = NULL;
assert( gamma_move(board, 6, 14, 13) == 1 );
assert( gamma_free_fields(board, 6) == 196 );
assert( gamma_golden_move(board, 6, 13, 4) == 0 );
assert( gamma_move(board, 1, 8, 12) == 0 );
assert( gamma_move(board, 2, 3, 0) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 17, 14) == 0 );
assert( gamma_move(board, 4, 16, 10) == 0 );
assert( gamma_move(board, 5, 10, 17) == 1 );
assert( gamma_move(board, 5, 14, 4) == 0 );
assert( gamma_busy_fields(board, 5) == 21 );
assert( gamma_move(board, 6, 12, 14) == 1 );
assert( gamma_move(board, 6, 14, 6) == 1 );
assert( gamma_golden_move(board, 6, 8, 14) == 0 );
assert( gamma_move(board, 1, 2, 19) == 0 );
assert( gamma_free_fields(board, 1) == 193 );
assert( gamma_move(board, 2, 5, 10) == 1 );
assert( gamma_move(board, 2, 6, 8) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 9, 6) == 1 );
assert( gamma_move(board, 3, 3, 3) == 1 );
assert( gamma_busy_fields(board, 4) == 19 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 2, 18) == 1 );
assert( gamma_move(board, 5, 3, 11) == 0 );
assert( gamma_busy_fields(board, 5) == 22 );
assert( gamma_move(board, 6, 16, 10) == 0 );
assert( gamma_move(board, 6, 10, 15) == 0 );
assert( gamma_move(board, 1, 7, 2) == 1 );
assert( gamma_move(board, 1, 2, 6) == 1 );
assert( gamma_move(board, 2, 1, 0) == 1 );
assert( gamma_move(board, 3, 2, 13) == 0 );
assert( gamma_busy_fields(board, 3) == 26 );
assert( gamma_move(board, 4, 11, 7) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 12, 14) == 0 );
assert( gamma_move(board, 5, 7, 15) == 1 );
assert( gamma_move(board, 6, 12, 11) == 1 );
assert( gamma_move(board, 6, 10, 0) == 1 );


char* board545048208 = gamma_board(board);
assert( board545048208 != NULL );
assert( strcmp(board545048208, 
"..2.2....2..3..6\n"
".55........5..43\n"
".........35.5..5\n"
"..1.....1.....6.\n"
"2..5..552.3.....\n"
"3.1....4.5..656.\n"
"6.6.23.....15462\n"
"..2.6..652..11..\n"
"2..4.26...31616.\n"
"6.42.25.4.3.6.4.\n"
"5331..4.24...6..\n"
"6...6.6..4...233\n"
".3....663.42...4\n"
"..1.6....324..64\n"
".6.2...2.3....2.\n"
".5665..4..63235.\n"
"...3..6..5...1..\n"
".6.5.33141.26...\n"
"..33.4..4..2...5\n"
"32.14.5.356.3..6\n") == 0);
free(board545048208);
board545048208 = NULL;
assert( gamma_move(board, 1, 9, 16) == 1 );
assert( gamma_move(board, 2, 3, 7) == 1 );
assert( gamma_move(board, 2, 8, 1) == 0 );
assert( gamma_move(board, 3, 3, 11) == 0 );
assert( gamma_move(board, 4, 8, 8) == 1 );
assert( gamma_move(board, 5, 9, 19) == 0 );
assert( gamma_move(board, 5, 2, 10) == 0 );
assert( gamma_move(board, 6, 3, 4) == 0 );
assert( gamma_move(board, 1, 12, 1) == 1 );
assert( gamma_move(board, 1, 13, 2) == 1 );
assert( gamma_move(board, 2, 0, 13) == 0 );
assert( gamma_move(board, 2, 13, 12) == 0 );
assert( gamma_move(board, 3, 11, 9) == 1 );
assert( gamma_move(board, 3, 5, 16) == 1 );
assert( gamma_move(board, 4, 5, 6) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 14, 3) == 1 );
assert( gamma_move(board, 5, 1, 17) == 1 );
assert( gamma_busy_fields(board, 5) == 25 );
assert( gamma_move(board, 6, 6, 5) == 1 );
assert( gamma_move(board, 6, 11, 13) == 0 );
assert( gamma_move(board, 1, 10, 15) == 0 );
assert( gamma_move(board, 2, 15, 4) == 1 );
assert( gamma_free_fields(board, 3) == 171 );
assert( gamma_move(board, 4, 1, 10) == 1 );
assert( gamma_move(board, 4, 9, 15) == 1 );
assert( gamma_move(board, 5, 3, 11) == 0 );
assert( gamma_move(board, 5, 11, 5) == 1 );
assert( gamma_busy_fields(board, 5) == 26 );
assert( gamma_move(board, 6, 13, 15) == 1 );
assert( gamma_move(board, 1, 11, 18) == 0 );
assert( gamma_move(board, 2, 8, 3) == 1 );
assert( gamma_move(board, 3, 14, 11) == 0 );
assert( gamma_move(board, 4, 2, 2) == 1 );
assert( gamma_move(board, 4, 15, 2) == 1 );
assert( gamma_move(board, 5, 18, 13) == 0 );
assert( gamma_busy_fields(board, 5) == 26 );


char* board424768135 = gamma_board(board);
assert( board424768135 != NULL );
assert( strcmp(board424768135, 
"..2.2....2..3..6\n"
".55........5..43\n"
".5.......35.5..5\n"
"..1..3..11....6.\n"
"2..5..55243..6..\n"
"3.1....4.5..656.\n"
"6.6.23.....15462\n"
"..2.6..652..11..\n"
"2..4.26...31616.\n"
"6442.25.4.3.6.4.\n"
"5331..4.24.3.6..\n"
"6...6.6.44...233\n"
".3.2..663.42...4\n"
"..1.64...324..64\n"
".6.2..62.3.5..2.\n"
".5665..4..632352\n"
"...3..6.25...15.\n"
".645.33141.261.4\n"
"..33.4..4..21..5\n"
"32.14.5.356.3..6\n") == 0);
free(board424768135);
board424768135 = NULL;
assert( gamma_move(board, 1, 12, 5) == 1 );
assert( gamma_move(board, 2, 6, 12) == 1 );
assert( gamma_move(board, 4, 15, 4) == 0 );
assert( gamma_move(board, 5, 8, 8) == 0 );
assert( gamma_move(board, 6, 7, 3) == 1 );
assert( gamma_busy_fields(board, 6) == 34 );
assert( gamma_move(board, 2, 18, 9) == 0 );
assert( gamma_busy_fields(board, 2) == 28 );
assert( gamma_golden_move(board, 2, 11, 10) == 0 );
assert( gamma_move(board, 3, 3, 10) == 0 );
assert( gamma_move(board, 3, 1, 10) == 0 );
assert( gamma_free_fields(board, 3) == 161 );
assert( gamma_move(board, 4, 9, 10) == 1 );
assert( gamma_free_fields(board, 5) == 160 );
assert( gamma_move(board, 6, 13, 1) == 1 );
assert( gamma_move(board, 6, 1, 2) == 0 );
assert( gamma_move(board, 1, 6, 13) == 1 );
assert( gamma_move(board, 2, 16, 10) == 0 );
assert( gamma_move(board, 2, 6, 18) == 1 );
assert( gamma_move(board, 3, 9, 4) == 1 );
assert( gamma_move(board, 4, 9, 14) == 0 );
assert( gamma_move(board, 4, 13, 12) == 0 );
assert( gamma_move(board, 5, 3, 10) == 0 );
assert( gamma_move(board, 6, 13, 6) == 1 );
assert( gamma_busy_fields(board, 6) == 36 );
assert( gamma_move(board, 1, 15, 4) == 0 );


char* board418165057 = gamma_board(board);
assert( board418165057 != NULL );
assert( strcmp(board418165057, 
"..2.2....2..3..6\n"
".55...2....5..43\n"
".5.......35.5..5\n"
"..1..3..11....6.\n"
"2..5..55243..6..\n"
"3.1....4.5..656.\n"
"6.6.231....15462\n"
"..2.6.2652..11..\n"
"2..4.26...31616.\n"
"6442.25.443.6.4.\n"
"5331..4.24.3.6..\n"
"6...6.6.44...233\n"
".3.2..663.42...4\n"
"..1.64...324.664\n"
".6.2..62.3.51.2.\n"
".5665..4.3632352\n"
"...3..6625...15.\n"
".645.33141.261.4\n"
"..33.4..4..216.5\n"
"32.14.5.356.3..6\n") == 0);
free(board418165057);
board418165057 = NULL;
assert( gamma_move(board, 2, 13, 1) == 0 );
assert( gamma_busy_fields(board, 2) == 29 );
assert( gamma_move(board, 3, 9, 7) == 1 );
assert( gamma_busy_fields(board, 3) == 30 );
assert( gamma_free_fields(board, 3) == 154 );
assert( gamma_move(board, 5, 13, 9) == 0 );
assert( gamma_move(board, 5, 13, 10) == 1 );


char* board355551012 = gamma_board(board);
assert( board355551012 != NULL );
assert( strcmp(board355551012, 
"..2.2....2..3..6\n"
".55...2....5..43\n"
".5.......35.5..5\n"
"..1..3..11....6.\n"
"2..5..55243..6..\n"
"3.1....4.5..656.\n"
"6.6.231....15462\n"
"..2.6.2652..11..\n"
"2..4.26...31616.\n"
"6442.25.443.654.\n"
"5331..4.24.3.6..\n"
"6...6.6.44...233\n"
".3.2..663342...4\n"
"..1.64...324.664\n"
".6.2..62.3.51.2.\n"
".5665..4.3632352\n"
"...3..6625...15.\n"
".645.33141.261.4\n"
"..33.4..4..216.5\n"
"32.14.5.356.3..6\n") == 0);
free(board355551012);
board355551012 = NULL;
assert( gamma_move(board, 6, 19, 8) == 0 );
assert( gamma_move(board, 1, 5, 13) == 0 );
assert( gamma_move(board, 1, 15, 16) == 1 );


char* board116149847 = gamma_board(board);
assert( board116149847 != NULL );
assert( strcmp(board116149847, 
"..2.2....2..3..6\n"
".55...2....5..43\n"
".5.......35.5..5\n"
"..1..3..11....61\n"
"2..5..55243..6..\n"
"3.1....4.5..656.\n"
"6.6.231....15462\n"
"..2.6.2652..11..\n"
"2..4.26...31616.\n"
"6442.25.443.654.\n"
"5331..4.24.3.6..\n"
"6...6.6.44...233\n"
".3.2..663342...4\n"
"..1.64...324.664\n"
".6.2..62.3.51.2.\n"
".5665..4.3632352\n"
"...3..6625...15.\n"
".645.33141.261.4\n"
"..33.4..4..216.5\n"
"32.14.5.356.3..6\n") == 0);
free(board116149847);
board116149847 = NULL;
assert( gamma_move(board, 2, 11, 8) == 1 );
assert( gamma_move(board, 3, 19, 6) == 0 );
assert( gamma_move(board, 3, 7, 7) == 0 );
assert( gamma_move(board, 4, 0, 11) == 0 );
assert( gamma_move(board, 4, 6, 5) == 0 );
assert( gamma_free_fields(board, 4) == 151 );
assert( gamma_move(board, 5, 14, 3) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 14, 11) == 0 );
assert( gamma_busy_fields(board, 6) == 36 );
assert( gamma_move(board, 1, 6, 7) == 0 );
assert( gamma_move(board, 1, 13, 10) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 0, 16) == 1 );
assert( gamma_move(board, 3, 13, 1) == 0 );
assert( gamma_move(board, 4, 14, 11) == 0 );
assert( gamma_move(board, 5, 15, 14) == 1 );
assert( gamma_move(board, 6, 9, 12) == 0 );
assert( gamma_busy_fields(board, 6) == 36 );
assert( gamma_move(board, 1, 12, 3) == 1 );
assert( gamma_move(board, 1, 1, 12) == 1 );
assert( gamma_move(board, 3, 1, 10) == 0 );
assert( gamma_move(board, 4, 3, 2) == 0 );
assert( gamma_move(board, 5, 3, 5) == 0 );
assert( gamma_move(board, 5, 5, 19) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 8, 3) == 0 );


char* board601045369 = gamma_board(board);
assert( board601045369 != NULL );
assert( strcmp(board601045369, 
"..2.25...2..3..6\n"
".55...2....5..43\n"
".5.......35.5..5\n"
"2.1..3..11....61\n"
"2..5..55243..6..\n"
"3.1....4.5..6565\n"
"6.6.231....15462\n"
".12.6.2652..11..\n"
"2..4.26...31616.\n"
"6442.25.443.654.\n"
"5331..4.24.3.6..\n"
"6...6.6.44.2.233\n"
".3.2..663342...4\n"
"..1.64...324.664\n"
".6.2..62.3.51.2.\n"
".5665..4.3632352\n"
"...3..6625..115.\n"
".645.33141.261.4\n"
"..33.4..4..216.5\n"
"32.14.5.356.3..6\n") == 0);
free(board601045369);
board601045369 = NULL;
assert( gamma_move(board, 1, 3, 2) == 0 );
assert( gamma_free_fields(board, 1) == 146 );
assert( gamma_move(board, 2, 6, 3) == 0 );
assert( gamma_free_fields(board, 3) == 146 );
assert( gamma_busy_fields(board, 4) == 26 );
assert( gamma_move(board, 5, 11, 13) == 0 );
assert( gamma_move(board, 5, 7, 16) == 1 );
assert( gamma_free_fields(board, 5) == 145 );
assert( gamma_move(board, 6, 7, 0) == 1 );
assert( gamma_move(board, 6, 4, 0) == 0 );


char* board780593084 = gamma_board(board);
assert( board780593084 != NULL );
assert( strcmp(board780593084, 
"..2.25...2..3..6\n"
".55...2....5..43\n"
".5.......35.5..5\n"
"2.1..3.511....61\n"
"2..5..55243..6..\n"
"3.1....4.5..6565\n"
"6.6.231....15462\n"
".12.6.2652..11..\n"
"2..4.26...31616.\n"
"6442.25.443.654.\n"
"5331..4.24.3.6..\n"
"6...6.6.44.2.233\n"
".3.2..663342...4\n"
"..1.64...324.664\n"
".6.2..62.3.51.2.\n"
".5665..4.3632352\n"
"...3..6625..115.\n"
".645.33141.261.4\n"
"..33.4..4..216.5\n"
"32.14.56356.3..6\n") == 0);
free(board780593084);
board780593084 = NULL;
assert( gamma_move(board, 1, 1, 7) == 0 );
assert( gamma_move(board, 2, 5, 19) == 0 );


char* board985908370 = gamma_board(board);
assert( board985908370 != NULL );
assert( strcmp(board985908370, 
"..2.25...2..3..6\n"
".55...2....5..43\n"
".5.......35.5..5\n"
"2.1..3.511....61\n"
"2..5..55243..6..\n"
"3.1....4.5..6565\n"
"6.6.231....15462\n"
".12.6.2652..11..\n"
"2..4.26...31616.\n"
"6442.25.443.654.\n"
"5331..4.24.3.6..\n"
"6...6.6.44.2.233\n"
".3.2..663342...4\n"
"..1.64...324.664\n"
".6.2..62.3.51.2.\n"
".5665..4.3632352\n"
"...3..6625..115.\n"
".645.33141.261.4\n"
"..33.4..4..216.5\n"
"32.14.56356.3..6\n") == 0);
free(board985908370);
board985908370 = NULL;
assert( gamma_move(board, 3, 12, 13) == 0 );
assert( gamma_busy_fields(board, 3) == 30 );
assert( gamma_golden_move(board, 3, 12, 13) == 1 );
assert( gamma_move(board, 4, 14, 11) == 0 );
assert( gamma_move(board, 4, 11, 5) == 0 );
assert( gamma_golden_move(board, 4, 16, 1) == 0 );
assert( gamma_move(board, 6, 11, 2) == 0 );
assert( gamma_move(board, 6, 14, 12) == 1 );
assert( gamma_free_fields(board, 6) == 143 );
assert( gamma_move(board, 1, 3, 5) == 0 );
assert( gamma_move(board, 1, 15, 7) == 0 );
assert( gamma_move(board, 2, 19, 0) == 0 );


char* board185698735 = gamma_board(board);
assert( board185698735 != NULL );
assert( strcmp(board185698735, 
"..2.25...2..3..6\n"
".55...2....5..43\n"
".5.......35.5..5\n"
"2.1..3.511....61\n"
"2..5..55243..6..\n"
"3.1....4.5..6565\n"
"6.6.231....13462\n"
".12.6.2652..116.\n"
"2..4.26...31616.\n"
"6442.25.443.654.\n"
"5331..4.24.3.6..\n"
"6...6.6.44.2.233\n"
".3.2..663342...4\n"
"..1.64...324.664\n"
".6.2..62.3.51.2.\n"
".5665..4.3632352\n"
"...3..6625..115.\n"
".645.33141.261.4\n"
"..33.4..4..216.5\n"
"32.14.56356.3..6\n") == 0);
free(board185698735);
board185698735 = NULL;
assert( gamma_move(board, 3, 3, 2) == 0 );
assert( gamma_move(board, 4, 11, 2) == 0 );
assert( gamma_move(board, 4, 6, 13) == 0 );
assert( gamma_move(board, 5, 11, 15) == 1 );
assert( gamma_move(board, 6, 5, 12) == 1 );
assert( gamma_busy_fields(board, 6) == 39 );
assert( gamma_move(board, 2, 1, 1) == 1 );
assert( gamma_move(board, 3, 8, 12) == 0 );
assert( gamma_busy_fields(board, 3) == 31 );
assert( gamma_move(board, 4, 16, 1) == 0 );
assert( gamma_move(board, 4, 12, 3) == 0 );
assert( gamma_move(board, 5, 12, 18) == 1 );
assert( gamma_move(board, 5, 0, 3) == 1 );
assert( gamma_move(board, 6, 2, 14) == 0 );
assert( gamma_move(board, 1, 7, 13) == 1 );
assert( gamma_free_fields(board, 1) == 137 );
assert( gamma_move(board, 2, 12, 6) == 1 );
assert( gamma_free_fields(board, 2) == 136 );
assert( gamma_move(board, 3, 6, 0) == 0 );
assert( gamma_move(board, 3, 1, 14) == 1 );
assert( gamma_move(board, 4, 18, 8) == 0 );
assert( gamma_busy_fields(board, 4) == 26 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 13, 17) == 1 );
assert( gamma_move(board, 6, 5, 10) == 0 );
assert( gamma_move(board, 6, 12, 2) == 0 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 1, 8, 3) == 0 );
assert( gamma_move(board, 2, 2, 14) == 0 );
assert( gamma_move(board, 3, 2, 6) == 0 );
assert( gamma_move(board, 4, 12, 3) == 0 );
assert( gamma_move(board, 4, 8, 15) == 0 );
assert( gamma_move(board, 5, 16, 4) == 0 );
assert( gamma_move(board, 6, 13, 13) == 0 );
assert( gamma_move(board, 1, 3, 5) == 0 );
assert( gamma_move(board, 2, 7, 0) == 0 );
assert( gamma_move(board, 3, 7, 5) == 0 );
assert( gamma_free_fields(board, 3) == 134 );
assert( gamma_move(board, 4, 4, 8) == 0 );
assert( gamma_busy_fields(board, 4) == 26 );
assert( gamma_move(board, 5, 15, 2) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 14, 4) == 0 );
assert( gamma_move(board, 6, 7, 1) == 1 );
assert( gamma_move(board, 1, 18, 8) == 0 );
assert( gamma_busy_fields(board, 2) == 33 );
assert( gamma_free_fields(board, 2) == 133 );
assert( gamma_move(board, 3, 1, 10) == 0 );
assert( gamma_free_fields(board, 3) == 133 );
assert( gamma_move(board, 4, 2, 15) == 1 );
assert( gamma_free_fields(board, 4) == 132 );
assert( gamma_golden_move(board, 4, 9, 2) == 1 );
assert( gamma_move(board, 5, 10, 2) == 1 );
assert( gamma_move(board, 5, 6, 12) == 0 );
assert( gamma_free_fields(board, 5) == 131 );
assert( gamma_move(board, 6, 7, 14) == 0 );
assert( gamma_move(board, 6, 14, 2) == 1 );
assert( gamma_busy_fields(board, 6) == 41 );
assert( gamma_move(board, 1, 18, 7) == 0 );
assert( gamma_move(board, 1, 4, 0) == 0 );
assert( gamma_move(board, 2, 1, 7) == 0 );
assert( gamma_move(board, 2, 5, 10) == 0 );
assert( gamma_move(board, 3, 10, 6) == 0 );
assert( gamma_move(board, 4, 12, 3) == 0 );
assert( gamma_move(board, 4, 2, 2) == 0 );
assert( gamma_move(board, 5, 10, 7) == 0 );
assert( gamma_move(board, 5, 4, 8) == 0 );
assert( gamma_move(board, 6, 17, 3) == 0 );
assert( gamma_move(board, 6, 3, 16) == 1 );
assert( gamma_move(board, 1, 8, 12) == 0 );
assert( gamma_move(board, 2, 5, 15) == 1 );
assert( gamma_busy_fields(board, 2) == 34 );
assert( gamma_move(board, 3, 14, 4) == 0 );
assert( gamma_move(board, 4, 11, 13) == 0 );
assert( gamma_move(board, 5, 0, 14) == 0 );
assert( gamma_golden_move(board, 5, 2, 11) == 0 );
assert( gamma_move(board, 6, 0, 11) == 0 );
assert( gamma_move(board, 6, 8, 2) == 0 );
assert( gamma_free_fields(board, 1) == 128 );
assert( gamma_move(board, 2, 15, 14) == 0 );
assert( gamma_move(board, 3, 1, 12) == 0 );
assert( gamma_move(board, 3, 12, 10) == 0 );
assert( gamma_move(board, 4, 0, 5) == 1 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 16, 1) == 0 );
assert( gamma_move(board, 5, 7, 19) == 1 );
assert( gamma_move(board, 6, 10, 2) == 0 );
assert( gamma_move(board, 6, 5, 10) == 0 );
assert( gamma_busy_fields(board, 6) == 42 );
assert( gamma_golden_move(board, 6, 9, 2) == 0 );
assert( gamma_move(board, 1, 3, 1) == 0 );
assert( gamma_move(board, 1, 12, 16) == 1 );
assert( gamma_move(board, 2, 16, 6) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 11, 18) == 0 );
assert( gamma_move(board, 3, 5, 7) == 1 );
assert( gamma_move(board, 4, 1, 1) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 11, 17) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 14, 13) == 0 );
assert( gamma_free_fields(board, 6) == 123 );
assert( gamma_move(board, 1, 19, 6) == 0 );
assert( gamma_move(board, 1, 12, 2) == 0 );
assert( gamma_move(board, 2, 19, 8) == 0 );
assert( gamma_move(board, 3, 12, 10) == 0 );
assert( gamma_move(board, 3, 1, 4) == 0 );
assert( gamma_move(board, 5, 15, 18) == 0 );
assert( gamma_move(board, 5, 5, 7) == 0 );
assert( gamma_move(board, 6, 19, 13) == 0 );
assert( gamma_busy_fields(board, 6) == 42 );
assert( gamma_move(board, 2, 2, 0) == 1 );
assert( gamma_move(board, 3, 2, 15) == 0 );
assert( gamma_free_fields(board, 3) == 122 );
assert( gamma_move(board, 4, 18, 4) == 0 );
assert( gamma_move(board, 5, 13, 9) == 0 );
assert( gamma_move(board, 6, 12, 1) == 0 );
assert( gamma_move(board, 1, 19, 1) == 0 );
assert( gamma_move(board, 1, 14, 2) == 0 );
assert( gamma_move(board, 2, 2, 4) == 0 );
assert( gamma_move(board, 3, 14, 3) == 0 );
assert( gamma_move(board, 3, 6, 4) == 1 );
assert( gamma_free_fields(board, 3) == 121 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 19, 3) == 0 );
assert( gamma_move(board, 5, 14, 6) == 0 );
assert( gamma_move(board, 5, 6, 13) == 0 );
assert( gamma_free_fields(board, 5) == 121 );
assert( gamma_move(board, 6, 14, 7) == 1 );
assert( gamma_move(board, 6, 1, 16) == 1 );
assert( gamma_move(board, 1, 1, 6) == 1 );
assert( gamma_move(board, 2, 11, 11) == 0 );
assert( gamma_busy_fields(board, 2) == 35 );
assert( gamma_move(board, 3, 0, 1) == 1 );
assert( gamma_move(board, 4, 19, 8) == 0 );
assert( gamma_move(board, 4, 3, 19) == 1 );
assert( gamma_move(board, 5, 8, 2) == 0 );
assert( gamma_busy_fields(board, 5) == 36 );
assert( gamma_move(board, 6, 0, 12) == 1 );
assert( gamma_move(board, 6, 2, 1) == 0 );
assert( gamma_move(board, 1, 11, 4) == 0 );
assert( gamma_move(board, 1, 2, 6) == 0 );
assert( gamma_move(board, 3, 12, 3) == 0 );
assert( gamma_move(board, 3, 0, 2) == 1 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 1, 7) == 0 );
assert( gamma_move(board, 5, 9, 6) == 0 );
assert( gamma_move(board, 5, 2, 0) == 0 );
assert( gamma_move(board, 6, 3, 3) == 0 );
assert( gamma_move(board, 6, 14, 3) == 0 );
assert( gamma_golden_move(board, 6, 1, 8) == 0 );
assert( gamma_move(board, 1, 14, 10) == 0 );
assert( gamma_move(board, 2, 10, 10) == 0 );
assert( gamma_free_fields(board, 2) == 114 );
assert( gamma_move(board, 3, 0, 13) == 0 );
assert( gamma_move(board, 3, 13, 0) == 1 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 8, 10) == 0 );
assert( gamma_move(board, 5, 8, 4) == 1 );
assert( gamma_move(board, 5, 8, 7) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 1, 10) == 0 );
assert( gamma_move(board, 6, 10, 12) == 1 );
assert( gamma_move(board, 1, 8, 15) == 0 );
assert( gamma_move(board, 2, 9, 15) == 0 );
assert( gamma_move(board, 2, 2, 17) == 1 );
assert( gamma_free_fields(board, 2) == 110 );
assert( gamma_free_fields(board, 4) == 110 );
assert( gamma_move(board, 5, 11, 7) == 0 );
assert( gamma_busy_fields(board, 5) == 37 );
assert( gamma_golden_move(board, 5, 4, 3) == 0 );
assert( gamma_move(board, 6, 1, 0) == 0 );
assert( gamma_move(board, 1, 15, 12) == 1 );
assert( gamma_move(board, 2, 3, 5) == 0 );


char* board280650505 = gamma_board(board);
assert( board280650505 != NULL );
assert( strcmp(board280650505, 
"..2425.5.2..3..6\n"
".55...2....55.43\n"
".52......35555.5\n"
"2616.3.511..1.61\n"
"2.45.2552435.6..\n"
"331....4.5..6565\n"
"6.6.2311...13462\n"
"612.6626526.1161\n"
"2..4.26...31616.\n"
"6442.25.443.654.\n"
"5331..4.24.3.6..\n"
"6...6.6.44.2.233\n"
".3.2.3663342..64\n"
".11.64...3242664\n"
"46.2..62.3.51.2.\n"
".5665.3453632352\n"
"5..3..6625..115.\n"
"3645.33144526164\n"
"3233.4.64..216.5\n"
"32214.56356.33.6\n") == 0);
free(board280650505);
board280650505 = NULL;
assert( gamma_move(board, 3, 8, 7) == 0 );
assert( gamma_move(board, 4, 18, 4) == 0 );
assert( gamma_free_fields(board, 4) == 109 );
assert( gamma_move(board, 5, 18, 7) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 9, 4) == 0 );
assert( gamma_move(board, 6, 8, 8) == 0 );
assert( gamma_golden_move(board, 6, 18, 12) == 0 );
assert( gamma_move(board, 1, 17, 3) == 0 );
assert( gamma_free_fields(board, 1) == 109 );
assert( gamma_move(board, 2, 13, 3) == 0 );
assert( gamma_move(board, 3, 7, 11) == 1 );
assert( gamma_move(board, 4, 15, 15) == 1 );
assert( gamma_move(board, 5, 5, 15) == 0 );
assert( gamma_move(board, 5, 9, 12) == 0 );
assert( gamma_move(board, 6, 10, 11) == 0 );
assert( gamma_move(board, 6, 6, 9) == 0 );
assert( gamma_move(board, 1, 17, 8) == 0 );
assert( gamma_move(board, 2, 6, 7) == 0 );
assert( gamma_move(board, 3, 17, 8) == 0 );
assert( gamma_move(board, 4, 4, 1) == 1 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 12, 7) == 1 );
assert( gamma_move(board, 6, 6, 10) == 0 );
assert( gamma_move(board, 2, 18, 0) == 0 );
assert( gamma_move(board, 3, 8, 1) == 0 );
assert( gamma_move(board, 4, 7, 16) == 0 );
assert( gamma_move(board, 5, 6, 6) == 1 );
assert( gamma_move(board, 5, 4, 6) == 0 );
assert( gamma_move(board, 6, 13, 5) == 1 );
assert( gamma_move(board, 6, 6, 8) == 0 );
assert( gamma_busy_fields(board, 6) == 47 );
assert( gamma_move(board, 1, 18, 5) == 0 );
assert( gamma_move(board, 2, 17, 5) == 0 );
assert( gamma_move(board, 3, 17, 7) == 0 );
assert( gamma_move(board, 3, 6, 19) == 1 );
assert( gamma_golden_move(board, 3, 6, 6) == 0 );
assert( gamma_move(board, 4, 1, 11) == 1 );
assert( gamma_free_fields(board, 4) == 101 );
assert( gamma_golden_move(board, 4, 11, 6) == 0 );


char* board414593443 = gamma_board(board);
assert( board414593443 != NULL );
assert( strcmp(board414593443, 
"..242535.2..3..6\n"
".55...2....55.43\n"
".52......35555.5\n"
"2616.3.511..1.61\n"
"2.45.2552435.6.4\n"
"331....4.5..6565\n"
"6.6.2311...13462\n"
"612.6626526.1161\n"
"24.4.263..31616.\n"
"6442.25.443.654.\n"
"5331..4.24.3.6..\n"
"6...6.6.44.2.233\n"
".3.2.36633425.64\n"
".11.645..3242664\n"
"46.2..62.3.5162.\n"
".5665.3453632352\n"
"5..3..6625..115.\n"
"3645.33144526164\n"
"323344.64..216.5\n"
"32214.56356.33.6\n") == 0);
free(board414593443);
board414593443 = NULL;
assert( gamma_move(board, 5, 13, 8) == 0 );
assert( gamma_move(board, 5, 10, 11) == 0 );
assert( gamma_free_fields(board, 5) == 101 );


char* board628272864 = gamma_board(board);
assert( board628272864 != NULL );
assert( strcmp(board628272864, 
"..242535.2..3..6\n"
".55...2....55.43\n"
".52......35555.5\n"
"2616.3.511..1.61\n"
"2.45.2552435.6.4\n"
"331....4.5..6565\n"
"6.6.2311...13462\n"
"612.6626526.1161\n"
"24.4.263..31616.\n"
"6442.25.443.654.\n"
"5331..4.24.3.6..\n"
"6...6.6.44.2.233\n"
".3.2.36633425.64\n"
".11.645..3242664\n"
"46.2..62.3.5162.\n"
".5665.3453632352\n"
"5..3..6625..115.\n"
"3645.33144526164\n"
"323344.64..216.5\n"
"32214.56356.33.6\n") == 0);
free(board628272864);
board628272864 = NULL;
assert( gamma_move(board, 6, 11, 15) == 0 );
assert( gamma_move(board, 1, 19, 11) == 0 );
assert( gamma_move(board, 2, 18, 9) == 0 );
assert( gamma_move(board, 2, 7, 4) == 0 );
assert( gamma_move(board, 3, 10, 3) == 1 );
assert( gamma_move(board, 3, 6, 8) == 0 );
assert( gamma_busy_fields(board, 3) == 40 );
assert( gamma_move(board, 4, 11, 1) == 0 );
assert( gamma_busy_fields(board, 4) == 33 );
assert( gamma_free_fields(board, 4) == 100 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 15, 14) == 0 );
assert( gamma_move(board, 6, 5, 10) == 0 );
assert( gamma_move(board, 1, 14, 4) == 0 );
assert( gamma_move(board, 1, 7, 11) == 0 );
assert( gamma_free_fields(board, 1) == 100 );


char* board504986630 = gamma_board(board);
assert( board504986630 != NULL );
assert( strcmp(board504986630, 
"..242535.2..3..6\n"
".55...2....55.43\n"
".52......35555.5\n"
"2616.3.511..1.61\n"
"2.45.2552435.6.4\n"
"331....4.5..6565\n"
"6.6.2311...13462\n"
"612.6626526.1161\n"
"24.4.263..31616.\n"
"6442.25.443.654.\n"
"5331..4.24.3.6..\n"
"6...6.6.44.2.233\n"
".3.2.36633425.64\n"
".11.645..3242664\n"
"46.2..62.3.5162.\n"
".5665.3453632352\n"
"5..3..66253.115.\n"
"3645.33144526164\n"
"323344.64..216.5\n"
"32214.56356.33.6\n") == 0);
free(board504986630);
board504986630 = NULL;
assert( gamma_move(board, 2, 4, 5) == 1 );
assert( gamma_free_fields(board, 2) == 99 );
assert( gamma_move(board, 3, 10, 15) == 0 );
assert( gamma_move(board, 3, 4, 14) == 1 );
assert( gamma_free_fields(board, 3) == 98 );


char* board921274256 = gamma_board(board);
assert( board921274256 != NULL );
assert( strcmp(board921274256, 
"..242535.2..3..6\n"
".55...2....55.43\n"
".52......35555.5\n"
"2616.3.511..1.61\n"
"2.45.2552435.6.4\n"
"331.3..4.5..6565\n"
"6.6.2311...13462\n"
"612.6626526.1161\n"
"24.4.263..31616.\n"
"6442.25.443.654.\n"
"5331..4.24.3.6..\n"
"6...6.6.44.2.233\n"
".3.2.36633425.64\n"
".11.645..3242664\n"
"46.22.62.3.5162.\n"
".5665.3453632352\n"
"5..3..66253.115.\n"
"3645.33144526164\n"
"323344.64..216.5\n"
"32214.56356.33.6\n") == 0);
free(board921274256);
board921274256 = NULL;
assert( gamma_move(board, 4, 15, 12) == 0 );
assert( gamma_move(board, 4, 8, 17) == 1 );
assert( gamma_busy_fields(board, 4) == 34 );
assert( gamma_move(board, 5, 18, 10) == 0 );
assert( gamma_free_fields(board, 5) == 97 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 1, 6) == 0 );
assert( gamma_move(board, 1, 18, 0) == 0 );
assert( gamma_move(board, 1, 13, 6) == 0 );
assert( gamma_busy_fields(board, 1) == 25 );
assert( gamma_move(board, 2, 8, 5) == 1 );
assert( gamma_move(board, 2, 5, 4) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 15, 4) == 0 );
assert( gamma_move(board, 4, 3, 1) == 0 );
assert( gamma_move(board, 4, 9, 10) == 0 );
assert( gamma_move(board, 5, 13, 7) == 1 );
assert( gamma_move(board, 6, 1, 6) == 0 );
assert( gamma_move(board, 6, 0, 18) == 1 );
assert( gamma_free_fields(board, 6) == 93 );
assert( gamma_move(board, 1, 8, 1) == 0 );
assert( gamma_free_fields(board, 1) == 93 );
assert( gamma_move(board, 2, 6, 8) == 0 );
assert( gamma_move(board, 2, 5, 16) == 0 );
assert( gamma_move(board, 3, 2, 4) == 0 );
assert( gamma_move(board, 3, 6, 1) == 1 );
assert( gamma_move(board, 4, 18, 8) == 0 );
assert( gamma_move(board, 4, 11, 19) == 1 );
assert( gamma_move(board, 5, 8, 5) == 0 );
assert( gamma_move(board, 5, 3, 15) == 0 );
assert( gamma_move(board, 6, 13, 1) == 0 );
assert( gamma_move(board, 1, 9, 5) == 0 );
assert( gamma_busy_fields(board, 1) == 25 );
assert( gamma_move(board, 2, 6, 7) == 0 );
assert( gamma_move(board, 2, 3, 14) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 9, 10) == 0 );
assert( gamma_move(board, 4, 9, 10) == 0 );
assert( gamma_move(board, 4, 4, 13) == 0 );
assert( gamma_busy_fields(board, 4) == 35 );
assert( gamma_busy_fields(board, 5) == 40 );
assert( gamma_move(board, 6, 11, 4) == 0 );
assert( gamma_move(board, 1, 2, 4) == 0 );
assert( gamma_move(board, 1, 2, 7) == 1 );
assert( gamma_move(board, 2, 3, 15) == 0 );
assert( gamma_move(board, 3, 14, 6) == 0 );
assert( gamma_move(board, 3, 12, 12) == 0 );
assert( gamma_move(board, 4, 14, 5) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 15, 4) == 0 );
assert( gamma_move(board, 6, 6, 0) == 0 );
assert( gamma_free_fields(board, 6) == 89 );
assert( gamma_move(board, 1, 14, 6) == 0 );
assert( gamma_move(board, 1, 13, 0) == 0 );
assert( gamma_busy_fields(board, 1) == 26 );
assert( gamma_free_fields(board, 1) == 89 );
assert( gamma_move(board, 2, 8, 4) == 0 );
assert( gamma_busy_fields(board, 3) == 42 );
assert( gamma_busy_fields(board, 4) == 35 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 8, 4) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 8, 2) == 0 );
assert( gamma_move(board, 6, 11, 19) == 0 );
assert( gamma_free_fields(board, 6) == 89 );
assert( gamma_move(board, 1, 14, 11) == 0 );
assert( gamma_move(board, 2, 14, 3) == 0 );
assert( gamma_move(board, 2, 0, 12) == 0 );
assert( gamma_move(board, 3, 9, 12) == 0 );
assert( gamma_move(board, 3, 12, 13) == 0 );
assert( gamma_move(board, 4, 9, 5) == 0 );
assert( gamma_move(board, 4, 4, 4) == 0 );
assert( gamma_move(board, 6, 15, 1) == 0 );
assert( gamma_move(board, 6, 15, 4) == 0 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 1, 3, 2) == 0 );
assert( gamma_move(board, 2, 9, 15) == 0 );
assert( gamma_move(board, 2, 5, 0) == 1 );
assert( gamma_busy_fields(board, 2) == 41 );
assert( gamma_move(board, 3, 14, 8) == 0 );
assert( gamma_move(board, 4, 16, 4) == 0 );
assert( gamma_move(board, 5, 17, 3) == 0 );
assert( gamma_move(board, 5, 14, 5) == 0 );
assert( gamma_busy_fields(board, 5) == 40 );
assert( gamma_move(board, 1, 13, 8) == 0 );
assert( gamma_move(board, 2, 5, 10) == 0 );
assert( gamma_move(board, 3, 14, 11) == 0 );
assert( gamma_move(board, 4, 12, 11) == 0 );
assert( gamma_move(board, 4, 10, 7) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 7, 4) == 0 );
assert( gamma_busy_fields(board, 5) == 40 );
assert( gamma_free_fields(board, 5) == 88 );
assert( gamma_move(board, 6, 5, 19) == 0 );
assert( gamma_move(board, 6, 0, 17) == 1 );
assert( gamma_move(board, 2, 9, 14) == 0 );
assert( gamma_move(board, 3, 13, 9) == 0 );
assert( gamma_move(board, 4, 11, 16) == 1 );
assert( gamma_move(board, 5, 7, 0) == 0 );
assert( gamma_move(board, 5, 3, 14) == 0 );
assert( gamma_move(board, 6, 16, 4) == 0 );
assert( gamma_free_fields(board, 6) == 86 );
assert( gamma_free_fields(board, 1) == 86 );
assert( gamma_move(board, 2, 0, 11) == 0 );
assert( gamma_move(board, 2, 15, 12) == 0 );
assert( gamma_move(board, 3, 5, 2) == 0 );
assert( gamma_move(board, 3, 7, 3) == 0 );
assert( gamma_move(board, 4, 3, 1) == 0 );
assert( gamma_move(board, 5, 10, 11) == 0 );
assert( gamma_move(board, 6, 13, 4) == 0 );
assert( gamma_move(board, 1, 15, 14) == 0 );
assert( gamma_move(board, 1, 8, 17) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 3, 8, 9) == 0 );
assert( gamma_move(board, 4, 12, 6) == 0 );
assert( gamma_move(board, 4, 2, 12) == 0 );
assert( gamma_golden_move(board, 4, 12, 14) == 0 );
assert( gamma_move(board, 5, 3, 4) == 0 );
assert( gamma_move(board, 6, 2, 8) == 1 );
assert( gamma_move(board, 6, 9, 15) == 0 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 1, 12, 3) == 0 );
assert( gamma_move(board, 1, 1, 9) == 0 );
assert( gamma_move(board, 2, 17, 5) == 0 );
assert( gamma_move(board, 2, 3, 4) == 0 );
assert( gamma_move(board, 3, 6, 9) == 0 );
assert( gamma_move(board, 3, 4, 17) == 1 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 10, 7) == 0 );
assert( gamma_move(board, 5, 15, 10) == 1 );
assert( gamma_move(board, 5, 0, 6) == 1 );
assert( gamma_golden_move(board, 5, 10, 12) == 1 );
assert( gamma_move(board, 6, 18, 5) == 0 );
assert( gamma_move(board, 1, 7, 4) == 0 );
assert( gamma_move(board, 1, 6, 14) == 1 );
assert( gamma_move(board, 2, 9, 18) == 1 );
assert( gamma_move(board, 3, 13, 12) == 0 );


char* board589048026 = gamma_board(board);
assert( board589048026 != NULL );
assert( strcmp(board589048026, 
"..242535.2.43..6\n"
"655...2..2.55.43\n"
"652.3...435555.5\n"
"2616.3.511.41.61\n"
"2.45.2552435.6.4\n"
"33123.14.5..6565\n"
"6.6.2311...13462\n"
"612.6626525.1161\n"
"24.4.263..31616.\n"
"6442.25.443.6545\n"
"5331..4.24.3.6..\n"
"6.6.6.6.44.2.233\n"
".312.36633425564\n"
"511.645..3242664\n"
"46.22.6223.5162.\n"
".566523453632352\n"
"5..3..66253.115.\n"
"3645.33144526164\n"
"323344364..216.5\n"
"32214256356.33.6\n") == 0);
free(board589048026);
board589048026 = NULL;
assert( gamma_move(board, 4, 8, 12) == 0 );
assert( gamma_move(board, 5, 12, 3) == 0 );
assert( gamma_move(board, 5, 10, 17) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 13, 1) == 0 );
assert( gamma_move(board, 1, 19, 14) == 0 );
assert( gamma_move(board, 1, 5, 15) == 0 );
assert( gamma_move(board, 2, 1, 9) == 0 );
assert( gamma_move(board, 2, 14, 0) == 1 );
assert( gamma_move(board, 3, 1, 2) == 0 );
assert( gamma_move(board, 3, 0, 6) == 0 );
assert( gamma_free_fields(board, 3) == 79 );
assert( gamma_move(board, 4, 19, 14) == 0 );
assert( gamma_move(board, 5, 10, 7) == 0 );
assert( gamma_move(board, 5, 6, 0) == 0 );
assert( gamma_move(board, 6, 12, 11) == 0 );
assert( gamma_move(board, 6, 3, 8) == 1 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 2, 0, 9) == 0 );
assert( gamma_move(board, 2, 8, 4) == 0 );
assert( gamma_busy_fields(board, 2) == 43 );
assert( gamma_move(board, 3, 2, 5) == 1 );
assert( gamma_move(board, 3, 0, 2) == 0 );


char* board675685448 = gamma_board(board);
assert( board675685448 != NULL );
assert( strcmp(board675685448, 
"..242535.2.43..6\n"
"655...2..2.55.43\n"
"652.3...435555.5\n"
"2616.3.511.41.61\n"
"2.45.2552435.6.4\n"
"33123.14.5..6565\n"
"6.6.2311...13462\n"
"612.6626525.1161\n"
"24.4.263..31616.\n"
"6442.25.443.6545\n"
"5331..4.24.3.6..\n"
"6.666.6.44.2.233\n"
".312.36633425564\n"
"511.645..3242664\n"
"46322.6223.5162.\n"
".566523453632352\n"
"5..3..66253.115.\n"
"3645.33144526164\n"
"323344364..216.5\n"
"32214256356.3326\n") == 0);
free(board675685448);
board675685448 = NULL;
assert( gamma_move(board, 4, 8, 12) == 0 );


char* board669748514 = gamma_board(board);
assert( board669748514 != NULL );
assert( strcmp(board669748514, 
"..242535.2.43..6\n"
"655...2..2.55.43\n"
"652.3...435555.5\n"
"2616.3.511.41.61\n"
"2.45.2552435.6.4\n"
"33123.14.5..6565\n"
"6.6.2311...13462\n"
"612.6626525.1161\n"
"24.4.263..31616.\n"
"6442.25.443.6545\n"
"5331..4.24.3.6..\n"
"6.666.6.44.2.233\n"
".312.36633425564\n"
"511.645..3242664\n"
"46322.6223.5162.\n"
".566523453632352\n"
"5..3..66253.115.\n"
"3645.33144526164\n"
"323344364..216.5\n"
"32214256356.3326\n") == 0);
free(board669748514);
board669748514 = NULL;
assert( gamma_move(board, 5, 6, 6) == 0 );
assert( gamma_move(board, 5, 5, 19) == 0 );
assert( gamma_move(board, 6, 4, 0) == 0 );
assert( gamma_move(board, 1, 9, 16) == 0 );
assert( gamma_move(board, 2, 9, 12) == 0 );
assert( gamma_move(board, 2, 8, 9) == 0 );
assert( gamma_move(board, 3, 3, 5) == 0 );
assert( gamma_move(board, 5, 3, 17) == 1 );
assert( gamma_move(board, 5, 12, 19) == 0 );
assert( gamma_move(board, 6, 10, 11) == 0 );
assert( gamma_move(board, 1, 3, 1) == 0 );
assert( gamma_move(board, 3, 18, 7) == 0 );
assert( gamma_golden_move(board, 3, 14, 7) == 0 );
assert( gamma_move(board, 4, 1, 7) == 0 );
assert( gamma_move(board, 4, 10, 15) == 0 );
assert( gamma_move(board, 5, 8, 1) == 0 );
assert( gamma_move(board, 5, 6, 7) == 0 );
assert( gamma_move(board, 6, 10, 4) == 0 );
assert( gamma_move(board, 6, 0, 3) == 0 );
assert( gamma_move(board, 1, 13, 1) == 0 );
assert( gamma_busy_fields(board, 1) == 27 );
assert( gamma_move(board, 2, 12, 11) == 0 );
assert( gamma_move(board, 3, 13, 9) == 0 );
assert( gamma_move(board, 3, 12, 10) == 0 );


char* board242536347 = gamma_board(board);
assert( board242536347 != NULL );
assert( strcmp(board242536347, 
"..242535.2.43..6\n"
"655...2..2.55.43\n"
"65253...435555.5\n"
"2616.3.511.41.61\n"
"2.45.2552435.6.4\n"
"33123.14.5..6565\n"
"6.6.2311...13462\n"
"612.6626525.1161\n"
"24.4.263..31616.\n"
"6442.25.443.6545\n"
"5331..4.24.3.6..\n"
"6.666.6.44.2.233\n"
".312.36633425564\n"
"511.645..3242664\n"
"46322.6223.5162.\n"
".566523453632352\n"
"5..3..66253.115.\n"
"3645.33144526164\n"
"323344364..216.5\n"
"32214256356.3326\n") == 0);
free(board242536347);
board242536347 = NULL;
assert( gamma_move(board, 4, 9, 19) == 0 );
assert( gamma_move(board, 5, 10, 17) == 0 );
assert( gamma_busy_fields(board, 5) == 44 );
assert( gamma_move(board, 6, 10, 4) == 0 );
assert( gamma_move(board, 6, 4, 15) == 1 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 1, 3, 5) == 0 );
assert( gamma_move(board, 2, 12, 19) == 0 );
assert( gamma_move(board, 2, 7, 18) == 1 );
assert( gamma_move(board, 3, 17, 6) == 0 );
assert( gamma_move(board, 4, 0, 11) == 0 );
assert( gamma_busy_fields(board, 4) == 36 );
assert( gamma_move(board, 5, 19, 0) == 0 );
assert( gamma_free_fields(board, 5) == 74 );


char* board137992155 = gamma_board(board);
assert( board137992155 != NULL );
assert( strcmp(board137992155, 
"..242535.2.43..6\n"
"655...22.2.55.43\n"
"65253...435555.5\n"
"2616.3.511.41.61\n"
"2.4562552435.6.4\n"
"33123.14.5..6565\n"
"6.6.2311...13462\n"
"612.6626525.1161\n"
"24.4.263..31616.\n"
"6442.25.443.6545\n"
"5331..4.24.3.6..\n"
"6.666.6.44.2.233\n"
".312.36633425564\n"
"511.645..3242664\n"
"46322.6223.5162.\n"
".566523453632352\n"
"5..3..66253.115.\n"
"3645.33144526164\n"
"323344364..216.5\n"
"32214256356.3326\n") == 0);
free(board137992155);
board137992155 = NULL;
assert( gamma_move(board, 1, 19, 0) == 0 );
assert( gamma_move(board, 2, 6, 8) == 0 );
assert( gamma_move(board, 3, 16, 13) == 0 );


char* board322011872 = gamma_board(board);
assert( board322011872 != NULL );
assert( strcmp(board322011872, 
"..242535.2.43..6\n"
"655...22.2.55.43\n"
"65253...435555.5\n"
"2616.3.511.41.61\n"
"2.4562552435.6.4\n"
"33123.14.5..6565\n"
"6.6.2311...13462\n"
"612.6626525.1161\n"
"24.4.263..31616.\n"
"6442.25.443.6545\n"
"5331..4.24.3.6..\n"
"6.666.6.44.2.233\n"
".312.36633425564\n"
"511.645..3242664\n"
"46322.6223.5162.\n"
".566523453632352\n"
"5..3..66253.115.\n"
"3645.33144526164\n"
"323344364..216.5\n"
"32214256356.3326\n") == 0);
free(board322011872);
board322011872 = NULL;
assert( gamma_move(board, 4, 13, 8) == 0 );
assert( gamma_move(board, 5, 16, 10) == 0 );
assert( gamma_move(board, 5, 14, 2) == 0 );
assert( gamma_move(board, 6, 13, 11) == 0 );
assert( gamma_move(board, 1, 10, 3) == 0 );
assert( gamma_move(board, 1, 7, 5) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 11, 8) == 0 );
assert( gamma_golden_move(board, 2, 3, 12) == 0 );
assert( gamma_move(board, 3, 14, 11) == 0 );
assert( gamma_move(board, 4, 18, 4) == 0 );
assert( gamma_move(board, 5, 2, 19) == 0 );


char* board509287761 = gamma_board(board);
assert( board509287761 != NULL );
assert( strcmp(board509287761, 
"..242535.2.43..6\n"
"655...22.2.55.43\n"
"65253...435555.5\n"
"2616.3.511.41.61\n"
"2.4562552435.6.4\n"
"33123.14.5..6565\n"
"6.6.2311...13462\n"
"612.6626525.1161\n"
"24.4.263..31616.\n"
"6442.25.443.6545\n"
"5331..4.24.3.6..\n"
"6.666.6.44.2.233\n"
".312.36633425564\n"
"511.645..3242664\n"
"46322.6223.5162.\n"
".566523453632352\n"
"5..3..66253.115.\n"
"3645.33144526164\n"
"323344364..216.5\n"
"32214256356.3326\n") == 0);
free(board509287761);
board509287761 = NULL;
assert( gamma_move(board, 6, 12, 14) == 0 );
assert( gamma_move(board, 1, 3, 2) == 0 );
assert( gamma_move(board, 2, 2, 13) == 0 );
assert( gamma_move(board, 2, 10, 18) == 1 );
assert( gamma_move(board, 3, 4, 13) == 0 );
assert( gamma_move(board, 4, 11, 4) == 0 );
assert( gamma_move(board, 5, 6, 9) == 0 );
assert( gamma_move(board, 6, 7, 4) == 0 );
assert( gamma_busy_fields(board, 6) == 51 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 1, 12, 6) == 0 );
assert( gamma_move(board, 2, 5, 3) == 1 );
assert( gamma_move(board, 2, 10, 8) == 1 );
assert( gamma_move(board, 3, 13, 1) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 1, 14) == 0 );
assert( gamma_move(board, 4, 4, 8) == 0 );
assert( gamma_busy_fields(board, 4) == 36 );
assert( gamma_free_fields(board, 4) == 71 );
assert( gamma_move(board, 5, 17, 5) == 0 );
assert( gamma_move(board, 5, 3, 12) == 1 );
assert( gamma_move(board, 1, 8, 5) == 0 );
assert( gamma_move(board, 1, 6, 13) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_golden_move(board, 1, 16, 1) == 0 );
assert( gamma_move(board, 2, 10, 7) == 0 );
assert( gamma_move(board, 2, 3, 18) == 1 );
assert( gamma_move(board, 3, 5, 9) == 1 );
assert( gamma_move(board, 4, 14, 11) == 0 );
assert( gamma_move(board, 4, 5, 6) == 0 );
assert( gamma_move(board, 5, 17, 7) == 0 );
assert( gamma_move(board, 5, 1, 9) == 0 );
assert( gamma_move(board, 6, 17, 6) == 0 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 1, 11, 8) == 0 );
assert( gamma_move(board, 1, 11, 17) == 0 );
assert( gamma_move(board, 3, 17, 7) == 0 );
assert( gamma_move(board, 4, 6, 6) == 0 );
assert( gamma_move(board, 5, 8, 17) == 0 );
assert( gamma_move(board, 6, 10, 15) == 0 );
assert( gamma_move(board, 6, 8, 8) == 0 );
assert( gamma_move(board, 1, 16, 4) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 0, 16) == 0 );
assert( gamma_move(board, 2, 8, 0) == 0 );
assert( gamma_move(board, 3, 3, 3) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 19, 0) == 0 );
assert( gamma_move(board, 4, 0, 14) == 0 );
assert( gamma_busy_fields(board, 4) == 36 );
assert( gamma_move(board, 5, 1, 0) == 0 );
assert( gamma_move(board, 5, 9, 16) == 0 );
assert( gamma_move(board, 6, 3, 2) == 0 );
assert( gamma_move(board, 1, 3, 2) == 0 );
assert( gamma_move(board, 2, 13, 18) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 11, 13) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 12, 11) == 0 );
assert( gamma_move(board, 4, 14, 19) == 1 );
assert( gamma_move(board, 5, 1, 10) == 0 );
assert( gamma_move(board, 6, 3, 18) == 0 );
assert( gamma_free_fields(board, 6) == 66 );
assert( gamma_move(board, 1, 10, 7) == 0 );
assert( gamma_move(board, 2, 16, 10) == 0 );
assert( gamma_move(board, 2, 6, 15) == 0 );
assert( gamma_free_fields(board, 2) == 66 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 13, 0) == 0 );
assert( gamma_move(board, 4, 13, 9) == 0 );
assert( gamma_move(board, 5, 18, 8) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );


char* board474250506 = gamma_board(board);
assert( board474250506 != NULL );
assert( strcmp(board474250506, 
"..242535.2.43.46\n"
"6552..22.2255243\n"
"65253...435555.5\n"
"2616.3.511.41.61\n"
"2.4562552435.6.4\n"
"33123.14.5..6565\n"
"6.6.2311...13462\n"
"61256626525.1161\n"
"24.4.263..31616.\n"
"6442.25.443.6545\n"
"5331.34.24.3.6..\n"
"6.666.6.4422.233\n"
".312.36633425564\n"
"511.645..3242664\n"
"46322.6223.5162.\n"
".566523453632352\n"
"5..3.266253.115.\n"
"3645.33144526164\n"
"323344364..216.5\n"
"32214256356.3326\n") == 0);
free(board474250506);
board474250506 = NULL;
assert( gamma_golden_move(board, 1, 19, 11) == 0 );
assert( gamma_move(board, 2, 7, 13) == 0 );
assert( gamma_move(board, 4, 1, 3) == 1 );
assert( gamma_move(board, 4, 2, 5) == 0 );
assert( gamma_move(board, 5, 15, 16) == 0 );
assert( gamma_move(board, 6, 3, 4) == 0 );
assert( gamma_move(board, 6, 11, 2) == 0 );
assert( gamma_free_fields(board, 2) == 65 );
assert( gamma_move(board, 3, 8, 11) == 1 );
assert( gamma_busy_fields(board, 3) == 46 );
assert( gamma_move(board, 4, 13, 10) == 0 );
assert( gamma_move(board, 4, 13, 10) == 0 );
assert( gamma_golden_move(board, 4, 17, 13) == 0 );
assert( gamma_move(board, 5, 8, 7) == 0 );
assert( gamma_move(board, 5, 0, 9) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 5, 15) == 0 );
assert( gamma_move(board, 1, 6, 3) == 0 );
assert( gamma_free_fields(board, 1) == 64 );
assert( gamma_move(board, 2, 1, 15) == 1 );
assert( gamma_move(board, 2, 1, 14) == 0 );
assert( gamma_move(board, 4, 6, 7) == 0 );
assert( gamma_move(board, 5, 9, 14) == 0 );
assert( gamma_move(board, 5, 12, 1) == 0 );
assert( gamma_move(board, 6, 8, 12) == 0 );
assert( gamma_move(board, 6, 15, 5) == 1 );
assert( gamma_move(board, 1, 14, 8) == 0 );
assert( gamma_move(board, 2, 13, 2) == 0 );
assert( gamma_move(board, 2, 0, 2) == 0 );
assert( gamma_busy_fields(board, 3) == 46 );
assert( gamma_move(board, 4, 19, 8) == 0 );
assert( gamma_move(board, 5, 19, 13) == 0 );
assert( gamma_move(board, 6, 13, 19) == 1 );
assert( gamma_move(board, 6, 11, 14) == 1 );
assert( gamma_move(board, 1, 15, 14) == 0 );
assert( gamma_move(board, 1, 7, 3) == 0 );
assert( gamma_move(board, 2, 7, 19) == 0 );
assert( gamma_move(board, 2, 3, 7) == 0 );
assert( gamma_move(board, 3, 19, 1) == 0 );
assert( gamma_move(board, 4, 19, 1) == 0 );
assert( gamma_golden_move(board, 4, 9, 3) == 0 );
assert( gamma_move(board, 5, 7, 3) == 0 );
assert( gamma_move(board, 6, 7, 0) == 0 );
assert( gamma_move(board, 6, 11, 3) == 1 );
assert( gamma_move(board, 1, 16, 6) == 0 );
assert( gamma_move(board, 2, 11, 3) == 0 );
assert( gamma_move(board, 2, 5, 9) == 0 );
assert( gamma_free_fields(board, 2) == 59 );
assert( gamma_move(board, 3, 14, 8) == 0 );
assert( gamma_move(board, 4, 9, 4) == 0 );
assert( gamma_move(board, 4, 13, 9) == 0 );
assert( gamma_move(board, 5, 11, 4) == 0 );
assert( gamma_move(board, 6, 7, 17) == 1 );
assert( gamma_move(board, 6, 7, 9) == 1 );
assert( gamma_move(board, 1, 0, 11) == 0 );
assert( gamma_free_fields(board, 1) == 57 );
assert( gamma_move(board, 2, 16, 6) == 0 );
assert( gamma_move(board, 2, 14, 0) == 0 );
assert( gamma_golden_move(board, 2, 14, 0) == 0 );
assert( gamma_move(board, 3, 3, 15) == 0 );
assert( gamma_move(board, 4, 15, 0) == 0 );
assert( gamma_move(board, 5, 0, 8) == 0 );
assert( gamma_move(board, 6, 3, 4) == 0 );
assert( gamma_move(board, 1, 1, 4) == 0 );
assert( gamma_move(board, 3, 2, 6) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 11, 11) == 0 );
assert( gamma_move(board, 5, 6, 3) == 0 );
assert( gamma_move(board, 5, 8, 19) == 1 );
assert( gamma_move(board, 6, 3, 4) == 0 );
assert( gamma_move(board, 6, 8, 6) == 1 );
assert( gamma_move(board, 1, 0, 10) == 0 );


char* board953594736 = gamma_board(board);
assert( board953594736 != NULL );
assert( strcmp(board953594736, 
"..24253552.43646\n"
"6552..22.2255243\n"
"65253..6435555.5\n"
"2616.3.511.41.61\n"
"224562552435.6.4\n"
"33123.14.5.66565\n"
"6.6.2311...13462\n"
"61256626525.1161\n"
"24.4.2633.31616.\n"
"6442.25.443.6545\n"
"5331.34624.3.6..\n"
"6.666.6.4422.233\n"
".312.36633425564\n"
"511.645.63242664\n"
"46322.6223.51626\n"
".566523453632352\n"
"54.3.2662536115.\n"
"3645.33144526164\n"
"323344364..216.5\n"
"32214256356.3326\n") == 0);
free(board953594736);
board953594736 = NULL;
assert( gamma_move(board, 2, 18, 5) == 0 );
assert( gamma_move(board, 2, 6, 17) == 1 );


char* board158518447 = gamma_board(board);
assert( board158518447 != NULL );
assert( strcmp(board158518447, 
"..24253552.43646\n"
"6552..22.2255243\n"
"65253.26435555.5\n"
"2616.3.511.41.61\n"
"224562552435.6.4\n"
"33123.14.5.66565\n"
"6.6.2311...13462\n"
"61256626525.1161\n"
"24.4.2633.31616.\n"
"6442.25.443.6545\n"
"5331.34624.3.6..\n"
"6.666.6.4422.233\n"
".312.36633425564\n"
"511.645.63242664\n"
"46322.6223.51626\n"
".566523453632352\n"
"54.3.2662536115.\n"
"3645.33144526164\n"
"323344364..216.5\n"
"32214256356.3326\n") == 0);
free(board158518447);
board158518447 = NULL;
assert( gamma_move(board, 4, 6, 3) == 0 );
assert( gamma_move(board, 4, 2, 6) == 0 );
assert( gamma_move(board, 5, 15, 7) == 0 );
assert( gamma_free_fields(board, 5) == 54 );
assert( gamma_move(board, 6, 19, 10) == 0 );
assert( gamma_move(board, 1, 10, 4) == 0 );
assert( gamma_move(board, 1, 2, 0) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_golden_move(board, 1, 9, 13) == 0 );
assert( gamma_move(board, 2, 17, 5) == 0 );
assert( gamma_move(board, 2, 13, 8) == 0 );
assert( gamma_move(board, 3, 2, 16) == 0 );
assert( gamma_move(board, 4, 3, 12) == 0 );
assert( gamma_move(board, 4, 1, 5) == 0 );
assert( gamma_busy_fields(board, 4) == 38 );
assert( gamma_golden_move(board, 4, 5, 11) == 0 );
assert( gamma_move(board, 5, 7, 1) == 0 );
assert( gamma_free_fields(board, 5) == 54 );
assert( gamma_move(board, 6, 5, 1) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 0, 11) == 0 );
assert( gamma_move(board, 2, 14, 17) == 1 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 10, 11) == 0 );
assert( gamma_move(board, 5, 4, 0) == 0 );
assert( gamma_move(board, 6, 4, 11) == 1 );
assert( gamma_move(board, 1, 7, 4) == 0 );
assert( gamma_move(board, 1, 10, 5) == 1 );
assert( gamma_free_fields(board, 1) == 51 );
assert( gamma_move(board, 2, 8, 5) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 3, 11) == 0 );
assert( gamma_move(board, 3, 4, 8) == 0 );
assert( gamma_move(board, 4, 3, 15) == 0 );
assert( gamma_free_fields(board, 4) == 51 );
assert( gamma_move(board, 5, 19, 1) == 0 );
assert( gamma_move(board, 1, 13, 9) == 0 );
assert( gamma_move(board, 2, 7, 3) == 0 );
assert( gamma_free_fields(board, 4) == 51 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 10, 11) == 0 );
assert( gamma_move(board, 6, 3, 15) == 0 );
assert( gamma_move(board, 6, 12, 9) == 1 );
assert( gamma_busy_fields(board, 6) == 60 );
assert( gamma_move(board, 1, 8, 5) == 0 );
assert( gamma_move(board, 2, 8, 1) == 0 );
assert( gamma_move(board, 3, 19, 1) == 0 );
assert( gamma_move(board, 3, 3, 3) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 11, 15) == 0 );
assert( gamma_move(board, 4, 5, 12) == 0 );
assert( gamma_move(board, 6, 14, 5) == 0 );
assert( gamma_move(board, 1, 0, 11) == 0 );
assert( gamma_move(board, 2, 11, 15) == 0 );
assert( gamma_move(board, 2, 5, 7) == 0 );
assert( gamma_move(board, 3, 0, 11) == 0 );


char* board898251957 = gamma_board(board);
assert( board898251957 != NULL );
assert( strcmp(board898251957, 
"..24253552.43646\n"
"6552..22.2255243\n"
"65253.2643555525\n"
"2616.3.511.41.61\n"
"224562552435.6.4\n"
"33123.14.5.66565\n"
"6.6.2311...13462\n"
"61256626525.1161\n"
"24.462633.31616.\n"
"6442.25.443.6545\n"
"5331.34624.366..\n"
"6.666.6.4422.233\n"
".312.36633425564\n"
"511.645.63242664\n"
"46322.6223151626\n"
".566523453632352\n"
"54.3.2662536115.\n"
"3645.33144526164\n"
"323344364..216.5\n"
"32214256356.3326\n") == 0);
free(board898251957);
board898251957 = NULL;
assert( gamma_move(board, 4, 13, 10) == 0 );
assert( gamma_move(board, 5, 7, 4) == 0 );
assert( gamma_move(board, 6, 9, 1) == 1 );
assert( gamma_free_fields(board, 6) == 49 );
assert( gamma_move(board, 1, 9, 4) == 0 );
assert( gamma_move(board, 2, 6, 0) == 0 );
assert( gamma_move(board, 2, 13, 1) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 9, 4) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 0, 8) == 0 );
assert( gamma_move(board, 4, 3, 1) == 0 );


gamma_delete(board);

    return 0;
}
