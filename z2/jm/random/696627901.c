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
uuid: 696627901
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(24, 17, 4, 45);
assert( board != NULL );


assert( gamma_move(board, 2, 22, 15) == 1 );
assert( gamma_move(board, 3, 8, 1) == 1 );
assert( gamma_move(board, 3, 19, 8) == 1 );
assert( gamma_move(board, 4, 10, 12) == 1 );
assert( gamma_move(board, 4, 12, 8) == 1 );
assert( gamma_busy_fields(board, 4) == 2 );
assert( gamma_move(board, 1, 4, 1) == 1 );
assert( gamma_golden_move(board, 1, 15, 22) == 0 );
assert( gamma_move(board, 2, 7, 18) == 0 );
assert( gamma_move(board, 2, 13, 1) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_golden_move(board, 2, 1, 4) == 0 );
assert( gamma_move(board, 3, 11, 22) == 0 );
assert( gamma_move(board, 3, 23, 9) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 13, 2) == 1 );
assert( gamma_move(board, 4, 11, 1) == 1 );
assert( gamma_busy_fields(board, 4) == 4 );
assert( gamma_move(board, 1, 2, 14) == 1 );
assert( gamma_busy_fields(board, 1) == 2 );
assert( gamma_move(board, 2, 10, 16) == 1 );
assert( gamma_move(board, 2, 17, 16) == 1 );
assert( gamma_move(board, 3, 3, 13) == 1 );
assert( gamma_move(board, 3, 3, 2) == 1 );
assert( gamma_move(board, 4, 8, 0) == 1 );
assert( gamma_move(board, 4, 0, 9) == 1 );
assert( gamma_busy_fields(board, 4) == 6 );
assert( gamma_move(board, 1, 5, 2) == 1 );
assert( gamma_move(board, 1, 23, 8) == 1 );
assert( gamma_move(board, 2, 11, 22) == 0 );
assert( gamma_move(board, 3, 8, 8) == 1 );
assert( gamma_move(board, 3, 3, 9) == 1 );
assert( gamma_move(board, 4, 13, 20) == 0 );
assert( gamma_move(board, 1, 14, 23) == 0 );
assert( gamma_move(board, 3, 13, 8) == 1 );
assert( gamma_move(board, 3, 11, 2) == 1 );
assert( gamma_move(board, 4, 8, 2) == 1 );
assert( gamma_move(board, 4, 7, 4) == 1 );
assert( gamma_move(board, 1, 9, 4) == 1 );
assert( gamma_move(board, 2, 14, 1) == 1 );
assert( gamma_move(board, 3, 12, 7) == 1 );
assert( gamma_move(board, 4, 16, 0) == 1 );
assert( gamma_move(board, 1, 2, 6) == 1 );
assert( gamma_move(board, 1, 3, 14) == 1 );
assert( gamma_move(board, 2, 10, 17) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );


char* board890945663 = gamma_board(board);
assert( board890945663 != NULL );
assert( strcmp(board890945663, 
"..........2......2......\n"
"......................2.\n"
"..11....................\n"
"...3....................\n"
"..........4.............\n"
"........................\n"
"........................\n"
"4..3...................3\n"
"........3...43.....3...1\n"
"............3...........\n"
"..1.....................\n"
"........................\n"
".......4.1..............\n"
"........................\n"
"...3.1..4..3.4..........\n"
"....1...3..4.22.........\n"
"........4.......4.......\n") == 0);
free(board890945663);
board890945663 = NULL;
assert( gamma_move(board, 3, 14, 22) == 0 );
assert( gamma_move(board, 3, 12, 9) == 1 );
assert( gamma_busy_fields(board, 3) == 11 );
assert( gamma_move(board, 4, 12, 20) == 0 );
assert( gamma_move(board, 1, 13, 2) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 3, 16, 22) == 0 );
assert( gamma_move(board, 3, 16, 16) == 1 );
assert( gamma_move(board, 4, 3, 14) == 0 );
assert( gamma_free_fields(board, 4) == 375 );
assert( gamma_move(board, 1, 4, 17) == 0 );
assert( gamma_move(board, 2, 9, 21) == 0 );
assert( gamma_move(board, 2, 20, 2) == 1 );
assert( gamma_move(board, 3, 6, 1) == 1 );
assert( gamma_move(board, 3, 15, 2) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 5, 5) == 1 );
assert( gamma_move(board, 1, 0, 2) == 1 );
assert( gamma_golden_move(board, 2, 14, 2) == 0 );
assert( gamma_move(board, 3, 13, 22) == 0 );
assert( gamma_move(board, 4, 9, 19) == 0 );
assert( gamma_move(board, 4, 2, 13) == 1 );
assert( gamma_move(board, 1, 4, 2) == 1 );
assert( gamma_move(board, 1, 10, 14) == 1 );
assert( gamma_move(board, 2, 0, 21) == 0 );
assert( gamma_move(board, 2, 11, 11) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 5, 10) == 1 );
assert( gamma_move(board, 4, 7, 19) == 0 );
assert( gamma_move(board, 4, 2, 4) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 20, 7) == 1 );
assert( gamma_move(board, 2, 11, 7) == 1 );
assert( gamma_busy_fields(board, 2) == 8 );
assert( gamma_move(board, 3, 1, 16) == 1 );
assert( gamma_move(board, 3, 18, 4) == 1 );
assert( gamma_busy_fields(board, 3) == 17 );
assert( gamma_move(board, 4, 7, 15) == 1 );
assert( gamma_move(board, 4, 0, 1) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 0, 1) == 0 );
assert( gamma_move(board, 1, 23, 16) == 1 );
assert( gamma_golden_move(board, 1, 7, 12) == 0 );
assert( gamma_move(board, 2, 14, 8) == 1 );
assert( gamma_move(board, 2, 20, 15) == 1 );
assert( gamma_busy_fields(board, 2) == 10 );
assert( gamma_move(board, 3, 6, 23) == 0 );
assert( gamma_move(board, 4, 21, 12) == 1 );
assert( gamma_free_fields(board, 4) == 354 );
assert( gamma_move(board, 1, 22, 8) == 1 );
assert( gamma_move(board, 2, 11, 17) == 0 );
assert( gamma_move(board, 2, 16, 15) == 1 );
assert( gamma_move(board, 3, 13, 18) == 0 );
assert( gamma_golden_move(board, 3, 12, 10) == 0 );
assert( gamma_move(board, 4, 4, 10) == 1 );
assert( gamma_move(board, 4, 17, 15) == 1 );
assert( gamma_move(board, 1, 13, 7) == 1 );
assert( gamma_move(board, 2, 11, 5) == 1 );
assert( gamma_move(board, 3, 0, 17) == 0 );
assert( gamma_move(board, 4, 12, 18) == 0 );
assert( gamma_move(board, 4, 8, 16) == 1 );
assert( gamma_move(board, 1, 1, 7) == 1 );
assert( gamma_move(board, 1, 20, 14) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 6, 14) == 1 );
assert( gamma_move(board, 3, 14, 21) == 0 );
assert( gamma_move(board, 3, 4, 10) == 0 );
assert( gamma_move(board, 4, 3, 3) == 1 );
assert( gamma_golden_move(board, 4, 15, 22) == 0 );
assert( gamma_move(board, 1, 12, 23) == 0 );
assert( gamma_move(board, 1, 9, 0) == 1 );
assert( gamma_move(board, 2, 21, 8) == 1 );
assert( gamma_move(board, 3, 5, 20) == 0 );
assert( gamma_move(board, 3, 16, 11) == 1 );
assert( gamma_busy_fields(board, 3) == 18 );
assert( gamma_move(board, 4, 15, 21) == 0 );
assert( gamma_move(board, 4, 10, 14) == 0 );
assert( gamma_move(board, 1, 4, 21) == 0 );
assert( gamma_move(board, 2, 14, 9) == 1 );


char* board376675358 = gamma_board(board);
assert( board376675358 != NULL );
assert( strcmp(board376675358, 
".3......4.2.....32.....1\n"
".......4........24..2.2.\n"
"..11..2...1.........1...\n"
"..43....................\n"
"..........4..........4..\n"
"...........2....3.......\n"
"....43..................\n"
"4..3........3.2........3\n"
"........3...432....3.211\n"
".1.........231......1...\n"
"..1.....................\n"
".....4.....2............\n"
"..4....4.1........3.....\n"
"...4....................\n"
"1..311..4..3.4.3....2...\n"
"4...1.3.3..4.22.........\n"
"........41......4.......\n") == 0);
free(board376675358);
board376675358 = NULL;
assert( gamma_move(board, 4, 6, 23) == 0 );
assert( gamma_move(board, 4, 4, 11) == 1 );
assert( gamma_busy_fields(board, 4) == 20 );
assert( gamma_move(board, 1, 4, 8) == 1 );
assert( gamma_move(board, 1, 1, 14) == 1 );
assert( gamma_busy_fields(board, 1) == 19 );
assert( gamma_move(board, 2, 10, 1) == 1 );
assert( gamma_move(board, 2, 19, 15) == 1 );
assert( gamma_move(board, 3, 9, 3) == 1 );
assert( gamma_move(board, 3, 22, 16) == 1 );
assert( gamma_move(board, 4, 9, 15) == 1 );


char* board250607978 = gamma_board(board);
assert( board250607978 != NULL );
assert( strcmp(board250607978, 
".3......4.2.....32....31\n"
".......4.4......24.22.2.\n"
".111..2...1.........1...\n"
"..43....................\n"
"..........4..........4..\n"
"....4......2....3.......\n"
"....43..................\n"
"4..3........3.2........3\n"
"....1...3...432....3.211\n"
".1.........231......1...\n"
"..1.....................\n"
".....4.....2............\n"
"..4....4.1........3.....\n"
"...4.....3..............\n"
"1..311..4..3.4.3....2...\n"
"4...1.3.3.24.22.........\n"
"........41......4.......\n") == 0);
free(board250607978);
board250607978 = NULL;
assert( gamma_move(board, 1, 7, 9) == 1 );
assert( gamma_move(board, 2, 10, 6) == 1 );
assert( gamma_move(board, 2, 7, 1) == 1 );
assert( gamma_free_fields(board, 2) == 328 );
assert( gamma_move(board, 3, 6, 8) == 1 );


char* board102414028 = gamma_board(board);
assert( board102414028 != NULL );
assert( strcmp(board102414028, 
".3......4.2.....32....31\n"
".......4.4......24.22.2.\n"
".111..2...1.........1...\n"
"..43....................\n"
"..........4..........4..\n"
"....4......2....3.......\n"
"....43..................\n"
"4..3...1....3.2........3\n"
"....1.3.3...432....3.211\n"
".1.........231......1...\n"
"..1.......2.............\n"
".....4.....2............\n"
"..4....4.1........3.....\n"
"...4.....3..............\n"
"1..311..4..3.4.3....2...\n"
"4...1.323.24.22.........\n"
"........41......4.......\n") == 0);
free(board102414028);
board102414028 = NULL;
assert( gamma_move(board, 4, 1, 16) == 0 );
assert( gamma_move(board, 1, 17, 14) == 1 );
assert( gamma_move(board, 1, 2, 2) == 1 );
assert( gamma_move(board, 2, 13, 8) == 0 );
assert( gamma_move(board, 3, 5, 10) == 0 );
assert( gamma_move(board, 4, 6, 12) == 1 );
assert( gamma_move(board, 1, 4, 11) == 0 );
assert( gamma_move(board, 1, 4, 7) == 1 );
assert( gamma_busy_fields(board, 1) == 23 );
assert( gamma_move(board, 2, 5, 11) == 1 );
assert( gamma_move(board, 3, 19, 6) == 1 );
assert( gamma_move(board, 3, 4, 3) == 1 );
assert( gamma_free_fields(board, 3) == 320 );
assert( gamma_move(board, 4, 11, 15) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 1, 15) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 16, 13) == 1 );
assert( gamma_move(board, 3, 13, 22) == 0 );
assert( gamma_move(board, 4, 12, 15) == 1 );
assert( gamma_move(board, 4, 14, 5) == 1 );
assert( gamma_busy_fields(board, 4) == 25 );
assert( gamma_move(board, 2, 1, 4) == 1 );
assert( gamma_move(board, 3, 14, 9) == 0 );
assert( gamma_free_fields(board, 3) == 314 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 16, 14) == 1 );
assert( gamma_move(board, 1, 6, 2) == 1 );
assert( gamma_move(board, 2, 9, 10) == 1 );
assert( gamma_move(board, 3, 16, 14) == 0 );
assert( gamma_move(board, 3, 22, 4) == 1 );
assert( gamma_busy_fields(board, 3) == 24 );
assert( gamma_move(board, 4, 16, 14) == 0 );
assert( gamma_move(board, 4, 7, 11) == 1 );
assert( gamma_move(board, 1, 16, 0) == 0 );
assert( gamma_move(board, 1, 15, 14) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 12, 12) == 1 );
assert( gamma_move(board, 3, 13, 9) == 1 );
assert( gamma_free_fields(board, 3) == 306 );


char* board913524740 = gamma_board(board);
assert( board913524740 != NULL );
assert( strcmp(board913524740, 
".3......4.2.....32....31\n"
".1.....4.4.44...24.22.2.\n"
".111..2...1....141..1...\n"
"..43............2.......\n"
"......4...4.2........4..\n"
"....42.4...2....3.......\n"
"....43...2..............\n"
"4..3...1....332........3\n"
"....1.3.3...432....3.211\n"
".1..1......231......1...\n"
"..1.......2........3....\n"
".....4.....2..4.........\n"
".24....4.1........3...3.\n"
"...43....3..............\n"
"1.13111.4..3.4.3....2...\n"
"4...1.323.24.22.........\n"
"........41......4.......\n") == 0);
free(board913524740);
board913524740 = NULL;
assert( gamma_move(board, 4, 4, 20) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 11, 14) == 1 );
assert( gamma_busy_fields(board, 1) == 27 );
assert( gamma_golden_move(board, 1, 2, 20) == 0 );
assert( gamma_move(board, 2, 10, 8) == 1 );


char* board244434751 = gamma_board(board);
assert( board244434751 != NULL );
assert( strcmp(board244434751, 
".3......4.2.....32....31\n"
".1.....4.4.44...24.22.2.\n"
".111..2...11...141..1...\n"
"..43............2.......\n"
"......4...4.2........4..\n"
"....42.4...2....3.......\n"
"....43...2..............\n"
"4..3...1....332........3\n"
"....1.3.3.2.432....3.211\n"
".1..1......231......1...\n"
"..1.......2........3....\n"
".....4.....2..4.........\n"
".24....4.1........3...3.\n"
"...43....3..............\n"
"1.13111.4..3.4.3....2...\n"
"4...1.323.24.22.........\n"
"........41......4.......\n") == 0);
free(board244434751);
board244434751 = NULL;
assert( gamma_move(board, 3, 1, 18) == 0 );
assert( gamma_move(board, 3, 8, 12) == 1 );
assert( gamma_move(board, 4, 4, 13) == 1 );
assert( gamma_move(board, 4, 6, 12) == 0 );
assert( gamma_move(board, 1, 2, 23) == 0 );
assert( gamma_move(board, 1, 17, 0) == 1 );
assert( gamma_move(board, 2, 6, 9) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 4, 6) == 1 );
assert( gamma_move(board, 3, 16, 11) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 0, 4) == 1 );
assert( gamma_busy_fields(board, 4) == 29 );
assert( gamma_move(board, 1, 2, 12) == 1 );
assert( gamma_free_fields(board, 1) == 297 );
assert( gamma_golden_move(board, 1, 15, 11) == 0 );
assert( gamma_move(board, 2, 6, 20) == 0 );
assert( gamma_free_fields(board, 2) == 297 );
assert( gamma_move(board, 3, 0, 11) == 1 );
assert( gamma_move(board, 3, 23, 0) == 1 );
assert( gamma_free_fields(board, 3) == 295 );
assert( gamma_move(board, 4, 3, 8) == 1 );
assert( gamma_move(board, 4, 14, 1) == 0 );
assert( gamma_move(board, 1, 6, 0) == 1 );
assert( gamma_free_fields(board, 1) == 293 );
assert( gamma_move(board, 2, 9, 18) == 0 );
assert( gamma_move(board, 4, 15, 18) == 0 );
assert( gamma_move(board, 1, 8, 11) == 1 );
assert( gamma_move(board, 1, 18, 14) == 1 );
assert( gamma_free_fields(board, 1) == 291 );
assert( gamma_move(board, 2, 13, 20) == 0 );
assert( gamma_free_fields(board, 2) == 291 );
assert( gamma_move(board, 3, 10, 1) == 0 );
assert( gamma_move(board, 3, 16, 4) == 1 );
assert( gamma_move(board, 4, 15, 15) == 1 );
assert( gamma_move(board, 4, 18, 9) == 1 );


char* board658635091 = gamma_board(board);
assert( board658635091 != NULL );
assert( strcmp(board658635091, 
".3......4.2.....32....31\n"
".1.....4.4.44..424.22.2.\n"
".111..2...11...1411.1...\n"
"..434...........2.......\n"
"..1...4.3.4.2........4..\n"
"3...42.41..2....3.......\n"
"....43...2..............\n"
"4..3..21....332...4....3\n"
"...41.3.3.2.432....3.211\n"
".1..1......231......1...\n"
"..1.3.....2........3....\n"
".....4.....2..4.........\n"
"424....4.1......3.3...3.\n"
"...43....3..............\n"
"1.13111.4..3.4.3....2...\n"
"4...1.323.24.22.........\n"
"......1.41......41.....3\n") == 0);
free(board658635091);
board658635091 = NULL;
assert( gamma_move(board, 1, 17, 16) == 0 );
assert( gamma_free_fields(board, 1) == 288 );
assert( gamma_move(board, 2, 14, 19) == 0 );
assert( gamma_move(board, 2, 20, 9) == 1 );
assert( gamma_move(board, 3, 14, 19) == 0 );
assert( gamma_move(board, 3, 3, 2) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 0, 0) == 1 );
assert( gamma_move(board, 1, 7, 16) == 1 );
assert( gamma_move(board, 1, 4, 10) == 0 );
assert( gamma_move(board, 2, 2, 18) == 0 );
assert( gamma_free_fields(board, 2) == 285 );
assert( gamma_move(board, 3, 9, 15) == 0 );
assert( gamma_move(board, 3, 16, 9) == 1 );


char* board678121098 = gamma_board(board);
assert( board678121098 != NULL );
assert( strcmp(board678121098, 
".3.....14.2.....32....31\n"
".1.....4.4.44..424.22.2.\n"
".111..2...11...1411.1...\n"
"..434...........2.......\n"
"..1...4.3.4.2........4..\n"
"3...42.41..2....3.......\n"
"....43...2..............\n"
"4..3..21....332.3.4.2..3\n"
"...41.3.3.2.432....3.211\n"
".1..1......231......1...\n"
"..1.3.....2........3....\n"
".....4.....2..4.........\n"
"424....4.1......3.3...3.\n"
"...43....3..............\n"
"1.13111.4..3.4.3....2...\n"
"4...1.323.24.22.........\n"
"4.....1.41......41.....3\n") == 0);
free(board678121098);
board678121098 = NULL;
assert( gamma_move(board, 4, 4, 14) == 1 );


char* board706802295 = gamma_board(board);
assert( board706802295 != NULL );
assert( strcmp(board706802295, 
".3.....14.2.....32....31\n"
".1.....4.4.44..424.22.2.\n"
".1114.2...11...1411.1...\n"
"..434...........2.......\n"
"..1...4.3.4.2........4..\n"
"3...42.41..2....3.......\n"
"....43...2..............\n"
"4..3..21....332.3.4.2..3\n"
"...41.3.3.2.432....3.211\n"
".1..1......231......1...\n"
"..1.3.....2........3....\n"
".....4.....2..4.........\n"
"424....4.1......3.3...3.\n"
"...43....3..............\n"
"1.13111.4..3.4.3....2...\n"
"4...1.323.24.22.........\n"
"4.....1.41......41.....3\n") == 0);
free(board706802295);
board706802295 = NULL;
assert( gamma_move(board, 1, 2, 8) == 1 );
assert( gamma_busy_fields(board, 1) == 34 );
assert( gamma_move(board, 2, 14, 14) == 1 );
assert( gamma_move(board, 2, 13, 3) == 1 );
assert( gamma_busy_fields(board, 2) == 29 );
assert( gamma_move(board, 4, 15, 3) == 1 );
assert( gamma_move(board, 1, 8, 0) == 0 );
assert( gamma_move(board, 2, 18, 4) == 0 );
assert( gamma_free_fields(board, 2) == 279 );
assert( gamma_move(board, 3, 6, 10) == 1 );
assert( gamma_move(board, 3, 12, 5) == 1 );
assert( gamma_move(board, 4, 16, 12) == 1 );
assert( gamma_move(board, 1, 10, 15) == 1 );
assert( gamma_move(board, 2, 15, 1) == 1 );
assert( gamma_move(board, 2, 13, 6) == 1 );
assert( gamma_move(board, 3, 10, 10) == 1 );
assert( gamma_move(board, 4, 22, 14) == 1 );
assert( gamma_move(board, 1, 10, 17) == 0 );
assert( gamma_move(board, 2, 7, 22) == 0 );
assert( gamma_move(board, 2, 1, 14) == 0 );
assert( gamma_move(board, 3, 8, 16) == 0 );
assert( gamma_move(board, 3, 11, 15) == 0 );
assert( gamma_move(board, 4, 6, 6) == 1 );
assert( gamma_busy_fields(board, 4) == 38 );
assert( gamma_move(board, 1, 13, 11) == 1 );
assert( gamma_move(board, 1, 11, 0) == 1 );
assert( gamma_move(board, 3, 18, 5) == 1 );
assert( gamma_move(board, 3, 1, 5) == 1 );
assert( gamma_busy_fields(board, 3) == 36 );
assert( gamma_move(board, 4, 2, 16) == 1 );
assert( gamma_golden_move(board, 4, 14, 2) == 0 );
assert( gamma_move(board, 1, 11, 9) == 1 );
assert( gamma_busy_fields(board, 2) == 31 );
assert( gamma_golden_move(board, 2, 7, 1) == 0 );
assert( gamma_move(board, 3, 10, 2) == 1 );
assert( gamma_move(board, 4, 16, 12) == 0 );
assert( gamma_move(board, 1, 1, 18) == 0 );
assert( gamma_move(board, 2, 11, 2) == 0 );
assert( gamma_move(board, 3, 16, 13) == 0 );
assert( gamma_move(board, 3, 7, 3) == 1 );
assert( gamma_move(board, 4, 5, 0) == 1 );
assert( gamma_move(board, 1, 13, 11) == 0 );
assert( gamma_move(board, 2, 16, 20) == 0 );
assert( gamma_move(board, 2, 23, 5) == 1 );
assert( gamma_move(board, 3, 11, 10) == 1 );
assert( gamma_move(board, 3, 16, 11) == 0 );
assert( gamma_move(board, 4, 8, 8) == 0 );
assert( gamma_free_fields(board, 4) == 259 );
assert( gamma_move(board, 1, 0, 12) == 1 );
assert( gamma_move(board, 2, 14, 12) == 1 );
assert( gamma_move(board, 2, 22, 10) == 1 );
assert( gamma_free_fields(board, 2) == 256 );
assert( gamma_move(board, 3, 12, 16) == 1 );
assert( gamma_move(board, 4, 3, 0) == 1 );
assert( gamma_move(board, 4, 4, 6) == 0 );
assert( gamma_free_fields(board, 4) == 254 );
assert( gamma_move(board, 1, 5, 7) == 1 );
assert( gamma_move(board, 1, 11, 16) == 1 );
assert( gamma_move(board, 2, 12, 5) == 0 );
assert( gamma_move(board, 3, 10, 18) == 0 );
assert( gamma_free_fields(board, 3) == 252 );
assert( gamma_move(board, 4, 13, 17) == 0 );
assert( gamma_move(board, 4, 0, 9) == 0 );
assert( gamma_move(board, 1, 8, 15) == 1 );
assert( gamma_move(board, 1, 23, 10) == 1 );
assert( gamma_move(board, 2, 4, 10) == 0 );
assert( gamma_free_fields(board, 2) == 250 );
assert( gamma_move(board, 3, 1, 22) == 0 );
assert( gamma_move(board, 4, 22, 2) == 1 );
assert( gamma_free_fields(board, 4) == 249 );
assert( gamma_move(board, 1, 15, 3) == 0 );
assert( gamma_move(board, 1, 12, 11) == 1 );
assert( gamma_busy_fields(board, 1) == 44 );
assert( gamma_move(board, 2, 15, 6) == 1 );
assert( gamma_move(board, 3, 16, 20) == 0 );
assert( gamma_move(board, 3, 11, 9) == 0 );
assert( gamma_move(board, 4, 15, 21) == 0 );
assert( gamma_move(board, 4, 21, 0) == 1 );
assert( gamma_move(board, 1, 14, 4) == 1 );
assert( gamma_move(board, 1, 16, 3) == 1 );
assert( gamma_busy_fields(board, 1) == 46 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 3, 1) == 1 );
assert( gamma_move(board, 2, 20, 15) == 0 );
assert( gamma_move(board, 3, 1, 1) == 1 );
assert( gamma_free_fields(board, 3) == 242 );
assert( gamma_move(board, 4, 7, 7) == 1 );
assert( gamma_move(board, 4, 12, 2) == 1 );
assert( gamma_move(board, 1, 3, 22) == 0 );
assert( gamma_move(board, 1, 16, 11) == 0 );
assert( gamma_move(board, 2, 18, 5) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 7, 8) == 1 );
assert( gamma_move(board, 4, 6, 23) == 0 );
assert( gamma_move(board, 4, 17, 12) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 2, 9) == 1 );
assert( gamma_move(board, 1, 18, 11) == 1 );
assert( gamma_move(board, 2, 8, 7) == 1 );
assert( gamma_busy_fields(board, 2) == 37 );
assert( gamma_move(board, 3, 1, 2) == 1 );
assert( gamma_move(board, 4, 10, 7) == 1 );
assert( gamma_move(board, 4, 6, 1) == 0 );
assert( gamma_free_fields(board, 1) == 233 );
assert( gamma_move(board, 2, 2, 17) == 0 );
assert( gamma_free_fields(board, 2) == 233 );
assert( gamma_move(board, 3, 4, 10) == 0 );
assert( gamma_move(board, 4, 3, 5) == 1 );
assert( gamma_move(board, 4, 0, 6) == 1 );
assert( gamma_busy_fields(board, 4) == 49 );
assert( gamma_move(board, 1, 20, 16) == 1 );
assert( gamma_move(board, 1, 8, 0) == 0 );
assert( gamma_move(board, 2, 16, 21) == 0 );
assert( gamma_busy_fields(board, 2) == 37 );
assert( gamma_move(board, 3, 6, 7) == 1 );
assert( gamma_move(board, 4, 13, 6) == 0 );
assert( gamma_free_fields(board, 4) == 229 );
assert( gamma_move(board, 1, 15, 14) == 0 );


char* board758089272 = gamma_board(board);
assert( board758089272 != NULL );
assert( strcmp(board758089272, 
".34....14.213...32..1.31\n"
".1.....414144..424.22.2.\n"
".1114.2...11..21411.1.4.\n"
"..434...........2.......\n"
"1.1...4.3.4.2.2.44...4..\n"
"3...42.41..211..3.1.....\n"
"....433..233..........21\n"
"4.13..21...1332.3.4.2..3\n"
"..141.333.2.432....3.211\n"
".1..11342.4231......1...\n"
"4.1.3.4...2..2.2...3....\n"
".3.4.4.....23.4...3....2\n"
"424....4.1....1.3.3...3.\n"
"...43..3.3...2.41.......\n"
"1313111.4.3344.3....2.4.\n"
"43.21.323.24.222........\n"
"4..4.41.41.1....41...4.3\n") == 0);
free(board758089272);
board758089272 = NULL;
assert( gamma_move(board, 2, 0, 20) == 0 );
assert( gamma_move(board, 3, 10, 21) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 10, 16) == 0 );
assert( gamma_move(board, 1, 16, 4) == 0 );
assert( gamma_move(board, 1, 21, 5) == 1 );
assert( gamma_golden_move(board, 1, 14, 6) == 0 );
assert( gamma_move(board, 2, 5, 15) == 1 );
assert( gamma_move(board, 2, 8, 0) == 0 );


char* board873472192 = gamma_board(board);
assert( board873472192 != NULL );
assert( strcmp(board873472192, 
".34....14.213...32..1.31\n"
".1...2.414144..424.22.2.\n"
".1114.2...11..21411.1.4.\n"
"..434...........2.......\n"
"1.1...4.3.4.2.2.44...4..\n"
"3...42.41..211..3.1.....\n"
"....433..233..........21\n"
"4.13..21...1332.3.4.2..3\n"
"..141.333.2.432....3.211\n"
".1..11342.4231......1...\n"
"4.1.3.4...2..2.2...3....\n"
".3.4.4.....23.4...3..1.2\n"
"424....4.1....1.3.3...3.\n"
"...43..3.3...2.41.......\n"
"1313111.4.3344.3....2.4.\n"
"43.21.323.24.222........\n"
"4..4.41.41.1....41...4.3\n") == 0);
free(board873472192);
board873472192 = NULL;
assert( gamma_move(board, 3, 3, 19) == 0 );
assert( gamma_move(board, 3, 6, 1) == 0 );
assert( gamma_move(board, 1, 6, 14) == 0 );
assert( gamma_free_fields(board, 1) == 227 );
assert( gamma_move(board, 2, 5, 3) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 11, 9) == 0 );
assert( gamma_move(board, 3, 16, 2) == 1 );
assert( gamma_move(board, 4, 0, 10) == 1 );
assert( gamma_move(board, 4, 23, 5) == 0 );
assert( gamma_move(board, 1, 23, 0) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 12, 7) == 0 );
assert( gamma_busy_fields(board, 2) == 39 );
assert( gamma_move(board, 3, 21, 12) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 8, 0) == 0 );
assert( gamma_move(board, 4, 7, 14) == 1 );
assert( gamma_move(board, 1, 3, 22) == 0 );
assert( gamma_busy_fields(board, 1) == 50 );
assert( gamma_move(board, 2, 12, 7) == 0 );
assert( gamma_move(board, 3, 9, 8) == 1 );
assert( gamma_move(board, 3, 8, 9) == 1 );
assert( gamma_busy_fields(board, 3) == 47 );
assert( gamma_move(board, 4, 7, 16) == 0 );
assert( gamma_move(board, 4, 12, 10) == 1 );
assert( gamma_move(board, 1, 5, 2) == 0 );
assert( gamma_move(board, 2, 1, 18) == 0 );
assert( gamma_busy_fields(board, 2) == 39 );
assert( gamma_move(board, 3, 20, 15) == 0 );
assert( gamma_move(board, 3, 20, 3) == 1 );
assert( gamma_golden_move(board, 3, 8, 22) == 0 );
assert( gamma_move(board, 4, 22, 2) == 0 );
assert( gamma_move(board, 4, 17, 12) == 0 );
assert( gamma_move(board, 1, 12, 5) == 0 );
assert( gamma_free_fields(board, 1) == 219 );
assert( gamma_move(board, 2, 3, 23) == 0 );
assert( gamma_move(board, 2, 22, 1) == 1 );
assert( gamma_move(board, 3, 15, 0) == 1 );
assert( gamma_busy_fields(board, 3) == 49 );
assert( gamma_move(board, 4, 2, 14) == 0 );
assert( gamma_move(board, 1, 12, 9) == 0 );
assert( gamma_move(board, 1, 11, 8) == 1 );
assert( gamma_busy_fields(board, 1) == 51 );
assert( gamma_move(board, 2, 6, 3) == 1 );
assert( gamma_move(board, 3, 5, 9) == 1 );
assert( gamma_move(board, 4, 5, 10) == 0 );
assert( gamma_move(board, 4, 5, 0) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 5, 22) == 0 );
assert( gamma_move(board, 2, 18, 0) == 1 );
assert( gamma_busy_fields(board, 2) == 42 );
assert( gamma_free_fields(board, 2) == 213 );
assert( gamma_move(board, 4, 6, 7) == 0 );
assert( gamma_move(board, 4, 18, 0) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 4, 11) == 0 );
assert( gamma_move(board, 2, 11, 6) == 1 );
assert( gamma_busy_fields(board, 2) == 43 );
assert( gamma_move(board, 3, 10, 3) == 1 );
assert( gamma_move(board, 3, 18, 3) == 1 );
assert( gamma_busy_fields(board, 3) == 52 );
assert( gamma_free_fields(board, 3) == 210 );
assert( gamma_move(board, 4, 4, 6) == 0 );
assert( gamma_move(board, 4, 15, 6) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 11, 22) == 0 );
assert( gamma_move(board, 1, 6, 6) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 3, 12) == 1 );
assert( gamma_busy_fields(board, 2) == 44 );
assert( gamma_move(board, 3, 15, 23) == 0 );
assert( gamma_move(board, 4, 23, 16) == 0 );
assert( gamma_move(board, 1, 9, 4) == 0 );


char* board207492139 = gamma_board(board);
assert( board207492139 != NULL );
assert( strcmp(board207492139, 
".34....14.213...32..1.31\n"
".1...2.414144..424.22.2.\n"
".1114.24..11..21411.1.4.\n"
"..434...........2.......\n"
"1.12..4.3.4.2.2.44...4..\n"
"3...42.41..211..3.1.....\n"
"4...433..2334.........21\n"
"4.13.3213..1332.3.4.2..3\n"
"..141.333321432....3.211\n"
".1..11342.4231......1...\n"
"4.1.3.4...22.2.2...3....\n"
".3.4.4.....23.4...3..1.2\n"
"424....4.1....1.3.3...3.\n"
"...43223.33..2.41.3.3...\n"
"1313111.4.3344.33...2.4.\n"
"43.21.323.24.222......2.\n"
"4..4.41.41.1...3412..4.3\n") == 0);
free(board207492139);
board207492139 = NULL;
assert( gamma_move(board, 2, 4, 15) == 1 );
assert( gamma_move(board, 2, 6, 14) == 0 );
assert( gamma_move(board, 3, 6, 21) == 0 );
assert( gamma_move(board, 3, 18, 4) == 0 );
assert( gamma_move(board, 4, 6, 16) == 1 );
assert( gamma_move(board, 4, 23, 1) == 0 );
assert( gamma_move(board, 1, 6, 23) == 0 );
assert( gamma_move(board, 1, 2, 9) == 0 );
assert( gamma_move(board, 2, 1, 13) == 1 );
assert( gamma_move(board, 2, 20, 15) == 0 );
assert( gamma_move(board, 3, 0, 20) == 0 );
assert( gamma_move(board, 3, 3, 14) == 0 );
assert( gamma_move(board, 4, 20, 9) == 0 );
assert( gamma_move(board, 4, 10, 9) == 0 );
assert( gamma_free_fields(board, 4) == 88 );
assert( gamma_free_fields(board, 1) == 206 );
assert( gamma_move(board, 2, 1, 0) == 1 );
assert( gamma_move(board, 2, 3, 5) == 0 );
assert( gamma_move(board, 3, 12, 18) == 0 );
assert( gamma_move(board, 3, 0, 14) == 1 );
assert( gamma_busy_fields(board, 3) == 53 );
assert( gamma_move(board, 4, 11, 15) == 0 );
assert( gamma_move(board, 4, 2, 6) == 0 );
assert( gamma_golden_move(board, 4, 2, 0) == 0 );
assert( gamma_move(board, 1, 1, 16) == 0 );
assert( gamma_move(board, 1, 16, 4) == 0 );
assert( gamma_move(board, 2, 10, 13) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 9, 1) == 1 );
assert( gamma_move(board, 3, 23, 2) == 1 );
assert( gamma_move(board, 4, 4, 14) == 0 );
assert( gamma_move(board, 1, 16, 6) == 1 );
assert( gamma_move(board, 2, 20, 15) == 0 );


char* board910335258 = gamma_board(board);
assert( board910335258 != NULL );
assert( strcmp(board910335258, 
".34...414.213...32..1.31\n"
".1..22.414144..424.22.2.\n"
"31114.24..11..21411.1.4.\n"
".2434.....2.....2.......\n"
"1.12..4.3.4.2.2.44...4..\n"
"3...42.41..211..3.1.....\n"
"4...433..2334.........21\n"
"4.13.3213..1332.3.4.2..3\n"
"..141.333321432....3.211\n"
".1..11342.4231......1...\n"
"4.1.3.4...22.2.21..3....\n"
".3.4.4.....23.4...3..1.2\n"
"424....4.1....1.3.3...3.\n"
"...43223.33..2.41.3.3...\n"
"1313111.4.3344.33...2.43\n"
"43.21.323324.222......2.\n"
"42.4.41.41.1...3412..4.3\n") == 0);
free(board910335258);
board910335258 = NULL;
assert( gamma_move(board, 3, 1, 11) == 1 );
assert( gamma_move(board, 3, 9, 9) == 1 );


char* board782157913 = gamma_board(board);
assert( board782157913 != NULL );
assert( strcmp(board782157913, 
".34...414.213...32..1.31\n"
".1..22.414144..424.22.2.\n"
"31114.24..11..21411.1.4.\n"
".2434.....2.....2.......\n"
"1.12..4.3.4.2.2.44...4..\n"
"33..42.41..211..3.1.....\n"
"4...433..2334.........21\n"
"4.13.32133.1332.3.4.2..3\n"
"..141.333321432....3.211\n"
".1..11342.4231......1...\n"
"4.1.3.4...22.2.21..3....\n"
".3.4.4.....23.4...3..1.2\n"
"424....4.1....1.3.3...3.\n"
"...43223.33..2.41.3.3...\n"
"1313111.4.3344.33...2.43\n"
"43.21.323324.222......2.\n"
"42.4.41.41.1...3412..4.3\n") == 0);
free(board782157913);
board782157913 = NULL;
assert( gamma_move(board, 4, 8, 0) == 0 );
assert( gamma_move(board, 4, 9, 0) == 0 );
assert( gamma_move(board, 1, 1, 23) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 11, 9) == 0 );
assert( gamma_move(board, 3, 11, 2) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 16, 5) == 0 );
assert( gamma_move(board, 1, 4, 8) == 0 );
assert( gamma_move(board, 1, 4, 3) == 0 );
assert( gamma_busy_fields(board, 1) == 52 );
assert( gamma_move(board, 2, 11, 17) == 0 );
assert( gamma_move(board, 2, 20, 10) == 1 );
assert( gamma_move(board, 3, 6, 18) == 0 );
assert( gamma_free_fields(board, 3) == 197 );
assert( gamma_move(board, 4, 1, 16) == 0 );
assert( gamma_move(board, 4, 0, 2) == 0 );
assert( gamma_move(board, 1, 10, 5) == 1 );
assert( gamma_move(board, 1, 18, 2) == 1 );
assert( gamma_busy_fields(board, 1) == 54 );
assert( gamma_free_fields(board, 1) == 195 );
assert( gamma_move(board, 2, 10, 10) == 0 );
assert( gamma_move(board, 4, 0, 7) == 1 );
assert( gamma_move(board, 1, 14, 21) == 0 );
assert( gamma_move(board, 1, 7, 9) == 0 );
assert( gamma_move(board, 2, 10, 1) == 0 );
assert( gamma_move(board, 2, 5, 5) == 0 );
assert( gamma_move(board, 3, 12, 19) == 0 );
assert( gamma_move(board, 4, 5, 14) == 1 );
assert( gamma_move(board, 1, 2, 14) == 0 );
assert( gamma_move(board, 1, 14, 9) == 0 );
assert( gamma_move(board, 2, 3, 4) == 1 );
assert( gamma_golden_move(board, 2, 2, 5) == 0 );
assert( gamma_move(board, 3, 3, 22) == 0 );
assert( gamma_move(board, 3, 18, 11) == 0 );
assert( gamma_move(board, 4, 4, 20) == 0 );
assert( gamma_move(board, 4, 20, 1) == 0 );
assert( gamma_free_fields(board, 1) == 192 );
assert( gamma_move(board, 2, 4, 15) == 0 );
assert( gamma_free_fields(board, 2) == 192 );
assert( gamma_move(board, 3, 0, 6) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 14, 12) == 0 );
assert( gamma_move(board, 1, 17, 6) == 1 );
assert( gamma_move(board, 2, 4, 15) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );


char* board611008605 = gamma_board(board);
assert( board611008605 != NULL );
assert( strcmp(board611008605, 
".34...414.213...32..1.31\n"
".1..22.414144..424.22.2.\n"
"31114424..11..21411.1.4.\n"
".2434.....2.....2.......\n"
"1.12..4.3.4.2.2.44...4..\n"
"33..42.41..211..3.1.....\n"
"4...433..2334.......2.21\n"
"4.13.32133.1332.3.4.2..3\n"
"..141.333321432....3.211\n"
"41..11342.4231......1...\n"
"4.1.3.4...22.2.211.3....\n"
".3.4.4....123.4...3..1.2\n"
"4242...4.1....1.3.3...3.\n"
"...43223.33..2.41.3.3...\n"
"1313111.4.3344.33.1.2.43\n"
"43.21.323324.222......2.\n"
"42.4.41.41.1...3412..4.3\n") == 0);
free(board611008605);
board611008605 = NULL;
assert( gamma_move(board, 3, 3, 11) == 1 );
assert( gamma_move(board, 3, 10, 16) == 0 );
assert( gamma_move(board, 4, 21, 12) == 0 );
assert( gamma_move(board, 4, 17, 8) == 0 );


char* board474652995 = gamma_board(board);
assert( board474652995 != NULL );
assert( strcmp(board474652995, 
".34...414.213...32..1.31\n"
".1..22.414144..424.22.2.\n"
"31114424..11..21411.1.4.\n"
".2434.....2.....2.......\n"
"1.12..4.3.4.2.2.44...4..\n"
"33.342.41..211..3.1.....\n"
"4...433..2334.......2.21\n"
"4.13.32133.1332.3.4.2..3\n"
"..141.333321432....3.211\n"
"41..11342.4231......1...\n"
"4.1.3.4...22.2.211.3....\n"
".3.4.4....123.4...3..1.2\n"
"4242...4.1....1.3.3...3.\n"
"...43223.33..2.41.3.3...\n"
"1313111.4.3344.33.1.2.43\n"
"43.21.323324.222......2.\n"
"42.4.41.41.1...3412..4.3\n") == 0);
free(board474652995);
board474652995 = NULL;
assert( gamma_move(board, 1, 7, 8) == 0 );
assert( gamma_move(board, 1, 0, 8) == 1 );
assert( gamma_free_fields(board, 1) == 189 );
assert( gamma_move(board, 2, 13, 7) == 0 );
assert( gamma_move(board, 2, 20, 3) == 0 );
assert( gamma_move(board, 3, 3, 11) == 0 );
assert( gamma_busy_fields(board, 3) == 58 );
assert( gamma_golden_possible(board, 3) == 1 );


char* board489839967 = gamma_board(board);
assert( board489839967 != NULL );
assert( strcmp(board489839967, 
".34...414.213...32..1.31\n"
".1..22.414144..424.22.2.\n"
"31114424..11..21411.1.4.\n"
".2434.....2.....2.......\n"
"1.12..4.3.4.2.2.44...4..\n"
"33.342.41..211..3.1.....\n"
"4...433..2334.......2.21\n"
"4.13.32133.1332.3.4.2..3\n"
"1.141.333321432....3.211\n"
"41..11342.4231......1...\n"
"4.1.3.4...22.2.211.3....\n"
".3.4.4....123.4...3..1.2\n"
"4242...4.1....1.3.3...3.\n"
"...43223.33..2.41.3.3...\n"
"1313111.4.3344.33.1.2.43\n"
"43.21.323324.222......2.\n"
"42.4.41.41.1...3412..4.3\n") == 0);
free(board489839967);
board489839967 = NULL;
assert( gamma_move(board, 4, 5, 11) == 0 );
assert( gamma_move(board, 1, 4, 15) == 0 );
assert( gamma_move(board, 1, 14, 9) == 0 );
assert( gamma_move(board, 2, 15, 21) == 0 );
assert( gamma_move(board, 3, 16, 1) == 1 );
assert( gamma_move(board, 3, 21, 13) == 1 );
assert( gamma_move(board, 4, 0, 20) == 0 );
assert( gamma_move(board, 1, 1, 20) == 0 );
assert( gamma_move(board, 2, 23, 5) == 0 );
assert( gamma_move(board, 2, 9, 4) == 0 );
assert( gamma_free_fields(board, 2) == 187 );
assert( gamma_move(board, 4, 12, 11) == 0 );
assert( gamma_move(board, 4, 17, 16) == 0 );
assert( gamma_move(board, 1, 10, 8) == 0 );
assert( gamma_move(board, 2, 14, 9) == 0 );
assert( gamma_move(board, 2, 23, 7) == 1 );
assert( gamma_busy_fields(board, 2) == 51 );
assert( gamma_move(board, 3, 6, 21) == 0 );
assert( gamma_move(board, 3, 17, 9) == 1 );
assert( gamma_busy_fields(board, 3) == 61 );
assert( gamma_move(board, 4, 9, 10) == 0 );
assert( gamma_move(board, 4, 3, 8) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 11, 21) == 0 );
assert( gamma_move(board, 2, 4, 10) == 0 );
assert( gamma_move(board, 3, 6, 5) == 1 );
assert( gamma_move(board, 3, 23, 0) == 0 );
assert( gamma_golden_move(board, 3, 3, 15) == 0 );
assert( gamma_move(board, 4, 13, 19) == 0 );
assert( gamma_move(board, 4, 9, 3) == 0 );
assert( gamma_move(board, 1, 10, 17) == 0 );
assert( gamma_move(board, 2, 10, 21) == 0 );
assert( gamma_move(board, 3, 17, 12) == 0 );
assert( gamma_move(board, 3, 6, 13) == 1 );
assert( gamma_move(board, 4, 3, 19) == 0 );
assert( gamma_move(board, 4, 1, 11) == 0 );
assert( gamma_move(board, 1, 3, 12) == 0 );
assert( gamma_move(board, 1, 10, 0) == 1 );
assert( gamma_move(board, 2, 5, 0) == 0 );
assert( gamma_move(board, 2, 1, 8) == 1 );
assert( gamma_move(board, 3, 15, 13) == 1 );
assert( gamma_move(board, 3, 4, 5) == 1 );
assert( gamma_move(board, 4, 6, 21) == 0 );
assert( gamma_move(board, 4, 21, 15) == 0 );
assert( gamma_move(board, 1, 11, 22) == 0 );
assert( gamma_move(board, 1, 12, 12) == 0 );
assert( gamma_move(board, 2, 12, 22) == 0 );
assert( gamma_free_fields(board, 2) == 179 );
assert( gamma_move(board, 3, 23, 5) == 0 );
assert( gamma_move(board, 3, 10, 13) == 0 );
assert( gamma_move(board, 4, 10, 16) == 0 );
assert( gamma_move(board, 1, 12, 5) == 0 );
assert( gamma_free_fields(board, 1) == 179 );
assert( gamma_move(board, 2, 11, 22) == 0 );
assert( gamma_move(board, 2, 1, 6) == 1 );
assert( gamma_busy_fields(board, 2) == 53 );
assert( gamma_move(board, 3, 1, 21) == 0 );
assert( gamma_move(board, 4, 1, 4) == 0 );
assert( gamma_move(board, 1, 5, 2) == 0 );
assert( gamma_move(board, 1, 7, 1) == 0 );
assert( gamma_busy_fields(board, 1) == 57 );
assert( gamma_move(board, 2, 5, 1) == 1 );
assert( gamma_move(board, 4, 3, 22) == 0 );
assert( gamma_move(board, 4, 12, 4) == 0 );
assert( gamma_move(board, 1, 0, 22) == 0 );
assert( gamma_busy_fields(board, 1) == 57 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 3, 19, 8) == 0 );
assert( gamma_move(board, 3, 15, 14) == 0 );
assert( gamma_move(board, 4, 4, 6) == 0 );
assert( gamma_free_fields(board, 4) == 72 );


char* board807115101 = gamma_board(board);
assert( board807115101 != NULL );
assert( strcmp(board807115101, 
".34...414.213...32..1.31\n"
".1..22.414144..424.22.2.\n"
"31114424..11..21411.1.4.\n"
".2434.3...2....32....3..\n"
"1.12..4.3.4.2.2.44...4..\n"
"33.342.41..211..3.1.....\n"
"4...433..2334.......2.21\n"
"4.13.32133.1332.334.2..3\n"
"12141.333321432....3.211\n"
"41..11342.4231......1..2\n"
"421.3.4...22.2.211.3....\n"
".3.4343...123.4...3..1.2\n"
"4242...4.1....1.3.3...3.\n"
"...43223.33..2.41.3.3...\n"
"1313111.4.3344.33.1.2.43\n"
"43.212323324.2223.....2.\n"
"42.4.41.4111...3412..4.3\n") == 0);
free(board807115101);
board807115101 = NULL;
assert( gamma_move(board, 1, 16, 4) == 0 );
assert( gamma_free_fields(board, 1) == 177 );
assert( gamma_move(board, 2, 2, 7) == 1 );
assert( gamma_move(board, 2, 3, 13) == 0 );
assert( gamma_golden_move(board, 2, 11, 10) == 1 );
assert( gamma_move(board, 3, 4, 15) == 0 );
assert( gamma_busy_fields(board, 3) == 64 );
assert( gamma_move(board, 1, 15, 21) == 0 );
assert( gamma_move(board, 1, 2, 7) == 0 );
assert( gamma_free_fields(board, 1) == 176 );
assert( gamma_move(board, 2, 10, 8) == 0 );
assert( gamma_move(board, 2, 4, 10) == 0 );
assert( gamma_move(board, 3, 11, 6) == 0 );
assert( gamma_move(board, 3, 12, 8) == 0 );
assert( gamma_busy_fields(board, 3) == 64 );
assert( gamma_free_fields(board, 3) == 176 );
assert( gamma_golden_possible(board, 3) == 1 );


char* board222208348 = gamma_board(board);
assert( board222208348 != NULL );
assert( strcmp(board222208348, 
".34...414.213...32..1.31\n"
".1..22.414144..424.22.2.\n"
"31114424..11..21411.1.4.\n"
".2434.3...2....32....3..\n"
"1.12..4.3.4.2.2.44...4..\n"
"33.342.41..211..3.1.....\n"
"4...433..2324.......2.21\n"
"4.13.32133.1332.334.2..3\n"
"12141.333321432....3.211\n"
"412.11342.4231......1..2\n"
"421.3.4...22.2.211.3....\n"
".3.4343...123.4...3..1.2\n"
"4242...4.1....1.3.3...3.\n"
"...43223.33..2.41.3.3...\n"
"1313111.4.3344.33.1.2.43\n"
"43.212323324.2223.....2.\n"
"42.4.41.4111...3412..4.3\n") == 0);
free(board222208348);
board222208348 = NULL;
assert( gamma_move(board, 4, 6, 8) == 0 );
assert( gamma_move(board, 4, 1, 7) == 0 );
assert( gamma_move(board, 1, 16, 19) == 0 );
assert( gamma_move(board, 2, 9, 22) == 0 );
assert( gamma_move(board, 2, 14, 11) == 1 );
assert( gamma_move(board, 3, 13, 14) == 1 );
assert( gamma_move(board, 4, 3, 22) == 0 );
assert( gamma_move(board, 4, 18, 7) == 0 );
assert( gamma_golden_move(board, 4, 7, 6) == 0 );
assert( gamma_move(board, 1, 4, 1) == 0 );
assert( gamma_move(board, 2, 3, 11) == 0 );
assert( gamma_move(board, 2, 0, 14) == 0 );
assert( gamma_move(board, 3, 12, 7) == 0 );
assert( gamma_golden_move(board, 3, 16, 20) == 0 );
assert( gamma_move(board, 4, 3, 2) == 0 );
assert( gamma_move(board, 1, 7, 15) == 0 );
assert( gamma_move(board, 1, 5, 11) == 0 );
assert( gamma_move(board, 2, 4, 10) == 0 );
assert( gamma_move(board, 2, 15, 13) == 0 );
assert( gamma_move(board, 3, 10, 14) == 0 );
assert( gamma_move(board, 4, 4, 8) == 0 );
assert( gamma_move(board, 4, 19, 2) == 0 );
assert( gamma_move(board, 1, 1, 9) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 15, 2) == 0 );
assert( gamma_move(board, 3, 18, 7) == 1 );
assert( gamma_move(board, 1, 23, 16) == 0 );
assert( gamma_move(board, 1, 15, 4) == 1 );
assert( gamma_move(board, 2, 13, 7) == 0 );
assert( gamma_move(board, 2, 1, 3) == 1 );
assert( gamma_move(board, 3, 14, 5) == 0 );
assert( gamma_move(board, 3, 7, 5) == 1 );
assert( gamma_golden_move(board, 3, 0, 8) == 1 );
assert( gamma_move(board, 4, 3, 17) == 0 );
assert( gamma_move(board, 4, 2, 9) == 0 );
assert( gamma_move(board, 1, 22, 3) == 1 );
assert( gamma_move(board, 1, 15, 3) == 0 );
assert( gamma_move(board, 2, 18, 15) == 1 );
assert( gamma_move(board, 2, 9, 11) == 1 );
assert( gamma_move(board, 4, 12, 1) == 1 );
assert( gamma_move(board, 4, 8, 1) == 0 );
assert( gamma_move(board, 1, 10, 2) == 0 );
assert( gamma_move(board, 1, 2, 9) == 0 );
assert( gamma_busy_fields(board, 1) == 59 );
assert( gamma_move(board, 2, 10, 13) == 0 );
assert( gamma_move(board, 2, 19, 2) == 1 );
assert( gamma_move(board, 3, 10, 3) == 0 );
assert( gamma_move(board, 3, 18, 15) == 0 );
assert( gamma_move(board, 4, 22, 12) == 1 );
assert( gamma_move(board, 4, 7, 13) == 1 );
assert( gamma_move(board, 1, 9, 15) == 0 );
assert( gamma_move(board, 3, 10, 1) == 0 );
assert( gamma_move(board, 4, 7, 21) == 0 );
assert( gamma_move(board, 1, 2, 7) == 0 );
assert( gamma_move(board, 1, 6, 10) == 0 );
assert( gamma_free_fields(board, 1) == 162 );
assert( gamma_golden_move(board, 1, 13, 21) == 0 );
assert( gamma_move(board, 2, 3, 8) == 0 );
assert( gamma_move(board, 3, 12, 6) == 1 );
assert( gamma_move(board, 3, 6, 11) == 1 );
assert( gamma_free_fields(board, 3) == 160 );
assert( gamma_move(board, 4, 16, 14) == 0 );
assert( gamma_move(board, 1, 9, 4) == 0 );
assert( gamma_move(board, 2, 14, 8) == 0 );


char* board323878238 = gamma_board(board);
assert( board323878238 != NULL );
assert( strcmp(board323878238, 
".34...414.213...32..1.31\n"
".1..22.414144..424222.2.\n"
"31114424..11.321411.1.4.\n"
".2434.34..2....32....3..\n"
"1.12..4.3.4.2.2.44...44.\n"
"33.3423412.2112.3.1.....\n"
"4...433..2324.......2.21\n"
"4113.32133.1332.334.2..3\n"
"32141.333321432....3.211\n"
"412.11342.4231....3.1..2\n"
"421.3.4...2232.211.3....\n"
".3.43433..123.4...3..1.2\n"
"4242...4.1....113.3...3.\n"
".2.43223.33..2.41.3.3.1.\n"
"1313111.4.3344.33.122.43\n"
"43.21232332442223.....2.\n"
"42.4.41.4111...3412..4.3\n") == 0);
free(board323878238);
board323878238 = NULL;
assert( gamma_move(board, 3, 13, 4) == 1 );
assert( gamma_move(board, 4, 16, 4) == 0 );
assert( gamma_move(board, 4, 15, 4) == 0 );
assert( gamma_move(board, 1, 11, 15) == 0 );
assert( gamma_move(board, 1, 23, 12) == 1 );
assert( gamma_move(board, 2, 10, 8) == 0 );
assert( gamma_move(board, 3, 7, 21) == 0 );
assert( gamma_move(board, 3, 20, 2) == 0 );
assert( gamma_move(board, 4, 10, 6) == 0 );
assert( gamma_busy_fields(board, 4) == 58 );


char* board655270167 = gamma_board(board);
assert( board655270167 != NULL );
assert( strcmp(board655270167, 
".34...414.213...32..1.31\n"
".1..22.414144..424222.2.\n"
"31114424..11.321411.1.4.\n"
".2434.34..2....32....3..\n"
"1.12..4.3.4.2.2.44...441\n"
"33.3423412.2112.3.1.....\n"
"4...433..2324.......2.21\n"
"4113.32133.1332.334.2..3\n"
"32141.333321432....3.211\n"
"412.11342.4231....3.1..2\n"
"421.3.4...2232.211.3....\n"
".3.43433..123.4...3..1.2\n"
"4242...4.1...3113.3...3.\n"
".2.43223.33..2.41.3.3.1.\n"
"1313111.4.3344.33.122.43\n"
"43.21232332442223.....2.\n"
"42.4.41.4111...3412..4.3\n") == 0);
free(board655270167);
board655270167 = NULL;
assert( gamma_move(board, 1, 8, 2) == 0 );
assert( gamma_move(board, 2, 4, 5) == 0 );
assert( gamma_move(board, 2, 1, 5) == 0 );
assert( gamma_move(board, 3, 16, 18) == 0 );
assert( gamma_golden_move(board, 3, 6, 4) == 0 );
assert( gamma_move(board, 4, 5, 19) == 0 );
assert( gamma_golden_move(board, 4, 6, 1) == 1 );
assert( gamma_move(board, 1, 21, 4) == 1 );
assert( gamma_move(board, 1, 15, 13) == 0 );
assert( gamma_move(board, 2, 3, 12) == 0 );
assert( gamma_move(board, 2, 3, 6) == 0 );
assert( gamma_move(board, 3, 13, 7) == 0 );


char* board668350382 = gamma_board(board);
assert( board668350382 != NULL );
assert( strcmp(board668350382, 
".34...414.213...32..1.31\n"
".1..22.414144..424222.2.\n"
"31114424..11.321411.1.4.\n"
".2434.34..2....32....3..\n"
"1.12..4.3.4.2.2.44...441\n"
"33.3423412.2112.3.1.....\n"
"4...433..2324.......2.21\n"
"4113.32133.1332.334.2..3\n"
"32141.333321432....3.211\n"
"412.11342.4231....3.1..2\n"
"421.3.4...2232.211.3....\n"
".3.43433..123.4...3..1.2\n"
"4242...4.1...3113.3..13.\n"
".2.43223.33..2.41.3.3.1.\n"
"1313111.4.3344.33.122.43\n"
"43.21242332442223.....2.\n"
"42.4.41.4111...3412..4.3\n") == 0);
free(board668350382);
board668350382 = NULL;
assert( gamma_move(board, 4, 12, 0) == 1 );
assert( gamma_move(board, 1, 13, 22) == 0 );
assert( gamma_busy_fields(board, 1) == 61 );
assert( gamma_move(board, 3, 12, 15) == 0 );
assert( gamma_move(board, 4, 0, 14) == 0 );
assert( gamma_move(board, 4, 7, 11) == 0 );
assert( gamma_move(board, 1, 10, 14) == 0 );
assert( gamma_move(board, 1, 10, 11) == 1 );
assert( gamma_move(board, 2, 6, 14) == 0 );
assert( gamma_move(board, 3, 6, 7) == 0 );
assert( gamma_move(board, 4, 20, 0) == 1 );
assert( gamma_golden_possible(board, 4) == 0 );


char* board761540180 = gamma_board(board);
assert( board761540180 != NULL );
assert( strcmp(board761540180, 
".34...414.213...32..1.31\n"
".1..22.414144..424222.2.\n"
"31114424..11.321411.1.4.\n"
".2434.34..2....32....3..\n"
"1.12..4.3.4.2.2.44...441\n"
"33.342341212112.3.1.....\n"
"4...433..2324.......2.21\n"
"4113.32133.1332.334.2..3\n"
"32141.333321432....3.211\n"
"412.11342.4231....3.1..2\n"
"421.3.4...2232.211.3....\n"
".3.43433..123.4...3..1.2\n"
"4242...4.1...3113.3..13.\n"
".2.43223.33..2.41.3.3.1.\n"
"1313111.4.3344.33.122.43\n"
"43.21242332442223.....2.\n"
"42.4.41.41114..3412.44.3\n") == 0);
free(board761540180);
board761540180 = NULL;
assert( gamma_move(board, 1, 4, 19) == 0 );
assert( gamma_move(board, 2, 4, 6) == 0 );


char* board555996335 = gamma_board(board);
assert( board555996335 != NULL );
assert( strcmp(board555996335, 
".34...414.213...32..1.31\n"
".1..22.414144..424222.2.\n"
"31114424..11.321411.1.4.\n"
".2434.34..2....32....3..\n"
"1.12..4.3.4.2.2.44...441\n"
"33.342341212112.3.1.....\n"
"4...433..2324.......2.21\n"
"4113.32133.1332.334.2..3\n"
"32141.333321432....3.211\n"
"412.11342.4231....3.1..2\n"
"421.3.4...2232.211.3....\n"
".3.43433..123.4...3..1.2\n"
"4242...4.1...3113.3..13.\n"
".2.43223.33..2.41.3.3.1.\n"
"1313111.4.3344.33.122.43\n"
"43.21242332442223.....2.\n"
"42.4.41.41114..3412.44.3\n") == 0);
free(board555996335);
board555996335 = NULL;
assert( gamma_move(board, 3, 2, 2) == 0 );
assert( gamma_busy_fields(board, 3) == 70 );
assert( gamma_move(board, 4, 1, 21) == 0 );
assert( gamma_move(board, 2, 0, 11) == 0 );
assert( gamma_move(board, 2, 1, 5) == 0 );
assert( gamma_free_fields(board, 2) == 76 );


char* board404614166 = gamma_board(board);
assert( board404614166 != NULL );
assert( strcmp(board404614166, 
".34...414.213...32..1.31\n"
".1..22.414144..424222.2.\n"
"31114424..11.321411.1.4.\n"
".2434.34..2....32....3..\n"
"1.12..4.3.4.2.2.44...441\n"
"33.342341212112.3.1.....\n"
"4...433..2324.......2.21\n"
"4113.32133.1332.334.2..3\n"
"32141.333321432....3.211\n"
"412.11342.4231....3.1..2\n"
"421.3.4...2232.211.3....\n"
".3.43433..123.4...3..1.2\n"
"4242...4.1...3113.3..13.\n"
".2.43223.33..2.41.3.3.1.\n"
"1313111.4.3344.33.122.43\n"
"43.21242332442223.....2.\n"
"42.4.41.41114..3412.44.3\n") == 0);
free(board404614166);
board404614166 = NULL;
assert( gamma_move(board, 3, 7, 6) == 1 );
assert( gamma_free_fields(board, 3) == 153 );
assert( gamma_move(board, 4, 4, 8) == 0 );
assert( gamma_move(board, 1, 0, 4) == 0 );
assert( gamma_free_fields(board, 1) == 153 );
assert( gamma_move(board, 2, 7, 8) == 0 );
assert( gamma_move(board, 2, 10, 5) == 0 );
assert( gamma_move(board, 3, 2, 21) == 0 );
assert( gamma_golden_move(board, 3, 15, 8) == 0 );
assert( gamma_move(board, 4, 8, 17) == 0 );
assert( gamma_move(board, 4, 0, 11) == 0 );
assert( gamma_move(board, 1, 7, 19) == 0 );
assert( gamma_move(board, 2, 23, 6) == 1 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 3, 3) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 7, 9) == 0 );
assert( gamma_move(board, 4, 10, 10) == 0 );
assert( gamma_move(board, 1, 6, 18) == 0 );
assert( gamma_move(board, 2, 13, 8) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 19, 16) == 1 );
assert( gamma_move(board, 1, 13, 22) == 0 );
assert( gamma_move(board, 1, 16, 6) == 0 );
assert( gamma_free_fields(board, 1) == 151 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 5, 16) == 1 );
assert( gamma_move(board, 2, 3, 11) == 0 );
assert( gamma_move(board, 3, 15, 21) == 0 );
assert( gamma_move(board, 3, 2, 13) == 0 );
assert( gamma_move(board, 4, 16, 16) == 0 );
assert( gamma_move(board, 4, 13, 2) == 0 );
assert( gamma_busy_fields(board, 4) == 61 );
assert( gamma_move(board, 1, 9, 19) == 0 );
assert( gamma_move(board, 2, 15, 23) == 0 );
assert( gamma_move(board, 3, 16, 9) == 0 );
assert( gamma_move(board, 3, 22, 12) == 0 );
assert( gamma_move(board, 4, 4, 5) == 0 );
assert( gamma_move(board, 1, 13, 14) == 0 );
assert( gamma_move(board, 3, 13, 2) == 0 );
assert( gamma_move(board, 3, 22, 14) == 0 );
assert( gamma_move(board, 4, 3, 23) == 0 );
assert( gamma_move(board, 4, 23, 15) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 1, 5, 14) == 0 );
assert( gamma_move(board, 1, 5, 4) == 1 );
assert( gamma_move(board, 2, 5, 15) == 0 );
assert( gamma_move(board, 3, 20, 1) == 0 );
assert( gamma_move(board, 4, 8, 2) == 0 );
assert( gamma_move(board, 1, 11, 2) == 0 );
assert( gamma_move(board, 2, 3, 8) == 0 );
assert( gamma_move(board, 2, 1, 10) == 1 );
assert( gamma_move(board, 3, 13, 22) == 0 );
assert( gamma_move(board, 4, 7, 17) == 0 );
assert( gamma_move(board, 1, 12, 18) == 0 );
assert( gamma_move(board, 1, 12, 8) == 0 );
assert( gamma_move(board, 2, 7, 19) == 0 );
assert( gamma_move(board, 2, 4, 11) == 0 );
assert( gamma_move(board, 3, 4, 14) == 0 );
assert( gamma_move(board, 4, 6, 6) == 0 );
assert( gamma_busy_fields(board, 4) == 61 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 1, 16, 21) == 0 );
assert( gamma_move(board, 1, 13, 0) == 1 );
assert( gamma_move(board, 2, 9, 16) == 1 );
assert( gamma_move(board, 3, 5, 1) == 0 );
assert( gamma_move(board, 4, 4, 10) == 0 );
assert( gamma_move(board, 4, 19, 0) == 1 );
assert( gamma_move(board, 2, 4, 23) == 0 );
assert( gamma_move(board, 3, 1, 20) == 0 );
assert( gamma_move(board, 3, 7, 3) == 0 );
assert( gamma_free_fields(board, 3) == 78 );
assert( gamma_move(board, 4, 6, 21) == 0 );
assert( gamma_move(board, 1, 2, 9) == 0 );
assert( gamma_move(board, 1, 13, 7) == 0 );
assert( gamma_move(board, 2, 13, 13) == 0 );
assert( gamma_move(board, 3, 14, 9) == 0 );
assert( gamma_move(board, 3, 8, 5) == 1 );
assert( gamma_busy_fields(board, 1) == 64 );
assert( gamma_move(board, 2, 9, 15) == 0 );
assert( gamma_move(board, 3, 14, 8) == 0 );
assert( gamma_move(board, 3, 1, 13) == 0 );
assert( gamma_move(board, 4, 1, 3) == 0 );
assert( gamma_move(board, 1, 10, 19) == 0 );
assert( gamma_move(board, 2, 10, 2) == 0 );
assert( gamma_move(board, 2, 21, 7) == 1 );
assert( gamma_move(board, 3, 13, 8) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 12, 4) == 0 );
assert( gamma_move(board, 4, 14, 0) == 0 );
assert( gamma_move(board, 2, 16, 4) == 0 );
assert( gamma_move(board, 2, 18, 2) == 0 );
assert( gamma_move(board, 3, 21, 1) == 0 );
assert( gamma_move(board, 4, 11, 19) == 0 );
assert( gamma_free_fields(board, 4) == 60 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 1, 12, 18) == 0 );
assert( gamma_move(board, 2, 15, 13) == 0 );
assert( gamma_move(board, 3, 14, 12) == 0 );
assert( gamma_free_fields(board, 4) == 60 );
assert( gamma_move(board, 1, 12, 1) == 0 );
assert( gamma_busy_fields(board, 1) == 64 );
assert( gamma_move(board, 2, 10, 14) == 0 );
assert( gamma_move(board, 3, 14, 9) == 0 );
assert( gamma_move(board, 3, 0, 1) == 0 );
assert( gamma_move(board, 4, 14, 8) == 0 );
assert( gamma_move(board, 1, 8, 15) == 0 );
assert( gamma_move(board, 1, 10, 4) == 1 );
assert( gamma_move(board, 2, 4, 19) == 0 );
assert( gamma_move(board, 2, 3, 1) == 0 );
assert( gamma_move(board, 3, 15, 3) == 0 );
assert( gamma_move(board, 3, 23, 10) == 0 );
assert( gamma_move(board, 4, 18, 14) == 0 );
assert( gamma_move(board, 4, 11, 8) == 0 );
assert( gamma_move(board, 1, 1, 20) == 0 );
assert( gamma_move(board, 2, 11, 16) == 0 );
assert( gamma_free_fields(board, 2) == 71 );
assert( gamma_move(board, 3, 12, 5) == 0 );


char* board411933721 = gamma_board(board);
assert( board411933721 != NULL );
assert( strcmp(board411933721, 
".34..24142213...32.31.31\n"
".1..22.414144..424222.2.\n"
"31114424..11.321411.1.4.\n"
".2434.34..2....32....3..\n"
"1.12..4.3.4.2.2.44...441\n"
"33.342341212112.3.1.....\n"
"42..433..2324.......2.21\n"
"4113.32133.1332.334.2..3\n"
"32141.333321432....3.211\n"
"412.11342.4231....3.12.2\n"
"421.3.43..2232.211.3...2\n"
".3.434333.123.4...3..1.2\n"
"4242.1.4.11..3113.3..13.\n"
".2.43223.33..2.41.3.3.1.\n"
"1313111.4.3344.33.122.43\n"
"43.21242332442223.....2.\n"
"42.4.41.411141.3412444.3\n") == 0);
free(board411933721);
board411933721 = NULL;
assert( gamma_move(board, 4, 12, 19) == 0 );
assert( gamma_move(board, 2, 6, 10) == 0 );
assert( gamma_move(board, 3, 10, 14) == 0 );
assert( gamma_move(board, 4, 0, 2) == 0 );
assert( gamma_move(board, 4, 23, 13) == 0 );
assert( gamma_busy_fields(board, 4) == 62 );
assert( gamma_move(board, 1, 7, 14) == 0 );
assert( gamma_move(board, 2, 22, 15) == 0 );
assert( gamma_free_fields(board, 2) == 71 );
assert( gamma_move(board, 3, 7, 13) == 0 );
assert( gamma_busy_fields(board, 3) == 73 );
assert( gamma_move(board, 4, 11, 19) == 0 );
assert( gamma_move(board, 1, 14, 21) == 0 );
assert( gamma_move(board, 1, 23, 10) == 0 );
assert( gamma_move(board, 2, 10, 16) == 0 );
assert( gamma_move(board, 2, 11, 7) == 0 );
assert( gamma_free_fields(board, 2) == 71 );
assert( gamma_move(board, 4, 12, 19) == 0 );
assert( gamma_move(board, 1, 9, 5) == 1 );
assert( gamma_move(board, 1, 12, 6) == 0 );
assert( gamma_move(board, 2, 15, 13) == 0 );
assert( gamma_move(board, 3, 10, 3) == 0 );
assert( gamma_free_fields(board, 3) == 77 );
assert( gamma_move(board, 4, 13, 22) == 0 );
assert( gamma_move(board, 4, 16, 3) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 1, 4, 6) == 0 );
assert( gamma_move(board, 1, 23, 7) == 0 );
assert( gamma_busy_fields(board, 2) == 66 );
assert( gamma_move(board, 3, 8, 6) == 1 );
assert( gamma_move(board, 4, 15, 13) == 0 );
assert( gamma_free_fields(board, 4) == 60 );
assert( gamma_move(board, 1, 22, 5) == 1 );
assert( gamma_move(board, 2, 9, 15) == 0 );
assert( gamma_move(board, 2, 22, 0) == 1 );
assert( gamma_move(board, 3, 5, 17) == 0 );
assert( gamma_move(board, 3, 13, 3) == 0 );


char* board126464543 = gamma_board(board);
assert( board126464543 != NULL );
assert( strcmp(board126464543, 
".34..24142213...32.31.31\n"
".1..22.414144..424222.2.\n"
"31114424..11.321411.1.4.\n"
".2434.34..2....32....3..\n"
"1.12..4.3.4.2.2.44...441\n"
"33.342341212112.3.1.....\n"
"42..433..2324.......2.21\n"
"4113.32133.1332.334.2..3\n"
"32141.333321432....3.211\n"
"412.11342.4231....3.12.2\n"
"421.3.433.2232.211.3...2\n"
".3.4343331123.4...3..112\n"
"4242.1.4.11..3113.3..13.\n"
".2.43223.33..2.41.3.3.1.\n"
"1313111.4.3344.33.122.43\n"
"43.21242332442223.....2.\n"
"42.4.41.411141.341244423\n") == 0);
free(board126464543);
board126464543 = NULL;
assert( gamma_move(board, 4, 22, 11) == 1 );
assert( gamma_move(board, 1, 1, 23) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 8, 5) == 0 );
assert( gamma_move(board, 3, 9, 15) == 0 );
assert( gamma_move(board, 4, 7, 3) == 0 );
assert( gamma_move(board, 1, 0, 15) == 1 );
assert( gamma_move(board, 1, 0, 7) == 0 );
assert( gamma_move(board, 2, 10, 21) == 0 );
assert( gamma_move(board, 2, 6, 3) == 0 );
assert( gamma_move(board, 3, 8, 13) == 1 );
assert( gamma_move(board, 4, 12, 9) == 0 );
assert( gamma_move(board, 1, 15, 21) == 0 );
assert( gamma_free_fields(board, 1) == 135 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 3, 12) == 0 );
assert( gamma_move(board, 3, 10, 15) == 0 );
assert( gamma_move(board, 3, 11, 15) == 0 );
assert( gamma_move(board, 4, 3, 12) == 0 );
assert( gamma_free_fields(board, 4) == 58 );
assert( gamma_move(board, 1, 7, 19) == 0 );
assert( gamma_move(board, 2, 0, 4) == 0 );
assert( gamma_move(board, 2, 9, 2) == 0 );


char* board487998583 = gamma_board(board);
assert( board487998583 != NULL );
assert( strcmp(board487998583, 
".34..24142213...32.31.31\n"
"11..22.414144..424222.2.\n"
"31114424..11.321411.1.4.\n"
".2434.343.2....32....3..\n"
"1.12..4.3.4.2.2.44...441\n"
"33.342341212112.3.1...4.\n"
"42..433..2324.......2.21\n"
"4113.32133.1332.334.2..3\n"
"32141.333321432....3.211\n"
"412.11342.4231....3.12.2\n"
"421.3.433.2232.211.3...2\n"
".3.4343331123.4...3..112\n"
"4242.1.4.11..3113.3..13.\n"
".2.43223.33..2.41.3.3.1.\n"
"1313111.4.3344.33.122.43\n"
"43.21242332442223.....2.\n"
"42.4.41.411141.341244423\n") == 0);
free(board487998583);
board487998583 = NULL;
assert( gamma_move(board, 3, 4, 8) == 0 );
assert( gamma_move(board, 3, 21, 13) == 0 );
assert( gamma_busy_fields(board, 3) == 75 );
assert( gamma_move(board, 4, 8, 18) == 0 );
assert( gamma_move(board, 1, 10, 8) == 0 );
assert( gamma_move(board, 2, 11, 23) == 0 );
assert( gamma_move(board, 2, 9, 2) == 0 );
assert( gamma_move(board, 3, 3, 2) == 0 );
assert( gamma_move(board, 3, 12, 8) == 0 );
assert( gamma_move(board, 4, 9, 19) == 0 );
assert( gamma_move(board, 4, 23, 16) == 0 );
assert( gamma_busy_fields(board, 4) == 63 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 13, 11) == 0 );
assert( gamma_move(board, 2, 18, 4) == 0 );
assert( gamma_busy_fields(board, 2) == 67 );
assert( gamma_move(board, 3, 11, 13) == 0 );
assert( gamma_move(board, 3, 11, 9) == 0 );
assert( gamma_busy_fields(board, 3) == 75 );
assert( gamma_move(board, 4, 5, 13) == 1 );
assert( gamma_move(board, 1, 8, 15) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 1, 2) == 0 );
assert( gamma_move(board, 3, 7, 9) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 9, 22) == 0 );
assert( gamma_move(board, 4, 13, 12) == 0 );
assert( gamma_move(board, 1, 3, 17) == 0 );
assert( gamma_move(board, 1, 23, 3) == 1 );
assert( gamma_move(board, 2, 16, 12) == 0 );
assert( gamma_move(board, 3, 16, 0) == 0 );
assert( gamma_move(board, 3, 2, 12) == 0 );


char* board909333748 = gamma_board(board);
assert( board909333748 != NULL );
assert( strcmp(board909333748, 
".34..24142213...32.31.31\n"
"11..22.414144..424222.2.\n"
"31114424..11.321411.1.4.\n"
".24344343.2....32....3..\n"
"1.12..4.3.4.2.2.44...441\n"
"33.342341212112.3.1...4.\n"
"42..433..2324.......2.21\n"
"4113.32133.1332.334.2..3\n"
"32141.333321432....3.211\n"
"412.11342.4231....3.12.2\n"
"421.3.433.2232.211.3...2\n"
".3.4343331123.4...3..112\n"
"4242.1.4.11..3113.3..13.\n"
".2.43223.33..2.41.3.3.11\n"
"1313111.4.3344.33.122.43\n"
"43.21242332442223.....2.\n"
"42.4.41.411141.341244423\n") == 0);
free(board909333748);
board909333748 = NULL;
assert( gamma_move(board, 4, 4, 23) == 0 );
assert( gamma_move(board, 1, 8, 18) == 0 );
assert( gamma_move(board, 1, 23, 5) == 0 );
assert( gamma_free_fields(board, 1) == 133 );
assert( gamma_move(board, 2, 4, 23) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 6, 14) == 0 );
assert( gamma_move(board, 4, 7, 15) == 0 );
assert( gamma_move(board, 1, 1, 18) == 0 );
assert( gamma_move(board, 2, 15, 23) == 0 );
assert( gamma_move(board, 3, 21, 9) == 0 );
assert( gamma_move(board, 3, 11, 1) == 0 );
assert( gamma_move(board, 4, 7, 3) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 1, 17, 15) == 0 );
assert( gamma_move(board, 1, 21, 6) == 1 );
assert( gamma_golden_move(board, 1, 16, 5) == 0 );
assert( gamma_move(board, 2, 19, 2) == 0 );


char* board643333016 = gamma_board(board);
assert( board643333016 != NULL );
assert( strcmp(board643333016, 
".34..24142213...32.31.31\n"
"11..22.414144..424222.2.\n"
"31114424..11.321411.1.4.\n"
".24344343.2....32....3..\n"
"1.12..4.3.4.2.2.44...441\n"
"33.342341212112.3.1...4.\n"
"42..433..2324.......2.21\n"
"4113.32133.1332.334.2..3\n"
"32141.333321432....3.211\n"
"412.11342.4231....3.12.2\n"
"421.3.433.2232.211.3.1.2\n"
".3.4343331123.4...3..112\n"
"4242.1.4.11..3113.3..13.\n"
".2.43223.33..2.41.3.3.11\n"
"1313111.4.3344.33.122.43\n"
"43.21242332442223.....2.\n"
"42.4.41.411141.341244423\n") == 0);
free(board643333016);
board643333016 = NULL;
assert( gamma_move(board, 3, 6, 18) == 0 );
assert( gamma_move(board, 3, 23, 9) == 0 );
assert( gamma_busy_fields(board, 3) == 75 );
assert( gamma_move(board, 4, 9, 22) == 0 );
assert( gamma_busy_fields(board, 4) == 64 );
assert( gamma_move(board, 2, 1, 4) == 0 );
assert( gamma_move(board, 3, 2, 3) == 0 );
assert( gamma_move(board, 3, 13, 13) == 1 );
assert( gamma_move(board, 4, 3, 14) == 0 );
assert( gamma_move(board, 4, 0, 5) == 1 );
assert( gamma_golden_move(board, 1, 16, 5) == 0 );


char* board611426682 = gamma_board(board);
assert( board611426682 != NULL );
assert( strcmp(board611426682, 
".34..24142213...32.31.31\n"
"11..22.414144..424222.2.\n"
"31114424..11.321411.1.4.\n"
".24344343.2..3.32....3..\n"
"1.12..4.3.4.2.2.44...441\n"
"33.342341212112.3.1...4.\n"
"42..433..2324.......2.21\n"
"4113.32133.1332.334.2..3\n"
"32141.333321432....3.211\n"
"412.11342.4231....3.12.2\n"
"421.3.433.2232.211.3.1.2\n"
"43.4343331123.4...3..112\n"
"4242.1.4.11..3113.3..13.\n"
".2.43223.33..2.41.3.3.11\n"
"1313111.4.3344.33.122.43\n"
"43.21242332442223.....2.\n"
"42.4.41.411141.341244423\n") == 0);
free(board611426682);
board611426682 = NULL;
assert( gamma_move(board, 2, 5, 19) == 0 );
assert( gamma_move(board, 3, 14, 23) == 0 );
assert( gamma_free_fields(board, 4) == 130 );
assert( gamma_move(board, 1, 3, 13) == 0 );
assert( gamma_move(board, 1, 11, 15) == 0 );
assert( gamma_move(board, 2, 13, 12) == 1 );
assert( gamma_golden_move(board, 2, 13, 7) == 0 );
assert( gamma_move(board, 3, 5, 20) == 0 );
assert( gamma_move(board, 3, 9, 5) == 0 );
assert( gamma_move(board, 4, 6, 5) == 0 );
assert( gamma_move(board, 4, 20, 15) == 0 );
assert( gamma_move(board, 1, 15, 13) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 15, 13) == 0 );
assert( gamma_move(board, 2, 6, 2) == 0 );
assert( gamma_busy_fields(board, 2) == 68 );


char* board527717984 = gamma_board(board);
assert( board527717984 != NULL );
assert( strcmp(board527717984, 
".34..24142213...32.31.31\n"
"11..22.414144..424222.2.\n"
"31114424..11.321411.1.4.\n"
".24344343.2..3.32....3..\n"
"1.12..4.3.4.222.44...441\n"
"33.342341212112.3.1...4.\n"
"42..433..2324.......2.21\n"
"4113.32133.1332.334.2..3\n"
"32141.333321432....3.211\n"
"412.11342.4231....3.12.2\n"
"421.3.433.2232.211.3.1.2\n"
"43.4343331123.4...3..112\n"
"4242.1.4.11..3113.3..13.\n"
".2.43223.33..2.41.3.3.11\n"
"1313111.4.3344.33.122.43\n"
"43.21242332442223.....2.\n"
"42.4.41.411141.341244423\n") == 0);
free(board527717984);
board527717984 = NULL;
assert( gamma_move(board, 3, 6, 20) == 0 );
assert( gamma_move(board, 3, 12, 16) == 0 );
assert( gamma_move(board, 4, 10, 14) == 0 );
assert( gamma_move(board, 4, 8, 10) == 1 );
assert( gamma_move(board, 1, 7, 11) == 0 );
assert( gamma_move(board, 1, 18, 14) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 22, 14) == 0 );
assert( gamma_move(board, 2, 4, 11) == 0 );
assert( gamma_free_fields(board, 2) == 128 );


char* board846147086 = gamma_board(board);
assert( board846147086 != NULL );
assert( strcmp(board846147086, 
".34..24142213...32.31.31\n"
"11..22.414144..424222.2.\n"
"31114424..11.321411.1.4.\n"
".24344343.2..3.32....3..\n"
"1.12..4.3.4.222.44...441\n"
"33.342341212112.3.1...4.\n"
"42..433.42324.......2.21\n"
"4113.32133.1332.334.2..3\n"
"32141.333321432....3.211\n"
"412.11342.4231....3.12.2\n"
"421.3.433.2232.211.3.1.2\n"
"43.4343331123.4...3..112\n"
"4242.1.4.11..3113.3..13.\n"
".2.43223.33..2.41.3.3.11\n"
"1313111.4.3344.33.122.43\n"
"43.21242332442223.....2.\n"
"42.4.41.411141.341244423\n") == 0);
free(board846147086);
board846147086 = NULL;
assert( gamma_move(board, 4, 17, 1) == 0 );
assert( gamma_move(board, 4, 4, 6) == 0 );
assert( gamma_busy_fields(board, 4) == 66 );
assert( gamma_move(board, 1, 16, 16) == 0 );
assert( gamma_free_fields(board, 1) == 128 );
assert( gamma_move(board, 2, 15, 6) == 0 );
assert( gamma_move(board, 3, 14, 10) == 0 );
assert( gamma_move(board, 4, 3, 2) == 0 );
assert( gamma_move(board, 4, 1, 0) == 0 );
assert( gamma_move(board, 1, 16, 16) == 0 );
assert( gamma_move(board, 2, 16, 3) == 0 );
assert( gamma_move(board, 2, 10, 8) == 0 );


char* board341842453 = gamma_board(board);
assert( board341842453 != NULL );
assert( strcmp(board341842453, 
".34..24142213...32.31.31\n"
"11..22.414144..424222.2.\n"
"31114424..11.321411.1.4.\n"
".24344343.2..3.32....3..\n"
"1.12..4.3.4.222.44...441\n"
"33.342341212112.3.1...4.\n"
"42..433.42324.......2.21\n"
"4113.32133.1332.334.2..3\n"
"32141.333321432....3.211\n"
"412.11342.4231....3.12.2\n"
"421.3.433.2232.211.3.1.2\n"
"43.4343331123.4...3..112\n"
"4242.1.4.11..3113.3..13.\n"
".2.43223.33..2.41.3.3.11\n"
"1313111.4.3344.33.122.43\n"
"43.21242332442223.....2.\n"
"42.4.41.411141.341244423\n") == 0);
free(board341842453);
board341842453 = NULL;
assert( gamma_move(board, 3, 2, 7) == 0 );


char* board243160336 = gamma_board(board);
assert( board243160336 != NULL );
assert( strcmp(board243160336, 
".34..24142213...32.31.31\n"
"11..22.414144..424222.2.\n"
"31114424..11.321411.1.4.\n"
".24344343.2..3.32....3..\n"
"1.12..4.3.4.222.44...441\n"
"33.342341212112.3.1...4.\n"
"42..433.42324.......2.21\n"
"4113.32133.1332.334.2..3\n"
"32141.333321432....3.211\n"
"412.11342.4231....3.12.2\n"
"421.3.433.2232.211.3.1.2\n"
"43.4343331123.4...3..112\n"
"4242.1.4.11..3113.3..13.\n"
".2.43223.33..2.41.3.3.11\n"
"1313111.4.3344.33.122.43\n"
"43.21242332442223.....2.\n"
"42.4.41.411141.341244423\n") == 0);
free(board243160336);
board243160336 = NULL;
assert( gamma_move(board, 4, 1, 12) == 0 );
assert( gamma_move(board, 1, 1, 18) == 0 );
assert( gamma_move(board, 2, 16, 13) == 0 );
assert( gamma_move(board, 3, 21, 6) == 0 );
assert( gamma_move(board, 4, 5, 16) == 0 );
assert( gamma_free_fields(board, 4) == 56 );
assert( gamma_move(board, 1, 4, 12) == 1 );
assert( gamma_busy_fields(board, 1) == 71 );
assert( gamma_move(board, 2, 23, 3) == 0 );
assert( gamma_move(board, 2, 6, 11) == 0 );
assert( gamma_move(board, 3, 10, 21) == 0 );
assert( gamma_move(board, 4, 16, 16) == 0 );
assert( gamma_move(board, 4, 3, 12) == 0 );
assert( gamma_golden_move(board, 4, 9, 8) == 0 );
assert( gamma_move(board, 1, 17, 14) == 0 );
assert( gamma_move(board, 1, 22, 1) == 0 );
assert( gamma_move(board, 2, 3, 0) == 0 );
assert( gamma_move(board, 2, 1, 7) == 0 );
assert( gamma_move(board, 3, 10, 7) == 0 );
assert( gamma_move(board, 3, 8, 11) == 0 );
assert( gamma_move(board, 4, 11, 2) == 0 );
assert( gamma_move(board, 4, 21, 4) == 0 );
assert( gamma_move(board, 1, 16, 13) == 0 );


char* board425493115 = gamma_board(board);
assert( board425493115 != NULL );
assert( strcmp(board425493115, 
".34..24142213...32.31.31\n"
"11..22.414144..424222.2.\n"
"31114424..11.321411.1.4.\n"
".24344343.2..3.32....3..\n"
"1.121.4.3.4.222.44...441\n"
"33.342341212112.3.1...4.\n"
"42..433.42324.......2.21\n"
"4113.32133.1332.334.2..3\n"
"32141.333321432....3.211\n"
"412.11342.4231....3.12.2\n"
"421.3.433.2232.211.3.1.2\n"
"43.4343331123.4...3..112\n"
"4242.1.4.11..3113.3..13.\n"
".2.43223.33..2.41.3.3.11\n"
"1313111.4.3344.33.122.43\n"
"43.21242332442223.....2.\n"
"42.4.41.411141.341244423\n") == 0);
free(board425493115);
board425493115 = NULL;
assert( gamma_move(board, 2, 8, 16) == 0 );
assert( gamma_move(board, 2, 12, 0) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 14, 12) == 0 );
assert( gamma_move(board, 3, 1, 14) == 0 );


char* board474739151 = gamma_board(board);
assert( board474739151 != NULL );
assert( strcmp(board474739151, 
".34..24142213...32.31.31\n"
"11..22.414144..424222.2.\n"
"31114424..11.321411.1.4.\n"
".24344343.2..3.32....3..\n"
"1.121.4.3.4.222.44...441\n"
"33.342341212112.3.1...4.\n"
"42..433.42324.......2.21\n"
"4113.32133.1332.334.2..3\n"
"32141.333321432....3.211\n"
"412.11342.4231....3.12.2\n"
"421.3.433.2232.211.3.1.2\n"
"43.4343331123.4...3..112\n"
"4242.1.4.11..3113.3..13.\n"
".2.43223.33..2.41.3.3.11\n"
"1313111.4.3344.33.122.43\n"
"43.21242332442223.....2.\n"
"42.4.41.411141.341244423\n") == 0);
free(board474739151);
board474739151 = NULL;
assert( gamma_move(board, 4, 3, 21) == 0 );
assert( gamma_move(board, 4, 17, 5) == 0 );
assert( gamma_move(board, 1, 10, 16) == 0 );
assert( gamma_busy_fields(board, 1) == 71 );
assert( gamma_move(board, 2, 12, 11) == 0 );
assert( gamma_move(board, 2, 10, 0) == 0 );
assert( gamma_move(board, 3, 12, 7) == 0 );
assert( gamma_move(board, 3, 2, 6) == 0 );
assert( gamma_move(board, 4, 16, 3) == 0 );
assert( gamma_move(board, 4, 3, 5) == 0 );
assert( gamma_move(board, 1, 9, 4) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );


char* board186737478 = gamma_board(board);
assert( board186737478 != NULL );
assert( strcmp(board186737478, 
".34..24142213...32.31.31\n"
"11..22.414144..424222.2.\n"
"31114424..11.321411.1.4.\n"
".24344343.2..3.32....3..\n"
"1.121.4.3.4.222.44...441\n"
"33.342341212112.3.1...4.\n"
"42..433.42324.......2.21\n"
"4113.32133.1332.334.2..3\n"
"32141.333321432....3.211\n"
"412.11342.4231....3.12.2\n"
"421.3.433.2232.211.3.1.2\n"
"43.4343331123.4...3..112\n"
"4242.1.4.11..3113.3..13.\n"
".2.43223.33..2.41.3.3.11\n"
"1313111.4.3344.33.122.43\n"
"43.21242332442223.....2.\n"
"42.4.41.411141.341244423\n") == 0);
free(board186737478);
board186737478 = NULL;
assert( gamma_move(board, 2, 3, 14) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 7, 8) == 0 );


char* board893848035 = gamma_board(board);
assert( board893848035 != NULL );
assert( strcmp(board893848035, 
".34..24142213...32.31.31\n"
"11..22.414144..424222.2.\n"
"31114424..11.321411.1.4.\n"
".24344343.2..3.32....3..\n"
"1.121.4.3.4.222.44...441\n"
"33.342341212112.3.1...4.\n"
"42..433.42324.......2.21\n"
"4113.32133.1332.334.2..3\n"
"32141.333321432....3.211\n"
"412.11342.4231....3.12.2\n"
"421.3.433.2232.211.3.1.2\n"
"43.4343331123.4...3..112\n"
"4242.1.4.11..3113.3..13.\n"
".2.43223.33..2.41.3.3.11\n"
"1313111.4.3344.33.122.43\n"
"43.21242332442223.....2.\n"
"42.4.41.411141.341244423\n") == 0);
free(board893848035);
board893848035 = NULL;
assert( gamma_move(board, 4, 1, 2) == 0 );
assert( gamma_move(board, 4, 5, 12) == 1 );


char* board839759427 = gamma_board(board);
assert( board839759427 != NULL );
assert( strcmp(board839759427, 
".34..24142213...32.31.31\n"
"11..22.414144..424222.2.\n"
"31114424..11.321411.1.4.\n"
".24344343.2..3.32....3..\n"
"1.12144.3.4.222.44...441\n"
"33.342341212112.3.1...4.\n"
"42..433.42324.......2.21\n"
"4113.32133.1332.334.2..3\n"
"32141.333321432....3.211\n"
"412.11342.4231....3.12.2\n"
"421.3.433.2232.211.3.1.2\n"
"43.4343331123.4...3..112\n"
"4242.1.4.11..3113.3..13.\n"
".2.43223.33..2.41.3.3.11\n"
"1313111.4.3344.33.122.43\n"
"43.21242332442223.....2.\n"
"42.4.41.411141.341244423\n") == 0);
free(board839759427);
board839759427 = NULL;
assert( gamma_move(board, 1, 10, 2) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 8, 17) == 0 );
assert( gamma_move(board, 2, 16, 4) == 0 );
assert( gamma_busy_fields(board, 2) == 68 );
assert( gamma_free_fields(board, 2) == 126 );
assert( gamma_move(board, 3, 8, 15) == 0 );
assert( gamma_move(board, 3, 9, 10) == 0 );
assert( gamma_move(board, 4, 14, 21) == 0 );
assert( gamma_free_fields(board, 4) == 126 );
assert( gamma_move(board, 1, 10, 3) == 0 );
assert( gamma_move(board, 1, 22, 16) == 0 );
assert( gamma_move(board, 2, 7, 15) == 0 );
assert( gamma_move(board, 3, 16, 13) == 0 );
assert( gamma_move(board, 3, 10, 7) == 0 );
assert( gamma_move(board, 4, 1, 20) == 0 );
assert( gamma_move(board, 1, 4, 20) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );


char* board481706997 = gamma_board(board);
assert( board481706997 != NULL );
assert( strcmp(board481706997, 
".34..24142213...32.31.31\n"
"11..22.414144..424222.2.\n"
"31114424..11.321411.1.4.\n"
".24344343.2..3.32....3..\n"
"1.12144.3.4.222.44...441\n"
"33.342341212112.3.1...4.\n"
"42..433.42324.......2.21\n"
"4113.32133.1332.334.2..3\n"
"32141.333321432....3.211\n"
"412.11342.4231....3.12.2\n"
"421.3.433.2232.211.3.1.2\n"
"43.4343331123.4...3..112\n"
"4242.1.4.11..3113.3..13.\n"
".2.43223.33..2.41.3.3.11\n"
"1313111.4.3344.33.122.43\n"
"43.21242332442223.....2.\n"
"42.4.41.411141.341244423\n") == 0);
free(board481706997);
board481706997 = NULL;
assert( gamma_move(board, 2, 10, 16) == 0 );
assert( gamma_move(board, 2, 3, 7) == 1 );
assert( gamma_free_fields(board, 2) == 125 );
assert( gamma_move(board, 3, 11, 17) == 0 );
assert( gamma_move(board, 4, 3, 16) == 1 );
assert( gamma_move(board, 1, 16, 6) == 0 );
assert( gamma_move(board, 2, 3, 19) == 0 );


char* board400564218 = gamma_board(board);
assert( board400564218 != NULL );
assert( strcmp(board400564218, 
".344.24142213...32.31.31\n"
"11..22.414144..424222.2.\n"
"31114424..11.321411.1.4.\n"
".24344343.2..3.32....3..\n"
"1.12144.3.4.222.44...441\n"
"33.342341212112.3.1...4.\n"
"42..433.42324.......2.21\n"
"4113.32133.1332.334.2..3\n"
"32141.333321432....3.211\n"
"412211342.4231....3.12.2\n"
"421.3.433.2232.211.3.1.2\n"
"43.4343331123.4...3..112\n"
"4242.1.4.11..3113.3..13.\n"
".2.43223.33..2.41.3.3.11\n"
"1313111.4.3344.33.122.43\n"
"43.21242332442223.....2.\n"
"42.4.41.411141.341244423\n") == 0);
free(board400564218);
board400564218 = NULL;
assert( gamma_free_fields(board, 3) == 71 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 12, 20) == 0 );
assert( gamma_move(board, 4, 2, 1) == 1 );
assert( gamma_move(board, 1, 19, 14) == 1 );
assert( gamma_move(board, 2, 7, 2) == 1 );
assert( gamma_move(board, 3, 14, 9) == 0 );
assert( gamma_move(board, 3, 12, 4) == 1 );


char* board721288068 = gamma_board(board);
assert( board721288068 != NULL );
assert( strcmp(board721288068, 
".344.24142213...32.31.31\n"
"11..22.414144..424222.2.\n"
"31114424..11.32141111.4.\n"
".24344343.2..3.32....3..\n"
"1.12144.3.4.222.44...441\n"
"33.342341212112.3.1...4.\n"
"42..433.42324.......2.21\n"
"4113.32133.1332.334.2..3\n"
"32141.333321432....3.211\n"
"412211342.4231....3.12.2\n"
"421.3.433.2232.211.3.1.2\n"
"43.4343331123.4...3..112\n"
"4242.1.4.11.33113.3..13.\n"
".2.43223.33..2.41.3.3.11\n"
"131311124.3344.33.122.43\n"
"43421242332442223.....2.\n"
"42.4.41.411141.341244423\n") == 0);
free(board721288068);
board721288068 = NULL;
assert( gamma_move(board, 4, 4, 11) == 0 );
assert( gamma_move(board, 1, 4, 17) == 0 );
assert( gamma_move(board, 2, 13, 19) == 0 );
assert( gamma_move(board, 2, 12, 3) == 1 );
assert( gamma_busy_fields(board, 2) == 71 );
assert( gamma_free_fields(board, 2) == 119 );
assert( gamma_move(board, 4, 6, 22) == 0 );
assert( gamma_busy_fields(board, 4) == 69 );
assert( gamma_move(board, 1, 16, 13) == 0 );
assert( gamma_move(board, 1, 2, 10) == 1 );
assert( gamma_golden_move(board, 1, 7, 6) == 1 );
assert( gamma_move(board, 2, 2, 0) == 1 );
assert( gamma_move(board, 3, 13, 14) == 0 );
assert( gamma_move(board, 3, 16, 14) == 0 );
assert( gamma_move(board, 4, 3, 1) == 0 );
assert( gamma_move(board, 1, 13, 12) == 0 );
assert( gamma_move(board, 1, 12, 14) == 1 );
assert( gamma_move(board, 2, 15, 13) == 0 );
assert( gamma_move(board, 2, 7, 7) == 0 );
assert( gamma_move(board, 3, 11, 10) == 0 );
assert( gamma_move(board, 3, 3, 2) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 11, 19) == 0 );
assert( gamma_move(board, 4, 16, 15) == 0 );
assert( gamma_busy_fields(board, 4) == 69 );
assert( gamma_move(board, 1, 2, 17) == 0 );
assert( gamma_move(board, 1, 22, 1) == 0 );
assert( gamma_move(board, 2, 20, 9) == 0 );
assert( gamma_move(board, 3, 10, 18) == 0 );
assert( gamma_move(board, 3, 23, 6) == 0 );
assert( gamma_move(board, 4, 20, 0) == 0 );
assert( gamma_move(board, 4, 18, 4) == 0 );
assert( gamma_move(board, 1, 18, 7) == 0 );
assert( gamma_busy_fields(board, 1) == 75 );
assert( gamma_move(board, 2, 10, 21) == 0 );
assert( gamma_move(board, 3, 7, 13) == 0 );
assert( gamma_busy_fields(board, 3) == 76 );
assert( gamma_move(board, 1, 3, 17) == 0 );
assert( gamma_move(board, 1, 16, 2) == 0 );
assert( gamma_move(board, 3, 15, 23) == 0 );
assert( gamma_move(board, 3, 5, 4) == 0 );
assert( gamma_move(board, 4, 5, 20) == 0 );
assert( gamma_free_fields(board, 4) == 50 );
assert( gamma_move(board, 1, 16, 3) == 0 );
assert( gamma_move(board, 1, 8, 2) == 0 );
assert( gamma_busy_fields(board, 1) == 75 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 14, 23) == 0 );
assert( gamma_free_fields(board, 2) == 116 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 8, 20) == 0 );
assert( gamma_move(board, 4, 10, 17) == 0 );
assert( gamma_move(board, 4, 20, 16) == 0 );
assert( gamma_move(board, 1, 1, 23) == 0 );
assert( gamma_move(board, 1, 15, 7) == 1 );
assert( gamma_move(board, 2, 13, 0) == 0 );
assert( gamma_move(board, 3, 4, 19) == 0 );
assert( gamma_move(board, 1, 14, 8) == 0 );
assert( gamma_move(board, 2, 8, 16) == 0 );
assert( gamma_move(board, 3, 5, 0) == 0 );
assert( gamma_move(board, 3, 18, 1) == 1 );
assert( gamma_free_fields(board, 3) == 69 );
assert( gamma_move(board, 4, 16, 4) == 0 );
assert( gamma_move(board, 4, 5, 10) == 0 );
assert( gamma_busy_fields(board, 1) == 76 );
assert( gamma_move(board, 2, 0, 14) == 0 );
assert( gamma_move(board, 2, 1, 6) == 0 );
assert( gamma_move(board, 3, 12, 6) == 0 );
assert( gamma_move(board, 4, 8, 20) == 0 );
assert( gamma_move(board, 1, 14, 21) == 0 );
assert( gamma_move(board, 1, 16, 0) == 0 );
assert( gamma_move(board, 2, 15, 14) == 0 );
assert( gamma_move(board, 2, 22, 5) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 4, 7, 10) == 1 );


char* board467081723 = gamma_board(board);
assert( board467081723 != NULL );
assert( strcmp(board467081723, 
".344.24142213...32.31.31\n"
"11..22.414144..424222.2.\n"
"31114424..11132141111.4.\n"
".24344343.2..3.32....3..\n"
"1.12144.3.4.222.44...441\n"
"33.342341212112.3.1...4.\n"
"421.433442324.......2.21\n"
"4113.32133.1332.334.2..3\n"
"32141.333321432....3.211\n"
"412211342.4231.1..3.12.2\n"
"421.3.413.2232.211.3.1.2\n"
"43.4343331123.4...3..112\n"
"4242.1.4.11.33113.3..13.\n"
".2.43223.33.22.41.3.3.11\n"
"131311124.3344.33.122.43\n"
"43421242332442223.3...2.\n"
"4224.41.411141.341244423\n") == 0);
free(board467081723);
board467081723 = NULL;
assert( gamma_move(board, 2, 14, 9) == 0 );
assert( gamma_move(board, 3, 10, 3) == 0 );
assert( gamma_move(board, 3, 20, 8) == 1 );
assert( gamma_busy_fields(board, 3) == 78 );
assert( gamma_move(board, 4, 18, 1) == 0 );
assert( gamma_move(board, 2, 13, 17) == 0 );
assert( gamma_move(board, 2, 23, 10) == 0 );
assert( gamma_move(board, 3, 3, 11) == 0 );
assert( gamma_move(board, 4, 15, 11) == 1 );
assert( gamma_move(board, 1, 5, 17) == 0 );
assert( gamma_move(board, 2, 21, 6) == 0 );
assert( gamma_move(board, 3, 10, 14) == 0 );
assert( gamma_move(board, 4, 4, 23) == 0 );
assert( gamma_move(board, 1, 11, 14) == 0 );
assert( gamma_move(board, 1, 14, 2) == 1 );
assert( gamma_move(board, 2, 16, 21) == 0 );
assert( gamma_move(board, 2, 10, 4) == 0 );
assert( gamma_move(board, 3, 23, 7) == 0 );
assert( gamma_move(board, 4, 3, 2) == 0 );
assert( gamma_move(board, 1, 13, 11) == 0 );
assert( gamma_move(board, 1, 7, 9) == 0 );
assert( gamma_move(board, 2, 16, 16) == 0 );
assert( gamma_move(board, 2, 18, 10) == 1 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 11, 0) == 0 );
assert( gamma_move(board, 4, 16, 0) == 0 );
assert( gamma_move(board, 1, 12, 15) == 0 );
assert( gamma_move(board, 1, 14, 0) == 1 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 18, 9) == 0 );
assert( gamma_move(board, 2, 1, 9) == 0 );
assert( gamma_move(board, 3, 4, 14) == 0 );
assert( gamma_move(board, 4, 13, 19) == 0 );


char* board907765154 = gamma_board(board);
assert( board907765154 != NULL );
assert( strcmp(board907765154, 
".344.24142213...32.31.31\n"
"11..22.414144..424222.2.\n"
"31114424..11132141111.4.\n"
".24344343.2..3.32....3..\n"
"1.12144.3.4.222.44...441\n"
"33.34234121211243.1...4.\n"
"421.433442324.....2.2.21\n"
"4113.32133.1332.334.2..3\n"
"32141.333321432....33211\n"
"412211342.4231.1..3.12.2\n"
"421.3.413.2232.211.3.1.2\n"
"43.4343331123.4...3..112\n"
"4242.1.4.11.33113.3..13.\n"
".2.43223.33.22.41.3.3.11\n"
"131311124.3344133.122.43\n"
"43421242332442223.3...2.\n"
"4224.41.4111411341244423\n") == 0);
free(board907765154);
board907765154 = NULL;
assert( gamma_move(board, 2, 5, 13) == 0 );
assert( gamma_move(board, 4, 13, 18) == 0 );
assert( gamma_move(board, 1, 9, 22) == 0 );
assert( gamma_move(board, 2, 1, 16) == 0 );
assert( gamma_move(board, 2, 1, 8) == 0 );
assert( gamma_free_fields(board, 2) == 52 );
assert( gamma_move(board, 3, 23, 2) == 0 );
assert( gamma_move(board, 4, 10, 17) == 0 );
assert( gamma_move(board, 1, 9, 10) == 0 );
assert( gamma_move(board, 1, 20, 13) == 1 );
assert( gamma_move(board, 2, 4, 11) == 0 );
assert( gamma_move(board, 3, 3, 17) == 0 );
assert( gamma_move(board, 3, 18, 6) == 1 );
assert( gamma_move(board, 4, 10, 19) == 0 );
assert( gamma_move(board, 1, 11, 19) == 0 );
assert( gamma_free_fields(board, 1) == 59 );


char* board297023584 = gamma_board(board);
assert( board297023584 != NULL );
assert( strcmp(board297023584, 
".344.24142213...32.31.31\n"
"11..22.414144..424222.2.\n"
"31114424..11132141111.4.\n"
".24344343.2..3.32...13..\n"
"1.12144.3.4.222.44...441\n"
"33.34234121211243.1...4.\n"
"421.433442324.....2.2.21\n"
"4113.32133.1332.334.2..3\n"
"32141.333321432....33211\n"
"412211342.4231.1..3.12.2\n"
"421.3.413.2232.21133.1.2\n"
"43.4343331123.4...3..112\n"
"4242.1.4.11.33113.3..13.\n"
".2.43223.33.22.41.3.3.11\n"
"131311124.3344133.122.43\n"
"43421242332442223.3...2.\n"
"4224.41.4111411341244423\n") == 0);
free(board297023584);
board297023584 = NULL;
assert( gamma_move(board, 2, 6, 5) == 0 );
assert( gamma_golden_move(board, 2, 6, 8) == 0 );
assert( gamma_move(board, 3, 11, 16) == 0 );
assert( gamma_move(board, 4, 13, 19) == 0 );
assert( gamma_move(board, 1, 0, 4) == 0 );
assert( gamma_free_fields(board, 1) == 59 );
assert( gamma_move(board, 2, 13, 18) == 0 );
assert( gamma_move(board, 3, 14, 13) == 1 );
assert( gamma_move(board, 3, 13, 2) == 0 );
assert( gamma_move(board, 4, 10, 12) == 0 );
assert( gamma_move(board, 1, 11, 20) == 0 );
assert( gamma_move(board, 3, 6, 14) == 0 );
assert( gamma_move(board, 3, 12, 13) == 1 );
assert( gamma_move(board, 4, 1, 19) == 0 );
assert( gamma_move(board, 1, 23, 4) == 1 );
assert( gamma_move(board, 1, 0, 15) == 0 );
assert( gamma_busy_fields(board, 1) == 80 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 14, 3) == 1 );
assert( gamma_move(board, 2, 9, 4) == 0 );
assert( gamma_move(board, 3, 10, 21) == 0 );
assert( gamma_move(board, 3, 15, 12) == 1 );
assert( gamma_free_fields(board, 3) == 101 );
assert( gamma_move(board, 4, 0, 7) == 0 );
assert( gamma_move(board, 4, 22, 6) == 0 );
assert( gamma_move(board, 1, 8, 5) == 0 );
assert( gamma_move(board, 2, 13, 16) == 0 );
assert( gamma_move(board, 3, 8, 17) == 0 );
assert( gamma_move(board, 4, 13, 0) == 0 );
assert( gamma_move(board, 1, 7, 13) == 0 );
assert( gamma_move(board, 2, 0, 16) == 0 );


char* board600653816 = gamma_board(board);
assert( board600653816 != NULL );
assert( strcmp(board600653816, 
".344.24142213...32.31.31\n"
"11..22.414144..424222.2.\n"
"31114424..11132141111.4.\n"
".24344343.2.33332...13..\n"
"1.12144.3.4.222344...441\n"
"33.34234121211243.1...4.\n"
"421.433442324.....2.2.21\n"
"4113.32133.1332.334.2..3\n"
"32141.333321432....33211\n"
"412211342.4231.1..3.12.2\n"
"421.3.413.2232.21133.1.2\n"
"43.4343331123.4...3..112\n"
"4242.1.4.11.33113.3..131\n"
".2.43223.33.22241.3.3.11\n"
"131311124.3344133.122.43\n"
"43421242332442223.3...2.\n"
"4224.41.4111411341244423\n") == 0);
free(board600653816);
board600653816 = NULL;
assert( gamma_move(board, 4, 2, 21) == 0 );
assert( gamma_move(board, 4, 0, 7) == 0 );
assert( gamma_move(board, 1, 22, 11) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_golden_move(board, 1, 6, 11) == 0 );
assert( gamma_move(board, 2, 22, 11) == 0 );
assert( gamma_move(board, 3, 9, 22) == 0 );
assert( gamma_move(board, 4, 5, 15) == 0 );
assert( gamma_move(board, 1, 23, 16) == 0 );
assert( gamma_busy_fields(board, 1) == 80 );
assert( gamma_move(board, 2, 5, 15) == 0 );
assert( gamma_move(board, 2, 18, 8) == 0 );
assert( gamma_move(board, 3, 6, 8) == 0 );
assert( gamma_golden_move(board, 3, 0, 5) == 0 );


char* board908233394 = gamma_board(board);
assert( board908233394 != NULL );
assert( strcmp(board908233394, 
".344.24142213...32.31.31\n"
"11..22.414144..424222.2.\n"
"31114424..11132141111.4.\n"
".24344343.2.33332...13..\n"
"1.12144.3.4.222344...441\n"
"33.34234121211243.1...4.\n"
"421.433442324.....2.2.21\n"
"4113.32133.1332.334.2..3\n"
"32141.333321432....33211\n"
"412211342.4231.1..3.12.2\n"
"421.3.413.2232.21133.1.2\n"
"43.4343331123.4...3..112\n"
"4242.1.4.11.33113.3..131\n"
".2.43223.33.22241.3.3.11\n"
"131311124.3344133.122.43\n"
"43421242332442223.3...2.\n"
"4224.41.4111411341244423\n") == 0);
free(board908233394);
board908233394 = NULL;
assert( gamma_move(board, 4, 12, 19) == 0 );
assert( gamma_move(board, 4, 17, 10) == 0 );


char* board256663759 = gamma_board(board);
assert( board256663759 != NULL );
assert( strcmp(board256663759, 
".344.24142213...32.31.31\n"
"11..22.414144..424222.2.\n"
"31114424..11132141111.4.\n"
".24344343.2.33332...13..\n"
"1.12144.3.4.222344...441\n"
"33.34234121211243.1...4.\n"
"421.433442324.....2.2.21\n"
"4113.32133.1332.334.2..3\n"
"32141.333321432....33211\n"
"412211342.4231.1..3.12.2\n"
"421.3.413.2232.21133.1.2\n"
"43.4343331123.4...3..112\n"
"4242.1.4.11.33113.3..131\n"
".2.43223.33.22241.3.3.11\n"
"131311124.3344133.122.43\n"
"43421242332442223.3...2.\n"
"4224.41.4111411341244423\n") == 0);
free(board256663759);
board256663759 = NULL;
assert( gamma_move(board, 2, 6, 4) == 1 );
assert( gamma_move(board, 2, 8, 2) == 0 );
assert( gamma_move(board, 3, 20, 10) == 0 );
assert( gamma_move(board, 4, 9, 21) == 0 );
assert( gamma_move(board, 1, 12, 20) == 0 );
assert( gamma_move(board, 1, 5, 6) == 1 );
assert( gamma_move(board, 2, 15, 13) == 0 );
assert( gamma_move(board, 2, 5, 13) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 16, 14) == 0 );
assert( gamma_move(board, 3, 4, 10) == 0 );


char* board901961209 = gamma_board(board);
assert( board901961209 != NULL );
assert( strcmp(board901961209, 
".344.24142213...32.31.31\n"
"11..22.414144..424222.2.\n"
"31114424..11132141111.4.\n"
".24344343.2.33332...13..\n"
"1.12144.3.4.222344...441\n"
"33.34234121211243.1...4.\n"
"421.433442324.....2.2.21\n"
"4113.32133.1332.334.2..3\n"
"32141.333321432....33211\n"
"412211342.4231.1..3.12.2\n"
"421.31413.2232.21133.1.2\n"
"43.4343331123.4...3..112\n"
"4242.124.11.33113.3..131\n"
".2.43223.33.22241.3.3.11\n"
"131311124.3344133.122.43\n"
"43421242332442223.3...2.\n"
"4224.41.4111411341244423\n") == 0);
free(board901961209);
board901961209 = NULL;
assert( gamma_move(board, 4, 21, 12) == 0 );
assert( gamma_free_fields(board, 4) == 44 );
assert( gamma_move(board, 1, 14, 21) == 0 );
assert( gamma_move(board, 1, 13, 10) == 1 );
assert( gamma_move(board, 2, 4, 17) == 0 );
assert( gamma_move(board, 3, 5, 13) == 0 );
assert( gamma_move(board, 4, 5, 17) == 0 );
assert( gamma_move(board, 4, 10, 13) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );


char* board490624928 = gamma_board(board);
assert( board490624928 != NULL );
assert( strcmp(board490624928, 
".344.24142213...32.31.31\n"
"11..22.414144..424222.2.\n"
"31114424..11132141111.4.\n"
".24344343.2.33332...13..\n"
"1.12144.3.4.222344...441\n"
"33.34234121211243.1...4.\n"
"421.4334423241....2.2.21\n"
"4113.32133.1332.334.2..3\n"
"32141.333321432....33211\n"
"412211342.4231.1..3.12.2\n"
"421.31413.2232.21133.1.2\n"
"43.4343331123.4...3..112\n"
"4242.124.11.33113.3..131\n"
".2.43223.33.22241.3.3.11\n"
"131311124.3344133.122.43\n"
"43421242332442223.3...2.\n"
"4224.41.4111411341244423\n") == 0);
free(board490624928);
board490624928 = NULL;
assert( gamma_move(board, 1, 5, 8) == 1 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 14, 23) == 0 );
assert( gamma_move(board, 2, 13, 2) == 0 );
assert( gamma_move(board, 3, 16, 18) == 0 );
assert( gamma_move(board, 3, 9, 6) == 1 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 23, 4) == 0 );
assert( gamma_move(board, 4, 8, 8) == 0 );
assert( gamma_move(board, 1, 1, 15) == 0 );
assert( gamma_move(board, 1, 4, 15) == 0 );
assert( gamma_move(board, 2, 21, 9) == 1 );
assert( gamma_busy_fields(board, 2) == 76 );
assert( gamma_move(board, 3, 11, 17) == 0 );


char* board391078078 = gamma_board(board);
assert( board391078078 != NULL );
assert( strcmp(board391078078, 
".344.24142213...32.31.31\n"
"11..22.414144..424222.2.\n"
"31114424..11132141111.4.\n"
".24344343.2.33332...13..\n"
"1.12144.3.4.222344...441\n"
"33.34234121211243.1...4.\n"
"421.4334423241....2.2.21\n"
"4113.32133.1332.334.22.3\n"
"321411333321432....33211\n"
"412211342.4231.1..3.12.2\n"
"421.3141332232.21133.1.2\n"
"43.4343331123.4...3..112\n"
"4242.124.11.33113.3..131\n"
".2.43223.33.22241.3.3.11\n"
"131311124.3344133.122.43\n"
"43421242332442223.3...2.\n"
"4224.41.4111411341244423\n") == 0);
free(board391078078);
board391078078 = NULL;
assert( gamma_move(board, 1, 6, 16) == 0 );
assert( gamma_move(board, 2, 7, 22) == 0 );
assert( gamma_move(board, 2, 5, 4) == 0 );
assert( gamma_move(board, 3, 5, 8) == 0 );
assert( gamma_move(board, 4, 9, 4) == 0 );
assert( gamma_move(board, 4, 16, 9) == 0 );
assert( gamma_move(board, 1, 5, 16) == 0 );
assert( gamma_move(board, 1, 1, 4) == 0 );
assert( gamma_move(board, 2, 22, 6) == 1 );
assert( gamma_free_fields(board, 2) == 94 );
assert( gamma_move(board, 3, 3, 2) == 0 );
assert( gamma_move(board, 3, 10, 12) == 0 );
assert( gamma_move(board, 4, 6, 3) == 0 );
assert( gamma_move(board, 1, 4, 4) == 1 );
assert( gamma_move(board, 1, 11, 2) == 0 );
assert( gamma_golden_move(board, 2, 11, 1) == 0 );
assert( gamma_move(board, 3, 5, 19) == 0 );
assert( gamma_move(board, 3, 19, 3) == 1 );
assert( gamma_move(board, 4, 0, 16) == 0 );
assert( gamma_move(board, 4, 18, 10) == 0 );
assert( gamma_free_fields(board, 4) == 43 );
assert( gamma_move(board, 1, 3, 21) == 0 );
assert( gamma_move(board, 2, 11, 6) == 0 );
assert( gamma_move(board, 2, 14, 7) == 1 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 11, 19) == 0 );
assert( gamma_move(board, 3, 0, 6) == 0 );
assert( gamma_free_fields(board, 3) == 91 );
assert( gamma_move(board, 4, 9, 3) == 0 );
assert( gamma_move(board, 1, 13, 22) == 0 );
assert( gamma_move(board, 1, 21, 15) == 0 );
assert( gamma_golden_move(board, 1, 13, 10) == 0 );
assert( gamma_move(board, 2, 16, 7) == 1 );
assert( gamma_move(board, 3, 1, 19) == 0 );
assert( gamma_move(board, 3, 3, 10) == 1 );
assert( gamma_busy_fields(board, 3) == 85 );
assert( gamma_move(board, 4, 15, 23) == 0 );
assert( gamma_move(board, 1, 13, 19) == 0 );
assert( gamma_busy_fields(board, 1) == 84 );
assert( gamma_move(board, 3, 11, 17) == 0 );
assert( gamma_busy_fields(board, 3) == 85 );
assert( gamma_move(board, 4, 17, 0) == 0 );
assert( gamma_move(board, 4, 11, 13) == 0 );
assert( gamma_move(board, 1, 11, 23) == 0 );
assert( gamma_move(board, 1, 20, 10) == 0 );
assert( gamma_busy_fields(board, 1) == 84 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 13, 17) == 0 );
assert( gamma_busy_fields(board, 2) == 79 );
assert( gamma_move(board, 3, 7, 9) == 0 );
assert( gamma_move(board, 3, 3, 2) == 0 );
assert( gamma_move(board, 4, 22, 0) == 0 );
assert( gamma_move(board, 4, 12, 8) == 0 );
assert( gamma_move(board, 1, 23, 5) == 0 );
assert( gamma_move(board, 1, 11, 1) == 0 );
assert( gamma_busy_fields(board, 1) == 84 );
assert( gamma_move(board, 2, 15, 21) == 0 );
assert( gamma_move(board, 2, 18, 4) == 0 );
assert( gamma_move(board, 3, 11, 2) == 0 );
assert( gamma_move(board, 4, 12, 1) == 0 );
assert( gamma_move(board, 4, 8, 9) == 0 );
assert( gamma_free_fields(board, 4) == 42 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 1, 5, 13) == 0 );
assert( gamma_move(board, 2, 16, 5) == 0 );
assert( gamma_move(board, 2, 19, 14) == 0 );
assert( gamma_move(board, 3, 11, 21) == 0 );
assert( gamma_move(board, 3, 11, 12) == 1 );
assert( gamma_move(board, 4, 9, 19) == 0 );
assert( gamma_move(board, 4, 23, 12) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 1, 9, 15) == 0 );
assert( gamma_busy_fields(board, 1) == 84 );
assert( gamma_move(board, 2, 12, 20) == 0 );
assert( gamma_move(board, 2, 23, 15) == 1 );
assert( gamma_move(board, 3, 22, 3) == 0 );
assert( gamma_move(board, 4, 0, 7) == 0 );
assert( gamma_move(board, 4, 2, 6) == 0 );
assert( gamma_move(board, 1, 13, 9) == 0 );
assert( gamma_move(board, 2, 11, 11) == 0 );
assert( gamma_move(board, 3, 4, 4) == 0 );
assert( gamma_move(board, 4, 2, 21) == 0 );
assert( gamma_move(board, 4, 1, 16) == 0 );
assert( gamma_move(board, 1, 12, 18) == 0 );
assert( gamma_move(board, 2, 13, 0) == 0 );
assert( gamma_move(board, 3, 12, 7) == 0 );
assert( gamma_move(board, 3, 23, 11) == 1 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 16, 9) == 0 );
assert( gamma_move(board, 1, 13, 12) == 0 );
assert( gamma_move(board, 1, 21, 6) == 0 );
assert( gamma_move(board, 2, 4, 19) == 0 );
assert( gamma_move(board, 2, 6, 7) == 0 );
assert( gamma_free_fields(board, 2) == 41 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 9, 10) == 0 );
assert( gamma_move(board, 3, 4, 3) == 0 );
assert( gamma_move(board, 4, 16, 0) == 0 );
assert( gamma_move(board, 4, 0, 0) == 0 );
assert( gamma_busy_fields(board, 4) == 71 );
assert( gamma_golden_move(board, 4, 0, 6) == 0 );
assert( gamma_move(board, 1, 7, 7) == 0 );
assert( gamma_move(board, 2, 23, 14) == 1 );
assert( gamma_move(board, 3, 10, 11) == 0 );
assert( gamma_move(board, 3, 17, 11) == 1 );
assert( gamma_move(board, 4, 7, 22) == 0 );


gamma_delete(board);

    return 0;
}
