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
uuid: 784139532
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(24, 20, 7, 38);
assert( board != NULL );


assert( gamma_move(board, 1, 2, 8) == 1 );
assert( gamma_move(board, 1, 14, 3) == 1 );


char* board295655957 = gamma_board(board);
assert( board295655957 != NULL );
assert( strcmp(board295655957, 
"........................\n"
"........................\n"
"........................\n"
"........................\n"
"........................\n"
"........................\n"
"........................\n"
"........................\n"
"........................\n"
"........................\n"
"........................\n"
"..1.....................\n"
"........................\n"
"........................\n"
"........................\n"
"........................\n"
"..............1.........\n"
"........................\n"
"........................\n"
"........................\n") == 0);
free(board295655957);
board295655957 = NULL;
assert( gamma_move(board, 2, 9, 15) == 1 );
assert( gamma_move(board, 2, 20, 16) == 1 );
assert( gamma_move(board, 3, 10, 15) == 1 );
assert( gamma_move(board, 3, 15, 19) == 1 );


char* board863980326 = gamma_board(board);
assert( board863980326 != NULL );
assert( strcmp(board863980326, 
"...............3........\n"
"........................\n"
"........................\n"
"....................2...\n"
".........23.............\n"
"........................\n"
"........................\n"
"........................\n"
"........................\n"
"........................\n"
"........................\n"
"..1.....................\n"
"........................\n"
"........................\n"
"........................\n"
"........................\n"
"..............1.........\n"
"........................\n"
"........................\n"
"........................\n") == 0);
free(board863980326);
board863980326 = NULL;
assert( gamma_free_fields(board, 4) == 474 );


char* board998187573 = gamma_board(board);
assert( board998187573 != NULL );
assert( strcmp(board998187573, 
"...............3........\n"
"........................\n"
"........................\n"
"....................2...\n"
".........23.............\n"
"........................\n"
"........................\n"
"........................\n"
"........................\n"
"........................\n"
"........................\n"
"..1.....................\n"
"........................\n"
"........................\n"
"........................\n"
"........................\n"
"..............1.........\n"
"........................\n"
"........................\n"
"........................\n") == 0);
free(board998187573);
board998187573 = NULL;
assert( gamma_move(board, 5, 14, 15) == 1 );
assert( gamma_move(board, 5, 4, 18) == 1 );
assert( gamma_move(board, 7, 7, 15) == 1 );
assert( gamma_move(board, 7, 8, 10) == 1 );
assert( gamma_move(board, 1, 2, 12) == 1 );
assert( gamma_move(board, 2, 0, 2) == 1 );
assert( gamma_move(board, 2, 20, 15) == 1 );
assert( gamma_move(board, 3, 5, 17) == 1 );
assert( gamma_move(board, 3, 23, 9) == 1 );
assert( gamma_busy_fields(board, 3) == 4 );
assert( gamma_move(board, 4, 5, 9) == 1 );
assert( gamma_move(board, 5, 14, 9) == 1 );
assert( gamma_busy_fields(board, 5) == 3 );
assert( gamma_move(board, 6, 2, 17) == 1 );
assert( gamma_move(board, 7, 21, 13) == 1 );
assert( gamma_free_fields(board, 7) == 461 );
assert( gamma_move(board, 1, 3, 12) == 1 );
assert( gamma_move(board, 1, 3, 9) == 1 );
assert( gamma_move(board, 2, 9, 6) == 1 );
assert( gamma_move(board, 2, 7, 17) == 1 );


char* board479250911 = gamma_board(board);
assert( board479250911 != NULL );
assert( strcmp(board479250911, 
"...............3........\n"
"....5...................\n"
"..6..3.2................\n"
"....................2...\n"
".......7.23...5.....2...\n"
"........................\n"
".....................7..\n"
"..11....................\n"
"........................\n"
"........7...............\n"
"...1.4........5........3\n"
"..1.....................\n"
"........................\n"
".........2..............\n"
"........................\n"
"........................\n"
"..............1.........\n"
"2.......................\n"
"........................\n"
"........................\n") == 0);
free(board479250911);
board479250911 = NULL;
assert( gamma_move(board, 3, 8, 10) == 0 );
assert( gamma_move(board, 4, 22, 9) == 1 );
assert( gamma_golden_move(board, 4, 3, 14) == 0 );
assert( gamma_move(board, 6, 7, 2) == 1 );
assert( gamma_move(board, 6, 23, 12) == 1 );
assert( gamma_move(board, 7, 1, 4) == 1 );
assert( gamma_move(board, 7, 19, 4) == 1 );
assert( gamma_move(board, 1, 2, 11) == 1 );
assert( gamma_move(board, 1, 7, 19) == 1 );
assert( gamma_move(board, 2, 8, 0) == 1 );
assert( gamma_move(board, 2, 20, 19) == 1 );
assert( gamma_move(board, 3, 9, 11) == 1 );
assert( gamma_move(board, 4, 9, 1) == 1 );
assert( gamma_move(board, 4, 6, 15) == 1 );
assert( gamma_move(board, 5, 10, 5) == 1 );
assert( gamma_move(board, 5, 0, 16) == 1 );
assert( gamma_move(board, 6, 4, 3) == 1 );
assert( gamma_move(board, 7, 3, 6) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 1, 18, 13) == 1 );
assert( gamma_move(board, 1, 21, 8) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 1, 0) == 1 );
assert( gamma_move(board, 2, 18, 18) == 1 );
assert( gamma_move(board, 4, 3, 3) == 1 );
assert( gamma_busy_fields(board, 4) == 5 );


char* board400352619 = gamma_board(board);
assert( board400352619 != NULL );
assert( strcmp(board400352619, 
".......1.......3....2...\n"
"....5.............2.....\n"
"..6..3.2................\n"
"5...................2...\n"
"......47.23...5.....2...\n"
"........................\n"
"..................1..7..\n"
"..11...................6\n"
"..1......3..............\n"
"........7...............\n"
"...1.4........5.......43\n"
"..1..................1..\n"
"........................\n"
"...7.....2..............\n"
"..........5.............\n"
".7.................7....\n"
"...46.........1.........\n"
"2......6................\n"
".........4..............\n"
".2......2...............\n") == 0);
free(board400352619);
board400352619 = NULL;
assert( gamma_move(board, 5, 5, 22) == 0 );
assert( gamma_move(board, 6, 5, 3) == 1 );
assert( gamma_move(board, 6, 8, 2) == 1 );
assert( gamma_move(board, 7, 15, 12) == 1 );
assert( gamma_move(board, 1, 5, 9) == 0 );
assert( gamma_move(board, 1, 9, 18) == 1 );
assert( gamma_free_fields(board, 1) == 432 );


char* board349980296 = gamma_board(board);
assert( board349980296 != NULL );
assert( strcmp(board349980296, 
".......1.......3....2...\n"
"....5....1........2.....\n"
"..6..3.2................\n"
"5...................2...\n"
"......47.23...5.....2...\n"
"........................\n"
"..................1..7..\n"
"..11...........7.......6\n"
"..1......3..............\n"
"........7...............\n"
"...1.4........5.......43\n"
"..1..................1..\n"
"........................\n"
"...7.....2..............\n"
"..........5.............\n"
".7.................7....\n"
"...466........1.........\n"
"2......66...............\n"
".........4..............\n"
".2......2...............\n") == 0);
free(board349980296);
board349980296 = NULL;
assert( gamma_move(board, 2, 13, 13) == 1 );
assert( gamma_move(board, 2, 4, 14) == 1 );
assert( gamma_move(board, 3, 15, 17) == 1 );
assert( gamma_move(board, 3, 2, 5) == 1 );
assert( gamma_move(board, 4, 6, 11) == 1 );
assert( gamma_move(board, 5, 9, 1) == 0 );
assert( gamma_move(board, 5, 16, 9) == 1 );
assert( gamma_move(board, 6, 5, 8) == 1 );
assert( gamma_move(board, 6, 13, 8) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 12, 11) == 1 );
assert( gamma_move(board, 7, 15, 5) == 1 );
assert( gamma_move(board, 1, 4, 18) == 0 );
assert( gamma_move(board, 1, 22, 18) == 1 );
assert( gamma_move(board, 2, 13, 11) == 1 );
assert( gamma_move(board, 3, 12, 11) == 0 );
assert( gamma_move(board, 3, 18, 10) == 1 );
assert( gamma_move(board, 4, 16, 3) == 1 );
assert( gamma_move(board, 4, 9, 1) == 0 );
assert( gamma_move(board, 5, 9, 13) == 1 );
assert( gamma_move(board, 5, 1, 13) == 1 );
assert( gamma_move(board, 7, 7, 18) == 1 );
assert( gamma_move(board, 1, 11, 23) == 0 );
assert( gamma_move(board, 1, 21, 15) == 1 );
assert( gamma_free_fields(board, 1) == 414 );
assert( gamma_move(board, 2, 3, 0) == 1 );


char* board897377561 = gamma_board(board);
assert( board897377561 != NULL );
assert( strcmp(board897377561, 
".......1.......3....2...\n"
"....5..7.1........2...1.\n"
"..6..3.2.......3........\n"
"5...................2...\n"
"......47.23...5.....21..\n"
"....2...................\n"
".5.......5...2....1..7..\n"
"..11...........7.......6\n"
"..1...4..3..72..........\n"
"........7.........3.....\n"
"...1.4........5.5.....43\n"
"..1..6.......6.......1..\n"
"........................\n"
"...7.....2..............\n"
"..3.......5....7........\n"
".7.................7....\n"
"...466........1.4.......\n"
"2......66...............\n"
".........4..............\n"
".2.2....2...............\n") == 0);
free(board897377561);
board897377561 = NULL;
assert( gamma_move(board, 3, 10, 6) == 1 );
assert( gamma_move(board, 3, 22, 13) == 1 );
assert( gamma_busy_fields(board, 3) == 10 );
assert( gamma_move(board, 4, 4, 10) == 1 );
assert( gamma_move(board, 5, 18, 20) == 0 );
assert( gamma_move(board, 5, 9, 10) == 1 );
assert( gamma_move(board, 6, 7, 2) == 0 );
assert( gamma_move(board, 7, 7, 21) == 0 );
assert( gamma_move(board, 1, 12, 6) == 1 );
assert( gamma_move(board, 2, 0, 21) == 0 );
assert( gamma_move(board, 2, 20, 17) == 1 );
assert( gamma_move(board, 3, 0, 17) == 1 );
assert( gamma_move(board, 3, 13, 10) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 13, 19) == 1 );
assert( gamma_move(board, 6, 2, 13) == 1 );
assert( gamma_move(board, 6, 3, 11) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 0, 4) == 1 );
assert( gamma_move(board, 1, 10, 2) == 1 );
assert( gamma_move(board, 2, 4, 23) == 0 );
assert( gamma_move(board, 2, 9, 19) == 1 );
assert( gamma_move(board, 3, 12, 21) == 0 );
assert( gamma_move(board, 3, 6, 10) == 1 );


char* board912587375 = gamma_board(board);
assert( board912587375 != NULL );
assert( strcmp(board912587375, 
".......1.2...4.3....2...\n"
"....5..7.1........2...1.\n"
"3.6..3.2.......3....2...\n"
"5...................2...\n"
"......47.23...5.....21..\n"
"....2...................\n"
".56......5...2....1..73.\n"
"..11...........7.......6\n"
"..16..4..3..72..........\n"
"....4.3.75...3....3.....\n"
"...1.4........5.5.....43\n"
"..1..6.......6.......1..\n"
"........................\n"
"...7.....23.1...........\n"
"..3.......5....7........\n"
"77.................7....\n"
"...466........1.4.......\n"
"2......66.1.............\n"
".........4..............\n"
".2.2....2...............\n") == 0);
free(board912587375);
board912587375 = NULL;
assert( gamma_move(board, 4, 15, 8) == 1 );
assert( gamma_move(board, 4, 0, 14) == 1 );
assert( gamma_move(board, 5, 5, 19) == 1 );
assert( gamma_move(board, 5, 6, 7) == 1 );
assert( gamma_busy_fields(board, 5) == 11 );


char* board947136305 = gamma_board(board);
assert( board947136305 != NULL );
assert( strcmp(board947136305, 
".....5.1.2...4.3....2...\n"
"....5..7.1........2...1.\n"
"3.6..3.2.......3....2...\n"
"5...................2...\n"
"......47.23...5.....21..\n"
"4...2...................\n"
".56......5...2....1..73.\n"
"..11...........7.......6\n"
"..16..4..3..72..........\n"
"....4.3.75...3....3.....\n"
"...1.4........5.5.....43\n"
"..1..6.......6.4.....1..\n"
"......5.................\n"
"...7.....23.1...........\n"
"..3.......5....7........\n"
"77.................7....\n"
"...466........1.4.......\n"
"2......66.1.............\n"
".........4..............\n"
".2.2....2...............\n") == 0);
free(board947136305);
board947136305 = NULL;
assert( gamma_move(board, 6, 17, 22) == 0 );
assert( gamma_move(board, 6, 15, 17) == 0 );
assert( gamma_move(board, 7, 17, 19) == 1 );
assert( gamma_move(board, 1, 16, 18) == 1 );
assert( gamma_move(board, 2, 22, 5) == 1 );
assert( gamma_move(board, 3, 0, 4) == 0 );
assert( gamma_move(board, 3, 3, 3) == 0 );
assert( gamma_move(board, 4, 14, 15) == 0 );
assert( gamma_free_fields(board, 4) == 391 );
assert( gamma_move(board, 5, 3, 17) == 1 );
assert( gamma_move(board, 6, 7, 9) == 1 );
assert( gamma_move(board, 7, 9, 18) == 0 );
assert( gamma_move(board, 7, 23, 19) == 1 );
assert( gamma_free_fields(board, 7) == 388 );
assert( gamma_golden_move(board, 7, 10, 8) == 0 );
assert( gamma_move(board, 1, 17, 7) == 1 );
assert( gamma_busy_fields(board, 1) == 16 );
assert( gamma_move(board, 2, 20, 10) == 1 );
assert( gamma_move(board, 3, 17, 9) == 1 );
assert( gamma_move(board, 4, 4, 23) == 0 );
assert( gamma_move(board, 5, 16, 2) == 1 );
assert( gamma_move(board, 6, 23, 2) == 1 );
assert( gamma_move(board, 7, 0, 4) == 0 );
assert( gamma_move(board, 7, 13, 1) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 1, 19, 4) == 0 );
assert( gamma_move(board, 2, 5, 6) == 1 );
assert( gamma_move(board, 2, 17, 11) == 1 );
assert( gamma_move(board, 3, 12, 0) == 1 );
assert( gamma_move(board, 4, 12, 17) == 1 );
assert( gamma_move(board, 5, 16, 19) == 1 );
assert( gamma_move(board, 5, 23, 10) == 1 );
assert( gamma_move(board, 6, 19, 11) == 1 );
assert( gamma_move(board, 7, 1, 0) == 0 );
assert( gamma_move(board, 7, 13, 7) == 1 );
assert( gamma_free_fields(board, 7) == 374 );
assert( gamma_move(board, 1, 19, 11) == 0 );
assert( gamma_move(board, 2, 4, 4) == 1 );
assert( gamma_move(board, 3, 12, 11) == 0 );
assert( gamma_busy_fields(board, 3) == 15 );
assert( gamma_move(board, 4, 6, 1) == 1 );
assert( gamma_move(board, 4, 20, 0) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 3, 18) == 1 );


char* board292578422 = gamma_board(board);
assert( board292578422 != NULL );
assert( strcmp(board292578422, 
".....5.1.2...4.357..2..7\n"
"...55..7.1......1.2...1.\n"
"3.65.3.2....4..3....2...\n"
"5...................2...\n"
"......47.23...5.....21..\n"
"4...2...................\n"
".56......5...2....1..73.\n"
"..11...........7.......6\n"
"..16..4..3..72...2.6....\n"
"....4.3.75...3....3.2..5\n"
"...1.4.6......5.53....43\n"
"..1..6.......6.4.....1..\n"
"......5......7...1......\n"
"...7.2...23.1...........\n"
"..3.......5....7......2.\n"
"77..2..............7....\n"
"...466........1.4.......\n"
"2......66.1.....5......6\n"
"......4..4...7..........\n"
".2.2....2...3.......4...\n") == 0);
free(board292578422);
board292578422 = NULL;
assert( gamma_move(board, 6, 14, 20) == 0 );
assert( gamma_move(board, 7, 8, 10) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 1, 18, 14) == 1 );
assert( gamma_move(board, 1, 15, 0) == 1 );
assert( gamma_move(board, 2, 19, 7) == 1 );
assert( gamma_move(board, 2, 4, 18) == 0 );
assert( gamma_move(board, 3, 13, 16) == 1 );
assert( gamma_move(board, 3, 10, 2) == 0 );
assert( gamma_free_fields(board, 3) == 366 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 7, 20) == 0 );
assert( gamma_move(board, 5, 8, 7) == 1 );
assert( gamma_move(board, 6, 10, 12) == 1 );
assert( gamma_move(board, 7, 9, 11) == 0 );
assert( gamma_move(board, 7, 5, 10) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 6, 8) == 1 );
assert( gamma_move(board, 2, 2, 12) == 0 );
assert( gamma_move(board, 3, 14, 2) == 1 );
assert( gamma_move(board, 4, 0, 5) == 1 );
assert( gamma_move(board, 4, 23, 10) == 0 );
assert( gamma_free_fields(board, 4) == 360 );
assert( gamma_move(board, 5, 17, 1) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 7, 7, 20) == 0 );
assert( gamma_move(board, 1, 0, 7) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 8, 19) == 1 );
assert( gamma_move(board, 2, 0, 15) == 1 );
assert( gamma_move(board, 3, 5, 19) == 0 );
assert( gamma_free_fields(board, 3) == 356 );
assert( gamma_move(board, 4, 3, 12) == 0 );
assert( gamma_move(board, 5, 2, 9) == 1 );
assert( gamma_golden_move(board, 5, 3, 5) == 0 );
assert( gamma_move(board, 6, 14, 21) == 0 );
assert( gamma_busy_fields(board, 6) == 14 );
assert( gamma_move(board, 7, 23, 10) == 0 );
assert( gamma_move(board, 7, 11, 18) == 1 );
assert( gamma_move(board, 1, 3, 13) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 12, 7) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 16, 12) == 1 );
assert( gamma_move(board, 4, 13, 7) == 0 );
assert( gamma_move(board, 5, 16, 2) == 0 );
assert( gamma_move(board, 6, 11, 10) == 1 );
assert( gamma_move(board, 7, 22, 15) == 1 );
assert( gamma_move(board, 1, 4, 12) == 1 );
assert( gamma_move(board, 2, 1, 11) == 1 );
assert( gamma_move(board, 2, 14, 11) == 1 );
assert( gamma_busy_fields(board, 2) == 28 );
assert( gamma_move(board, 4, 15, 4) == 1 );
assert( gamma_move(board, 5, 17, 1) == 0 );
assert( gamma_move(board, 6, 9, 4) == 1 );
assert( gamma_move(board, 6, 18, 15) == 1 );
assert( gamma_free_fields(board, 6) == 343 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 11, 19) == 1 );
assert( gamma_move(board, 7, 21, 0) == 1 );
assert( gamma_move(board, 1, 10, 18) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 11, 11) == 1 );
assert( gamma_move(board, 2, 9, 0) == 1 );
assert( gamma_move(board, 3, 17, 22) == 0 );
assert( gamma_move(board, 3, 6, 15) == 0 );
assert( gamma_move(board, 4, 15, 15) == 1 );
assert( gamma_move(board, 4, 11, 7) == 1 );
assert( gamma_move(board, 5, 23, 14) == 1 );
assert( gamma_golden_move(board, 5, 13, 13) == 1 );


char* board289030557 = gamma_board(board);
assert( board289030557 != NULL );
assert( strcmp(board289030557, 
".....5.122.7.4.357..2..7\n"
"...55..7.117....1.2...1.\n"
"3.65.3.2....4..3....2...\n"
"5............3......2...\n"
"2.....47.23...54..6.217.\n"
"4...2.............1....5\n"
".561.....5...5....1..73.\n"
"..111.....6....73......6\n"
".216..4..3.2722..2.6....\n"
"....473.75.6.3....3.2..5\n"
"..51.4.6......5.53....43\n"
"..1..62......6.4.....1..\n"
"1.....5.5..427...1.2....\n"
"...7.2...23.1...........\n"
"4.3.......5....7......2.\n"
"77..2....6.....4...7....\n"
"...466........1.4.......\n"
"2......66.1...3.5......6\n"
"......4..4...7...5......\n"
".2.2....22..3..1....47..\n") == 0);
free(board289030557);
board289030557 = NULL;
assert( gamma_move(board, 7, 1, 3) == 1 );
assert( gamma_move(board, 7, 6, 10) == 0 );
assert( gamma_move(board, 1, 22, 10) == 1 );
assert( gamma_move(board, 2, 0, 23) == 0 );
assert( gamma_move(board, 2, 6, 4) == 1 );
assert( gamma_busy_fields(board, 2) == 30 );
assert( gamma_move(board, 3, 11, 9) == 1 );
assert( gamma_move(board, 3, 15, 2) == 1 );
assert( gamma_move(board, 4, 8, 9) == 1 );
assert( gamma_move(board, 5, 23, 8) == 1 );
assert( gamma_move(board, 5, 10, 6) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 23, 4) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 4, 22) == 0 );
assert( gamma_busy_fields(board, 7) == 21 );
assert( gamma_move(board, 1, 0, 23) == 0 );
assert( gamma_move(board, 2, 15, 8) == 0 );
assert( gamma_move(board, 2, 20, 10) == 0 );
assert( gamma_move(board, 3, 15, 7) == 1 );
assert( gamma_move(board, 4, 1, 1) == 1 );
assert( gamma_move(board, 4, 14, 8) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 12, 1) == 1 );
assert( gamma_move(board, 6, 5, 8) == 0 );
assert( gamma_move(board, 6, 15, 2) == 0 );
assert( gamma_busy_fields(board, 6) == 18 );
assert( gamma_move(board, 7, 0, 11) == 1 );
assert( gamma_move(board, 1, 14, 1) == 1 );
assert( gamma_move(board, 2, 12, 11) == 0 );
assert( gamma_move(board, 2, 6, 6) == 1 );
assert( gamma_move(board, 3, 13, 11) == 0 );
assert( gamma_move(board, 4, 14, 16) == 1 );
assert( gamma_busy_fields(board, 4) == 22 );
assert( gamma_move(board, 5, 4, 19) == 1 );
assert( gamma_move(board, 6, 8, 7) == 0 );
assert( gamma_move(board, 6, 2, 8) == 0 );
assert( gamma_busy_fields(board, 6) == 18 );
assert( gamma_move(board, 7, 18, 6) == 1 );
assert( gamma_move(board, 1, 16, 7) == 1 );
assert( gamma_move(board, 1, 9, 9) == 1 );
assert( gamma_move(board, 2, 7, 22) == 0 );
assert( gamma_move(board, 2, 3, 12) == 0 );
assert( gamma_move(board, 3, 22, 18) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 13, 6) == 1 );
assert( gamma_move(board, 4, 4, 7) == 1 );
assert( gamma_move(board, 5, 12, 0) == 0 );
assert( gamma_move(board, 5, 2, 7) == 1 );
assert( gamma_golden_move(board, 6, 12, 2) == 0 );
assert( gamma_move(board, 7, 8, 11) == 1 );
assert( gamma_move(board, 7, 7, 2) == 0 );
assert( gamma_move(board, 1, 12, 8) == 1 );
assert( gamma_move(board, 2, 4, 10) == 0 );
assert( gamma_golden_move(board, 2, 3, 4) == 0 );
assert( gamma_move(board, 3, 17, 18) == 1 );
assert( gamma_move(board, 3, 6, 13) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 6, 8) == 0 );
assert( gamma_move(board, 4, 22, 12) == 1 );
assert( gamma_move(board, 6, 8, 1) == 1 );
assert( gamma_move(board, 6, 5, 16) == 1 );
assert( gamma_move(board, 7, 2, 21) == 0 );
assert( gamma_move(board, 1, 3, 18) == 0 );
assert( gamma_move(board, 2, 15, 3) == 1 );
assert( gamma_move(board, 3, 1, 0) == 0 );
assert( gamma_move(board, 3, 10, 17) == 1 );
assert( gamma_move(board, 4, 2, 22) == 0 );
assert( gamma_move(board, 4, 3, 10) == 1 );
assert( gamma_golden_move(board, 4, 19, 17) == 0 );
assert( gamma_move(board, 6, 18, 5) == 1 );
assert( gamma_move(board, 6, 22, 15) == 0 );
assert( gamma_move(board, 7, 4, 14) == 0 );
assert( gamma_busy_fields(board, 7) == 24 );
assert( gamma_move(board, 1, 9, 7) == 1 );
assert( gamma_move(board, 2, 3, 21) == 0 );
assert( gamma_move(board, 3, 8, 7) == 0 );
assert( gamma_busy_fields(board, 3) == 24 );
assert( gamma_golden_possible(board, 3) == 1 );


char* board508144334 = gamma_board(board);
assert( board508144334 != NULL );
assert( strcmp(board508144334, 
"....55.122.7.4.357..2..7\n"
"...55..7.117....132...1.\n"
"3.65.3.2..3.4..3....2...\n"
"5....6.......34.....2...\n"
"2.....47.23...54..6.217.\n"
"4...2.............1....5\n"
".561..3..5...5....1..73.\n"
"..111.....6....73.....46\n"
"7216..4.73.2722..2.6....\n"
"...4473.75.6.3....3.2.15\n"
"..51.4.641.3..5.53....43\n"
"..1..62.....1644.....1.5\n"
"1.5.4.5.51.427.311.2....\n"
"...7.22..23.14....7.....\n"
"4.3.......5....7..6...2.\n"
"77..2.2..6.....4...7...6\n"
".7.466........124.......\n"
"2......66.1...335......6\n"
".4....4.64..571..5......\n"
".2.2....22..3..1....47..\n") == 0);
free(board508144334);
board508144334 = NULL;
assert( gamma_move(board, 4, 6, 17) == 1 );
assert( gamma_move(board, 5, 2, 2) == 1 );
assert( gamma_move(board, 6, 10, 1) == 1 );
assert( gamma_move(board, 6, 8, 2) == 0 );
assert( gamma_free_fields(board, 6) == 297 );
assert( gamma_move(board, 7, 5, 20) == 0 );
assert( gamma_free_fields(board, 1) == 297 );
assert( gamma_move(board, 2, 16, 16) == 1 );
assert( gamma_move(board, 2, 15, 2) == 0 );
assert( gamma_move(board, 3, 14, 22) == 0 );
assert( gamma_move(board, 3, 18, 18) == 0 );
assert( gamma_busy_fields(board, 3) == 24 );
assert( gamma_golden_move(board, 3, 6, 6) == 1 );
assert( gamma_move(board, 4, 6, 5) == 1 );
assert( gamma_move(board, 5, 13, 7) == 0 );
assert( gamma_move(board, 5, 10, 7) == 1 );
assert( gamma_move(board, 6, 17, 12) == 1 );
assert( gamma_move(board, 7, 7, 22) == 0 );
assert( gamma_move(board, 1, 0, 5) == 0 );
assert( gamma_move(board, 1, 5, 8) == 0 );
assert( gamma_busy_fields(board, 1) == 28 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_free_fields(board, 3) == 293 );
assert( gamma_move(board, 4, 15, 13) == 1 );
assert( gamma_move(board, 5, 6, 23) == 0 );
assert( gamma_move(board, 5, 8, 9) == 0 );
assert( gamma_move(board, 6, 18, 11) == 1 );
assert( gamma_move(board, 7, 14, 16) == 0 );
assert( gamma_move(board, 7, 6, 11) == 0 );
assert( gamma_move(board, 1, 9, 18) == 0 );
assert( gamma_move(board, 2, 4, 13) == 1 );
assert( gamma_move(board, 2, 11, 1) == 1 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 9, 19) == 0 );
assert( gamma_busy_fields(board, 4) == 29 );
assert( gamma_move(board, 5, 16, 9) == 0 );
assert( gamma_free_fields(board, 6) == 289 );
assert( gamma_move(board, 7, 1, 20) == 0 );
assert( gamma_move(board, 7, 0, 15) == 0 );
assert( gamma_move(board, 1, 18, 8) == 1 );
assert( gamma_move(board, 1, 20, 17) == 0 );
assert( gamma_move(board, 2, 6, 8) == 0 );
assert( gamma_move(board, 3, 15, 13) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 17, 21) == 0 );
assert( gamma_move(board, 4, 9, 12) == 1 );
assert( gamma_move(board, 5, 8, 3) == 1 );
assert( gamma_move(board, 5, 5, 7) == 1 );
assert( gamma_move(board, 6, 9, 21) == 0 );
assert( gamma_move(board, 6, 14, 4) == 1 );
assert( gamma_move(board, 7, 15, 10) == 1 );
assert( gamma_move(board, 7, 20, 15) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 1, 4, 5) == 1 );
assert( gamma_move(board, 1, 19, 17) == 1 );
assert( gamma_move(board, 2, 0, 7) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 16, 6) == 1 );
assert( gamma_move(board, 3, 21, 3) == 1 );


char* board321779566 = gamma_board(board);
assert( board321779566 != NULL );
assert( strcmp(board321779566, 
"....55.122.7.4.357..2..7\n"
"...55..7.117....132...1.\n"
"3.65.342..3.4..3...12...\n"
"5....6.......34.2...2...\n"
"2.....47.23...54..6.217.\n"
"4...2.............1....5\n"
".5612.3..5...5.4..1..73.\n"
"..111....46....736....46\n"
"7216..4.73.2722..266....\n"
"...4473.75.6.3.7..3.2.15\n"
"..51.4.641.3..5.53....43\n"
"..1..62.....1644..1..1.5\n"
"1.5.455.515427.311.2....\n"
"...7.23..23.14..3.7.....\n"
"4.3.1.4...5....7..6...2.\n"
"77..2.2..6....64...7...6\n"
".7.466..5.....124....3..\n"
"2.5....66.1...335......6\n"
".4....4.6462571..5......\n"
".2.2....22..3..1....47..\n") == 0);
free(board321779566);
board321779566 = NULL;
assert( gamma_move(board, 4, 7, 17) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 6, 3, 10) == 0 );
assert( gamma_move(board, 7, 13, 19) == 0 );
assert( gamma_move(board, 1, 18, 2) == 1 );
assert( gamma_busy_fields(board, 1) == 32 );
assert( gamma_move(board, 2, 0, 7) == 0 );
assert( gamma_move(board, 2, 0, 17) == 0 );
assert( gamma_move(board, 3, 15, 8) == 0 );
assert( gamma_move(board, 4, 13, 8) == 0 );
assert( gamma_move(board, 4, 22, 18) == 0 );
assert( gamma_free_fields(board, 4) == 278 );
assert( gamma_move(board, 5, 2, 10) == 1 );
assert( gamma_move(board, 6, 13, 11) == 0 );
assert( gamma_move(board, 6, 6, 0) == 1 );
assert( gamma_move(board, 7, 14, 13) == 1 );
assert( gamma_move(board, 7, 22, 6) == 1 );
assert( gamma_busy_fields(board, 7) == 27 );
assert( gamma_move(board, 1, 11, 10) == 0 );
assert( gamma_move(board, 1, 16, 18) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 13, 0) == 1 );
assert( gamma_move(board, 2, 7, 7) == 1 );
assert( gamma_move(board, 4, 12, 18) == 1 );
assert( gamma_move(board, 4, 1, 16) == 1 );
assert( gamma_move(board, 5, 1, 18) == 1 );
assert( gamma_move(board, 5, 14, 3) == 0 );


char* board757178384 = gamma_board(board);
assert( board757178384 != NULL );
assert( strcmp(board757178384, 
"....55.122.7.4.357..2..7\n"
".5.55..7.1174...132...1.\n"
"3.65.342..3.4..3...12...\n"
"54...6.......34.2...2...\n"
"2.....47.23...54..6.217.\n"
"4...2.............1....5\n"
".5612.3..5...574..1..73.\n"
"..111....46....736....46\n"
"7216..4.73.2722..266....\n"
"..54473.75.6.3.7..3.2.15\n"
"..51.4.641.3..5.53....43\n"
"..1..62.....1644..1..1.5\n"
"1.5.4552515427.311.2....\n"
"...7.23..23.14..3.7...7.\n"
"4.3.1.4...5....7..6...2.\n"
"77..2.2..6....64...7...6\n"
".7.466..5.....124....3..\n"
"2.5....66.1...335.1....6\n"
".4....4.6462571..5......\n"
".2.2..6.22..32.1....47..\n") == 0);
free(board757178384);
board757178384 = NULL;
assert( gamma_move(board, 6, 8, 7) == 0 );
assert( gamma_move(board, 7, 16, 12) == 0 );
assert( gamma_move(board, 1, 11, 4) == 1 );
assert( gamma_move(board, 1, 4, 4) == 0 );
assert( gamma_move(board, 2, 17, 23) == 0 );
assert( gamma_move(board, 2, 13, 8) == 0 );
assert( gamma_move(board, 3, 17, 13) == 1 );
assert( gamma_move(board, 3, 16, 18) == 0 );
assert( gamma_move(board, 4, 7, 10) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 8, 19) == 0 );
assert( gamma_move(board, 7, 0, 2) == 0 );


char* board346712615 = gamma_board(board);
assert( board346712615 != NULL );
assert( strcmp(board346712615, 
"....55.122.7.4.357..2..7\n"
".5.55..7.1174...132...1.\n"
"3.65.342..3.4..3...12...\n"
"54...6.......34.2...2...\n"
"2.....47.23...54..6.217.\n"
"4...2.............1....5\n"
".5612.3..5...574.31..73.\n"
"..111....46....736....46\n"
"7216..4.73.2722..266....\n"
"..54473475.6.3.7..3.2.15\n"
"..51.4.641.3..5.53....43\n"
"..1..62.....1644..1..1.5\n"
"1.5.4552515427.311.2....\n"
"...7.23..23.14..3.7...7.\n"
"4.3.1.4...5....7..6...2.\n"
"77..2.2..6.1..64...7...6\n"
".7.466..5.....124....3..\n"
"2.5....66.1...335.1....6\n"
".4....4.6462571..5......\n"
".2.2..6.22..32.1....47..\n") == 0);
free(board346712615);
board346712615 = NULL;
assert( gamma_move(board, 1, 18, 14) == 0 );
assert( gamma_move(board, 1, 15, 4) == 0 );
assert( gamma_move(board, 2, 5, 5) == 1 );
assert( gamma_move(board, 3, 7, 14) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 6, 17, 12) == 0 );
assert( gamma_move(board, 6, 20, 11) == 1 );
assert( gamma_move(board, 1, 15, 17) == 0 );
assert( gamma_move(board, 2, 0, 4) == 0 );
assert( gamma_move(board, 2, 23, 18) == 1 );


char* board337681854 = gamma_board(board);
assert( board337681854 != NULL );
assert( strcmp(board337681854, 
"....55.122.7.4.357..2..7\n"
".5.55..7.1174...132...12\n"
"3.65.342..3.4..3...12...\n"
"54...6.......34.2...2...\n"
"2.....47.23...54..6.217.\n"
"4...2..3..........1....5\n"
".5612.3..5...574.31..73.\n"
"..111....46....736....46\n"
"7216..4.73.2722..2666...\n"
"..54473475.6.3.7..3.2.15\n"
"..51.4.641.3..5.53....43\n"
"..1..62.....1644..1..1.5\n"
"1.5.4552515427.311.2....\n"
"...7.23..23.14..3.7...7.\n"
"4.3.124...5....7..6...2.\n"
"77..2.2..6.1..64...7...6\n"
".7.466..5.....124....3..\n"
"2.5....66.1...335.1....6\n"
".4....4.6462571..5......\n"
".2.2..6.22..32.1....47..\n") == 0);
free(board337681854);
board337681854 = NULL;
assert( gamma_move(board, 3, 17, 2) == 1 );
assert( gamma_move(board, 3, 4, 11) == 1 );
assert( gamma_move(board, 4, 16, 22) == 0 );
assert( gamma_move(board, 4, 8, 12) == 1 );


char* board819111495 = gamma_board(board);
assert( board819111495 != NULL );
assert( strcmp(board819111495, 
"....55.122.7.4.357..2..7\n"
".5.55..7.1174...132...12\n"
"3.65.342..3.4..3...12...\n"
"54...6.......34.2...2...\n"
"2.....47.23...54..6.217.\n"
"4...2..3..........1....5\n"
".5612.3..5...574.31..73.\n"
"..111...446....736....46\n"
"72163.4.73.2722..2666...\n"
"..54473475.6.3.7..3.2.15\n"
"..51.4.641.3..5.53....43\n"
"..1..62.....1644..1..1.5\n"
"1.5.4552515427.311.2....\n"
"...7.23..23.14..3.7...7.\n"
"4.3.124...5....7..6...2.\n"
"77..2.2..6.1..64...7...6\n"
".7.466..5.....124....3..\n"
"2.5....66.1...33531....6\n"
".4....4.6462571..5......\n"
".2.2..6.22..32.1....47..\n") == 0);
free(board819111495);
board819111495 = NULL;
assert( gamma_move(board, 6, 4, 11) == 0 );
assert( gamma_move(board, 6, 2, 11) == 0 );
assert( gamma_free_fields(board, 6) == 259 );
assert( gamma_move(board, 7, 8, 9) == 0 );
assert( gamma_move(board, 7, 9, 3) == 1 );
assert( gamma_move(board, 1, 0, 7) == 0 );
assert( gamma_move(board, 1, 20, 8) == 1 );
assert( gamma_move(board, 2, 9, 18) == 0 );
assert( gamma_move(board, 3, 14, 10) == 1 );
assert( gamma_move(board, 4, 17, 22) == 0 );
assert( gamma_move(board, 4, 16, 9) == 0 );
assert( gamma_move(board, 5, 2, 14) == 1 );
assert( gamma_move(board, 6, 12, 1) == 0 );
assert( gamma_move(board, 6, 0, 6) == 1 );
assert( gamma_move(board, 7, 7, 16) == 1 );
assert( gamma_move(board, 1, 6, 8) == 0 );
assert( gamma_move(board, 1, 5, 9) == 0 );
assert( gamma_move(board, 2, 6, 7) == 0 );
assert( gamma_move(board, 3, 8, 5) == 1 );
assert( gamma_free_fields(board, 3) == 252 );
assert( gamma_move(board, 4, 13, 4) == 1 );
assert( gamma_move(board, 5, 7, 1) == 1 );
assert( gamma_move(board, 6, 17, 3) == 1 );
assert( gamma_move(board, 6, 11, 6) == 1 );
assert( gamma_free_fields(board, 6) == 248 );
assert( gamma_move(board, 7, 13, 14) == 1 );
assert( gamma_move(board, 1, 14, 20) == 0 );
assert( gamma_move(board, 1, 0, 0) == 1 );
assert( gamma_busy_fields(board, 1) == 35 );
assert( gamma_move(board, 2, 15, 3) == 0 );
assert( gamma_move(board, 2, 10, 14) == 1 );
assert( gamma_busy_fields(board, 2) == 39 );
assert( gamma_move(board, 3, 10, 4) == 1 );
assert( gamma_move(board, 3, 13, 4) == 0 );
assert( gamma_move(board, 4, 4, 20) == 0 );
assert( gamma_move(board, 5, 3, 0) == 0 );
assert( gamma_move(board, 5, 5, 5) == 0 );
assert( gamma_move(board, 6, 22, 6) == 0 );
assert( gamma_move(board, 7, 22, 17) == 1 );
assert( gamma_move(board, 7, 5, 5) == 0 );
assert( gamma_move(board, 1, 8, 19) == 0 );
assert( gamma_free_fields(board, 1) == 243 );
assert( gamma_move(board, 2, 1, 2) == 1 );
assert( gamma_move(board, 2, 1, 1) == 0 );
assert( gamma_move(board, 3, 18, 5) == 0 );
assert( gamma_move(board, 3, 19, 10) == 1 );
assert( gamma_move(board, 4, 2, 9) == 0 );
assert( gamma_move(board, 6, 5, 19) == 0 );
assert( gamma_move(board, 6, 12, 1) == 0 );
assert( gamma_busy_fields(board, 6) == 30 );
assert( gamma_move(board, 7, 19, 0) == 1 );
assert( gamma_move(board, 1, 9, 0) == 0 );
assert( gamma_move(board, 1, 5, 6) == 0 );


char* board584719777 = gamma_board(board);
assert( board584719777 != NULL );
assert( strcmp(board584719777, 
"....55.122.7.4.357..2..7\n"
".5.55..7.1174...132...12\n"
"3.65.342..3.4..3...12.7.\n"
"54...6.7.....34.2...2...\n"
"2.....47.23...54..6.217.\n"
"4.5.2..3..2..7....1....5\n"
".5612.3..5...574.31..73.\n"
"..111...446....736....46\n"
"72163.4.73.2722..2666...\n"
"..54473475.6.337..332.15\n"
"..51.4.641.3..5.53....43\n"
"..1..62.....1644..1.11.5\n"
"1.5.4552515427.311.2....\n"
"6..7.23..23614..3.7...7.\n"
"4.3.124.3.5....7..6...2.\n"
"77..2.2..631.464...7...6\n"
".7.466..57....1246...3..\n"
"225....66.1...33531....6\n"
".4....456462571..5......\n"
"12.2..6.22..32.1...747..\n") == 0);
free(board584719777);
board584719777 = NULL;
assert( gamma_move(board, 2, 0, 3) == 1 );
assert( gamma_move(board, 3, 17, 16) == 1 );
assert( gamma_golden_move(board, 3, 7, 6) == 0 );


char* board117346265 = gamma_board(board);
assert( board117346265 != NULL );
assert( strcmp(board117346265, 
"....55.122.7.4.357..2..7\n"
".5.55..7.1174...132...12\n"
"3.65.342..3.4..3...12.7.\n"
"54...6.7.....34.23..2...\n"
"2.....47.23...54..6.217.\n"
"4.5.2..3..2..7....1....5\n"
".5612.3..5...574.31..73.\n"
"..111...446....736....46\n"
"72163.4.73.2722..2666...\n"
"..54473475.6.337..332.15\n"
"..51.4.641.3..5.53....43\n"
"..1..62.....1644..1.11.5\n"
"1.5.4552515427.311.2....\n"
"6..7.23..23614..3.7...7.\n"
"4.3.124.3.5....7..6...2.\n"
"77..2.2..631.464...7...6\n"
"27.466..57....1246...3..\n"
"225....66.1...33531....6\n"
".4....456462571..5......\n"
"12.2..6.22..32.1...747..\n") == 0);
free(board117346265);
board117346265 = NULL;
assert( gamma_move(board, 4, 3, 0) == 0 );
assert( gamma_move(board, 5, 7, 18) == 0 );
assert( gamma_move(board, 6, 4, 17) == 1 );
assert( gamma_move(board, 7, 2, 20) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 1, 5, 1) == 1 );
assert( gamma_move(board, 2, 13, 0) == 0 );
assert( gamma_move(board, 2, 11, 16) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 23, 14) == 0 );
assert( gamma_free_fields(board, 3) == 235 );
assert( gamma_move(board, 4, 12, 6) == 0 );
assert( gamma_move(board, 5, 11, 11) == 0 );
assert( gamma_move(board, 6, 3, 20) == 0 );
assert( gamma_free_fields(board, 6) == 235 );
assert( gamma_move(board, 7, 22, 15) == 0 );
assert( gamma_move(board, 1, 2, 19) == 1 );
assert( gamma_move(board, 2, 12, 11) == 0 );
assert( gamma_move(board, 3, 19, 6) == 1 );
assert( gamma_move(board, 4, 18, 2) == 0 );
assert( gamma_move(board, 5, 5, 17) == 0 );
assert( gamma_move(board, 5, 14, 10) == 0 );
assert( gamma_free_fields(board, 5) == 233 );
assert( gamma_move(board, 6, 0, 10) == 1 );
assert( gamma_move(board, 7, 12, 4) == 1 );
assert( gamma_move(board, 7, 2, 10) == 0 );
assert( gamma_move(board, 1, 7, 23) == 0 );
assert( gamma_move(board, 1, 12, 5) == 1 );
assert( gamma_move(board, 2, 17, 11) == 0 );
assert( gamma_move(board, 2, 22, 0) == 1 );
assert( gamma_move(board, 3, 8, 10) == 0 );
assert( gamma_move(board, 3, 5, 9) == 0 );
assert( gamma_move(board, 5, 8, 8) == 1 );


char* board181006183 = gamma_board(board);
assert( board181006183 != NULL );
assert( strcmp(board181006183, 
"..1.55.122.7.4.357..2..7\n"
".5.55..7.1174...132...12\n"
"3.656342..3.4..3...12.7.\n"
"54...6.7...2.34.23..2...\n"
"2.....47.23...54..6.217.\n"
"4.5.2..3..2..7....1....5\n"
".5612.3..5...574.31..73.\n"
"..111...446....736....46\n"
"72163.4.73.2722..2666...\n"
"6.54473475.6.337..332.15\n"
"..51.4.641.3..5.53....43\n"
"..1..62.5...1644..1.11.5\n"
"1.5.4552515427.311.2....\n"
"6..7.23..23614..3.73..7.\n"
"4.3.124.3.5.1..7..6...2.\n"
"77..2.2..6317464...7...6\n"
"27.466..57....1246...3..\n"
"225....66.1...33531....6\n"
".4...1456462571..5......\n"
"12.2..6.22..32.1...7472.\n") == 0);
free(board181006183);
board181006183 = NULL;
assert( gamma_move(board, 6, 6, 3) == 1 );
assert( gamma_move(board, 7, 0, 14) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 1, 17, 23) == 0 );
assert( gamma_move(board, 2, 5, 7) == 0 );
assert( gamma_move(board, 2, 9, 13) == 0 );
assert( gamma_golden_move(board, 2, 12, 16) == 0 );
assert( gamma_move(board, 3, 18, 8) == 0 );
assert( gamma_move(board, 3, 17, 7) == 0 );
assert( gamma_move(board, 4, 17, 17) == 1 );
assert( gamma_move(board, 4, 18, 1) == 1 );
assert( gamma_move(board, 5, 14, 22) == 0 );
assert( gamma_move(board, 5, 2, 2) == 0 );
assert( gamma_busy_fields(board, 5) == 34 );
assert( gamma_move(board, 6, 23, 17) == 1 );
assert( gamma_golden_move(board, 6, 6, 13) == 1 );
assert( gamma_move(board, 1, 4, 22) == 0 );
assert( gamma_move(board, 2, 3, 7) == 1 );
assert( gamma_move(board, 2, 19, 11) == 0 );
assert( gamma_move(board, 3, 3, 12) == 0 );
assert( gamma_move(board, 3, 17, 2) == 0 );
assert( gamma_move(board, 4, 19, 12) == 1 );
assert( gamma_move(board, 5, 9, 3) == 0 );
assert( gamma_move(board, 6, 17, 13) == 0 );
assert( gamma_golden_move(board, 6, 13, 3) == 0 );
assert( gamma_move(board, 7, 17, 14) == 1 );
assert( gamma_move(board, 1, 11, 5) == 1 );
assert( gamma_move(board, 1, 16, 3) == 0 );
assert( gamma_move(board, 3, 7, 23) == 0 );
assert( gamma_move(board, 4, 1, 8) == 1 );
assert( gamma_move(board, 5, 11, 10) == 0 );
assert( gamma_busy_fields(board, 5) == 34 );
assert( gamma_move(board, 6, 4, 17) == 0 );
assert( gamma_move(board, 6, 22, 3) == 1 );
assert( gamma_busy_fields(board, 6) == 36 );


char* board228522515 = gamma_board(board);
assert( board228522515 != NULL );
assert( strcmp(board228522515, 
"..1.55.122.7.4.357..2..7\n"
".5.55..7.1174...132...12\n"
"3.656342..3.4..3.4.12.76\n"
"54...6.7...2.34.23..2...\n"
"2.....47.23...54..6.217.\n"
"4.5.2..3..2..7...71....5\n"
".5612.6..5...574.31..73.\n"
"..111...446....736.4..46\n"
"72163.4.73.2722..2666...\n"
"6.54473475.6.337..332.15\n"
"..51.4.641.3..5.53....43\n"
".41..62.5...1644..1.11.5\n"
"1.524552515427.311.2....\n"
"6..7.23..23614..3.73..7.\n"
"4.3.124.3.511..7..6...2.\n"
"77..2.2..6317464...7...6\n"
"27.4666.57....1246...36.\n"
"225....66.1...33531....6\n"
".4...1456462571..54.....\n"
"12.2..6.22..32.1...7472.\n") == 0);
free(board228522515);
board228522515 = NULL;
assert( gamma_move(board, 7, 23, 19) == 0 );
assert( gamma_busy_fields(board, 7) == 34 );
assert( gamma_move(board, 1, 4, 16) == 1 );
assert( gamma_move(board, 2, 3, 19) == 1 );
assert( gamma_move(board, 3, 12, 0) == 0 );
assert( gamma_move(board, 3, 21, 9) == 1 );
assert( gamma_free_fields(board, 3) == 215 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 5, 16) == 0 );
assert( gamma_busy_fields(board, 4) == 39 );
assert( gamma_move(board, 5, 9, 6) == 0 );
assert( gamma_move(board, 5, 21, 3) == 0 );
assert( gamma_move(board, 7, 1, 19) == 1 );
assert( gamma_move(board, 7, 15, 13) == 0 );
assert( gamma_move(board, 1, 17, 1) == 0 );
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_move(board, 2, 19, 12) == 0 );
assert( gamma_free_fields(board, 2) == 214 );
assert( gamma_move(board, 3, 12, 20) == 0 );
assert( gamma_move(board, 4, 14, 20) == 0 );
assert( gamma_move(board, 4, 7, 12) == 1 );
assert( gamma_move(board, 5, 0, 7) == 0 );
assert( gamma_move(board, 5, 1, 5) == 1 );
assert( gamma_move(board, 6, 9, 4) == 0 );
assert( gamma_move(board, 6, 12, 12) == 1 );
assert( gamma_move(board, 7, 14, 19) == 1 );
assert( gamma_move(board, 7, 23, 16) == 1 );
assert( gamma_move(board, 2, 16, 3) == 0 );
assert( gamma_move(board, 2, 6, 19) == 1 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 5, 11, 15) == 1 );
assert( gamma_free_fields(board, 5) == 207 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 18, 2) == 0 );
assert( gamma_move(board, 7, 15, 4) == 0 );
assert( gamma_move(board, 7, 0, 17) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 1, 18, 20) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 10, 17) == 0 );
assert( gamma_move(board, 3, 2, 5) == 0 );
assert( gamma_move(board, 3, 13, 2) == 1 );
assert( gamma_move(board, 4, 2, 20) == 0 );
assert( gamma_busy_fields(board, 4) == 40 );
assert( gamma_move(board, 5, 6, 20) == 0 );
assert( gamma_move(board, 6, 12, 1) == 0 );
assert( gamma_move(board, 7, 15, 2) == 0 );
assert( gamma_move(board, 7, 1, 14) == 1 );
assert( gamma_golden_move(board, 7, 1, 7) == 0 );
assert( gamma_move(board, 1, 15, 5) == 0 );
assert( gamma_move(board, 3, 6, 19) == 0 );
assert( gamma_move(board, 3, 13, 17) == 1 );
assert( gamma_move(board, 4, 17, 5) == 1 );
assert( gamma_move(board, 4, 5, 13) == 1 );
assert( gamma_move(board, 5, 4, 13) == 0 );
assert( gamma_move(board, 5, 6, 1) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );


char* board391148296 = gamma_board(board);
assert( board391148296 != NULL );
assert( strcmp(board391148296, 
".712552122.7.47357..2..7\n"
".5.55..7.1174...132...12\n"
"3.656342..3.43.3.4.12.76\n"
"54..16.7...2.34.23..2..7\n"
"2.....47.235..54..6.217.\n"
"475.2..3..2..7...71....5\n"
".561246..5...574.31..73.\n"
"..111..4446.6..736.4..46\n"
"72163.4.73.2722..2666...\n"
"6.54473475.6.337..332.15\n"
"..51.4.641.3..5.53...343\n"
".41..62.5...1644..1.11.5\n"
"1.524552515427.311.2....\n"
"6..7.23..23614..3.73..7.\n"
"453.124.3.511..7.46...2.\n"
"77..2.2..6317464...7...6\n"
"27.4666.57....1246...36.\n"
"225....66.1..333531....6\n"
".4...1456462571..54.....\n"
"12.2..6.22..32.1...7472.\n") == 0);
free(board391148296);
board391148296 = NULL;
assert( gamma_move(board, 6, 16, 8) == 1 );
assert( gamma_golden_move(board, 6, 9, 3) == 0 );
assert( gamma_move(board, 7, 8, 9) == 0 );
assert( gamma_move(board, 7, 1, 19) == 0 );
assert( gamma_move(board, 1, 1, 15) == 1 );
assert( gamma_move(board, 1, 21, 2) == 1 );
assert( gamma_busy_fields(board, 1) == 42 );
assert( gamma_move(board, 2, 0, 14) == 0 );
assert( gamma_move(board, 3, 14, 8) == 0 );
assert( gamma_move(board, 4, 0, 8) == 1 );
assert( gamma_move(board, 4, 23, 3) == 1 );
assert( gamma_free_fields(board, 4) == 59 );
assert( gamma_move(board, 5, 22, 12) == 0 );
assert( gamma_move(board, 5, 17, 19) == 0 );
assert( gamma_move(board, 6, 1, 20) == 0 );
assert( gamma_move(board, 7, 1, 19) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 1, 5, 9) == 0 );
assert( gamma_move(board, 1, 18, 16) == 1 );
assert( gamma_free_fields(board, 1) == 196 );
assert( gamma_golden_move(board, 1, 11, 20) == 0 );
assert( gamma_move(board, 2, 3, 10) == 0 );
assert( gamma_move(board, 3, 17, 8) == 1 );
assert( gamma_free_fields(board, 3) == 195 );
assert( gamma_move(board, 4, 18, 8) == 0 );
assert( gamma_move(board, 5, 6, 17) == 0 );
assert( gamma_move(board, 5, 7, 8) == 1 );
assert( gamma_move(board, 6, 2, 6) == 1 );
assert( gamma_move(board, 6, 8, 13) == 1 );


char* board874380607 = gamma_board(board);
assert( board874380607 != NULL );
assert( strcmp(board874380607, 
".712552122.7.47357..2..7\n"
".5.55..7.1174...132...12\n"
"3.656342..3.43.3.4.12.76\n"
"54..16.7...2.34.231.2..7\n"
"21....47.235..54..6.217.\n"
"475.2..3..2..7...71....5\n"
".561246.65...574.31..73.\n"
"..111..4446.6..736.4..46\n"
"72163.4.73.2722..2666...\n"
"6.54473475.6.337..332.15\n"
"..51.4.641.3..5.53...343\n"
"441..6255...1644631.11.5\n"
"1.524552515427.311.2....\n"
"6.67.23..23614..3.73..7.\n"
"453.124.3.511..7.46...2.\n"
"77..2.2..6317464...7...6\n"
"27.4666.57....1246...364\n"
"225....66.1..333531..1.6\n"
".4...1456462571..54.....\n"
"12.2..6.22..32.1...7472.\n") == 0);
free(board874380607);
board874380607 = NULL;
assert( gamma_golden_move(board, 7, 2, 23) == 0 );
assert( gamma_move(board, 1, 2, 13) == 0 );
assert( gamma_free_fields(board, 1) == 192 );
assert( gamma_move(board, 2, 0, 11) == 0 );
assert( gamma_move(board, 3, 5, 8) == 0 );
assert( gamma_move(board, 4, 5, 23) == 0 );
assert( gamma_move(board, 5, 5, 21) == 0 );
assert( gamma_move(board, 6, 8, 3) == 0 );
assert( gamma_move(board, 6, 20, 6) == 1 );
assert( gamma_move(board, 7, 6, 4) == 0 );
assert( gamma_free_fields(board, 7) == 191 );
assert( gamma_move(board, 1, 6, 1) == 0 );
assert( gamma_move(board, 1, 12, 14) == 1 );
assert( gamma_move(board, 2, 5, 14) == 1 );
assert( gamma_move(board, 3, 11, 9) == 0 );
assert( gamma_move(board, 3, 17, 2) == 0 );
assert( gamma_move(board, 4, 6, 21) == 0 );
assert( gamma_move(board, 4, 3, 9) == 0 );
assert( gamma_move(board, 5, 19, 4) == 0 );
assert( gamma_golden_move(board, 5, 7, 4) == 0 );
assert( gamma_move(board, 6, 4, 16) == 0 );
assert( gamma_move(board, 6, 19, 1) == 1 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 7, 14, 6) == 1 );
assert( gamma_move(board, 7, 13, 13) == 0 );
assert( gamma_free_fields(board, 7) == 187 );
assert( gamma_move(board, 1, 20, 3) == 1 );
assert( gamma_move(board, 1, 21, 6) == 1 );
assert( gamma_busy_fields(board, 1) == 46 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 17, 0) == 1 );
assert( gamma_move(board, 2, 1, 19) == 0 );
assert( gamma_move(board, 3, 11, 23) == 0 );
assert( gamma_move(board, 4, 15, 5) == 0 );
assert( gamma_move(board, 5, 12, 14) == 0 );
assert( gamma_move(board, 5, 22, 8) == 1 );
assert( gamma_move(board, 6, 8, 1) == 0 );
assert( gamma_move(board, 7, 14, 14) == 1 );
assert( gamma_move(board, 7, 17, 9) == 0 );
assert( gamma_move(board, 1, 2, 22) == 0 );
assert( gamma_move(board, 1, 6, 11) == 0 );
assert( gamma_free_fields(board, 1) == 182 );
assert( gamma_move(board, 2, 12, 1) == 0 );
assert( gamma_move(board, 3, 3, 1) == 1 );
assert( gamma_move(board, 3, 1, 0) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_golden_move(board, 3, 19, 2) == 0 );
assert( gamma_move(board, 4, 16, 10) == 0 );
assert( gamma_move(board, 5, 10, 17) == 0 );
assert( gamma_move(board, 5, 18, 15) == 0 );
assert( gamma_move(board, 6, 16, 6) == 0 );


char* board531618438 = gamma_board(board);
assert( board531618438 != NULL );
assert( strcmp(board531618438, 
".712552122.7.47357..2..7\n"
".5.55..7.1174...132...12\n"
"3.656342..3.43.3.4.12.76\n"
"54..16.7...2.34.231.2..7\n"
"21....47.235..54..6.217.\n"
"475.22.3..2.177..71....5\n"
".561246.65...574.31..73.\n"
"..111..4446.6..736.4..46\n"
"72163.4.73.2722..2666...\n"
"6.54473475.6.337..332.15\n"
"..51.4.641.3..5.53...343\n"
"441..6255...1644631.1155\n"
"1.524552515427.311.2....\n"
"6.67.23..236147.3.73617.\n"
"453.124.3.511..7.46...2.\n"
"77..2.2..6317464...7...6\n"
"27.4666.57....1246..1364\n"
"225....66.1..333531..1.6\n"
".4.3.1456462571..546....\n"
"12.2..6.22..32.1.2.7472.\n") == 0);
free(board531618438);
board531618438 = NULL;
assert( gamma_move(board, 7, 13, 16) == 0 );
assert( gamma_move(board, 7, 0, 18) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 1, 5, 14) == 0 );
assert( gamma_move(board, 2, 5, 7) == 0 );
assert( gamma_move(board, 2, 20, 18) == 1 );
assert( gamma_move(board, 3, 8, 10) == 0 );
assert( gamma_move(board, 4, 19, 18) == 0 );
assert( gamma_busy_fields(board, 4) == 44 );
assert( gamma_golden_move(board, 5, 17, 6) == 0 );
assert( gamma_move(board, 6, 2, 6) == 0 );
assert( gamma_move(board, 7, 14, 6) == 0 );
assert( gamma_move(board, 7, 11, 7) == 0 );
assert( gamma_move(board, 1, 3, 2) == 1 );
assert( gamma_move(board, 2, 2, 9) == 0 );
assert( gamma_move(board, 2, 15, 1) == 1 );
assert( gamma_move(board, 3, 8, 3) == 0 );
assert( gamma_move(board, 3, 18, 2) == 0 );
assert( gamma_move(board, 5, 10, 14) == 0 );
assert( gamma_move(board, 5, 18, 19) == 1 );
assert( gamma_move(board, 6, 8, 14) == 1 );
assert( gamma_move(board, 6, 9, 6) == 0 );
assert( gamma_move(board, 7, 15, 16) == 1 );
assert( gamma_move(board, 7, 2, 5) == 0 );


char* board618666004 = gamma_board(board);
assert( board618666004 != NULL );
assert( strcmp(board618666004, 
".712552122.7.473575.2..7\n"
"75.55..7.1174...132.2.12\n"
"3.656342..3.43.3.4.12.76\n"
"54..16.7...2.347231.2..7\n"
"21....47.235..54..6.217.\n"
"475.22.36.2.177..71....5\n"
".561246.65...574.31..73.\n"
"..111..4446.6..736.4..46\n"
"72163.4.73.2722..2666...\n"
"6.54473475.6.337..332.15\n"
"..51.4.641.3..5.53...343\n"
"441..6255...1644631.1155\n"
"1.524552515427.311.2....\n"
"6.67.23..236147.3.73617.\n"
"453.124.3.511..7.46...2.\n"
"77..2.2..6317464...7...6\n"
"27.4666.57....1246..1364\n"
"2251...66.1..333531..1.6\n"
".4.3.14564625712.546....\n"
"12.2..6.22..32.1.2.7472.\n") == 0);
free(board618666004);
board618666004 = NULL;
assert( gamma_move(board, 1, 6, 3) == 0 );
assert( gamma_move(board, 1, 7, 7) == 0 );
assert( gamma_move(board, 2, 16, 15) == 1 );
assert( gamma_move(board, 2, 17, 15) == 1 );
assert( gamma_move(board, 3, 13, 14) == 0 );
assert( gamma_move(board, 4, 9, 8) == 0 );
assert( gamma_move(board, 4, 7, 2) == 0 );
assert( gamma_move(board, 5, 7, 1) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 17, 11) == 0 );
assert( gamma_move(board, 6, 5, 0) == 1 );
assert( gamma_move(board, 7, 13, 7) == 0 );
assert( gamma_busy_fields(board, 7) == 42 );
assert( gamma_move(board, 1, 16, 11) == 1 );
assert( gamma_move(board, 2, 17, 1) == 0 );
assert( gamma_move(board, 3, 6, 23) == 0 );
assert( gamma_move(board, 3, 19, 15) == 1 );
assert( gamma_move(board, 4, 4, 5) == 0 );
assert( gamma_busy_fields(board, 4) == 44 );
assert( gamma_move(board, 5, 9, 12) == 0 );


char* board573936890 = gamma_board(board);
assert( board573936890 != NULL );
assert( strcmp(board573936890, 
".712552122.7.473575.2..7\n"
"75.55..7.1174...132.2.12\n"
"3.656342..3.43.3.4.12.76\n"
"54..16.7...2.347231.2..7\n"
"21....47.235..542263217.\n"
"475.22.36.2.177..71....5\n"
".561246.65...574.31..73.\n"
"..111..4446.6..736.4..46\n"
"72163.4.73.2722.12666...\n"
"6.54473475.6.337..332.15\n"
"..51.4.641.3..5.53...343\n"
"441..6255...1644631.1155\n"
"1.524552515427.311.2....\n"
"6.67.23..236147.3.73617.\n"
"453.124.3.511..7.46...2.\n"
"77..2.2..6317464...7...6\n"
"27.4666.57....1246..1364\n"
"2251...66.1..333531..1.6\n"
".4.3.14564625712.546....\n"
"12.2.66.22..32.1.2.7472.\n") == 0);
free(board573936890);
board573936890 = NULL;
assert( gamma_move(board, 6, 9, 11) == 0 );
assert( gamma_busy_fields(board, 6) == 44 );
assert( gamma_move(board, 7, 18, 8) == 0 );
assert( gamma_move(board, 7, 14, 10) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 1, 14, 6) == 0 );
assert( gamma_move(board, 1, 7, 10) == 0 );
assert( gamma_move(board, 2, 2, 15) == 0 );
assert( gamma_move(board, 3, 16, 3) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 2, 19) == 0 );
assert( gamma_free_fields(board, 4) == 51 );
assert( gamma_move(board, 5, 3, 12) == 0 );
assert( gamma_move(board, 6, 7, 4) == 1 );
assert( gamma_move(board, 6, 20, 17) == 0 );
assert( gamma_move(board, 7, 10, 0) == 1 );
assert( gamma_move(board, 7, 4, 12) == 0 );
assert( gamma_golden_move(board, 7, 8, 20) == 0 );
assert( gamma_busy_fields(board, 1) == 48 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 12, 9) == 0 );
assert( gamma_move(board, 3, 2, 4) == 1 );
assert( gamma_move(board, 4, 5, 3) == 0 );
assert( gamma_move(board, 4, 3, 17) == 0 );
assert( gamma_move(board, 5, 22, 15) == 0 );
assert( gamma_busy_fields(board, 5) == 39 );
assert( gamma_move(board, 6, 9, 11) == 0 );
assert( gamma_move(board, 6, 3, 5) == 1 );
assert( gamma_move(board, 7, 2, 4) == 0 );
assert( gamma_move(board, 1, 3, 11) == 0 );
assert( gamma_move(board, 2, 8, 10) == 0 );
assert( gamma_golden_move(board, 2, 5, 18) == 0 );
assert( gamma_move(board, 3, 18, 13) == 0 );
assert( gamma_move(board, 3, 5, 9) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 5, 7) == 0 );
assert( gamma_move(board, 4, 18, 3) == 0 );
assert( gamma_move(board, 5, 0, 7) == 0 );
assert( gamma_move(board, 5, 18, 11) == 0 );
assert( gamma_busy_fields(board, 5) == 39 );
assert( gamma_free_fields(board, 5) == 165 );
assert( gamma_move(board, 6, 7, 2) == 0 );
assert( gamma_move(board, 6, 23, 8) == 0 );
assert( gamma_move(board, 7, 18, 19) == 0 );
assert( gamma_busy_fields(board, 7) == 43 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 1, 1, 2) == 0 );
assert( gamma_move(board, 1, 23, 1) == 1 );
assert( gamma_free_fields(board, 2) == 63 );
assert( gamma_move(board, 3, 12, 11) == 0 );
assert( gamma_move(board, 4, 6, 4) == 0 );
assert( gamma_move(board, 5, 6, 23) == 0 );
assert( gamma_move(board, 5, 19, 2) == 1 );
assert( gamma_move(board, 6, 18, 2) == 0 );
assert( gamma_move(board, 6, 11, 19) == 0 );
assert( gamma_move(board, 7, 8, 10) == 0 );
assert( gamma_move(board, 1, 0, 23) == 0 );
assert( gamma_move(board, 2, 19, 21) == 0 );
assert( gamma_move(board, 3, 14, 19) == 0 );
assert( gamma_move(board, 3, 21, 9) == 0 );
assert( gamma_move(board, 4, 0, 3) == 0 );
assert( gamma_move(board, 4, 7, 0) == 0 );
assert( gamma_move(board, 5, 15, 23) == 0 );
assert( gamma_free_fields(board, 5) == 163 );
assert( gamma_move(board, 6, 19, 12) == 0 );
assert( gamma_move(board, 6, 6, 4) == 0 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 7, 0, 11) == 0 );


char* board889287657 = gamma_board(board);
assert( board889287657 != NULL );
assert( strcmp(board889287657, 
".712552122.7.473575.2..7\n"
"75.55..7.1174...132.2.12\n"
"3.656342..3.43.3.4.12.76\n"
"54..16.7...2.347231.2..7\n"
"21....47.235..542263217.\n"
"475.22.36.2.177..71....5\n"
".561246.65...574.31..73.\n"
"..111..4446.6..736.4..46\n"
"72163.4.73.2722.12666...\n"
"6.54473475.6.337..332.15\n"
"..51.4.641.3..5.53...343\n"
"441..6255...1644631.1155\n"
"1.524552515427.311.2....\n"
"6.67.23..236147.3.73617.\n"
"4536124.3.511..7.46...2.\n"
"773.2.26.6317464...7...6\n"
"27.4666.57....1246..1364\n"
"2251...66.1..3335315.1.6\n"
".4.3.14564625712.546...1\n"
"12.2.66.227.32.1.2.7472.\n") == 0);
free(board889287657);
board889287657 = NULL;
assert( gamma_move(board, 1, 18, 21) == 0 );
assert( gamma_free_fields(board, 1) == 65 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 13, 6) == 0 );
assert( gamma_move(board, 2, 18, 11) == 0 );
assert( gamma_move(board, 3, 16, 6) == 0 );
assert( gamma_move(board, 4, 12, 5) == 0 );
assert( gamma_move(board, 4, 4, 4) == 0 );
assert( gamma_move(board, 5, 2, 4) == 0 );
assert( gamma_move(board, 5, 21, 15) == 0 );
assert( gamma_busy_fields(board, 5) == 40 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 8, 7) == 0 );
assert( gamma_move(board, 6, 6, 0) == 0 );
assert( gamma_move(board, 7, 0, 14) == 0 );
assert( gamma_move(board, 7, 21, 9) == 0 );
assert( gamma_move(board, 1, 19, 10) == 0 );
assert( gamma_move(board, 2, 2, 13) == 0 );


char* board939512262 = gamma_board(board);
assert( board939512262 != NULL );
assert( strcmp(board939512262, 
".712552122.7.473575.2..7\n"
"75.55..7.1174...132.2.12\n"
"3.656342..3.43.3.4.12.76\n"
"54..16.7...2.347231.2..7\n"
"21....47.235..542263217.\n"
"475.22.36.2.177..71....5\n"
".561246.65...574.31..73.\n"
"..111..4446.6..736.4..46\n"
"72163.4.73.2722.12666...\n"
"6.54473475.6.337..332.15\n"
"..51.4.641.3..5.53...343\n"
"441..6255...1644631.1155\n"
"1.524552515427.311.2....\n"
"6.67.23..236147.3.73617.\n"
"4536124.3.511..7.46...2.\n"
"773.2.26.6317464...7...6\n"
"27.4666.57....1246..1364\n"
"2251...66.1..3335315.1.6\n"
".4.3.14564625712.546...1\n"
"12.2.66.227.32.1.2.7472.\n") == 0);
free(board939512262);
board939512262 = NULL;
assert( gamma_move(board, 3, 15, 5) == 0 );
assert( gamma_move(board, 4, 7, 1) == 0 );
assert( gamma_move(board, 4, 3, 0) == 0 );
assert( gamma_move(board, 5, 15, 3) == 0 );
assert( gamma_move(board, 5, 8, 18) == 1 );
assert( gamma_free_fields(board, 6) == 51 );
assert( gamma_move(board, 7, 15, 8) == 0 );
assert( gamma_move(board, 7, 4, 17) == 0 );
assert( gamma_move(board, 1, 18, 5) == 0 );
assert( gamma_move(board, 1, 20, 19) == 0 );
assert( gamma_move(board, 2, 9, 18) == 0 );
assert( gamma_move(board, 3, 8, 9) == 0 );
assert( gamma_free_fields(board, 3) == 162 );
assert( gamma_move(board, 4, 16, 10) == 0 );
assert( gamma_free_fields(board, 4) == 51 );
assert( gamma_golden_move(board, 4, 19, 5) == 0 );
assert( gamma_move(board, 6, 3, 19) == 0 );
assert( gamma_move(board, 6, 8, 5) == 0 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 7, 10, 10) == 1 );
assert( gamma_move(board, 1, 23, 5) == 0 );
assert( gamma_move(board, 1, 1, 8) == 0 );
assert( gamma_move(board, 2, 2, 20) == 0 );
assert( gamma_move(board, 3, 14, 21) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 5, 14) == 0 );
assert( gamma_move(board, 4, 0, 6) == 0 );
assert( gamma_move(board, 5, 10, 21) == 0 );
assert( gamma_move(board, 6, 5, 15) == 1 );
assert( gamma_move(board, 6, 0, 12) == 0 );
assert( gamma_move(board, 7, 0, 14) == 0 );
assert( gamma_move(board, 7, 21, 19) == 1 );
assert( gamma_move(board, 1, 3, 1) == 0 );


char* board638850178 = gamma_board(board);
assert( board638850178 != NULL );
assert( strcmp(board638850178, 
".712552122.7.473575.27.7\n"
"75.55..751174...132.2.12\n"
"3.656342..3.43.3.4.12.76\n"
"54..16.7...2.347231.2..7\n"
"21...647.235..542263217.\n"
"475.22.36.2.177..71....5\n"
".561246.65...574.31..73.\n"
"..111..4446.6..736.4..46\n"
"72163.4.73.2722.12666...\n"
"6.5447347576.337..332.15\n"
"..51.4.641.3..5.53...343\n"
"441..6255...1644631.1155\n"
"1.524552515427.311.2....\n"
"6.67.23..236147.3.73617.\n"
"4536124.3.511..7.46...2.\n"
"773.2.26.6317464...7...6\n"
"27.4666.57....1246..1364\n"
"2251...66.1..3335315.1.6\n"
".4.3.14564625712.546...1\n"
"12.2.66.227.32.1.2.7472.\n") == 0);
free(board638850178);
board638850178 = NULL;
assert( gamma_move(board, 2, 6, 23) == 0 );


char* board307005392 = gamma_board(board);
assert( board307005392 != NULL );
assert( strcmp(board307005392, 
".712552122.7.473575.27.7\n"
"75.55..751174...132.2.12\n"
"3.656342..3.43.3.4.12.76\n"
"54..16.7...2.347231.2..7\n"
"21...647.235..542263217.\n"
"475.22.36.2.177..71....5\n"
".561246.65...574.31..73.\n"
"..111..4446.6..736.4..46\n"
"72163.4.73.2722.12666...\n"
"6.5447347576.337..332.15\n"
"..51.4.641.3..5.53...343\n"
"441..6255...1644631.1155\n"
"1.524552515427.311.2....\n"
"6.67.23..236147.3.73617.\n"
"4536124.3.511..7.46...2.\n"
"773.2.26.6317464...7...6\n"
"27.4666.57....1246..1364\n"
"2251...66.1..3335315.1.6\n"
".4.3.14564625712.546...1\n"
"12.2.66.227.32.1.2.7472.\n") == 0);
free(board307005392);
board307005392 = NULL;
assert( gamma_move(board, 4, 12, 0) == 0 );
assert( gamma_move(board, 4, 17, 17) == 0 );
assert( gamma_busy_fields(board, 4) == 44 );
assert( gamma_move(board, 5, 14, 20) == 0 );
assert( gamma_move(board, 5, 6, 10) == 0 );
assert( gamma_move(board, 6, 11, 3) == 0 );
assert( gamma_move(board, 6, 4, 19) == 0 );
assert( gamma_move(board, 7, 11, 21) == 0 );


char* board936114412 = gamma_board(board);
assert( board936114412 != NULL );
assert( strcmp(board936114412, 
".712552122.7.473575.27.7\n"
"75.55..751174...132.2.12\n"
"3.656342..3.43.3.4.12.76\n"
"54..16.7...2.347231.2..7\n"
"21...647.235..542263217.\n"
"475.22.36.2.177..71....5\n"
".561246.65...574.31..73.\n"
"..111..4446.6..736.4..46\n"
"72163.4.73.2722.12666...\n"
"6.5447347576.337..332.15\n"
"..51.4.641.3..5.53...343\n"
"441..6255...1644631.1155\n"
"1.524552515427.311.2....\n"
"6.67.23..236147.3.73617.\n"
"4536124.3.511..7.46...2.\n"
"773.2.26.6317464...7...6\n"
"27.4666.57....1246..1364\n"
"2251...66.1..3335315.1.6\n"
".4.3.14564625712.546...1\n"
"12.2.66.227.32.1.2.7472.\n") == 0);
free(board936114412);
board936114412 = NULL;
assert( gamma_move(board, 1, 4, 5) == 0 );
assert( gamma_move(board, 1, 3, 5) == 0 );
assert( gamma_move(board, 2, 20, 15) == 0 );
assert( gamma_move(board, 3, 6, 18) == 1 );
assert( gamma_move(board, 5, 17, 7) == 0 );
assert( gamma_move(board, 5, 5, 6) == 0 );
assert( gamma_move(board, 6, 7, 18) == 0 );
assert( gamma_move(board, 6, 2, 7) == 0 );
assert( gamma_busy_fields(board, 6) == 47 );
assert( gamma_move(board, 7, 13, 11) == 0 );
assert( gamma_move(board, 7, 12, 0) == 0 );
assert( gamma_move(board, 1, 19, 16) == 1 );
assert( gamma_move(board, 2, 15, 13) == 0 );
assert( gamma_move(board, 2, 16, 6) == 0 );
assert( gamma_move(board, 3, 12, 21) == 0 );
assert( gamma_move(board, 3, 12, 7) == 0 );
assert( gamma_golden_move(board, 3, 3, 16) == 0 );
assert( gamma_move(board, 4, 17, 5) == 0 );
assert( gamma_move(board, 5, 12, 11) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 13, 20) == 0 );
assert( gamma_move(board, 7, 7, 14) == 0 );
assert( gamma_move(board, 7, 18, 0) == 1 );
assert( gamma_busy_fields(board, 7) == 46 );
assert( gamma_busy_fields(board, 1) == 50 );
assert( gamma_move(board, 2, 15, 13) == 0 );
assert( gamma_move(board, 2, 19, 2) == 0 );
assert( gamma_move(board, 3, 1, 22) == 0 );
assert( gamma_move(board, 4, 7, 22) == 0 );
assert( gamma_move(board, 5, 3, 11) == 0 );
assert( gamma_move(board, 5, 19, 8) == 1 );
assert( gamma_move(board, 6, 22, 16) == 0 );
assert( gamma_move(board, 7, 12, 14) == 0 );
assert( gamma_move(board, 7, 8, 11) == 0 );
assert( gamma_move(board, 1, 14, 22) == 0 );
assert( gamma_busy_fields(board, 1) == 50 );
assert( gamma_move(board, 2, 16, 12) == 0 );
assert( gamma_move(board, 3, 21, 14) == 1 );
assert( gamma_move(board, 3, 0, 3) == 0 );
assert( gamma_busy_fields(board, 3) == 45 );
assert( gamma_move(board, 4, 14, 16) == 0 );
assert( gamma_move(board, 4, 22, 8) == 0 );
assert( gamma_move(board, 5, 11, 21) == 0 );
assert( gamma_move(board, 5, 21, 18) == 1 );


char* board617587731 = gamma_board(board);
assert( board617587731 != NULL );
assert( strcmp(board617587731, 
".712552122.7.473575.27.7\n"
"75.55.3751174...132.2512\n"
"3.656342..3.43.3.4.12.76\n"
"54..16.7...2.34723112..7\n"
"21...647.235..542263217.\n"
"475.22.36.2.177..71..3.5\n"
".561246.65...574.31..73.\n"
"..111..4446.6..736.4..46\n"
"72163.4.73.2722.12666...\n"
"6.5447347576.337..332.15\n"
"..51.4.641.3..5.53...343\n"
"441..6255...164463151155\n"
"1.524552515427.311.2....\n"
"6.67.23..236147.3.73617.\n"
"4536124.3.511..7.46...2.\n"
"773.2.26.6317464...7...6\n"
"27.4666.57....1246..1364\n"
"2251...66.1..3335315.1.6\n"
".4.3.14564625712.546...1\n"
"12.2.66.227.32.1.277472.\n") == 0);
free(board617587731);
board617587731 = NULL;
assert( gamma_move(board, 6, 6, 4) == 0 );
assert( gamma_free_fields(board, 6) == 50 );
assert( gamma_move(board, 7, 15, 4) == 0 );
assert( gamma_move(board, 7, 12, 1) == 0 );
assert( gamma_golden_move(board, 7, 18, 20) == 0 );
assert( gamma_move(board, 1, 9, 6) == 0 );
assert( gamma_move(board, 2, 7, 20) == 0 );
assert( gamma_golden_move(board, 2, 13, 2) == 0 );
assert( gamma_move(board, 3, 9, 1) == 0 );
assert( gamma_move(board, 4, 6, 17) == 0 );
assert( gamma_free_fields(board, 4) == 48 );
assert( gamma_move(board, 5, 7, 8) == 0 );
assert( gamma_move(board, 6, 14, 3) == 0 );
assert( gamma_move(board, 7, 9, 12) == 0 );
assert( gamma_move(board, 7, 3, 7) == 0 );
assert( gamma_busy_fields(board, 7) == 46 );
assert( gamma_free_fields(board, 7) == 47 );
assert( gamma_move(board, 1, 7, 14) == 0 );
assert( gamma_move(board, 2, 5, 13) == 0 );
assert( gamma_move(board, 2, 8, 9) == 0 );
assert( gamma_busy_fields(board, 2) == 52 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 5, 11, 11) == 0 );
assert( gamma_golden_move(board, 5, 6, 21) == 0 );
assert( gamma_move(board, 6, 6, 3) == 0 );
assert( gamma_move(board, 6, 16, 15) == 0 );
assert( gamma_free_fields(board, 6) == 50 );
assert( gamma_move(board, 7, 12, 10) == 1 );
assert( gamma_move(board, 1, 12, 21) == 0 );
assert( gamma_move(board, 2, 11, 3) == 0 );
assert( gamma_move(board, 2, 7, 12) == 0 );
assert( gamma_move(board, 3, 3, 10) == 0 );
assert( gamma_golden_move(board, 3, 12, 12) == 0 );
assert( gamma_move(board, 4, 5, 9) == 0 );
assert( gamma_move(board, 4, 3, 16) == 0 );
assert( gamma_move(board, 5, 13, 0) == 0 );
assert( gamma_move(board, 6, 10, 16) == 0 );
assert( gamma_move(board, 6, 13, 11) == 0 );
assert( gamma_golden_move(board, 6, 18, 10) == 0 );
assert( gamma_move(board, 7, 12, 4) == 0 );
assert( gamma_busy_fields(board, 7) == 47 );
assert( gamma_move(board, 1, 6, 8) == 0 );
assert( gamma_move(board, 1, 8, 16) == 1 );
assert( gamma_move(board, 2, 23, 2) == 0 );
assert( gamma_move(board, 2, 2, 12) == 0 );
assert( gamma_move(board, 3, 8, 10) == 0 );
assert( gamma_move(board, 4, 14, 4) == 0 );


char* board271259847 = gamma_board(board);
assert( board271259847 != NULL );
assert( strcmp(board271259847, 
".712552122.7.473575.27.7\n"
"75.55.3751174...132.2512\n"
"3.656342..3.43.3.4.12.76\n"
"54..16.71..2.34723112..7\n"
"21...647.235..542263217.\n"
"475.22.36.2.177..71..3.5\n"
".561246.65...574.31..73.\n"
"..111..4446.6..736.4..46\n"
"72163.4.73.2722.12666...\n"
"6.54473475767337..332.15\n"
"..51.4.641.3..5.53...343\n"
"441..6255...164463151155\n"
"1.524552515427.311.2....\n"
"6.67.23..236147.3.73617.\n"
"4536124.3.511..7.46...2.\n"
"773.2.26.6317464...7...6\n"
"27.4666.57....1246..1364\n"
"2251...66.1..3335315.1.6\n"
".4.3.14564625712.546...1\n"
"12.2.66.227.32.1.277472.\n") == 0);
free(board271259847);
board271259847 = NULL;
assert( gamma_move(board, 5, 12, 6) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 15, 12) == 0 );
assert( gamma_move(board, 6, 23, 0) == 0 );
assert( gamma_move(board, 7, 11, 23) == 0 );
assert( gamma_move(board, 7, 7, 7) == 0 );
assert( gamma_move(board, 1, 23, 13) == 0 );
assert( gamma_move(board, 1, 3, 14) == 1 );
assert( gamma_move(board, 2, 14, 20) == 0 );
assert( gamma_move(board, 3, 5, 21) == 0 );
assert( gamma_move(board, 5, 4, 15) == 1 );
assert( gamma_busy_fields(board, 5) == 44 );
assert( gamma_golden_move(board, 5, 3, 1) == 0 );
assert( gamma_move(board, 6, 13, 0) == 0 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 7, 2, 22) == 0 );
assert( gamma_move(board, 7, 8, 14) == 0 );
assert( gamma_move(board, 1, 19, 16) == 0 );
assert( gamma_move(board, 1, 13, 12) == 0 );
assert( gamma_move(board, 2, 1, 8) == 0 );
assert( gamma_move(board, 3, 6, 23) == 0 );
assert( gamma_move(board, 3, 23, 7) == 0 );
assert( gamma_move(board, 4, 17, 11) == 0 );
assert( gamma_move(board, 4, 2, 5) == 0 );
assert( gamma_free_fields(board, 4) == 48 );
assert( gamma_move(board, 5, 9, 19) == 0 );
assert( gamma_move(board, 5, 12, 1) == 0 );


char* board544655808 = gamma_board(board);
assert( board544655808 != NULL );
assert( strcmp(board544655808, 
".712552122.7.473575.27.7\n"
"75.55.3751174...132.2512\n"
"3.656342..3.43.3.4.12.76\n"
"54..16.71..2.34723112..7\n"
"21..5647.235..542263217.\n"
"475122.36.2.177..71..3.5\n"
".561246.65...574.31..73.\n"
"..111..4446.6..736.4..46\n"
"72163.4.73.2722.12666...\n"
"6.54473475767337..332.15\n"
"..51.4.641.3..5.53...343\n"
"441..6255...164463151155\n"
"1.524552515427.311.2....\n"
"6.67.23..236147.3.73617.\n"
"4536124.3.511..7.46...2.\n"
"773.2.26.6317464...7...6\n"
"27.4666.57....1246..1364\n"
"2251...66.1..3335315.1.6\n"
".4.3.14564625712.546...1\n"
"12.2.66.227.32.1.277472.\n") == 0);
free(board544655808);
board544655808 = NULL;
assert( gamma_move(board, 6, 6, 8) == 0 );
assert( gamma_move(board, 7, 19, 19) == 0 );
assert( gamma_golden_move(board, 7, 8, 5) == 0 );
assert( gamma_move(board, 1, 8, 13) == 0 );
assert( gamma_move(board, 1, 0, 13) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 15, 23) == 0 );
assert( gamma_move(board, 3, 6, 1) == 0 );
assert( gamma_move(board, 3, 21, 12) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 6, 8) == 0 );
assert( gamma_move(board, 5, 0, 4) == 0 );
assert( gamma_busy_fields(board, 5) == 44 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 1, 0) == 0 );
assert( gamma_move(board, 6, 18, 4) == 1 );
assert( gamma_move(board, 7, 0, 8) == 0 );
assert( gamma_move(board, 1, 9, 14) == 0 );
assert( gamma_move(board, 1, 3, 3) == 0 );
assert( gamma_move(board, 2, 4, 20) == 0 );
assert( gamma_move(board, 3, 5, 19) == 0 );
assert( gamma_move(board, 3, 7, 19) == 0 );
assert( gamma_busy_fields(board, 3) == 45 );


char* board323852021 = gamma_board(board);
assert( board323852021 != NULL );
assert( strcmp(board323852021, 
".712552122.7.473575.27.7\n"
"75.55.3751174...132.2512\n"
"3.656342..3.43.3.4.12.76\n"
"54..16.71..2.34723112..7\n"
"21..5647.235..542263217.\n"
"475122.36.2.177..71..3.5\n"
".561246.65...574.31..73.\n"
"..111..4446.6..736.4..46\n"
"72163.4.73.2722.12666...\n"
"6.54473475767337..332.15\n"
"..51.4.641.3..5.53...343\n"
"441..6255...164463151155\n"
"1.524552515427.311.2....\n"
"6.67.23..236147.3.73617.\n"
"4536124.3.511..7.46...2.\n"
"773.2.26.6317464..67...6\n"
"27.4666.57....1246..1364\n"
"2251...66.1..3335315.1.6\n"
".4.3.14564625712.546...1\n"
"12.2.66.227.32.1.277472.\n") == 0);
free(board323852021);
board323852021 = NULL;
assert( gamma_move(board, 4, 2, 6) == 0 );
assert( gamma_move(board, 5, 16, 9) == 0 );
assert( gamma_busy_fields(board, 5) == 44 );
assert( gamma_move(board, 6, 1, 1) == 0 );
assert( gamma_move(board, 7, 18, 19) == 0 );
assert( gamma_move(board, 1, 2, 4) == 0 );
assert( gamma_move(board, 1, 18, 4) == 0 );
assert( gamma_move(board, 2, 1, 7) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 2, 5) == 0 );
assert( gamma_move(board, 3, 12, 0) == 0 );
assert( gamma_move(board, 4, 4, 8) == 1 );
assert( gamma_move(board, 5, 6, 12) == 1 );
assert( gamma_busy_fields(board, 5) == 45 );
assert( gamma_free_fields(board, 5) == 146 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 17, 8) == 0 );
assert( gamma_move(board, 7, 19, 22) == 0 );
assert( gamma_free_fields(board, 7) == 45 );


char* board232160654 = gamma_board(board);
assert( board232160654 != NULL );
assert( strcmp(board232160654, 
".712552122.7.473575.27.7\n"
"75.55.3751174...132.2512\n"
"3.656342..3.43.3.4.12.76\n"
"54..16.71..2.34723112..7\n"
"21..5647.235..542263217.\n"
"475122.36.2.177..71..3.5\n"
".561246.65...574.31..73.\n"
"..111.54446.6..736.4..46\n"
"72163.4.73.2722.12666...\n"
"6.54473475767337..332.15\n"
"..51.4.641.3..5.53...343\n"
"441.46255...164463151155\n"
"1.524552515427.311.2....\n"
"6.67.23..236147.3.73617.\n"
"4536124.3.511..7.46...2.\n"
"773.2.26.6317464..67...6\n"
"27.4666.57....1246..1364\n"
"2251...66.1..3335315.1.6\n"
".4.3.14564625712.546...1\n"
"12.2.66.227.32.1.277472.\n") == 0);
free(board232160654);
board232160654 = NULL;
assert( gamma_move(board, 1, 7, 13) == 0 );
assert( gamma_free_fields(board, 1) == 62 );
assert( gamma_move(board, 2, 5, 16) == 0 );
assert( gamma_move(board, 2, 17, 13) == 0 );
assert( gamma_busy_fields(board, 2) == 52 );
assert( gamma_move(board, 3, 13, 3) == 1 );
assert( gamma_move(board, 4, 17, 18) == 0 );
assert( gamma_move(board, 4, 1, 2) == 0 );
assert( gamma_move(board, 5, 16, 22) == 0 );
assert( gamma_move(board, 6, 16, 22) == 0 );
assert( gamma_move(board, 1, 11, 10) == 0 );
assert( gamma_move(board, 1, 1, 13) == 0 );
assert( gamma_free_fields(board, 1) == 61 );


char* board219320306 = gamma_board(board);
assert( board219320306 != NULL );
assert( strcmp(board219320306, 
".712552122.7.473575.27.7\n"
"75.55.3751174...132.2512\n"
"3.656342..3.43.3.4.12.76\n"
"54..16.71..2.34723112..7\n"
"21..5647.235..542263217.\n"
"475122.36.2.177..71..3.5\n"
".561246.65...574.31..73.\n"
"..111.54446.6..736.4..46\n"
"72163.4.73.2722.12666...\n"
"6.54473475767337..332.15\n"
"..51.4.641.3..5.53...343\n"
"441.46255...164463151155\n"
"1.524552515427.311.2....\n"
"6.67.23..236147.3.73617.\n"
"4536124.3.511..7.46...2.\n"
"773.2.26.6317464..67...6\n"
"27.4666.57...31246..1364\n"
"2251...66.1..3335315.1.6\n"
".4.3.14564625712.546...1\n"
"12.2.66.227.32.1.277472.\n") == 0);
free(board219320306);
board219320306 = NULL;
assert( gamma_move(board, 2, 17, 8) == 0 );
assert( gamma_move(board, 3, 11, 5) == 0 );
assert( gamma_golden_move(board, 3, 5, 5) == 0 );
assert( gamma_move(board, 4, 3, 10) == 0 );
assert( gamma_move(board, 5, 15, 8) == 0 );
assert( gamma_busy_fields(board, 5) == 45 );


char* board947334365 = gamma_board(board);
assert( board947334365 != NULL );
assert( strcmp(board947334365, 
".712552122.7.473575.27.7\n"
"75.55.3751174...132.2512\n"
"3.656342..3.43.3.4.12.76\n"
"54..16.71..2.34723112..7\n"
"21..5647.235..542263217.\n"
"475122.36.2.177..71..3.5\n"
".561246.65...574.31..73.\n"
"..111.54446.6..736.4..46\n"
"72163.4.73.2722.12666...\n"
"6.54473475767337..332.15\n"
"..51.4.641.3..5.53...343\n"
"441.46255...164463151155\n"
"1.524552515427.311.2....\n"
"6.67.23..236147.3.73617.\n"
"4536124.3.511..7.46...2.\n"
"773.2.26.6317464..67...6\n"
"27.4666.57...31246..1364\n"
"2251...66.1..3335315.1.6\n"
".4.3.14564625712.546...1\n"
"12.2.66.227.32.1.277472.\n") == 0);
free(board947334365);
board947334365 = NULL;
assert( gamma_move(board, 7, 15, 23) == 0 );
assert( gamma_move(board, 1, 5, 9) == 0 );
assert( gamma_move(board, 2, 12, 1) == 0 );
assert( gamma_busy_fields(board, 2) == 52 );
assert( gamma_move(board, 3, 1, 16) == 0 );
assert( gamma_move(board, 3, 8, 2) == 0 );
assert( gamma_busy_fields(board, 3) == 46 );
assert( gamma_move(board, 4, 19, 11) == 0 );
assert( gamma_move(board, 5, 16, 10) == 1 );
assert( gamma_move(board, 6, 3, 7) == 0 );
assert( gamma_move(board, 6, 21, 4) == 0 );
assert( gamma_move(board, 7, 13, 23) == 0 );
assert( gamma_move(board, 7, 13, 13) == 0 );


char* board360562940 = gamma_board(board);
assert( board360562940 != NULL );
assert( strcmp(board360562940, 
".712552122.7.473575.27.7\n"
"75.55.3751174...132.2512\n"
"3.656342..3.43.3.4.12.76\n"
"54..16.71..2.34723112..7\n"
"21..5647.235..542263217.\n"
"475122.36.2.177..71..3.5\n"
".561246.65...574.31..73.\n"
"..111.54446.6..736.4..46\n"
"72163.4.73.2722.12666...\n"
"6.544734757673375.332.15\n"
"..51.4.641.3..5.53...343\n"
"441.46255...164463151155\n"
"1.524552515427.311.2....\n"
"6.67.23..236147.3.73617.\n"
"4536124.3.511..7.46...2.\n"
"773.2.26.6317464..67...6\n"
"27.4666.57...31246..1364\n"
"2251...66.1..3335315.1.6\n"
".4.3.14564625712.546...1\n"
"12.2.66.227.32.1.277472.\n") == 0);
free(board360562940);
board360562940 = NULL;
assert( gamma_move(board, 1, 6, 1) == 0 );
assert( gamma_move(board, 1, 5, 10) == 0 );
assert( gamma_move(board, 2, 19, 3) == 0 );
assert( gamma_move(board, 3, 4, 5) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 14, 15) == 0 );
assert( gamma_move(board, 4, 14, 4) == 0 );
assert( gamma_move(board, 5, 8, 10) == 0 );
assert( gamma_move(board, 6, 19, 13) == 0 );
assert( gamma_move(board, 7, 12, 8) == 0 );
assert( gamma_move(board, 1, 9, 13) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 19, 14) == 0 );
assert( gamma_move(board, 3, 2, 4) == 0 );
assert( gamma_move(board, 3, 2, 9) == 0 );
assert( gamma_move(board, 4, 18, 19) == 0 );
assert( gamma_move(board, 5, 6, 15) == 0 );
assert( gamma_move(board, 5, 16, 15) == 0 );
assert( gamma_move(board, 6, 2, 12) == 0 );
assert( gamma_move(board, 6, 22, 14) == 0 );
assert( gamma_move(board, 7, 5, 11) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_golden_move(board, 7, 16, 16) == 1 );
assert( gamma_move(board, 1, 2, 6) == 0 );
assert( gamma_move(board, 1, 4, 19) == 0 );
assert( gamma_move(board, 2, 12, 11) == 0 );
assert( gamma_move(board, 3, 1, 2) == 0 );
assert( gamma_move(board, 4, 15, 2) == 0 );
assert( gamma_move(board, 4, 3, 8) == 1 );
assert( gamma_free_fields(board, 4) == 44 );
assert( gamma_move(board, 5, 18, 19) == 0 );
assert( gamma_move(board, 5, 5, 14) == 0 );
assert( gamma_move(board, 6, 3, 10) == 0 );
assert( gamma_move(board, 6, 18, 12) == 1 );
assert( gamma_move(board, 7, 1, 15) == 0 );
assert( gamma_move(board, 1, 0, 14) == 0 );
assert( gamma_move(board, 1, 9, 4) == 0 );


char* board377610191 = gamma_board(board);
assert( board377610191 != NULL );
assert( strcmp(board377610191, 
".712552122.7.473575.27.7\n"
"75.55.3751174...132.2512\n"
"3.656342..3.43.3.4.12.76\n"
"54..16.71..2.34773112..7\n"
"21..5647.235..542263217.\n"
"475122.36.2.177..71..3.5\n"
".561246.65...574.31..73.\n"
"..111.54446.6..73664..46\n"
"7216374.73.2722.12666...\n"
"6.544734757673375.332.15\n"
"..51.4.641.3..5.53...343\n"
"441446255...164463151155\n"
"1.524552515427.311.2....\n"
"6.67.23..236147.3.73617.\n"
"4536124.3.511..7.46...2.\n"
"773.2.26.6317464..67...6\n"
"27.4666.57...31246..1364\n"
"2251...66.1..3335315.1.6\n"
".4.3.14564625712.546...1\n"
"12.2.66.227.32.1.277472.\n") == 0);
free(board377610191);
board377610191 = NULL;
assert( gamma_move(board, 2, 14, 19) == 0 );
assert( gamma_move(board, 3, 20, 15) == 0 );
assert( gamma_move(board, 3, 6, 6) == 0 );
assert( gamma_busy_fields(board, 3) == 46 );
assert( gamma_move(board, 4, 1, 0) == 0 );
assert( gamma_move(board, 4, 21, 3) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 13, 10) == 0 );
assert( gamma_free_fields(board, 5) == 141 );
assert( gamma_move(board, 6, 23, 9) == 0 );
assert( gamma_move(board, 7, 13, 7) == 0 );
assert( gamma_move(board, 7, 3, 19) == 0 );
assert( gamma_busy_fields(board, 7) == 49 );
assert( gamma_move(board, 1, 13, 11) == 0 );
assert( gamma_move(board, 1, 19, 1) == 0 );
assert( gamma_busy_fields(board, 1) == 52 );
assert( gamma_move(board, 2, 6, 1) == 0 );
assert( gamma_move(board, 3, 18, 6) == 0 );
assert( gamma_move(board, 3, 4, 1) == 1 );
assert( gamma_move(board, 4, 16, 2) == 0 );
assert( gamma_move(board, 4, 13, 14) == 0 );
assert( gamma_move(board, 5, 16, 22) == 0 );
assert( gamma_move(board, 6, 0, 23) == 0 );
assert( gamma_move(board, 6, 6, 0) == 0 );
assert( gamma_move(board, 7, 0, 14) == 0 );


char* board485452992 = gamma_board(board);
assert( board485452992 != NULL );
assert( strcmp(board485452992, 
".712552122.7.473575.27.7\n"
"75.55.3751174...132.2512\n"
"3.656342..3.43.3.4.12.76\n"
"54..16.71..2.34773112..7\n"
"21..5647.235..542263217.\n"
"475122.36.2.177..71..3.5\n"
".561246.65...574.31..73.\n"
"..111.54446.6..73664..46\n"
"7216374.73.2722.12666...\n"
"6.544734757673375.332.15\n"
"..51.4.641.3..5.53...343\n"
"441446255...164463151155\n"
"1.524552515427.311.2....\n"
"6.67.23..236147.3.73617.\n"
"4536124.3.511..7.46...2.\n"
"773.2.26.6317464..67...6\n"
"27.4666.57...31246..1364\n"
"2251...66.1..3335315.1.6\n"
".4.3314564625712.546...1\n"
"12.2.66.227.32.1.277472.\n") == 0);
free(board485452992);
board485452992 = NULL;
assert( gamma_move(board, 1, 8, 10) == 0 );
assert( gamma_move(board, 1, 17, 3) == 0 );
assert( gamma_move(board, 2, 17, 1) == 0 );
assert( gamma_move(board, 2, 14, 8) == 0 );
assert( gamma_move(board, 3, 11, 7) == 0 );
assert( gamma_move(board, 4, 10, 16) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_golden_move(board, 4, 7, 7) == 0 );


char* board235780266 = gamma_board(board);
assert( board235780266 != NULL );
assert( strcmp(board235780266, 
".712552122.7.473575.27.7\n"
"75.55.3751174...132.2512\n"
"3.656342..3.43.3.4.12.76\n"
"54..16.71..2.34773112..7\n"
"21..5647.235..542263217.\n"
"475122.36.2.177..71..3.5\n"
".561246.65...574.31..73.\n"
"..111.54446.6..73664..46\n"
"7216374.73.2722.12666...\n"
"6.544734757673375.332.15\n"
"..51.4.641.3..5.53...343\n"
"441446255...164463151155\n"
"1.524552515427.311.2....\n"
"6.67.23..236147.3.73617.\n"
"4536124.3.511..7.46...2.\n"
"773.2.26.6317464..67...6\n"
"27.4666.57...31246..1364\n"
"2251...66.1..3335315.1.6\n"
".4.3314564625712.546...1\n"
"12.2.66.227.32.1.277472.\n") == 0);
free(board235780266);
board235780266 = NULL;
assert( gamma_move(board, 5, 13, 23) == 0 );
assert( gamma_move(board, 6, 2, 5) == 0 );
assert( gamma_move(board, 7, 14, 15) == 0 );
assert( gamma_move(board, 7, 19, 10) == 0 );
assert( gamma_move(board, 1, 12, 5) == 0 );
assert( gamma_move(board, 1, 23, 3) == 0 );
assert( gamma_move(board, 2, 1, 2) == 0 );
assert( gamma_move(board, 2, 8, 15) == 1 );
assert( gamma_move(board, 3, 17, 9) == 0 );
assert( gamma_free_fields(board, 3) == 49 );
assert( gamma_move(board, 4, 12, 0) == 0 );
assert( gamma_move(board, 5, 0, 14) == 0 );
assert( gamma_move(board, 6, 1, 5) == 0 );
assert( gamma_move(board, 7, 10, 1) == 0 );
assert( gamma_move(board, 7, 11, 2) == 0 );
assert( gamma_golden_possible(board, 7) == 0 );
assert( gamma_move(board, 1, 16, 21) == 0 );
assert( gamma_free_fields(board, 1) == 56 );
assert( gamma_golden_move(board, 1, 6, 13) == 0 );
assert( gamma_move(board, 2, 7, 9) == 0 );


char* board241126831 = gamma_board(board);
assert( board241126831 != NULL );
assert( strcmp(board241126831, 
".712552122.7.473575.27.7\n"
"75.55.3751174...132.2512\n"
"3.656342..3.43.3.4.12.76\n"
"54..16.71..2.34773112..7\n"
"21..56472235..542263217.\n"
"475122.36.2.177..71..3.5\n"
".561246.65...574.31..73.\n"
"..111.54446.6..73664..46\n"
"7216374.73.2722.12666...\n"
"6.544734757673375.332.15\n"
"..51.4.641.3..5.53...343\n"
"441446255...164463151155\n"
"1.524552515427.311.2....\n"
"6.67.23..236147.3.73617.\n"
"4536124.3.511..7.46...2.\n"
"773.2.26.6317464..67...6\n"
"27.4666.57...31246..1364\n"
"2251...66.1..3335315.1.6\n"
".4.3314564625712.546...1\n"
"12.2.66.227.32.1.277472.\n") == 0);
free(board241126831);
board241126831 = NULL;
assert( gamma_move(board, 3, 14, 14) == 0 );
assert( gamma_golden_move(board, 3, 17, 17) == 0 );
assert( gamma_move(board, 4, 14, 19) == 0 );
assert( gamma_move(board, 4, 22, 10) == 0 );
assert( gamma_move(board, 5, 18, 15) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 5, 7) == 0 );
assert( gamma_free_fields(board, 6) == 139 );
assert( gamma_move(board, 7, 3, 19) == 0 );
assert( gamma_move(board, 1, 13, 20) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 4, 1) == 0 );
assert( gamma_busy_fields(board, 2) == 52 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 13, 0) == 0 );
assert( gamma_move(board, 4, 3, 18) == 0 );
assert( gamma_move(board, 5, 6, 4) == 0 );
assert( gamma_busy_fields(board, 5) == 46 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 10, 6) == 0 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_golden_move(board, 6, 1, 23) == 0 );
assert( gamma_move(board, 1, 9, 10) == 0 );
assert( gamma_move(board, 1, 19, 9) == 0 );
assert( gamma_move(board, 2, 16, 17) == 0 );
assert( gamma_move(board, 3, 5, 23) == 0 );
assert( gamma_move(board, 4, 12, 11) == 0 );
assert( gamma_move(board, 4, 22, 6) == 0 );
assert( gamma_move(board, 5, 6, 1) == 0 );
assert( gamma_move(board, 5, 11, 7) == 0 );
assert( gamma_move(board, 6, 6, 17) == 0 );
assert( gamma_move(board, 7, 16, 12) == 0 );
assert( gamma_move(board, 7, 5, 2) == 0 );
assert( gamma_move(board, 1, 9, 1) == 0 );
assert( gamma_move(board, 1, 13, 12) == 0 );
assert( gamma_move(board, 2, 15, 23) == 0 );
assert( gamma_free_fields(board, 2) == 50 );
assert( gamma_move(board, 3, 19, 22) == 0 );
assert( gamma_move(board, 4, 16, 12) == 0 );
assert( gamma_move(board, 5, 22, 8) == 0 );
assert( gamma_move(board, 5, 3, 14) == 0 );
assert( gamma_golden_move(board, 5, 13, 18) == 0 );
assert( gamma_move(board, 6, 17, 16) == 0 );
assert( gamma_free_fields(board, 6) == 139 );
assert( gamma_move(board, 7, 18, 3) == 0 );
assert( gamma_move(board, 1, 0, 14) == 0 );
assert( gamma_busy_fields(board, 1) == 52 );
assert( gamma_move(board, 2, 0, 16) == 0 );
assert( gamma_move(board, 2, 16, 9) == 0 );
assert( gamma_move(board, 3, 20, 15) == 0 );
assert( gamma_move(board, 4, 18, 2) == 0 );
assert( gamma_move(board, 4, 18, 8) == 0 );
assert( gamma_move(board, 5, 5, 13) == 0 );
assert( gamma_move(board, 5, 3, 0) == 0 );
assert( gamma_move(board, 6, 14, 6) == 0 );
assert( gamma_golden_move(board, 7, 18, 21) == 0 );
assert( gamma_busy_fields(board, 1) == 52 );
assert( gamma_move(board, 3, 15, 2) == 0 );
assert( gamma_move(board, 3, 18, 9) == 1 );
assert( gamma_move(board, 4, 9, 1) == 0 );
assert( gamma_golden_move(board, 4, 14, 7) == 0 );
assert( gamma_move(board, 5, 13, 16) == 0 );
assert( gamma_move(board, 6, 18, 15) == 0 );
assert( gamma_move(board, 6, 7, 17) == 0 );
assert( gamma_move(board, 1, 8, 10) == 0 );
assert( gamma_move(board, 2, 9, 15) == 0 );
assert( gamma_move(board, 2, 11, 2) == 1 );
assert( gamma_move(board, 3, 4, 21) == 0 );
assert( gamma_busy_fields(board, 3) == 48 );
assert( gamma_move(board, 4, 17, 1) == 0 );
assert( gamma_move(board, 4, 2, 8) == 0 );
assert( gamma_golden_move(board, 4, 6, 16) == 0 );
assert( gamma_move(board, 5, 16, 11) == 0 );
assert( gamma_move(board, 6, 15, 3) == 0 );
assert( gamma_move(board, 6, 1, 9) == 1 );
assert( gamma_move(board, 7, 12, 11) == 0 );
assert( gamma_move(board, 7, 2, 10) == 0 );
assert( gamma_move(board, 1, 6, 23) == 0 );
assert( gamma_busy_fields(board, 1) == 52 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 1, 16) == 0 );
assert( gamma_move(board, 3, 16, 8) == 0 );
assert( gamma_move(board, 4, 2, 9) == 0 );
assert( gamma_move(board, 4, 13, 8) == 0 );
assert( gamma_move(board, 5, 5, 13) == 0 );
assert( gamma_move(board, 6, 9, 4) == 0 );
assert( gamma_move(board, 7, 3, 11) == 0 );
assert( gamma_golden_possible(board, 7) == 0 );
assert( gamma_move(board, 1, 18, 13) == 0 );
assert( gamma_free_fields(board, 1) == 54 );
assert( gamma_move(board, 2, 18, 19) == 0 );
assert( gamma_move(board, 3, 16, 2) == 0 );
assert( gamma_move(board, 3, 13, 17) == 0 );
assert( gamma_move(board, 4, 17, 8) == 0 );
assert( gamma_move(board, 5, 14, 16) == 0 );
assert( gamma_move(board, 5, 21, 0) == 0 );
assert( gamma_move(board, 6, 4, 8) == 0 );
assert( gamma_move(board, 7, 19, 8) == 0 );
assert( gamma_move(board, 7, 1, 8) == 0 );
assert( gamma_golden_possible(board, 7) == 0 );


char* board648583175 = gamma_board(board);
assert( board648583175 != NULL );
assert( strcmp(board648583175, 
".712552122.7.473575.27.7\n"
"75.55.3751174...132.2512\n"
"3.656342..3.43.3.4.12.76\n"
"54..16.71..2.34773112..7\n"
"21..56472235..542263217.\n"
"475122.36.2.177..71..3.5\n"
".561246.65...574.31..73.\n"
"..111.54446.6..73664..46\n"
"7216374.73.2722.12666...\n"
"6.544734757673375.332.15\n"
".651.4.641.3..5.533..343\n"
"441446255...164463151155\n"
"1.524552515427.311.2....\n"
"6.67.23..236147.3.73617.\n"
"4536124.3.511..7.46...2.\n"
"773.2.26.6317464..67...6\n"
"27.4666.57...31246..1364\n"
"2251...66.12.3335315.1.6\n"
".4.3314564625712.546...1\n"
"12.2.66.227.32.1.277472.\n") == 0);
free(board648583175);
board648583175 = NULL;
assert( gamma_move(board, 1, 15, 13) == 0 );
assert( gamma_move(board, 3, 6, 1) == 0 );
assert( gamma_free_fields(board, 3) == 136 );
assert( gamma_move(board, 4, 18, 14) == 0 );
assert( gamma_move(board, 5, 18, 5) == 0 );


char* board244556118 = gamma_board(board);
assert( board244556118 != NULL );
assert( strcmp(board244556118, 
".712552122.7.473575.27.7\n"
"75.55.3751174...132.2512\n"
"3.656342..3.43.3.4.12.76\n"
"54..16.71..2.34773112..7\n"
"21..56472235..542263217.\n"
"475122.36.2.177..71..3.5\n"
".561246.65...574.31..73.\n"
"..111.54446.6..73664..46\n"
"7216374.73.2722.12666...\n"
"6.544734757673375.332.15\n"
".651.4.641.3..5.533..343\n"
"441446255...164463151155\n"
"1.524552515427.311.2....\n"
"6.67.23..236147.3.73617.\n"
"4536124.3.511..7.46...2.\n"
"773.2.26.6317464..67...6\n"
"27.4666.57...31246..1364\n"
"2251...66.12.3335315.1.6\n"
".4.3314564625712.546...1\n"
"12.2.66.227.32.1.277472.\n") == 0);
free(board244556118);
board244556118 = NULL;
assert( gamma_move(board, 6, 10, 15) == 0 );
assert( gamma_move(board, 6, 23, 2) == 0 );
assert( gamma_move(board, 7, 0, 11) == 0 );
assert( gamma_move(board, 7, 11, 10) == 0 );
assert( gamma_busy_fields(board, 7) == 49 );
assert( gamma_move(board, 1, 5, 9) == 0 );
assert( gamma_move(board, 2, 21, 15) == 0 );
assert( gamma_move(board, 3, 17, 9) == 0 );
assert( gamma_move(board, 3, 12, 8) == 0 );
assert( gamma_move(board, 4, 5, 20) == 0 );
assert( gamma_move(board, 5, 3, 2) == 0 );
assert( gamma_move(board, 6, 18, 14) == 0 );
assert( gamma_move(board, 6, 15, 3) == 0 );
assert( gamma_move(board, 7, 17, 8) == 0 );
assert( gamma_move(board, 1, 20, 18) == 0 );
assert( gamma_move(board, 1, 5, 11) == 0 );
assert( gamma_move(board, 2, 7, 11) == 0 );
assert( gamma_move(board, 3, 4, 16) == 0 );
assert( gamma_move(board, 3, 20, 7) == 1 );
assert( gamma_move(board, 4, 10, 1) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 17, 11) == 0 );
assert( gamma_move(board, 5, 23, 3) == 0 );
assert( gamma_busy_fields(board, 5) == 46 );
assert( gamma_free_fields(board, 5) == 135 );
assert( gamma_move(board, 6, 20, 19) == 0 );
assert( gamma_busy_fields(board, 6) == 50 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 7, 1, 16) == 0 );
assert( gamma_move(board, 7, 6, 2) == 0 );
assert( gamma_move(board, 1, 12, 11) == 0 );
assert( gamma_free_fields(board, 1) == 53 );
assert( gamma_move(board, 2, 12, 11) == 0 );
assert( gamma_move(board, 3, 0, 7) == 0 );
assert( gamma_move(board, 4, 14, 22) == 0 );
assert( gamma_move(board, 4, 7, 18) == 0 );
assert( gamma_move(board, 5, 15, 23) == 0 );
assert( gamma_move(board, 5, 1, 3) == 0 );
assert( gamma_busy_fields(board, 5) == 46 );
assert( gamma_move(board, 6, 13, 20) == 0 );
assert( gamma_move(board, 6, 4, 15) == 0 );
assert( gamma_busy_fields(board, 6) == 50 );
assert( gamma_move(board, 7, 15, 2) == 0 );
assert( gamma_move(board, 7, 6, 11) == 0 );
assert( gamma_move(board, 1, 2, 13) == 0 );
assert( gamma_move(board, 3, 1, 14) == 0 );
assert( gamma_move(board, 3, 22, 4) == 0 );
assert( gamma_busy_fields(board, 3) == 49 );
assert( gamma_free_fields(board, 3) == 49 );
assert( gamma_move(board, 4, 18, 8) == 0 );
assert( gamma_move(board, 6, 12, 1) == 0 );
assert( gamma_golden_move(board, 6, 2, 2) == 0 );
assert( gamma_move(board, 7, 22, 9) == 0 );
assert( gamma_move(board, 1, 14, 9) == 0 );
assert( gamma_move(board, 1, 2, 1) == 0 );
assert( gamma_move(board, 2, 7, 18) == 0 );
assert( gamma_move(board, 3, 14, 6) == 0 );
assert( gamma_move(board, 3, 11, 9) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 12, 20) == 0 );
assert( gamma_move(board, 4, 13, 8) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );


char* board490799758 = gamma_board(board);
assert( board490799758 != NULL );
assert( strcmp(board490799758, 
".712552122.7.473575.27.7\n"
"75.55.3751174...132.2512\n"
"3.656342..3.43.3.4.12.76\n"
"54..16.71..2.34773112..7\n"
"21..56472235..542263217.\n"
"475122.36.2.177..71..3.5\n"
".561246.65...574.31..73.\n"
"..111.54446.6..73664..46\n"
"7216374.73.2722.12666...\n"
"6.544734757673375.332.15\n"
".651.4.641.3..5.533..343\n"
"441446255...164463151155\n"
"1.524552515427.311.23...\n"
"6.67.23..236147.3.73617.\n"
"4536124.3.511..7.46...2.\n"
"773.2.26.6317464..67...6\n"
"27.4666.57...31246..1364\n"
"2251...66.12.3335315.1.6\n"
".4.3314564625712.546...1\n"
"12.2.66.227.32.1.277472.\n") == 0);
free(board490799758);
board490799758 = NULL;
assert( gamma_move(board, 5, 17, 9) == 0 );
assert( gamma_move(board, 5, 9, 4) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 5, 6) == 0 );
assert( gamma_move(board, 6, 0, 17) == 0 );
assert( gamma_move(board, 7, 14, 6) == 0 );
assert( gamma_move(board, 1, 15, 19) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 3, 11, 15) == 0 );
assert( gamma_move(board, 3, 2, 10) == 0 );
assert( gamma_golden_move(board, 3, 18, 4) == 0 );
assert( gamma_move(board, 4, 17, 16) == 0 );
assert( gamma_move(board, 4, 12, 18) == 0 );
assert( gamma_busy_fields(board, 4) == 46 );
assert( gamma_move(board, 6, 20, 7) == 0 );
assert( gamma_move(board, 6, 17, 9) == 0 );
assert( gamma_free_fields(board, 6) == 42 );
assert( gamma_move(board, 7, 6, 1) == 0 );
assert( gamma_move(board, 7, 12, 6) == 0 );
assert( gamma_busy_fields(board, 7) == 49 );
assert( gamma_move(board, 1, 21, 1) == 1 );
assert( gamma_move(board, 2, 4, 22) == 0 );
assert( gamma_move(board, 3, 15, 1) == 0 );
assert( gamma_move(board, 4, 18, 3) == 0 );
assert( gamma_move(board, 5, 2, 22) == 0 );


char* board720841925 = gamma_board(board);
assert( board720841925 != NULL );
assert( strcmp(board720841925, 
".712552122.7.473575.27.7\n"
"75.55.3751174...132.2512\n"
"3.656342..3.43.3.4.12.76\n"
"54..16.71..2.34773112..7\n"
"21..56472235..542263217.\n"
"475122.36.2.177..71..3.5\n"
".561246.65...574.31..73.\n"
"..111.54446.6..73664..46\n"
"7216374.73.2722.12666...\n"
"6.544734757673375.332.15\n"
".651.4.641.3..5.533..343\n"
"441446255...164463151155\n"
"1.524552515427.311.23...\n"
"6.67.23..236147.3.73617.\n"
"4536124.3.511..7.46...2.\n"
"773.2.26.6317464..67...6\n"
"27.4666.57...31246..1364\n"
"2251...66.12.3335315.1.6\n"
".4.3314564625712.546.1.1\n"
"12.2.66.227.32.1.277472.\n") == 0);
free(board720841925);
board720841925 = NULL;
assert( gamma_move(board, 6, 2, 4) == 0 );
assert( gamma_move(board, 6, 14, 5) == 1 );
assert( gamma_move(board, 7, 17, 16) == 0 );
assert( gamma_move(board, 7, 15, 17) == 0 );
assert( gamma_move(board, 1, 18, 16) == 0 );
assert( gamma_move(board, 1, 13, 13) == 0 );
assert( gamma_move(board, 2, 6, 8) == 0 );
assert( gamma_move(board, 2, 12, 14) == 0 );
assert( gamma_move(board, 3, 14, 6) == 0 );
assert( gamma_move(board, 3, 4, 17) == 0 );
assert( gamma_busy_fields(board, 3) == 49 );
assert( gamma_move(board, 4, 13, 8) == 0 );


char* board139718313 = gamma_board(board);
assert( board139718313 != NULL );
assert( strcmp(board139718313, 
".712552122.7.473575.27.7\n"
"75.55.3751174...132.2512\n"
"3.656342..3.43.3.4.12.76\n"
"54..16.71..2.34773112..7\n"
"21..56472235..542263217.\n"
"475122.36.2.177..71..3.5\n"
".561246.65...574.31..73.\n"
"..111.54446.6..73664..46\n"
"7216374.73.2722.12666...\n"
"6.544734757673375.332.15\n"
".651.4.641.3..5.533..343\n"
"441446255...164463151155\n"
"1.524552515427.311.23...\n"
"6.67.23..236147.3.73617.\n"
"4536124.3.511.67.46...2.\n"
"773.2.26.6317464..67...6\n"
"27.4666.57...31246..1364\n"
"2251...66.12.3335315.1.6\n"
".4.3314564625712.546.1.1\n"
"12.2.66.227.32.1.277472.\n") == 0);
free(board139718313);
board139718313 = NULL;
assert( gamma_move(board, 6, 5, 8) == 0 );
assert( gamma_free_fields(board, 6) == 42 );
assert( gamma_move(board, 7, 17, 18) == 0 );
assert( gamma_move(board, 7, 8, 13) == 0 );
assert( gamma_move(board, 1, 4, 22) == 0 );
assert( gamma_free_fields(board, 1) == 53 );
assert( gamma_move(board, 2, 9, 13) == 0 );
assert( gamma_move(board, 2, 3, 8) == 0 );
assert( gamma_golden_move(board, 2, 16, 14) == 0 );
assert( gamma_move(board, 3, 1, 20) == 0 );
assert( gamma_busy_fields(board, 3) == 49 );
assert( gamma_move(board, 4, 10, 1) == 0 );
assert( gamma_busy_fields(board, 4) == 46 );
assert( gamma_move(board, 5, 8, 3) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 4, 3) == 0 );
assert( gamma_move(board, 6, 14, 4) == 0 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 7, 12, 13) == 0 );
assert( gamma_move(board, 1, 18, 12) == 0 );
assert( gamma_move(board, 1, 16, 18) == 0 );
assert( gamma_free_fields(board, 1) == 53 );
assert( gamma_move(board, 2, 11, 10) == 0 );
assert( gamma_golden_move(board, 2, 14, 8) == 0 );
assert( gamma_move(board, 3, 0, 7) == 0 );
assert( gamma_move(board, 3, 23, 11) == 0 );
assert( gamma_move(board, 4, 16, 2) == 0 );
assert( gamma_free_fields(board, 5) == 133 );
assert( gamma_move(board, 6, 0, 1) == 0 );
assert( gamma_move(board, 7, 19, 10) == 0 );
assert( gamma_golden_possible(board, 7) == 0 );
assert( gamma_move(board, 1, 12, 11) == 0 );
assert( gamma_move(board, 2, 12, 14) == 0 );
assert( gamma_move(board, 4, 20, 4) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 4, 3) == 0 );
assert( gamma_move(board, 5, 23, 11) == 1 );
assert( gamma_free_fields(board, 5) == 132 );
assert( gamma_move(board, 6, 11, 21) == 0 );
assert( gamma_move(board, 7, 9, 16) == 0 );
assert( gamma_move(board, 1, 14, 11) == 0 );
assert( gamma_move(board, 2, 19, 0) == 0 );
assert( gamma_move(board, 2, 2, 0) == 1 );
assert( gamma_move(board, 3, 18, 5) == 0 );
assert( gamma_move(board, 3, 12, 13) == 0 );
assert( gamma_move(board, 4, 7, 21) == 0 );
assert( gamma_move(board, 4, 7, 8) == 0 );
assert( gamma_move(board, 5, 17, 11) == 0 );
assert( gamma_move(board, 5, 14, 3) == 0 );
assert( gamma_move(board, 6, 13, 12) == 1 );
assert( gamma_move(board, 1, 13, 12) == 0 );
assert( gamma_move(board, 1, 10, 19) == 1 );


char* board783778272 = gamma_board(board);
assert( board783778272 != NULL );
assert( strcmp(board783778272, 
".71255212217.473575.27.7\n"
"75.55.3751174...132.2512\n"
"3.656342..3.43.3.4.12.76\n"
"54..16.71..2.34773112..7\n"
"21..56472235..542263217.\n"
"475122.36.2.177..71..3.5\n"
".561246.65...574.31..73.\n"
"..111.54446.66.73664..46\n"
"7216374.73.2722.12666..5\n"
"6.544734757673375.332.15\n"
".651.4.641.3..5.533..343\n"
"441446255...164463151155\n"
"1.524552515427.311.23...\n"
"6.67.23..236147.3.73617.\n"
"4536124.3.511.67.46...2.\n"
"773.2.26.6317464..67...6\n"
"27.4666.57...31246..1364\n"
"2251...66.12.3335315.1.6\n"
".4.3314564625712.546.1.1\n"
"1222.66.227.32.1.277472.\n") == 0);
free(board783778272);
board783778272 = NULL;
assert( gamma_move(board, 2, 17, 11) == 0 );
assert( gamma_move(board, 2, 14, 4) == 0 );
assert( gamma_busy_fields(board, 2) == 54 );
assert( gamma_move(board, 3, 11, 15) == 0 );
assert( gamma_move(board, 3, 17, 5) == 0 );
assert( gamma_move(board, 4, 19, 12) == 0 );
assert( gamma_move(board, 5, 11, 19) == 0 );
assert( gamma_move(board, 7, 1, 2) == 0 );
assert( gamma_move(board, 7, 10, 14) == 0 );
assert( gamma_move(board, 1, 8, 13) == 0 );
assert( gamma_free_fields(board, 1) == 52 );
assert( gamma_move(board, 2, 6, 4) == 0 );
assert( gamma_move(board, 3, 2, 4) == 0 );
assert( gamma_golden_move(board, 3, 6, 9) == 0 );
assert( gamma_move(board, 4, 16, 10) == 0 );
assert( gamma_move(board, 5, 3, 11) == 0 );
assert( gamma_move(board, 6, 21, 6) == 0 );
assert( gamma_move(board, 6, 12, 18) == 0 );
assert( gamma_move(board, 7, 13, 23) == 0 );
assert( gamma_move(board, 7, 13, 5) == 0 );
assert( gamma_move(board, 1, 17, 11) == 0 );
assert( gamma_golden_move(board, 2, 5, 18) == 0 );
assert( gamma_move(board, 3, 10, 1) == 0 );
assert( gamma_move(board, 3, 11, 7) == 0 );
assert( gamma_move(board, 4, 7, 15) == 0 );
assert( gamma_move(board, 5, 21, 17) == 1 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 5, 21) == 0 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 7, 17, 16) == 0 );
assert( gamma_busy_fields(board, 7) == 49 );
assert( gamma_move(board, 1, 4, 11) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 3, 8, 16) == 0 );
assert( gamma_move(board, 3, 21, 6) == 0 );
assert( gamma_move(board, 4, 18, 19) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 9, 2) == 1 );
assert( gamma_move(board, 6, 12, 17) == 0 );
assert( gamma_free_fields(board, 6) == 40 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 7, 7, 13) == 0 );
assert( gamma_move(board, 1, 23, 19) == 0 );
assert( gamma_move(board, 1, 6, 2) == 0 );
assert( gamma_move(board, 2, 5, 23) == 0 );
assert( gamma_move(board, 3, 2, 5) == 0 );
assert( gamma_move(board, 3, 12, 18) == 0 );
assert( gamma_move(board, 4, 19, 22) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 17, 14) == 0 );
assert( gamma_move(board, 7, 4, 16) == 0 );
assert( gamma_move(board, 1, 11, 17) == 0 );
assert( gamma_move(board, 1, 16, 3) == 0 );
assert( gamma_move(board, 2, 17, 18) == 0 );
assert( gamma_move(board, 2, 20, 11) == 0 );
assert( gamma_move(board, 3, 8, 14) == 0 );
assert( gamma_move(board, 4, 7, 7) == 0 );
assert( gamma_move(board, 5, 20, 1) == 1 );
assert( gamma_move(board, 5, 17, 10) == 1 );
assert( gamma_busy_fields(board, 6) == 53 );
assert( gamma_move(board, 7, 12, 11) == 0 );
assert( gamma_busy_fields(board, 7) == 49 );
assert( gamma_move(board, 1, 12, 11) == 0 );
assert( gamma_move(board, 1, 5, 19) == 0 );
assert( gamma_free_fields(board, 1) == 50 );
assert( gamma_move(board, 2, 2, 4) == 0 );
assert( gamma_move(board, 2, 10, 5) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 5, 9) == 0 );
assert( gamma_move(board, 4, 17, 18) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 14, 0) == 1 );
assert( gamma_move(board, 6, 4, 17) == 0 );
assert( gamma_move(board, 6, 21, 17) == 0 );
assert( gamma_move(board, 7, 16, 22) == 0 );
assert( gamma_busy_fields(board, 7) == 49 );
assert( gamma_move(board, 1, 0, 11) == 0 );
assert( gamma_move(board, 1, 0, 18) == 0 );
assert( gamma_move(board, 3, 8, 11) == 0 );
assert( gamma_busy_fields(board, 3) == 49 );
assert( gamma_free_fields(board, 3) == 48 );
assert( gamma_move(board, 4, 2, 1) == 1 );
assert( gamma_move(board, 5, 18, 18) == 0 );
assert( gamma_move(board, 5, 14, 8) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 2, 4) == 0 );
assert( gamma_move(board, 6, 23, 15) == 0 );
assert( gamma_move(board, 7, 12, 0) == 0 );
assert( gamma_move(board, 7, 2, 2) == 0 );
assert( gamma_golden_possible(board, 7) == 0 );
assert( gamma_move(board, 1, 3, 0) == 0 );
assert( gamma_busy_fields(board, 1) == 54 );
assert( gamma_move(board, 2, 12, 0) == 0 );
assert( gamma_move(board, 2, 23, 5) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 12, 14) == 0 );
assert( gamma_move(board, 3, 23, 9) == 0 );
assert( gamma_move(board, 4, 13, 20) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 23, 7) == 1 );
assert( gamma_move(board, 5, 9, 14) == 1 );
assert( gamma_move(board, 6, 3, 19) == 0 );
assert( gamma_move(board, 6, 10, 5) == 0 );
assert( gamma_move(board, 7, 12, 19) == 1 );
assert( gamma_move(board, 1, 6, 17) == 0 );
assert( gamma_move(board, 1, 19, 7) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 19, 7) == 0 );
assert( gamma_busy_fields(board, 2) == 55 );
assert( gamma_move(board, 3, 15, 3) == 0 );
assert( gamma_move(board, 3, 10, 5) == 0 );
assert( gamma_move(board, 4, 16, 1) == 0 );
assert( gamma_move(board, 5, 10, 5) == 0 );
assert( gamma_move(board, 5, 11, 15) == 0 );
assert( gamma_move(board, 6, 10, 17) == 0 );
assert( gamma_move(board, 6, 0, 0) == 0 );
assert( gamma_move(board, 7, 21, 11) == 0 );
assert( gamma_move(board, 7, 16, 1) == 0 );
assert( gamma_move(board, 1, 1, 9) == 0 );
assert( gamma_move(board, 1, 4, 16) == 0 );
assert( gamma_move(board, 2, 16, 10) == 0 );
assert( gamma_golden_move(board, 2, 4, 18) == 0 );
assert( gamma_move(board, 3, 0, 11) == 0 );
assert( gamma_move(board, 3, 7, 4) == 0 );
assert( gamma_move(board, 4, 4, 19) == 0 );
assert( gamma_move(board, 4, 13, 2) == 0 );
assert( gamma_move(board, 5, 13, 7) == 0 );
assert( gamma_move(board, 5, 4, 15) == 0 );
assert( gamma_free_fields(board, 5) == 41 );
assert( gamma_move(board, 6, 17, 8) == 0 );
assert( gamma_move(board, 7, 7, 18) == 0 );
assert( gamma_move(board, 7, 5, 9) == 0 );
assert( gamma_move(board, 1, 0, 4) == 0 );
assert( gamma_move(board, 2, 4, 4) == 0 );
assert( gamma_move(board, 2, 5, 17) == 0 );
assert( gamma_move(board, 4, 1, 15) == 0 );
assert( gamma_move(board, 4, 14, 6) == 0 );
assert( gamma_move(board, 5, 19, 0) == 0 );
assert( gamma_busy_fields(board, 5) == 53 );
assert( gamma_move(board, 6, 4, 17) == 0 );
assert( gamma_move(board, 7, 1, 19) == 0 );
assert( gamma_move(board, 7, 7, 18) == 0 );
assert( gamma_free_fields(board, 7) == 38 );
assert( gamma_golden_possible(board, 7) == 0 );
assert( gamma_move(board, 1, 1, 16) == 0 );
assert( gamma_busy_fields(board, 1) == 54 );
assert( gamma_move(board, 2, 6, 17) == 0 );
assert( gamma_move(board, 2, 23, 5) == 0 );
assert( gamma_move(board, 3, 13, 0) == 0 );
assert( gamma_move(board, 3, 17, 8) == 0 );
assert( gamma_move(board, 4, 19, 22) == 0 );
assert( gamma_move(board, 4, 7, 16) == 0 );
assert( gamma_move(board, 5, 2, 4) == 0 );
assert( gamma_move(board, 6, 5, 7) == 0 );
assert( gamma_move(board, 7, 4, 10) == 0 );
assert( gamma_move(board, 1, 4, 17) == 0 );
assert( gamma_free_fields(board, 1) == 49 );
assert( gamma_golden_move(board, 1, 16, 16) == 0 );
assert( gamma_move(board, 2, 6, 8) == 0 );
assert( gamma_move(board, 2, 6, 4) == 0 );
assert( gamma_move(board, 3, 12, 1) == 0 );
assert( gamma_move(board, 4, 4, 8) == 0 );
assert( gamma_move(board, 5, 16, 10) == 0 );
assert( gamma_move(board, 6, 20, 15) == 0 );
assert( gamma_move(board, 6, 19, 3) == 0 );
assert( gamma_move(board, 7, 15, 13) == 0 );
assert( gamma_move(board, 7, 16, 14) == 1 );
assert( gamma_free_fields(board, 7) == 38 );
assert( gamma_move(board, 1, 2, 1) == 0 );
assert( gamma_move(board, 2, 2, 4) == 0 );
assert( gamma_move(board, 2, 0, 9) == 1 );
assert( gamma_move(board, 3, 12, 14) == 0 );
assert( gamma_free_fields(board, 3) == 47 );
assert( gamma_move(board, 4, 3, 10) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 13, 19) == 0 );
assert( gamma_move(board, 6, 4, 16) == 0 );
assert( gamma_move(board, 7, 4, 8) == 0 );
assert( gamma_free_fields(board, 7) == 38 );
assert( gamma_move(board, 1, 18, 14) == 0 );
assert( gamma_move(board, 1, 23, 6) == 0 );
assert( gamma_move(board, 2, 12, 5) == 0 );
assert( gamma_move(board, 2, 2, 19) == 0 );
assert( gamma_move(board, 3, 5, 20) == 0 );
assert( gamma_move(board, 3, 2, 10) == 0 );
assert( gamma_move(board, 4, 10, 16) == 0 );
assert( gamma_move(board, 4, 0, 19) == 0 );
assert( gamma_move(board, 6, 1, 5) == 0 );
assert( gamma_move(board, 6, 16, 2) == 0 );
assert( gamma_busy_fields(board, 6) == 53 );
assert( gamma_move(board, 7, 17, 16) == 0 );
assert( gamma_move(board, 7, 8, 10) == 0 );
assert( gamma_move(board, 1, 2, 20) == 0 );
assert( gamma_move(board, 1, 4, 11) == 0 );
assert( gamma_move(board, 2, 19, 19) == 1 );
assert( gamma_move(board, 3, 6, 9) == 1 );
assert( gamma_move(board, 4, 14, 12) == 0 );
assert( gamma_move(board, 4, 19, 2) == 0 );
assert( gamma_busy_fields(board, 4) == 47 );
assert( gamma_free_fields(board, 4) == 36 );
assert( gamma_golden_move(board, 4, 1, 14) == 1 );
assert( gamma_move(board, 5, 5, 9) == 0 );
assert( gamma_move(board, 5, 3, 13) == 0 );
assert( gamma_move(board, 7, 6, 23) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 23, 3) == 0 );
assert( gamma_move(board, 3, 7, 1) == 0 );
assert( gamma_free_fields(board, 3) == 46 );
assert( gamma_move(board, 4, 9, 14) == 0 );
assert( gamma_busy_fields(board, 4) == 48 );
assert( gamma_free_fields(board, 4) == 36 );
assert( gamma_move(board, 5, 17, 14) == 0 );
assert( gamma_move(board, 5, 15, 3) == 0 );


char* board719858238 = gamma_board(board);
assert( board719858238 != NULL );
assert( strcmp(board719858238, 
".712552122177473575227.7\n"
"75.55.3751174...132.2512\n"
"3.656342..3.43.3.4.12576\n"
"54..16.71..2.34773112..7\n"
"21..56472235..542263217.\n"
"445122.3652.177.771..3.5\n"
".561246.65...574.31..73.\n"
"..111.54446.66.73664..46\n"
"7216374.73.2722.12666..5\n"
"6.5447347576733755332.15\n"
"2651.43641.3..5.533..343\n"
"441446255...164463151155\n"
"1.524552515427.311.23..5\n"
"6.67.23..236147.3.73617.\n"
"4536124.3.511.67.46...22\n"
"773.2.26.6317464..67...6\n"
"27.4666.57...31246..1364\n"
"2251...66612.3335315.1.6\n"
".443314564625712.54651.1\n"
"1222.66.227.3251.277472.\n") == 0);
free(board719858238);
board719858238 = NULL;
assert( gamma_move(board, 6, 11, 16) == 0 );
assert( gamma_free_fields(board, 6) == 35 );
assert( gamma_move(board, 7, 17, 9) == 0 );
assert( gamma_move(board, 1, 0, 4) == 0 );
assert( gamma_move(board, 1, 11, 8) == 1 );
assert( gamma_move(board, 2, 6, 13) == 0 );
assert( gamma_move(board, 2, 4, 5) == 0 );
assert( gamma_move(board, 3, 18, 15) == 0 );
assert( gamma_move(board, 4, 15, 12) == 0 );
assert( gamma_move(board, 4, 4, 19) == 0 );
assert( gamma_free_fields(board, 4) == 35 );
assert( gamma_move(board, 5, 19, 1) == 0 );
assert( gamma_move(board, 6, 16, 6) == 0 );
assert( gamma_move(board, 1, 15, 19) == 0 );
assert( gamma_move(board, 1, 10, 18) == 0 );


gamma_delete(board);

    return 0;
}
