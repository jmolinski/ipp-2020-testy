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
uuid: 757105407
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(24, 19, 5, 41);
assert( board != NULL );


assert( gamma_move(board, 1, 6, 2) == 1 );
assert( gamma_move(board, 1, 18, 2) == 1 );
assert( gamma_move(board, 2, 18, 14) == 1 );
assert( gamma_move(board, 2, 22, 14) == 1 );
assert( gamma_move(board, 3, 23, 3) == 1 );
assert( gamma_move(board, 4, 2, 16) == 1 );
assert( gamma_move(board, 4, 7, 8) == 1 );


char* board724422232 = gamma_board(board);
assert( board724422232 != NULL );
assert( strcmp(board724422232, 
"........................\n"
"........................\n"
"..4.....................\n"
"........................\n"
"..................2...2.\n"
"........................\n"
"........................\n"
"........................\n"
"........................\n"
"........................\n"
".......4................\n"
"........................\n"
"........................\n"
"........................\n"
"........................\n"
".......................3\n"
"......1...........1.....\n"
"........................\n"
"........................\n") == 0);
free(board724422232);
board724422232 = NULL;
assert( gamma_move(board, 5, 2, 12) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 1, 14, 14) == 1 );


char* board144734617 = gamma_board(board);
assert( board144734617 != NULL );
assert( strcmp(board144734617, 
"........................\n"
"........................\n"
"..4.....................\n"
"........................\n"
"..............1...2...2.\n"
"........................\n"
"..5.....................\n"
"........................\n"
"........................\n"
"........................\n"
".......4................\n"
"........................\n"
"........................\n"
"........................\n"
"........................\n"
".......................3\n"
"......1...........1.....\n"
"........................\n"
"........................\n") == 0);
free(board144734617);
board144734617 = NULL;
assert( gamma_move(board, 2, 7, 15) == 1 );
assert( gamma_move(board, 2, 0, 4) == 1 );
assert( gamma_move(board, 3, 15, 14) == 1 );
assert( gamma_move(board, 3, 6, 3) == 1 );
assert( gamma_move(board, 4, 10, 12) == 1 );
assert( gamma_move(board, 5, 17, 7) == 1 );


char* board224404261 = gamma_board(board);
assert( board224404261 != NULL );
assert( strcmp(board224404261, 
"........................\n"
"........................\n"
"..4.....................\n"
".......2................\n"
"..............13..2...2.\n"
"........................\n"
"..5.......4.............\n"
"........................\n"
"........................\n"
"........................\n"
".......4................\n"
".................5......\n"
"........................\n"
"........................\n"
"2.......................\n"
"......3................3\n"
"......1...........1.....\n"
"........................\n"
"........................\n") == 0);
free(board224404261);
board224404261 = NULL;
assert( gamma_move(board, 1, 19, 18) == 1 );
assert( gamma_move(board, 1, 5, 17) == 1 );
assert( gamma_move(board, 2, 3, 17) == 1 );
assert( gamma_move(board, 2, 3, 11) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 16, 14) == 1 );
assert( gamma_move(board, 3, 22, 12) == 1 );
assert( gamma_free_fields(board, 3) == 435 );
assert( gamma_move(board, 4, 7, 18) == 1 );
assert( gamma_move(board, 4, 16, 5) == 1 );


char* board247160645 = gamma_board(board);
assert( board247160645 != NULL );
assert( strcmp(board247160645, 
".......4...........1....\n"
"...2.1..................\n"
"..4.....................\n"
".......2................\n"
"..............133.2...2.\n"
"........................\n"
"..5.......4...........3.\n"
"...2....................\n"
"........................\n"
"........................\n"
".......4................\n"
".................5......\n"
"........................\n"
"................4.......\n"
"2.......................\n"
"......3................3\n"
"......1...........1.....\n"
"........................\n"
"........................\n") == 0);
free(board247160645);
board247160645 = NULL;
assert( gamma_move(board, 5, 2, 22) == 0 );
assert( gamma_move(board, 1, 10, 9) == 1 );
assert( gamma_move(board, 1, 13, 6) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 3, 0, 15) == 1 );
assert( gamma_move(board, 3, 16, 5) == 0 );


char* board181488997 = gamma_board(board);
assert( board181488997 != NULL );
assert( strcmp(board181488997, 
".......4...........1....\n"
"...2.1..................\n"
"..4.....................\n"
"3......2................\n"
"..............133.2...2.\n"
"........................\n"
"..5.......4...........3.\n"
"...2....................\n"
"........................\n"
"..........1.............\n"
".......4................\n"
".................5......\n"
".............1..........\n"
"................4.......\n"
"2.......................\n"
"......3................3\n"
"......1...........1.....\n"
"........................\n"
"........................\n") == 0);
free(board181488997);
board181488997 = NULL;
assert( gamma_move(board, 4, 1, 10) == 1 );
assert( gamma_free_fields(board, 4) == 429 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 16, 18) == 1 );
assert( gamma_move(board, 1, 3, 3) == 1 );
assert( gamma_move(board, 2, 4, 6) == 1 );
assert( gamma_move(board, 3, 15, 9) == 1 );
assert( gamma_move(board, 3, 14, 16) == 1 );
assert( gamma_free_fields(board, 3) == 424 );
assert( gamma_move(board, 4, 11, 6) == 1 );
assert( gamma_move(board, 4, 12, 10) == 1 );
assert( gamma_move(board, 5, 13, 15) == 1 );
assert( gamma_move(board, 5, 23, 1) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 1, 7, 19) == 0 );
assert( gamma_move(board, 2, 13, 10) == 1 );
assert( gamma_move(board, 2, 4, 9) == 1 );
assert( gamma_move(board, 4, 11, 6) == 0 );
assert( gamma_move(board, 4, 14, 5) == 1 );
assert( gamma_move(board, 5, 9, 3) == 1 );
assert( gamma_move(board, 5, 12, 17) == 1 );
assert( gamma_move(board, 1, 13, 0) == 1 );
assert( gamma_move(board, 1, 10, 2) == 1 );
assert( gamma_move(board, 2, 11, 23) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 15, 12) == 1 );
assert( gamma_move(board, 3, 10, 5) == 1 );
assert( gamma_move(board, 4, 4, 17) == 1 );
assert( gamma_move(board, 5, 14, 1) == 1 );
assert( gamma_move(board, 5, 18, 11) == 1 );
assert( gamma_move(board, 1, 4, 23) == 0 );
assert( gamma_busy_fields(board, 1) == 10 );
assert( gamma_free_fields(board, 1) == 408 );
assert( gamma_move(board, 2, 9, 13) == 1 );
assert( gamma_move(board, 3, 8, 22) == 0 );
assert( gamma_move(board, 3, 5, 6) == 1 );
assert( gamma_move(board, 4, 6, 3) == 0 );
assert( gamma_move(board, 5, 7, 4) == 1 );
assert( gamma_free_fields(board, 5) == 405 );
assert( gamma_move(board, 1, 10, 18) == 1 );
assert( gamma_move(board, 1, 5, 8) == 1 );
assert( gamma_free_fields(board, 1) == 403 );
assert( gamma_move(board, 2, 5, 8) == 0 );
assert( gamma_move(board, 3, 17, 19) == 0 );
assert( gamma_move(board, 4, 0, 20) == 0 );
assert( gamma_move(board, 5, 0, 5) == 1 );
assert( gamma_busy_fields(board, 5) == 11 );
assert( gamma_move(board, 1, 22, 13) == 1 );
assert( gamma_busy_fields(board, 1) == 13 );
assert( gamma_move(board, 2, 5, 3) == 1 );
assert( gamma_move(board, 2, 9, 16) == 1 );
assert( gamma_move(board, 3, 10, 21) == 0 );
assert( gamma_move(board, 4, 19, 14) == 1 );
assert( gamma_busy_fields(board, 4) == 11 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 18, 20) == 0 );
assert( gamma_move(board, 1, 1, 8) == 1 );
assert( gamma_move(board, 2, 22, 14) == 0 );
assert( gamma_move(board, 3, 13, 18) == 1 );
assert( gamma_move(board, 4, 3, 16) == 1 );
assert( gamma_move(board, 4, 12, 16) == 1 );
assert( gamma_move(board, 5, 3, 4) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 1, 4, 3) == 1 );
assert( gamma_move(board, 2, 14, 7) == 1 );
assert( gamma_move(board, 3, 12, 1) == 1 );
assert( gamma_move(board, 4, 10, 15) == 1 );
assert( gamma_move(board, 5, 0, 13) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );


char* board766428805 = gamma_board(board);
assert( board766428805 != NULL );
assert( strcmp(board766428805, 
".......4..1..3..5..1....\n"
"...241......5...........\n"
"..44.....2..4.3.........\n"
"3......2..4..5..........\n"
"..............133.24..2.\n"
"5........2............1.\n"
"..5.......4....3......3.\n"
"...2..............5.....\n"
".4..........42..........\n"
"....2.....1....3........\n"
".1...1.4................\n"
"..............2..5......\n"
"....23.....4.1..........\n"
"5.........3...4.4.......\n"
"2..5...5................\n"
"...1123..5.............3\n"
"......1...1.......1.....\n"
"............3.5........5\n"
".............1..........\n") == 0);
free(board766428805);
board766428805 = NULL;
assert( gamma_move(board, 1, 11, 19) == 0 );
assert( gamma_move(board, 1, 23, 12) == 1 );
assert( gamma_move(board, 2, 0, 20) == 0 );
assert( gamma_move(board, 2, 19, 15) == 1 );
assert( gamma_move(board, 3, 22, 0) == 1 );
assert( gamma_move(board, 4, 7, 2) == 1 );
assert( gamma_move(board, 5, 6, 12) == 1 );
assert( gamma_move(board, 5, 2, 10) == 1 );
assert( gamma_move(board, 1, 5, 23) == 0 );
assert( gamma_move(board, 1, 18, 7) == 1 );
assert( gamma_move(board, 2, 16, 0) == 1 );
assert( gamma_move(board, 2, 20, 10) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 0, 2) == 1 );
assert( gamma_move(board, 4, 15, 5) == 1 );
assert( gamma_move(board, 4, 11, 14) == 1 );
assert( gamma_move(board, 5, 7, 3) == 1 );
assert( gamma_move(board, 1, 0, 14) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 17, 9) == 1 );
assert( gamma_move(board, 3, 8, 12) == 1 );
assert( gamma_move(board, 4, 14, 10) == 1 );
assert( gamma_move(board, 4, 11, 15) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 15, 16) == 1 );
assert( gamma_move(board, 5, 0, 9) == 1 );
assert( gamma_move(board, 1, 14, 4) == 1 );
assert( gamma_move(board, 1, 2, 1) == 1 );
assert( gamma_move(board, 2, 4, 5) == 1 );
assert( gamma_move(board, 2, 18, 0) == 1 );
assert( gamma_free_fields(board, 2) == 364 );
assert( gamma_move(board, 3, 17, 6) == 1 );


char* board886736951 = gamma_board(board);
assert( board886736951 != NULL );
assert( strcmp(board886736951, 
".......4..1..3..5..1....\n"
"...241......5...........\n"
"..44.....2..4.35........\n"
"3......2..44.5.....2....\n"
"1..........4..133.24..2.\n"
"5........2............1.\n"
"..5...5.3.4....3......31\n"
"...2..............5.....\n"
".45.........424.....2...\n"
"5...2.....1....3.2......\n"
".1...1.4................\n"
"..............2..51.....\n"
"....23.....4.1...3......\n"
"5...2.....3...444.......\n"
"2..5...5......1.........\n"
"...11235.5.............3\n"
"3.....14..1.......1.....\n"
"..1.........3.5........5\n"
".............1..2.2...3.\n") == 0);
free(board886736951);
board886736951 = NULL;
assert( gamma_move(board, 4, 10, 5) == 0 );


char* board394629652 = gamma_board(board);
assert( board394629652 != NULL );
assert( strcmp(board394629652, 
".......4..1..3..5..1....\n"
"...241......5...........\n"
"..44.....2..4.35........\n"
"3......2..44.5.....2....\n"
"1..........4..133.24..2.\n"
"5........2............1.\n"
"..5...5.3.4....3......31\n"
"...2..............5.....\n"
".45.........424.....2...\n"
"5...2.....1....3.2......\n"
".1...1.4................\n"
"..............2..51.....\n"
"....23.....4.1...3......\n"
"5...2.....3...444.......\n"
"2..5...5......1.........\n"
"...11235.5.............3\n"
"3.....14..1.......1.....\n"
"..1.........3.5........5\n"
".............1..2.2...3.\n") == 0);
free(board394629652);
board394629652 = NULL;
assert( gamma_move(board, 5, 5, 22) == 0 );
assert( gamma_move(board, 1, 21, 4) == 1 );
assert( gamma_move(board, 1, 8, 0) == 1 );
assert( gamma_busy_fields(board, 1) == 22 );
assert( gamma_move(board, 2, 23, 4) == 1 );
assert( gamma_move(board, 2, 9, 9) == 1 );
assert( gamma_move(board, 3, 8, 11) == 1 );
assert( gamma_move(board, 3, 21, 3) == 1 );
assert( gamma_busy_fields(board, 3) == 19 );
assert( gamma_move(board, 4, 8, 4) == 1 );
assert( gamma_free_fields(board, 4) == 356 );
assert( gamma_move(board, 5, 5, 12) == 1 );
assert( gamma_move(board, 1, 5, 7) == 1 );
assert( gamma_move(board, 1, 20, 11) == 1 );
assert( gamma_move(board, 2, 7, 10) == 1 );
assert( gamma_free_fields(board, 2) == 352 );
assert( gamma_golden_move(board, 2, 6, 11) == 0 );


char* board664400563 = gamma_board(board);
assert( board664400563 != NULL );
assert( strcmp(board664400563, 
".......4..1..3..5..1....\n"
"...241......5...........\n"
"..44.....2..4.35........\n"
"3......2..44.5.....2....\n"
"1..........4..133.24..2.\n"
"5........2............1.\n"
"..5..55.3.4....3......31\n"
"...2....3.........5.1...\n"
".45....2....424.....2...\n"
"5...2....21....3.2......\n"
".1...1.4................\n"
".....1........2..51.....\n"
"....23.....4.1...3......\n"
"5...2.....3...444.......\n"
"2..5...54.....1......1.2\n"
"...11235.5...........3.3\n"
"3.....14..1.......1.....\n"
"..1.........3.5........5\n"
"........1....1..2.2...3.\n") == 0);
free(board664400563);
board664400563 = NULL;
assert( gamma_move(board, 4, 14, 6) == 1 );
assert( gamma_busy_fields(board, 4) == 21 );
assert( gamma_move(board, 5, 11, 6) == 0 );
assert( gamma_move(board, 1, 16, 11) == 1 );
assert( gamma_free_fields(board, 1) == 350 );
assert( gamma_move(board, 2, 3, 2) == 1 );
assert( gamma_move(board, 3, 5, 9) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 16, 17) == 1 );
assert( gamma_move(board, 5, 2, 20) == 0 );
assert( gamma_busy_fields(board, 1) == 25 );
assert( gamma_move(board, 2, 17, 15) == 1 );
assert( gamma_move(board, 2, 23, 2) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 11, 9) == 1 );
assert( gamma_move(board, 3, 8, 2) == 1 );
assert( gamma_move(board, 4, 11, 6) == 0 );
assert( gamma_move(board, 5, 23, 4) == 0 );
assert( gamma_move(board, 5, 19, 7) == 1 );
assert( gamma_move(board, 1, 9, 23) == 0 );
assert( gamma_move(board, 1, 5, 9) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 11, 3) == 1 );
assert( gamma_golden_move(board, 2, 18, 19) == 0 );
assert( gamma_move(board, 3, 21, 4) == 0 );
assert( gamma_move(board, 4, 17, 2) == 1 );


char* board474976669 = gamma_board(board);
assert( board474976669 != NULL );
assert( strcmp(board474976669, 
".......4..1..3..5..1....\n"
"...241......5...4.......\n"
"..44.....2..4.35........\n"
"3......2..44.5...2.2....\n"
"1..........4..133.24..2.\n"
"5........2............1.\n"
"..5..55.3.4....3......31\n"
"...2....3.......1.5.1...\n"
".45....2....424.....2...\n"
"5...23...213...3.2......\n"
".1...1.4................\n"
".....1........2..515....\n"
"....23.....4.14..3......\n"
"5...2.....3...444.......\n"
"2..5...54.....1......1.2\n"
"...11235.5.2.........3.3\n"
"3..2..143.1......41....2\n"
"..1.........3.5........5\n"
"........1....1..2.2...3.\n") == 0);
free(board474976669);
board474976669 = NULL;
assert( gamma_free_fields(board, 5) == 340 );
assert( gamma_move(board, 1, 6, 7) == 1 );
assert( gamma_move(board, 2, 3, 18) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 18, 12) == 1 );
assert( gamma_move(board, 4, 0, 3) == 1 );
assert( gamma_busy_fields(board, 4) == 24 );
assert( gamma_move(board, 5, 14, 12) == 1 );
assert( gamma_move(board, 1, 21, 9) == 1 );
assert( gamma_move(board, 1, 16, 15) == 1 );
assert( gamma_free_fields(board, 1) == 333 );
assert( gamma_move(board, 3, 0, 6) == 1 );
assert( gamma_busy_fields(board, 3) == 24 );
assert( gamma_move(board, 4, 1, 5) == 1 );
assert( gamma_move(board, 5, 1, 0) == 1 );
assert( gamma_move(board, 5, 19, 6) == 1 );
assert( gamma_move(board, 1, 7, 1) == 1 );
assert( gamma_move(board, 1, 10, 13) == 1 );
assert( gamma_move(board, 2, 6, 7) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 13, 18) == 0 );
assert( gamma_move(board, 3, 23, 9) == 1 );
assert( gamma_move(board, 4, 15, 8) == 1 );
assert( gamma_free_fields(board, 4) == 325 );


char* board200309799 = gamma_board(board);
assert( board200309799 != NULL );
assert( strcmp(board200309799, 
"...2...4..1..3..5..1....\n"
"...241......5...4.......\n"
"..44.....2..4.35........\n"
"3......2..44.5..12.2....\n"
"1..........4..133.24..2.\n"
"5........21...........1.\n"
"..5..55.3.4...53..3...31\n"
"...2....3.......1.5.1...\n"
".45....2....424.....2...\n"
"5...23...213...3.2...1.3\n"
".1...1.4.......4........\n"
".....11.......2..515....\n"
"3...23.....4.14..3.5....\n"
"54..2.....3...444.......\n"
"2..5...54.....1......1.2\n"
"4..11235.5.2.........3.3\n"
"3..2..143.1......41....2\n"
"..1....1....3.5........5\n"
".5......1....1..2.2...3.\n") == 0);
free(board200309799);
board200309799 = NULL;
assert( gamma_move(board, 1, 20, 3) == 1 );
assert( gamma_move(board, 2, 9, 1) == 1 );
assert( gamma_move(board, 2, 7, 5) == 1 );
assert( gamma_move(board, 3, 6, 12) == 0 );
assert( gamma_move(board, 4, 15, 4) == 1 );
assert( gamma_move(board, 5, 22, 15) == 1 );
assert( gamma_move(board, 5, 2, 17) == 1 );
assert( gamma_move(board, 1, 23, 0) == 1 );
assert( gamma_move(board, 1, 12, 2) == 1 );
assert( gamma_move(board, 2, 10, 15) == 0 );
assert( gamma_move(board, 3, 2, 3) == 1 );
assert( gamma_move(board, 3, 18, 10) == 1 );
assert( gamma_move(board, 4, 15, 21) == 0 );
assert( gamma_busy_fields(board, 5) == 25 );
assert( gamma_move(board, 1, 18, 8) == 1 );
assert( gamma_move(board, 1, 5, 18) == 1 );
assert( gamma_move(board, 2, 7, 1) == 0 );
assert( gamma_busy_fields(board, 2) == 29 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 11, 1) == 1 );
assert( gamma_move(board, 3, 9, 6) == 1 );
assert( gamma_move(board, 4, 16, 13) == 1 );
assert( gamma_free_fields(board, 4) == 310 );
assert( gamma_move(board, 5, 1, 3) == 1 );
assert( gamma_move(board, 1, 1, 7) == 1 );
assert( gamma_move(board, 1, 12, 12) == 1 );
assert( gamma_move(board, 2, 15, 1) == 1 );
assert( gamma_move(board, 2, 1, 7) == 0 );
assert( gamma_move(board, 3, 10, 7) == 1 );
assert( gamma_move(board, 3, 6, 0) == 1 );
assert( gamma_move(board, 4, 7, 0) == 1 );
assert( gamma_move(board, 5, 8, 17) == 1 );
assert( gamma_move(board, 5, 10, 5) == 0 );
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_move(board, 2, 8, 14) == 1 );
assert( gamma_move(board, 3, 16, 16) == 1 );
assert( gamma_move(board, 3, 0, 18) == 1 );
assert( gamma_move(board, 4, 13, 0) == 0 );
assert( gamma_move(board, 1, 16, 7) == 1 );
assert( gamma_move(board, 2, 13, 11) == 1 );
assert( gamma_move(board, 2, 2, 3) == 0 );


char* board667463807 = gamma_board(board);
assert( board667463807 != NULL );
assert( strcmp(board667463807, 
"3..2.1.4..1..3..5..1....\n"
"..5241..5...5...4.......\n"
"..44.....2..4.353.......\n"
"3......2..44.5..12.2..5.\n"
"1.......2..4..133.24..2.\n"
"5........21.....4.....1.\n"
"..5..55.3.4.1.53..3...31\n"
"...2....3....2..1.5.1...\n"
".45....2....424...3.2...\n"
"5...23...213...3.2...1.3\n"
".1...1.4.......4..1.....\n"
".1...11...3...2.1515....\n"
"3...23...3.4.14..3.5....\n"
"54..2..2..3...444.......\n"
"2..5...54.....14.....1.2\n"
"45311235.5.2........13.3\n"
"3..2..143.1.1....41....2\n"
"..1....1.2.33.52.......5\n"
".5....341....1..2.2...31\n") == 0);
free(board667463807);
board667463807 = NULL;
assert( gamma_move(board, 3, 5, 11) == 1 );
assert( gamma_move(board, 3, 7, 12) == 1 );
assert( gamma_move(board, 4, 7, 4) == 0 );
assert( gamma_busy_fields(board, 4) == 29 );
assert( gamma_move(board, 5, 13, 3) == 1 );
assert( gamma_move(board, 5, 23, 2) == 0 );


char* board748655105 = gamma_board(board);
assert( board748655105 != NULL );
assert( strcmp(board748655105, 
"3..2.1.4..1..3..5..1....\n"
"..5241..5...5...4.......\n"
"..44.....2..4.353.......\n"
"3......2..44.5..12.2..5.\n"
"1.......2..4..133.24..2.\n"
"5........21.....4.....1.\n"
"..5..5533.4.1.53..3...31\n"
"...2.3..3....2..1.5.1...\n"
".45....2....424...3.2...\n"
"5...23...213...3.2...1.3\n"
".1...1.4.......4..1.....\n"
".1...11...3...2.1515....\n"
"3...23...3.4.14..3.5....\n"
"54..2..2..3...444.......\n"
"2..5...54.....14.....1.2\n"
"45311235.5.2.5......13.3\n"
"3..2..143.1.1....41....2\n"
"..1....1.2.33.52.......5\n"
".5....341....1..2.2...31\n") == 0);
free(board748655105);
board748655105 = NULL;
assert( gamma_move(board, 1, 11, 15) == 0 );
assert( gamma_move(board, 1, 23, 7) == 1 );
assert( gamma_golden_move(board, 1, 12, 18) == 0 );
assert( gamma_move(board, 2, 10, 0) == 1 );
assert( gamma_busy_fields(board, 3) == 35 );
assert( gamma_move(board, 4, 3, 17) == 0 );
assert( gamma_move(board, 5, 13, 14) == 1 );
assert( gamma_move(board, 2, 11, 2) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 6, 2) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );


char* board607169486 = gamma_board(board);
assert( board607169486 != NULL );
assert( strcmp(board607169486, 
"3..2.1.4..1..3..5..1....\n"
"..5241..5...5...4.......\n"
"..44.....2..4.353.......\n"
"3......2..44.5..12.2..5.\n"
"1.......2..4.5133.24..2.\n"
"5........21.....4.....1.\n"
"..5..5533.4.1.53..3...31\n"
"...2.3..3....2..1.5.1...\n"
".45....2....424...3.2...\n"
"5...23...213...3.2...1.3\n"
".1...1.4.......4..1.....\n"
".1...11...3...2.1515...1\n"
"3...23...3.4.14..3.5....\n"
"54..2..2..3...444.......\n"
"2..5...54.....14.....1.2\n"
"45311235.5.2.5......13.3\n"
"3..2..143.121....41....2\n"
"..1....1.2.33.52.......5\n"
".5....341.2..1..2.2...31\n") == 0);
free(board607169486);
board607169486 = NULL;
assert( gamma_move(board, 5, 21, 6) == 1 );
assert( gamma_move(board, 1, 15, 9) == 0 );
assert( gamma_move(board, 2, 11, 17) == 1 );
assert( gamma_move(board, 2, 22, 5) == 1 );
assert( gamma_move(board, 3, 4, 4) == 1 );
assert( gamma_move(board, 4, 17, 17) == 1 );
assert( gamma_move(board, 4, 14, 8) == 1 );
assert( gamma_move(board, 5, 10, 10) == 1 );
assert( gamma_move(board, 5, 4, 12) == 1 );
assert( gamma_move(board, 1, 12, 4) == 1 );
assert( gamma_busy_fields(board, 1) == 40 );
assert( gamma_move(board, 2, 1, 22) == 0 );
assert( gamma_move(board, 2, 7, 2) == 0 );
assert( gamma_move(board, 3, 18, 12) == 0 );
assert( gamma_move(board, 3, 5, 0) == 1 );
assert( gamma_busy_fields(board, 3) == 37 );
assert( gamma_move(board, 4, 8, 0) == 0 );
assert( gamma_move(board, 5, 18, 20) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 1, 1, 21) == 0 );
assert( gamma_move(board, 1, 5, 13) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 5, 20) == 0 );
assert( gamma_free_fields(board, 2) == 279 );
assert( gamma_move(board, 3, 3, 12) == 1 );
assert( gamma_move(board, 4, 13, 3) == 0 );
assert( gamma_move(board, 4, 14, 12) == 0 );
assert( gamma_move(board, 5, 0, 21) == 0 );
assert( gamma_move(board, 5, 7, 14) == 1 );
assert( gamma_move(board, 1, 11, 22) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_golden_move(board, 1, 17, 12) == 0 );
assert( gamma_move(board, 2, 10, 5) == 0 );
assert( gamma_move(board, 2, 6, 18) == 1 );
assert( gamma_move(board, 3, 3, 9) == 1 );
assert( gamma_move(board, 3, 22, 15) == 0 );
assert( gamma_move(board, 4, 9, 7) == 1 );
assert( gamma_move(board, 5, 10, 9) == 0 );
assert( gamma_free_fields(board, 5) == 274 );
assert( gamma_move(board, 1, 8, 17) == 0 );
assert( gamma_free_fields(board, 1) == 274 );
assert( gamma_move(board, 2, 18, 1) == 1 );
assert( gamma_move(board, 2, 10, 2) == 0 );
assert( gamma_move(board, 3, 0, 4) == 0 );
assert( gamma_move(board, 4, 7, 12) == 0 );
assert( gamma_move(board, 4, 17, 8) == 1 );
assert( gamma_move(board, 5, 13, 13) == 1 );
assert( gamma_move(board, 5, 0, 18) == 0 );
assert( gamma_busy_fields(board, 5) == 34 );
assert( gamma_move(board, 1, 11, 0) == 1 );
assert( gamma_move(board, 1, 11, 9) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 8, 2) == 0 );
assert( gamma_move(board, 3, 18, 15) == 1 );
assert( gamma_busy_fields(board, 4) == 33 );
assert( gamma_move(board, 5, 12, 10) == 0 );
assert( gamma_move(board, 5, 10, 9) == 0 );


char* board443283412 = gamma_board(board);
assert( board443283412 != NULL );
assert( strcmp(board443283412, 
"3..2.124..1..3..5..1....\n"
"..5241..5..25...44......\n"
"..44.....2..4.353.......\n"
"3......2..44.5..1232..5.\n"
"1......52..4.5133.24..2.\n"
"5....1...21..5..4.....1.\n"
"..5355533.4.1.53..3...31\n"
"...2.3..3....2..1.5.1...\n"
".45....2..5.424...3.2...\n"
"5..323...213...3.2...1.3\n"
".1...1.4......44.41.....\n"
".1...11..43...2.1515...1\n"
"3...23...3.4.14..3.5.5..\n"
"54..2..2..3...444.....2.\n"
"2..53..54...1.14.....1.2\n"
"45311235.5.2.5......13.3\n"
"3..2..143.121....41....2\n"
"..1....1.2.33.52..2....5\n"
".5...3341.21.1..2.2...31\n") == 0);
free(board443283412);
board443283412 = NULL;
assert( gamma_move(board, 1, 14, 2) == 1 );
assert( gamma_move(board, 1, 22, 2) == 1 );
assert( gamma_free_fields(board, 1) == 267 );
assert( gamma_move(board, 2, 13, 21) == 0 );
assert( gamma_move(board, 3, 4, 1) == 1 );
assert( gamma_move(board, 3, 11, 10) == 1 );
assert( gamma_move(board, 4, 18, 3) == 1 );
assert( gamma_move(board, 5, 4, 11) == 1 );
assert( gamma_move(board, 1, 15, 23) == 0 );
assert( gamma_move(board, 1, 19, 8) == 1 );
assert( gamma_move(board, 2, 3, 17) == 0 );
assert( gamma_move(board, 2, 20, 8) == 1 );
assert( gamma_move(board, 3, 6, 2) == 0 );
assert( gamma_move(board, 3, 10, 9) == 0 );
assert( gamma_busy_fields(board, 3) == 42 );
assert( gamma_move(board, 4, 5, 6) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 0, 2) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 1, 1, 19) == 0 );
assert( gamma_move(board, 2, 0, 2) == 0 );
assert( gamma_move(board, 3, 11, 15) == 0 );
assert( gamma_move(board, 3, 1, 8) == 0 );
assert( gamma_move(board, 4, 8, 22) == 0 );
assert( gamma_move(board, 4, 9, 17) == 1 );
assert( gamma_move(board, 5, 12, 21) == 0 );
assert( gamma_move(board, 5, 0, 15) == 0 );
assert( gamma_move(board, 1, 12, 9) == 1 );
assert( gamma_move(board, 1, 14, 11) == 1 );
assert( gamma_move(board, 2, 4, 0) == 1 );
assert( gamma_move(board, 4, 6, 12) == 0 );
assert( gamma_move(board, 4, 15, 18) == 1 );
assert( gamma_free_fields(board, 4) == 256 );
assert( gamma_move(board, 1, 16, 1) == 1 );
assert( gamma_move(board, 2, 4, 6) == 0 );
assert( gamma_free_fields(board, 2) == 255 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 11, 10) == 0 );
assert( gamma_busy_fields(board, 3) == 42 );
assert( gamma_golden_move(board, 4, 1, 4) == 0 );
assert( gamma_move(board, 5, 14, 5) == 0 );
assert( gamma_move(board, 5, 5, 5) == 1 );
assert( gamma_move(board, 1, 2, 16) == 0 );
assert( gamma_move(board, 2, 16, 5) == 0 );
assert( gamma_move(board, 3, 12, 20) == 0 );
assert( gamma_move(board, 4, 17, 23) == 0 );
assert( gamma_move(board, 4, 2, 10) == 0 );
assert( gamma_busy_fields(board, 4) == 36 );
assert( gamma_move(board, 5, 15, 20) == 0 );
assert( gamma_move(board, 5, 17, 12) == 1 );
assert( gamma_move(board, 1, 4, 10) == 0 );
assert( gamma_golden_move(board, 1, 17, 16) == 0 );
assert( gamma_move(board, 2, 12, 9) == 0 );
assert( gamma_move(board, 2, 6, 7) == 0 );
assert( gamma_busy_fields(board, 2) == 40 );
assert( gamma_move(board, 3, 3, 15) == 1 );
assert( gamma_move(board, 4, 2, 21) == 0 );
assert( gamma_move(board, 4, 9, 0) == 1 );
assert( gamma_move(board, 5, 12, 18) == 1 );
assert( gamma_move(board, 1, 16, 10) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 1, 1) == 1 );
assert( gamma_move(board, 2, 21, 0) == 1 );
assert( gamma_busy_fields(board, 2) == 42 );
assert( gamma_move(board, 3, 2, 6) == 1 );
assert( gamma_move(board, 3, 18, 14) == 0 );
assert( gamma_move(board, 4, 1, 5) == 0 );
assert( gamma_move(board, 5, 5, 17) == 0 );
assert( gamma_move(board, 5, 20, 17) == 1 );
assert( gamma_move(board, 1, 15, 10) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 0, 4) == 0 );
assert( gamma_move(board, 3, 7, 8) == 0 );
assert( gamma_move(board, 4, 16, 1) == 0 );
assert( gamma_busy_fields(board, 4) == 37 );
assert( gamma_move(board, 5, 1, 21) == 0 );
assert( gamma_move(board, 1, 1, 5) == 0 );
assert( gamma_move(board, 2, 2, 15) == 1 );
assert( gamma_move(board, 2, 21, 17) == 1 );
assert( gamma_move(board, 3, 13, 21) == 0 );
assert( gamma_move(board, 3, 14, 10) == 0 );
assert( gamma_golden_move(board, 3, 14, 13) == 0 );
assert( gamma_move(board, 4, 17, 19) == 0 );
assert( gamma_move(board, 5, 14, 6) == 0 );
assert( gamma_move(board, 1, 7, 7) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 16, 19) == 0 );
assert( gamma_move(board, 3, 16, 23) == 0 );
assert( gamma_move(board, 4, 10, 7) == 0 );
assert( gamma_move(board, 5, 10, 17) == 1 );
assert( gamma_move(board, 5, 5, 1) == 1 );
assert( gamma_move(board, 1, 11, 7) == 0 );
assert( gamma_move(board, 2, 16, 1) == 0 );
assert( gamma_move(board, 2, 11, 13) == 1 );
assert( gamma_move(board, 3, 10, 8) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 3, 9) == 0 );
assert( gamma_busy_fields(board, 5) == 41 );
assert( gamma_move(board, 1, 14, 5) == 0 );
assert( gamma_move(board, 1, 8, 2) == 0 );
assert( gamma_move(board, 2, 17, 22) == 0 );
assert( gamma_move(board, 4, 20, 9) == 1 );
assert( gamma_move(board, 4, 18, 14) == 0 );
assert( gamma_move(board, 5, 10, 14) == 1 );
assert( gamma_busy_fields(board, 5) == 42 );
assert( gamma_free_fields(board, 5) == 235 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_free_fields(board, 1) == 90 );
assert( gamma_golden_move(board, 1, 12, 4) == 0 );
assert( gamma_move(board, 2, 12, 0) == 1 );
assert( gamma_move(board, 2, 23, 10) == 0 );
assert( gamma_busy_fields(board, 2) == 46 );
assert( gamma_move(board, 3, 18, 20) == 0 );
assert( gamma_move(board, 3, 20, 16) == 1 );
assert( gamma_busy_fields(board, 3) == 46 );
assert( gamma_move(board, 4, 8, 8) == 1 );
assert( gamma_move(board, 4, 16, 8) == 1 );
assert( gamma_move(board, 5, 17, 17) == 0 );
assert( gamma_move(board, 1, 17, 6) == 0 );
assert( gamma_move(board, 1, 14, 8) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 14, 2) == 0 );
assert( gamma_move(board, 5, 0, 17) == 1 );
assert( gamma_busy_fields(board, 5) == 43 );
assert( gamma_golden_move(board, 5, 3, 5) == 0 );
assert( gamma_move(board, 1, 23, 3) == 0 );
assert( gamma_move(board, 1, 21, 13) == 1 );
assert( gamma_move(board, 2, 3, 18) == 0 );
assert( gamma_move(board, 2, 6, 7) == 0 );
assert( gamma_move(board, 3, 0, 11) == 1 );
assert( gamma_move(board, 3, 21, 2) == 1 );
assert( gamma_move(board, 4, 17, 14) == 1 );
assert( gamma_move(board, 5, 11, 8) == 1 );
assert( gamma_move(board, 5, 0, 8) == 1 );
assert( gamma_move(board, 1, 2, 15) == 0 );
assert( gamma_move(board, 2, 1, 22) == 0 );
assert( gamma_move(board, 3, 12, 0) == 0 );
assert( gamma_busy_fields(board, 4) == 41 );
assert( gamma_move(board, 5, 9, 6) == 0 );
assert( gamma_free_fields(board, 5) == 224 );
assert( gamma_move(board, 1, 11, 19) == 0 );
assert( gamma_busy_fields(board, 1) == 52 );
assert( gamma_move(board, 2, 1, 20) == 0 );
assert( gamma_busy_fields(board, 2) == 46 );


char* board385351355 = gamma_board(board);
assert( board385351355 != NULL );
assert( strcmp(board385351355, 
"3..2.124..1.53.45..1....\n"
"5.5241..54525...44..52..\n"
"..44.....2..4.353...3...\n"
"3.23...2..44.5..1232..5.\n"
"1......52.54.5133424..2.\n"
"5....1...212.5..4....11.\n"
"..5355533.4.1.53.53...31\n"
"3..253..3....21.1.5.1...\n"
".45....2..5342411.3.2...\n"
"5..323...2131..3.2..41.3\n"
"51...1.44.35..4444112...\n"
".1...111.43...2.1515...1\n"
"3.3.23...3.4.14..3.5.5..\n"
"54..25.2..3...444.....2.\n"
"2..53..54...1.14.....1.2\n"
"45311235.5.2.5....4.13.3\n"
"3..2..143.121.1..41..312\n"
".21.35.1.2.33.521.2....5\n"
".5..2334142121..2.2..231\n") == 0);
free(board385351355);
board385351355 = NULL;
assert( gamma_move(board, 3, 16, 1) == 0 );
assert( gamma_move(board, 3, 7, 10) == 0 );
assert( gamma_free_fields(board, 3) == 224 );
assert( gamma_move(board, 4, 0, 17) == 0 );
assert( gamma_move(board, 4, 11, 7) == 1 );
assert( gamma_move(board, 5, 17, 15) == 0 );
assert( gamma_move(board, 1, 1, 18) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 20, 14) == 0 );
assert( gamma_move(board, 3, 13, 4) == 1 );
assert( gamma_move(board, 3, 0, 9) == 0 );


char* board611888241 = gamma_board(board);
assert( board611888241 != NULL );
assert( strcmp(board611888241, 
"3..2.124..1.53.45..1....\n"
"5.5241..54525...44..52..\n"
"..44.....2..4.353...3...\n"
"3.23...2..44.5..1232..5.\n"
"1......52.54.5133424..2.\n"
"5....1...212.5..4....11.\n"
"..5355533.4.1.53.53...31\n"
"3..253..3....21.1.5.1...\n"
".45....2..5342411.3.2...\n"
"5..323...2131..3.2..41.3\n"
"51...1.44.35..4444112...\n"
".1...111.434..2.1515...1\n"
"3.3.23...3.4.14..3.5.5..\n"
"54..25.2..3...444.....2.\n"
"2..53..54...1314.....1.2\n"
"45311235.5.2.5....4.13.3\n"
"3..2..143.121.1..41..312\n"
".21.35.1.2.33.521.2....5\n"
".5..2334142121..2.2..231\n") == 0);
free(board611888241);
board611888241 = NULL;
assert( gamma_free_fields(board, 4) == 222 );
assert( gamma_golden_move(board, 4, 0, 5) == 1 );
assert( gamma_move(board, 5, 11, 12) == 1 );
assert( gamma_move(board, 5, 23, 12) == 0 );
assert( gamma_free_fields(board, 5) == 221 );
assert( gamma_move(board, 2, 16, 23) == 0 );
assert( gamma_move(board, 2, 11, 17) == 0 );
assert( gamma_busy_fields(board, 2) == 46 );
assert( gamma_free_fields(board, 2) == 82 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 17, 1) == 0 );
assert( gamma_free_fields(board, 3) == 82 );


char* board266745192 = gamma_board(board);
assert( board266745192 != NULL );
assert( strcmp(board266745192, 
"3..2.124..1.53.45..1....\n"
"5.5241..54525...44..52..\n"
"..44.....2..4.353...3...\n"
"3.23...2..44.5..1232..5.\n"
"1......52.54.5133424..2.\n"
"5....1...212.5..4....11.\n"
"..5355533.451.53.53...31\n"
"3..253..3....21.1.5.1...\n"
".45....2..5342411.3.2...\n"
"5..323...2131..3.2..41.3\n"
"51...1.44.35..4444112...\n"
".1...111.434..2.1515...1\n"
"3.3.23...3.4.14..3.5.5..\n"
"44..25.2..3...444.....2.\n"
"2..53..54...1314.....1.2\n"
"45311235.5.2.5....4.13.3\n"
"3..2..143.121.1..41..312\n"
".21.35.1.2.33.521.2....5\n"
".5..2334142121..2.2..231\n") == 0);
free(board266745192);
board266745192 = NULL;
assert( gamma_move(board, 4, 6, 12) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 0, 17) == 0 );
assert( gamma_move(board, 5, 3, 11) == 0 );
assert( gamma_move(board, 1, 11, 10) == 0 );
assert( gamma_move(board, 1, 18, 2) == 0 );
assert( gamma_move(board, 2, 7, 4) == 0 );
assert( gamma_move(board, 2, 21, 16) == 1 );
assert( gamma_move(board, 3, 5, 3) == 0 );
assert( gamma_move(board, 3, 7, 5) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 14, 8) == 0 );
assert( gamma_move(board, 4, 3, 2) == 0 );
assert( gamma_move(board, 5, 16, 9) == 1 );
assert( gamma_busy_fields(board, 5) == 46 );
assert( gamma_free_fields(board, 5) == 219 );
assert( gamma_move(board, 1, 16, 23) == 0 );
assert( gamma_move(board, 3, 7, 3) == 0 );
assert( gamma_busy_fields(board, 3) == 49 );
assert( gamma_move(board, 4, 15, 9) == 0 );
assert( gamma_move(board, 4, 16, 11) == 0 );


char* board972576136 = gamma_board(board);
assert( board972576136 != NULL );
assert( strcmp(board972576136, 
"3..2.124..1.53.45..1....\n"
"5.5241..54525...44..52..\n"
"..44.....2..4.353...32..\n"
"3.23...2..44.5..1232..5.\n"
"1......52.54.5133424..2.\n"
"5....1...212.5..4....11.\n"
"..5355533.451.53.53...31\n"
"3..253..3....21.1.5.1...\n"
".45....2..5342411.3.2...\n"
"5..323...2131..352..41.3\n"
"51...1.44.35..4444112...\n"
".1...111.434..2.1515...1\n"
"3.3.23...3.4.14..3.5.5..\n"
"44..25.2..3...444.....2.\n"
"2..53..54...1314.....1.2\n"
"45311235.5.2.5....4.13.3\n"
"3..2..143.121.1..41..312\n"
".21.35.1.2.33.521.2....5\n"
".5..2334142121..2.2..231\n") == 0);
free(board972576136);
board972576136 = NULL;
assert( gamma_move(board, 5, 17, 8) == 0 );
assert( gamma_move(board, 5, 14, 17) == 1 );
assert( gamma_move(board, 1, 10, 23) == 0 );
assert( gamma_move(board, 1, 6, 2) == 0 );
assert( gamma_move(board, 2, 8, 22) == 0 );
assert( gamma_move(board, 3, 12, 20) == 0 );
assert( gamma_move(board, 3, 4, 7) == 0 );
assert( gamma_move(board, 4, 8, 21) == 0 );
assert( gamma_move(board, 5, 5, 4) == 1 );


char* board849500432 = gamma_board(board);
assert( board849500432 != NULL );
assert( strcmp(board849500432, 
"3..2.124..1.53.45..1....\n"
"5.5241..54525.5.44..52..\n"
"..44.....2..4.353...32..\n"
"3.23...2..44.5..1232..5.\n"
"1......52.54.5133424..2.\n"
"5....1...212.5..4....11.\n"
"..5355533.451.53.53...31\n"
"3..253..3....21.1.5.1...\n"
".45....2..5342411.3.2...\n"
"5..323...2131..352..41.3\n"
"51...1.44.35..4444112...\n"
".1...111.434..2.1515...1\n"
"3.3.23...3.4.14..3.5.5..\n"
"44..25.2..3...444.....2.\n"
"2..535.54...1314.....1.2\n"
"45311235.5.2.5....4.13.3\n"
"3..2..143.121.1..41..312\n"
".21.35.1.2.33.521.2....5\n"
".5..2334142121..2.2..231\n") == 0);
free(board849500432);
board849500432 = NULL;
assert( gamma_move(board, 1, 15, 12) == 0 );
assert( gamma_move(board, 1, 20, 16) == 0 );
assert( gamma_move(board, 2, 14, 2) == 0 );
assert( gamma_move(board, 3, 0, 15) == 0 );


char* board774461258 = gamma_board(board);
assert( board774461258 != NULL );
assert( strcmp(board774461258, 
"3..2.124..1.53.45..1....\n"
"5.5241..54525.5.44..52..\n"
"..44.....2..4.353...32..\n"
"3.23...2..44.5..1232..5.\n"
"1......52.54.5133424..2.\n"
"5....1...212.5..4....11.\n"
"..5355533.451.53.53...31\n"
"3..253..3....21.1.5.1...\n"
".45....2..5342411.3.2...\n"
"5..323...2131..352..41.3\n"
"51...1.44.35..4444112...\n"
".1...111.434..2.1515...1\n"
"3.3.23...3.4.14..3.5.5..\n"
"44..25.2..3...444.....2.\n"
"2..535.54...1314.....1.2\n"
"45311235.5.2.5....4.13.3\n"
"3..2..143.121.1..41..312\n"
".21.35.1.2.33.521.2....5\n"
".5..2334142121..2.2..231\n") == 0);
free(board774461258);
board774461258 = NULL;
assert( gamma_move(board, 4, 14, 3) == 1 );
assert( gamma_move(board, 4, 19, 2) == 1 );
assert( gamma_move(board, 5, 14, 17) == 0 );
assert( gamma_busy_fields(board, 5) == 48 );
assert( gamma_free_fields(board, 5) == 215 );
assert( gamma_move(board, 1, 8, 4) == 0 );
assert( gamma_free_fields(board, 1) == 83 );


char* board684874818 = gamma_board(board);
assert( board684874818 != NULL );
assert( strcmp(board684874818, 
"3..2.124..1.53.45..1....\n"
"5.5241..54525.5.44..52..\n"
"..44.....2..4.353...32..\n"
"3.23...2..44.5..1232..5.\n"
"1......52.54.5133424..2.\n"
"5....1...212.5..4....11.\n"
"..5355533.451.53.53...31\n"
"3..253..3....21.1.5.1...\n"
".45....2..5342411.3.2...\n"
"5..323...2131..352..41.3\n"
"51...1.44.35..4444112...\n"
".1...111.434..2.1515...1\n"
"3.3.23...3.4.14..3.5.5..\n"
"44..25.2..3...444.....2.\n"
"2..535.54...1314.....1.2\n"
"45311235.5.2.54...4.13.3\n"
"3..2..143.121.1..414.312\n"
".21.35.1.2.33.521.2....5\n"
".5..2334142121..2.2..231\n") == 0);
free(board684874818);
board684874818 = NULL;
assert( gamma_move(board, 2, 17, 6) == 0 );
assert( gamma_move(board, 2, 16, 6) == 0 );
assert( gamma_golden_move(board, 2, 6, 17) == 0 );
assert( gamma_move(board, 3, 0, 15) == 0 );
assert( gamma_move(board, 3, 8, 0) == 0 );
assert( gamma_golden_move(board, 3, 16, 9) == 1 );
assert( gamma_move(board, 4, 16, 4) == 1 );
assert( gamma_move(board, 4, 23, 11) == 1 );
assert( gamma_move(board, 5, 10, 0) == 0 );
assert( gamma_move(board, 1, 12, 20) == 0 );
assert( gamma_move(board, 2, 4, 11) == 0 );
assert( gamma_move(board, 2, 16, 1) == 0 );
assert( gamma_move(board, 3, 3, 10) == 1 );
assert( gamma_move(board, 4, 2, 2) == 1 );
assert( gamma_move(board, 5, 13, 18) == 0 );
assert( gamma_move(board, 5, 19, 0) == 1 );
assert( gamma_move(board, 1, 4, 6) == 0 );
assert( gamma_move(board, 2, 20, 10) == 0 );
assert( gamma_busy_fields(board, 2) == 47 );
assert( gamma_move(board, 3, 8, 6) == 1 );
assert( gamma_move(board, 3, 1, 10) == 0 );
assert( gamma_free_fields(board, 3) == 79 );
assert( gamma_move(board, 5, 16, 6) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 1, 3, 17) == 0 );
assert( gamma_move(board, 2, 18, 14) == 0 );
assert( gamma_move(board, 3, 23, 9) == 0 );
assert( gamma_move(board, 4, 5, 11) == 0 );
assert( gamma_move(board, 4, 20, 2) == 1 );


char* board481461957 = gamma_board(board);
assert( board481461957 != NULL );
assert( strcmp(board481461957, 
"3..2.124..1.53.45..1....\n"
"5.5241..54525.5.44..52..\n"
"..44.....2..4.353...32..\n"
"3.23...2..44.5..1232..5.\n"
"1......52.54.5133424..2.\n"
"5....1...212.5..4....11.\n"
"..5355533.451.53.53...31\n"
"3..253..3....21.1.5.1..4\n"
".453...2..5342411.3.2...\n"
"5..323...2131..332..41.3\n"
"51...1.44.35..4444112...\n"
".1...111.434..2.1515...1\n"
"3.3.23..33.4.14.53.5.5..\n"
"44..25.2..3...444.....2.\n"
"2..535.54...13144....1.2\n"
"45311235.5.2.54...4.13.3\n"
"3.42..143.121.1..4144312\n"
".21.35.1.2.33.521.2....5\n"
".5..2334142121..2.25.231\n") == 0);
free(board481461957);
board481461957 = NULL;
assert( gamma_move(board, 5, 7, 14) == 0 );
assert( gamma_move(board, 5, 22, 9) == 1 );
assert( gamma_busy_fields(board, 5) == 50 );
assert( gamma_move(board, 1, 9, 8) == 0 );
assert( gamma_move(board, 1, 18, 0) == 0 );
assert( gamma_free_fields(board, 1) == 78 );
assert( gamma_move(board, 2, 12, 12) == 0 );
assert( gamma_move(board, 3, 21, 5) == 0 );
assert( gamma_move(board, 4, 17, 18) == 1 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 2, 3) == 0 );
assert( gamma_move(board, 1, 9, 1) == 0 );
assert( gamma_free_fields(board, 1) == 78 );
assert( gamma_move(board, 2, 0, 0) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 6, 23) == 0 );
assert( gamma_move(board, 4, 16, 18) == 0 );
assert( gamma_move(board, 1, 7, 20) == 0 );
assert( gamma_move(board, 1, 8, 0) == 0 );
assert( gamma_move(board, 2, 20, 8) == 0 );
assert( gamma_move(board, 2, 4, 16) == 0 );
assert( gamma_move(board, 3, 14, 4) == 0 );
assert( gamma_move(board, 4, 15, 14) == 0 );
assert( gamma_move(board, 4, 10, 11) == 1 );
assert( gamma_move(board, 5, 18, 18) == 1 );
assert( gamma_move(board, 5, 11, 8) == 0 );
assert( gamma_move(board, 1, 12, 16) == 0 );
assert( gamma_move(board, 1, 0, 6) == 0 );
assert( gamma_move(board, 2, 16, 8) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 0, 0) == 0 );
assert( gamma_move(board, 3, 17, 15) == 0 );


char* board526016758 = gamma_board(board);
assert( board526016758 != NULL );
assert( strcmp(board526016758, 
"3..2.124..1.53.45451....\n"
"5.5241..54525.5.44..52..\n"
"..44.....2..4.353...32..\n"
"3.23...2..44.5..1232..5.\n"
"1......52.54.5133424..2.\n"
"5....1...212.5..4....11.\n"
"..5355533.451.53.53...31\n"
"3..253..3.4..21.1.5.1..4\n"
".453...2..5342411.3.2...\n"
"5..323...2131..332..4153\n"
"51...1.44.35..4444112...\n"
".1...111.434..2.1515...1\n"
"3.3.23..33.4.14.53.5.5..\n"
"44..25.2..3...444.....2.\n"
"2..535.54...13144....1.2\n"
"45311235.5.2.54...4.13.3\n"
"3.42..143.121.1..4144312\n"
".21.35.1.2.33.521.2....5\n"
".5..2334142121..2.25.231\n") == 0);
free(board526016758);
board526016758 = NULL;
assert( gamma_move(board, 4, 0, 14) == 0 );
assert( gamma_move(board, 4, 22, 5) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 9, 2) == 1 );
assert( gamma_move(board, 5, 1, 14) == 0 );
assert( gamma_move(board, 1, 13, 18) == 0 );
assert( gamma_move(board, 2, 10, 18) == 0 );
assert( gamma_free_fields(board, 3) == 75 );
assert( gamma_move(board, 4, 16, 4) == 0 );
assert( gamma_move(board, 5, 13, 1) == 1 );
assert( gamma_move(board, 1, 8, 23) == 0 );
assert( gamma_move(board, 2, 18, 21) == 0 );
assert( gamma_move(board, 3, 9, 1) == 0 );
assert( gamma_move(board, 4, 2, 5) == 1 );
assert( gamma_move(board, 4, 13, 1) == 0 );
assert( gamma_golden_move(board, 5, 12, 15) == 0 );
assert( gamma_move(board, 2, 3, 17) == 0 );
assert( gamma_move(board, 2, 20, 18) == 0 );
assert( gamma_move(board, 3, 13, 8) == 0 );
assert( gamma_move(board, 3, 23, 6) == 0 );
assert( gamma_move(board, 4, 0, 17) == 0 );
assert( gamma_move(board, 4, 20, 16) == 0 );
assert( gamma_golden_move(board, 4, 17, 21) == 0 );
assert( gamma_move(board, 5, 8, 18) == 1 );
assert( gamma_free_fields(board, 5) == 77 );
assert( gamma_move(board, 1, 4, 8) == 1 );
assert( gamma_move(board, 1, 11, 12) == 0 );
assert( gamma_move(board, 2, 15, 23) == 0 );
assert( gamma_move(board, 3, 3, 12) == 0 );
assert( gamma_move(board, 4, 8, 3) == 1 );
assert( gamma_move(board, 5, 11, 15) == 0 );
assert( gamma_move(board, 5, 19, 5) == 1 );


char* board778480235 = gamma_board(board);
assert( board778480235 != NULL );
assert( strcmp(board778480235, 
"3..2.1245.1.53.45451....\n"
"5.5241..54525.5.44..52..\n"
"..44.....2..4.353...32..\n"
"3.23...2..44.5..1232..5.\n"
"1......52.54.5133424..2.\n"
"5....1...212.5..4....11.\n"
"..5355533.451.53.53...31\n"
"3..253..3.4..21.1.5.1..4\n"
".453...2..5342411.3.2...\n"
"5..323...2131..332..4153\n"
"51..11.44.35..4444112...\n"
".1...111.434..2.1515...1\n"
"3.3.23..33.4.14.53.5.5..\n"
"444.25.2..3...444..5..2.\n"
"2..535.54...13144....1.2\n"
"4531123545.2.54...4.13.3\n"
"3.42..1435121.1..4144312\n"
".21.35.1.2.335521.2....5\n"
".5..2334142121..2.25.231\n") == 0);
free(board778480235);
board778480235 = NULL;
assert( gamma_move(board, 1, 2, 4) == 0 );
assert( gamma_move(board, 1, 17, 6) == 0 );
assert( gamma_free_fields(board, 1) == 75 );
assert( gamma_move(board, 2, 1, 22) == 0 );
assert( gamma_move(board, 2, 13, 10) == 0 );
assert( gamma_move(board, 3, 21, 17) == 0 );
assert( gamma_move(board, 3, 8, 14) == 0 );
assert( gamma_move(board, 4, 14, 9) == 1 );
assert( gamma_move(board, 4, 21, 9) == 0 );
assert( gamma_move(board, 5, 10, 23) == 0 );
assert( gamma_move(board, 5, 5, 18) == 0 );
assert( gamma_move(board, 1, 13, 19) == 0 );
assert( gamma_move(board, 1, 12, 0) == 0 );
assert( gamma_move(board, 2, 1, 17) == 0 );
assert( gamma_move(board, 3, 5, 20) == 0 );
assert( gamma_move(board, 4, 11, 1) == 0 );
assert( gamma_move(board, 5, 1, 0) == 0 );
assert( gamma_move(board, 5, 3, 0) == 0 );
assert( gamma_move(board, 1, 8, 3) == 0 );
assert( gamma_move(board, 1, 9, 7) == 0 );
assert( gamma_move(board, 2, 12, 21) == 0 );


char* board873679092 = gamma_board(board);
assert( board873679092 != NULL );
assert( strcmp(board873679092, 
"3..2.1245.1.53.45451....\n"
"5.5241..54525.5.44..52..\n"
"..44.....2..4.353...32..\n"
"3.23...2..44.5..1232..5.\n"
"1......52.54.5133424..2.\n"
"5....1...212.5..4....11.\n"
"..5355533.451.53.53...31\n"
"3..253..3.4..21.1.5.1..4\n"
".453...2..5342411.3.2...\n"
"5..323...2131.4332..4153\n"
"51..11.44.35..4444112...\n"
".1...111.434..2.1515...1\n"
"3.3.23..33.4.14.53.5.5..\n"
"444.25.2..3...444..5..2.\n"
"2..535.54...13144....1.2\n"
"4531123545.2.54...4.13.3\n"
"3.42..1435121.1..4144312\n"
".21.35.1.2.335521.2....5\n"
".5..2334142121..2.25.231\n") == 0);
free(board873679092);
board873679092 = NULL;
assert( gamma_move(board, 3, 10, 11) == 0 );
assert( gamma_move(board, 3, 11, 2) == 0 );
assert( gamma_move(board, 4, 5, 13) == 0 );
assert( gamma_move(board, 4, 2, 1) == 0 );
assert( gamma_move(board, 5, 11, 18) == 1 );
assert( gamma_move(board, 5, 20, 2) == 0 );
assert( gamma_move(board, 1, 13, 2) == 1 );
assert( gamma_move(board, 1, 5, 14) == 1 );
assert( gamma_move(board, 2, 2, 1) == 0 );
assert( gamma_busy_fields(board, 2) == 47 );
assert( gamma_move(board, 3, 17, 3) == 0 );
assert( gamma_move(board, 4, 1, 10) == 0 );
assert( gamma_move(board, 4, 20, 14) == 1 );
assert( gamma_move(board, 5, 0, 8) == 0 );
assert( gamma_move(board, 5, 21, 9) == 0 );
assert( gamma_free_fields(board, 5) == 76 );
assert( gamma_move(board, 1, 13, 18) == 0 );
assert( gamma_free_fields(board, 1) == 191 );
assert( gamma_golden_move(board, 1, 4, 4) == 1 );
assert( gamma_move(board, 2, 17, 19) == 0 );
assert( gamma_move(board, 2, 6, 8) == 0 );
assert( gamma_free_fields(board, 3) == 191 );
assert( gamma_move(board, 4, 1, 19) == 0 );
assert( gamma_move(board, 4, 17, 1) == 1 );
assert( gamma_move(board, 5, 16, 23) == 0 );
assert( gamma_move(board, 5, 17, 8) == 0 );
assert( gamma_move(board, 1, 13, 15) == 0 );
assert( gamma_move(board, 1, 14, 2) == 0 );
assert( gamma_move(board, 2, 12, 13) == 1 );
assert( gamma_move(board, 3, 0, 16) == 1 );
assert( gamma_move(board, 4, 21, 7) == 1 );
assert( gamma_move(board, 4, 7, 13) == 1 );
assert( gamma_move(board, 5, 21, 2) == 0 );
assert( gamma_move(board, 2, 11, 12) == 0 );
assert( gamma_free_fields(board, 2) == 74 );
assert( gamma_move(board, 3, 9, 18) == 1 );
assert( gamma_move(board, 3, 18, 8) == 0 );
assert( gamma_free_fields(board, 4) == 185 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 10, 23) == 0 );
assert( gamma_free_fields(board, 5) == 71 );
assert( gamma_move(board, 1, 3, 1) == 1 );
assert( gamma_move(board, 1, 0, 11) == 0 );
assert( gamma_move(board, 2, 7, 3) == 0 );
assert( gamma_move(board, 3, 4, 19) == 0 );
assert( gamma_move(board, 3, 3, 0) == 0 );
assert( gamma_move(board, 4, 4, 10) == 1 );
assert( gamma_busy_fields(board, 4) == 59 );
assert( gamma_move(board, 5, 17, 4) == 0 );
assert( gamma_move(board, 5, 1, 5) == 0 );
assert( gamma_move(board, 1, 16, 17) == 0 );
assert( gamma_move(board, 2, 6, 12) == 0 );
assert( gamma_golden_move(board, 2, 1, 11) == 0 );
assert( gamma_free_fields(board, 3) == 68 );
assert( gamma_golden_move(board, 3, 8, 14) == 0 );
assert( gamma_move(board, 4, 6, 18) == 0 );
assert( gamma_golden_move(board, 4, 3, 7) == 0 );
assert( gamma_move(board, 5, 14, 1) == 0 );
assert( gamma_move(board, 5, 23, 14) == 0 );
assert( gamma_move(board, 1, 6, 9) == 1 );
assert( gamma_busy_fields(board, 1) == 58 );
assert( gamma_golden_move(board, 1, 9, 16) == 0 );
assert( gamma_move(board, 2, 7, 0) == 0 );
assert( gamma_move(board, 2, 16, 9) == 0 );
assert( gamma_busy_fields(board, 3) == 53 );
assert( gamma_free_fields(board, 4) == 182 );
assert( gamma_move(board, 5, 5, 12) == 0 );
assert( gamma_move(board, 5, 15, 0) == 0 );
assert( gamma_move(board, 1, 11, 2) == 0 );
assert( gamma_move(board, 1, 6, 1) == 1 );
assert( gamma_move(board, 2, 4, 11) == 0 );
assert( gamma_move(board, 2, 9, 6) == 0 );
assert( gamma_move(board, 3, 8, 23) == 0 );
assert( gamma_move(board, 4, 16, 11) == 0 );
assert( gamma_move(board, 4, 5, 4) == 0 );


char* board798017228 = gamma_board(board);
assert( board798017228 != NULL );
assert( strcmp(board798017228, 
"3..2.124531553.45451....\n"
"5.5241..54525.5.44..52..\n"
"3.44.....2..4.353...32..\n"
"3.23...2..44.5..1232..5.\n"
"1....1.52.54.51334244.2.\n"
"5....1.4.21225..4....11.\n"
"..5355533.451.53.53...31\n"
"3..253..3.4..21.1.5.1..4\n"
".4534..2..5342411.3.2...\n"
"5..3231..2131.4332..4153\n"
"51..11.44.35..4444112...\n"
".1...111.434..2.1515.4.1\n"
"3.3.23..33.4.14.53.5.5..\n"
"444.25.2..3...444..5..2.\n"
"2..515.54...13144....1.2\n"
"4531123545.2.54...4.13.3\n"
"3.42..143512111..4144312\n"
".2113511.2.33552142....5\n"
".5..2334142121..2.25.231\n") == 0);
free(board798017228);
board798017228 = NULL;
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 1, 12, 10) == 0 );
assert( gamma_golden_move(board, 2, 10, 18) == 0 );
assert( gamma_move(board, 3, 13, 14) == 0 );
assert( gamma_move(board, 4, 5, 7) == 0 );
assert( gamma_move(board, 5, 18, 22) == 0 );
assert( gamma_move(board, 5, 5, 13) == 0 );
assert( gamma_free_fields(board, 5) == 69 );
assert( gamma_move(board, 1, 7, 8) == 0 );
assert( gamma_busy_fields(board, 1) == 59 );
assert( gamma_move(board, 2, 16, 18) == 0 );
assert( gamma_move(board, 3, 15, 17) == 0 );
assert( gamma_move(board, 3, 16, 1) == 0 );
assert( gamma_move(board, 4, 9, 8) == 1 );
assert( gamma_busy_fields(board, 4) == 60 );
assert( gamma_move(board, 5, 12, 3) == 1 );
assert( gamma_move(board, 1, 16, 19) == 0 );
assert( gamma_move(board, 2, 5, 17) == 0 );
assert( gamma_move(board, 2, 10, 17) == 0 );
assert( gamma_move(board, 3, 5, 21) == 0 );
assert( gamma_busy_fields(board, 3) == 53 );
assert( gamma_move(board, 4, 19, 17) == 1 );
assert( gamma_move(board, 5, 15, 18) == 0 );
assert( gamma_busy_fields(board, 5) == 57 );
assert( gamma_move(board, 1, 18, 4) == 1 );
assert( gamma_free_fields(board, 1) == 74 );
assert( gamma_move(board, 2, 6, 23) == 0 );
assert( gamma_move(board, 3, 14, 4) == 0 );
assert( gamma_free_fields(board, 3) == 65 );
assert( gamma_move(board, 4, 16, 4) == 0 );
assert( gamma_move(board, 5, 21, 10) == 0 );
assert( gamma_move(board, 1, 6, 22) == 0 );
assert( gamma_move(board, 1, 19, 4) == 1 );
assert( gamma_move(board, 2, 5, 20) == 0 );
assert( gamma_move(board, 2, 22, 10) == 0 );
assert( gamma_move(board, 3, 6, 11) == 1 );
assert( gamma_move(board, 3, 14, 17) == 0 );
assert( gamma_move(board, 4, 4, 1) == 0 );
assert( gamma_move(board, 4, 9, 3) == 0 );
assert( gamma_move(board, 5, 13, 15) == 0 );
assert( gamma_busy_fields(board, 5) == 57 );
assert( gamma_move(board, 1, 18, 21) == 0 );
assert( gamma_busy_fields(board, 1) == 61 );
assert( gamma_move(board, 2, 6, 22) == 0 );
assert( gamma_golden_move(board, 2, 14, 0) == 0 );
assert( gamma_move(board, 3, 9, 7) == 0 );
assert( gamma_move(board, 3, 15, 17) == 0 );
assert( gamma_move(board, 4, 12, 19) == 0 );
assert( gamma_move(board, 5, 10, 6) == 0 );
assert( gamma_move(board, 1, 4, 13) == 1 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 10, 21) == 0 );
assert( gamma_move(board, 3, 13, 17) == 1 );
assert( gamma_move(board, 3, 15, 16) == 0 );
assert( gamma_move(board, 4, 15, 6) == 1 );
assert( gamma_move(board, 4, 10, 6) == 1 );
assert( gamma_move(board, 5, 0, 3) == 0 );
assert( gamma_move(board, 1, 1, 22) == 0 );
assert( gamma_move(board, 2, 7, 0) == 0 );
assert( gamma_move(board, 2, 10, 15) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 14, 3) == 0 );
assert( gamma_move(board, 3, 17, 12) == 0 );
assert( gamma_move(board, 4, 4, 10) == 0 );
assert( gamma_move(board, 5, 9, 7) == 0 );
assert( gamma_move(board, 1, 16, 7) == 0 );
assert( gamma_move(board, 1, 22, 13) == 0 );
assert( gamma_move(board, 3, 8, 0) == 0 );
assert( gamma_move(board, 4, 14, 6) == 0 );
assert( gamma_move(board, 1, 16, 8) == 0 );
assert( gamma_free_fields(board, 1) == 73 );


char* board767055425 = gamma_board(board);
assert( board767055425 != NULL );
assert( strcmp(board767055425, 
"3..2.124531553.45451....\n"
"5.5241..5452535.44.452..\n"
"3.44.....2..4.353...32..\n"
"3.23...2..44.5..1232..5.\n"
"1....1.52.54.51334244.2.\n"
"5...11.4.21225..4....11.\n"
"..5355533.451.53.53...31\n"
"3..2533.3.4..21.1.5.1..4\n"
".4534..2..5342411.3.2...\n"
"5..3231..2131.4332..4153\n"
"51..11.44435..4444112...\n"
".1...111.434..2.1515.4.1\n"
"3.3.23..3344.14453.5.5..\n"
"444.25.2..3...444..5..2.\n"
"2..515.54...13144.11.1.2\n"
"4531123545.2554...4.13.3\n"
"3.42..143512111..4144312\n"
".2113511.2.33552142....5\n"
".5..2334142121..2.25.231\n") == 0);
free(board767055425);
board767055425 = NULL;
assert( gamma_move(board, 2, 20, 14) == 0 );
assert( gamma_move(board, 2, 21, 0) == 0 );
assert( gamma_move(board, 3, 3, 16) == 0 );
assert( gamma_move(board, 3, 8, 9) == 0 );
assert( gamma_move(board, 5, 2, 15) == 0 );
assert( gamma_move(board, 5, 8, 17) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 1, 8, 12) == 0 );
assert( gamma_move(board, 2, 16, 23) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 7, 2) == 0 );
assert( gamma_move(board, 4, 0, 20) == 0 );
assert( gamma_move(board, 4, 6, 9) == 0 );
assert( gamma_move(board, 5, 14, 5) == 0 );
assert( gamma_move(board, 2, 22, 3) == 0 );
assert( gamma_move(board, 3, 1, 21) == 0 );
assert( gamma_move(board, 5, 2, 15) == 0 );
assert( gamma_move(board, 1, 4, 22) == 0 );
assert( gamma_move(board, 1, 20, 6) == 0 );
assert( gamma_move(board, 2, 4, 6) == 0 );
assert( gamma_move(board, 2, 6, 11) == 0 );


char* board367460639 = gamma_board(board);
assert( board367460639 != NULL );
assert( strcmp(board367460639, 
"3..2.124531553.45451....\n"
"5.5241..5452535.44.452..\n"
"3.44.....2..4.353...32..\n"
"3.23...2..44.5..1232..5.\n"
"1....1.52.54.51334244.2.\n"
"5...11.4.21225..4....11.\n"
"..5355533.451.53.53...31\n"
"3..2533.3.4..21.1.5.1..4\n"
".4534..2..5342411.3.2...\n"
"5..3231..2131.4332..4153\n"
"51..11.44435..4444112...\n"
".1...111.434..2.1515.4.1\n"
"3.3.23..3344.14453.5.5..\n"
"444.25.2..3...444..5..2.\n"
"2..515.54...13144.11.1.2\n"
"4531123545.2554...4.13.3\n"
"3.42..143512111..4144312\n"
".2113511.2.33552142....5\n"
".5..2334142121..2.25.231\n") == 0);
free(board367460639);
board367460639 = NULL;
assert( gamma_move(board, 3, 12, 21) == 0 );
assert( gamma_busy_fields(board, 3) == 55 );
assert( gamma_move(board, 4, 17, 22) == 0 );
assert( gamma_move(board, 1, 11, 9) == 0 );
assert( gamma_move(board, 2, 7, 18) == 0 );
assert( gamma_move(board, 2, 23, 4) == 0 );
assert( gamma_move(board, 3, 15, 8) == 0 );
assert( gamma_move(board, 4, 2, 16) == 0 );
assert( gamma_move(board, 4, 4, 15) == 1 );
assert( gamma_busy_fields(board, 4) == 64 );
assert( gamma_move(board, 5, 8, 12) == 0 );
assert( gamma_busy_fields(board, 5) == 57 );
assert( gamma_golden_move(board, 5, 14, 22) == 0 );
assert( gamma_move(board, 1, 6, 12) == 0 );
assert( gamma_move(board, 1, 7, 15) == 0 );


char* board967015126 = gamma_board(board);
assert( board967015126 != NULL );
assert( strcmp(board967015126, 
"3..2.124531553.45451....\n"
"5.5241..5452535.44.452..\n"
"3.44.....2..4.353...32..\n"
"3.234..2..44.5..1232..5.\n"
"1....1.52.54.51334244.2.\n"
"5...11.4.21225..4....11.\n"
"..5355533.451.53.53...31\n"
"3..2533.3.4..21.1.5.1..4\n"
".4534..2..5342411.3.2...\n"
"5..3231..2131.4332..4153\n"
"51..11.44435..4444112...\n"
".1...111.434..2.1515.4.1\n"
"3.3.23..3344.14453.5.5..\n"
"444.25.2..3...444..5..2.\n"
"2..515.54...13144.11.1.2\n"
"4531123545.2554...4.13.3\n"
"3.42..143512111..4144312\n"
".2113511.2.33552142....5\n"
".5..2334142121..2.25.231\n") == 0);
free(board967015126);
board967015126 = NULL;
assert( gamma_move(board, 2, 17, 0) == 1 );
assert( gamma_free_fields(board, 2) == 169 );
assert( gamma_move(board, 3, 4, 9) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 9, 13) == 0 );
assert( gamma_move(board, 4, 7, 6) == 1 );
assert( gamma_free_fields(board, 4) == 168 );
assert( gamma_move(board, 1, 10, 1) == 1 );
assert( gamma_move(board, 3, 4, 12) == 0 );
assert( gamma_busy_fields(board, 3) == 55 );
assert( gamma_golden_move(board, 3, 0, 12) == 0 );


char* board956519960 = gamma_board(board);
assert( board956519960 != NULL );
assert( strcmp(board956519960, 
"3..2.124531553.45451....\n"
"5.5241..5452535.44.452..\n"
"3.44.....2..4.353...32..\n"
"3.234..2..44.5..1232..5.\n"
"1....1.52.54.51334244.2.\n"
"5...11.4.21225..4....11.\n"
"..5355533.451.53.53...31\n"
"3..2533.3.4..21.1.5.1..4\n"
".4534..2..5342411.3.2...\n"
"5..3231..2131.4332..4153\n"
"51..11.44435..4444112...\n"
".1...111.434..2.1515.4.1\n"
"3.3.23.43344.14453.5.5..\n"
"444.25.2..3...444..5..2.\n"
"2..515.54...13144.11.1.2\n"
"4531123545.2554...4.13.3\n"
"3.42..143512111..4144312\n"
".2113511.2133552142....5\n"
".5..2334142121..2225.231\n") == 0);
free(board956519960);
board956519960 = NULL;
assert( gamma_move(board, 1, 13, 15) == 0 );
assert( gamma_move(board, 2, 10, 15) == 0 );
assert( gamma_move(board, 3, 17, 6) == 0 );
assert( gamma_move(board, 3, 10, 15) == 0 );


char* board210843435 = gamma_board(board);
assert( board210843435 != NULL );
assert( strcmp(board210843435, 
"3..2.124531553.45451....\n"
"5.5241..5452535.44.452..\n"
"3.44.....2..4.353...32..\n"
"3.234..2..44.5..1232..5.\n"
"1....1.52.54.51334244.2.\n"
"5...11.4.21225..4....11.\n"
"..5355533.451.53.53...31\n"
"3..2533.3.4..21.1.5.1..4\n"
".4534..2..5342411.3.2...\n"
"5..3231..2131.4332..4153\n"
"51..11.44435..4444112...\n"
".1...111.434..2.1515.4.1\n"
"3.3.23.43344.14453.5.5..\n"
"444.25.2..3...444..5..2.\n"
"2..515.54...13144.11.1.2\n"
"4531123545.2554...4.13.3\n"
"3.42..143512111..4144312\n"
".2113511.2133552142....5\n"
".5..2334142121..2225.231\n") == 0);
free(board210843435);
board210843435 = NULL;
assert( gamma_move(board, 4, 23, 6) == 1 );
assert( gamma_move(board, 4, 2, 6) == 0 );
assert( gamma_busy_fields(board, 4) == 66 );
assert( gamma_free_fields(board, 4) == 166 );
assert( gamma_move(board, 5, 18, 1) == 0 );
assert( gamma_move(board, 1, 16, 10) == 0 );
assert( gamma_move(board, 2, 4, 6) == 0 );
assert( gamma_move(board, 2, 3, 7) == 1 );
assert( gamma_golden_move(board, 2, 18, 13) == 0 );
assert( gamma_move(board, 3, 14, 21) == 0 );
assert( gamma_move(board, 3, 10, 6) == 0 );
assert( gamma_move(board, 4, 23, 15) == 1 );
assert( gamma_move(board, 4, 1, 17) == 1 );
assert( gamma_free_fields(board, 4) == 163 );
assert( gamma_move(board, 5, 20, 8) == 0 );
assert( gamma_busy_fields(board, 5) == 57 );
assert( gamma_move(board, 1, 10, 22) == 0 );
assert( gamma_move(board, 1, 9, 6) == 0 );
assert( gamma_move(board, 2, 19, 18) == 0 );
assert( gamma_move(board, 2, 6, 17) == 1 );
assert( gamma_move(board, 3, 3, 15) == 0 );
assert( gamma_move(board, 4, 9, 2) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 18, 9) == 0 );
assert( gamma_move(board, 1, 7, 10) == 0 );
assert( gamma_move(board, 2, 10, 5) == 0 );
assert( gamma_move(board, 2, 13, 11) == 0 );
assert( gamma_free_fields(board, 2) == 70 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 5, 20) == 0 );
assert( gamma_move(board, 3, 11, 5) == 1 );
assert( gamma_move(board, 4, 0, 2) == 0 );
assert( gamma_move(board, 4, 19, 16) == 1 );
assert( gamma_move(board, 5, 5, 21) == 0 );
assert( gamma_move(board, 5, 11, 2) == 0 );
assert( gamma_move(board, 1, 4, 17) == 0 );
assert( gamma_move(board, 1, 0, 8) == 0 );
assert( gamma_move(board, 2, 4, 11) == 0 );
assert( gamma_move(board, 3, 16, 11) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 3, 7) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_golden_move(board, 4, 5, 5) == 0 );
assert( gamma_move(board, 5, 5, 20) == 0 );
assert( gamma_move(board, 5, 5, 4) == 0 );
assert( gamma_move(board, 1, 15, 20) == 0 );
assert( gamma_move(board, 2, 1, 22) == 0 );
assert( gamma_free_fields(board, 2) == 69 );
assert( gamma_move(board, 3, 12, 19) == 0 );
assert( gamma_move(board, 3, 10, 4) == 1 );
assert( gamma_move(board, 4, 5, 13) == 0 );
assert( gamma_move(board, 5, 7, 0) == 0 );
assert( gamma_move(board, 5, 14, 16) == 0 );
assert( gamma_move(board, 2, 10, 8) == 0 );
assert( gamma_move(board, 2, 0, 12) == 0 );
assert( gamma_move(board, 3, 10, 5) == 0 );
assert( gamma_move(board, 3, 20, 1) == 0 );
assert( gamma_move(board, 4, 5, 13) == 0 );
assert( gamma_busy_fields(board, 4) == 69 );
assert( gamma_move(board, 5, 20, 5) == 1 );
assert( gamma_move(board, 5, 21, 4) == 0 );
assert( gamma_move(board, 1, 18, 20) == 0 );
assert( gamma_move(board, 1, 17, 9) == 0 );
assert( gamma_move(board, 2, 13, 16) == 0 );
assert( gamma_move(board, 3, 13, 2) == 0 );
assert( gamma_move(board, 3, 11, 18) == 0 );
assert( gamma_busy_fields(board, 3) == 57 );
assert( gamma_move(board, 4, 20, 14) == 0 );
assert( gamma_move(board, 4, 0, 2) == 0 );


char* board538640819 = gamma_board(board);
assert( board538640819 != NULL );
assert( strcmp(board538640819, 
"3..2.124531553.45451....\n"
"5452412.5452535.44.452..\n"
"3.44.....2..4.353..432..\n"
"3.234..2..44.5..1232..54\n"
"1....1.52.54.51334244.2.\n"
"5...11.4.21225..4....11.\n"
"..5355533.451.53.53...31\n"
"3..2533.3.4..21.1.5.1..4\n"
".4534..2..5342411.3.2...\n"
"5..3231..2131.4332..4153\n"
"51..11.44435..4444112...\n"
".1.2.111.434..2.1515.4.1\n"
"3.3.23.43344.14453.5.5.4\n"
"444.25.2..33..444..55.2.\n"
"2..515.54.3.13144.11.1.2\n"
"4531123545.2554...4.13.3\n"
"3.42..143512111..4144312\n"
".2113511.2133552142....5\n"
".5..2334142121..2225.231\n") == 0);
free(board538640819);
board538640819 = NULL;
assert( gamma_move(board, 1, 6, 11) == 0 );
assert( gamma_move(board, 1, 19, 1) == 0 );
assert( gamma_free_fields(board, 1) == 69 );
assert( gamma_move(board, 2, 5, 3) == 0 );
assert( gamma_busy_fields(board, 2) == 51 );
assert( gamma_move(board, 4, 13, 15) == 0 );
assert( gamma_move(board, 4, 18, 17) == 1 );
assert( gamma_move(board, 5, 13, 9) == 0 );
assert( gamma_golden_move(board, 5, 8, 17) == 0 );
assert( gamma_move(board, 1, 20, 14) == 0 );
assert( gamma_move(board, 2, 13, 6) == 0 );
assert( gamma_move(board, 3, 0, 8) == 0 );
assert( gamma_move(board, 4, 13, 2) == 0 );
assert( gamma_move(board, 4, 18, 16) == 1 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 18, 22) == 0 );
assert( gamma_move(board, 1, 14, 18) == 0 );
assert( gamma_move(board, 2, 6, 1) == 0 );
assert( gamma_move(board, 3, 11, 12) == 0 );
assert( gamma_move(board, 5, 9, 8) == 0 );
assert( gamma_move(board, 5, 7, 0) == 0 );
assert( gamma_move(board, 1, 15, 1) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 9, 7) == 0 );
assert( gamma_move(board, 2, 1, 9) == 0 );
assert( gamma_move(board, 3, 5, 3) == 0 );
assert( gamma_move(board, 3, 7, 6) == 0 );
assert( gamma_golden_move(board, 3, 8, 5) == 0 );
assert( gamma_move(board, 4, 16, 18) == 0 );
assert( gamma_move(board, 5, 15, 15) == 1 );
assert( gamma_move(board, 1, 7, 15) == 0 );
assert( gamma_move(board, 2, 14, 6) == 0 );
assert( gamma_move(board, 3, 10, 23) == 0 );
assert( gamma_busy_fields(board, 3) == 57 );
assert( gamma_move(board, 4, 7, 8) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_golden_move(board, 4, 17, 5) == 0 );
assert( gamma_move(board, 5, 10, 21) == 0 );
assert( gamma_move(board, 1, 4, 18) == 1 );
assert( gamma_move(board, 1, 1, 8) == 0 );
assert( gamma_move(board, 2, 7, 4) == 0 );
assert( gamma_move(board, 2, 8, 17) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 14, 23) == 0 );
assert( gamma_move(board, 5, 19, 0) == 0 );
assert( gamma_free_fields(board, 5) == 58 );
assert( gamma_move(board, 1, 1, 20) == 0 );
assert( gamma_busy_fields(board, 1) == 64 );
assert( gamma_free_fields(board, 1) == 67 );
assert( gamma_move(board, 2, 14, 6) == 0 );
assert( gamma_move(board, 3, 10, 13) == 0 );
assert( gamma_busy_fields(board, 3) == 57 );
assert( gamma_move(board, 4, 0, 14) == 0 );
assert( gamma_move(board, 4, 21, 0) == 0 );
assert( gamma_move(board, 5, 20, 7) == 1 );
assert( gamma_move(board, 5, 0, 8) == 0 );
assert( gamma_move(board, 1, 9, 19) == 0 );
assert( gamma_move(board, 2, 11, 17) == 0 );
assert( gamma_move(board, 2, 20, 3) == 0 );
assert( gamma_busy_fields(board, 2) == 51 );
assert( gamma_free_fields(board, 2) == 67 );
assert( gamma_move(board, 3, 2, 4) == 1 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 5, 18) == 0 );
assert( gamma_free_fields(board, 4) == 152 );
assert( gamma_move(board, 1, 4, 3) == 0 );
assert( gamma_move(board, 1, 20, 11) == 0 );
assert( gamma_move(board, 2, 9, 7) == 0 );
assert( gamma_move(board, 3, 4, 1) == 0 );
assert( gamma_move(board, 4, 10, 8) == 0 );
assert( gamma_move(board, 4, 3, 16) == 0 );


char* board249593291 = gamma_board(board);
assert( board249593291 != NULL );
assert( strcmp(board249593291, 
"3..21124531553.45451....\n"
"5452412.5452535.444452..\n"
"3.44.....2..4.353.4432..\n"
"3.234..2..44.5.51232..54\n"
"1....1.52.54.51334244.2.\n"
"5...11.4.21225..4....11.\n"
"..5355533.451.53.53...31\n"
"3..2533.3.4..21.1.5.1..4\n"
".4534..2..5342411.3.2...\n"
"5..3231..2131.4332..4153\n"
"51..11.44435..4444112...\n"
".1.2.111.434..2.151554.1\n"
"3.3.23.43344.14453.5.5.4\n"
"444.25.2..33..444..55.2.\n"
"2.3515.54.3.13144.11.1.2\n"
"4531123545.2554...4.13.3\n"
"3.42..143512111..4144312\n"
".2113511.2133552142....5\n"
".5..2334142121..2225.231\n") == 0);
free(board249593291);
board249593291 = NULL;
assert( gamma_move(board, 5, 12, 13) == 0 );
assert( gamma_move(board, 5, 16, 18) == 0 );
assert( gamma_busy_fields(board, 5) == 60 );
assert( gamma_busy_fields(board, 1) == 64 );
assert( gamma_move(board, 2, 4, 15) == 0 );
assert( gamma_move(board, 2, 21, 15) == 1 );
assert( gamma_move(board, 3, 6, 3) == 0 );
assert( gamma_move(board, 4, 3, 15) == 0 );
assert( gamma_move(board, 4, 23, 15) == 0 );
assert( gamma_golden_move(board, 4, 0, 23) == 0 );
assert( gamma_move(board, 5, 20, 5) == 0 );
assert( gamma_move(board, 1, 23, 6) == 0 );
assert( gamma_busy_fields(board, 1) == 64 );
assert( gamma_free_fields(board, 1) == 67 );
assert( gamma_move(board, 2, 0, 8) == 0 );
assert( gamma_move(board, 2, 4, 11) == 0 );
assert( gamma_golden_move(board, 2, 5, 23) == 0 );
assert( gamma_move(board, 3, 16, 7) == 0 );
assert( gamma_busy_fields(board, 3) == 58 );
assert( gamma_move(board, 4, 16, 17) == 0 );
assert( gamma_move(board, 4, 11, 18) == 0 );
assert( gamma_move(board, 5, 18, 22) == 0 );
assert( gamma_move(board, 5, 2, 1) == 0 );
assert( gamma_move(board, 1, 17, 15) == 0 );
assert( gamma_move(board, 1, 18, 11) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 16, 5) == 0 );
assert( gamma_move(board, 2, 19, 2) == 0 );
assert( gamma_move(board, 3, 4, 13) == 0 );
assert( gamma_move(board, 4, 19, 15) == 0 );
assert( gamma_move(board, 5, 5, 8) == 0 );
assert( gamma_move(board, 5, 19, 12) == 0 );
assert( gamma_move(board, 2, 1, 22) == 0 );
assert( gamma_move(board, 3, 14, 14) == 0 );
assert( gamma_move(board, 3, 20, 12) == 0 );
assert( gamma_move(board, 4, 12, 9) == 0 );
assert( gamma_move(board, 4, 12, 10) == 0 );
assert( gamma_move(board, 5, 1, 19) == 0 );
assert( gamma_busy_fields(board, 5) == 60 );
assert( gamma_move(board, 1, 13, 4) == 0 );
assert( gamma_move(board, 2, 19, 17) == 0 );
assert( gamma_move(board, 2, 6, 7) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_golden_move(board, 2, 3, 12) == 1 );
assert( gamma_move(board, 3, 19, 12) == 1 );
assert( gamma_move(board, 3, 10, 17) == 0 );
assert( gamma_busy_fields(board, 3) == 58 );
assert( gamma_move(board, 5, 3, 16) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 1, 13, 3) == 0 );
assert( gamma_free_fields(board, 2) == 67 );
assert( gamma_move(board, 3, 5, 13) == 0 );
assert( gamma_move(board, 4, 9, 7) == 0 );
assert( gamma_free_fields(board, 4) == 150 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 20, 1) == 0 );
assert( gamma_golden_move(board, 5, 16, 21) == 0 );
assert( gamma_move(board, 1, 9, 1) == 0 );
assert( gamma_move(board, 1, 6, 2) == 0 );
assert( gamma_free_fields(board, 1) == 67 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 8, 13) == 1 );
assert( gamma_move(board, 3, 18, 14) == 0 );
assert( gamma_move(board, 4, 11, 15) == 0 );
assert( gamma_move(board, 5, 8, 11) == 0 );
assert( gamma_move(board, 1, 5, 18) == 0 );
assert( gamma_busy_fields(board, 1) == 64 );
assert( gamma_move(board, 2, 13, 6) == 0 );
assert( gamma_move(board, 3, 23, 8) == 1 );
assert( gamma_move(board, 4, 23, 16) == 1 );
assert( gamma_busy_fields(board, 4) == 72 );
assert( gamma_free_fields(board, 4) == 147 );
assert( gamma_move(board, 5, 6, 18) == 0 );
assert( gamma_move(board, 5, 4, 12) == 0 );
assert( gamma_busy_fields(board, 5) == 60 );
assert( gamma_move(board, 1, 6, 20) == 0 );
assert( gamma_move(board, 2, 23, 15) == 0 );
assert( gamma_move(board, 3, 6, 5) == 1 );
assert( gamma_free_fields(board, 3) == 59 );
assert( gamma_move(board, 4, 15, 6) == 0 );
assert( gamma_move(board, 4, 3, 14) == 1 );
assert( gamma_move(board, 5, 20, 9) == 0 );
assert( gamma_move(board, 5, 5, 5) == 0 );
assert( gamma_move(board, 1, 9, 13) == 0 );
assert( gamma_move(board, 2, 0, 12) == 1 );
assert( gamma_move(board, 2, 12, 2) == 0 );
assert( gamma_move(board, 3, 16, 7) == 0 );
assert( gamma_move(board, 4, 5, 9) == 0 );
assert( gamma_move(board, 5, 15, 12) == 0 );
assert( gamma_move(board, 1, 13, 15) == 0 );
assert( gamma_move(board, 1, 15, 0) == 0 );
assert( gamma_move(board, 2, 10, 22) == 0 );
assert( gamma_free_fields(board, 2) == 66 );
assert( gamma_golden_move(board, 2, 3, 12) == 0 );
assert( gamma_move(board, 3, 17, 22) == 0 );
assert( gamma_move(board, 4, 12, 16) == 0 );
assert( gamma_move(board, 5, 19, 12) == 0 );
assert( gamma_move(board, 5, 21, 13) == 0 );
assert( gamma_busy_fields(board, 5) == 60 );
assert( gamma_move(board, 2, 8, 12) == 0 );
assert( gamma_move(board, 2, 15, 0) == 1 );
assert( gamma_move(board, 3, 7, 12) == 0 );
assert( gamma_move(board, 5, 16, 16) == 0 );
assert( gamma_move(board, 1, 10, 9) == 0 );
assert( gamma_move(board, 1, 14, 14) == 0 );
assert( gamma_busy_fields(board, 1) == 64 );
assert( gamma_move(board, 2, 20, 1) == 1 );
assert( gamma_move(board, 3, 17, 7) == 0 );
assert( gamma_busy_fields(board, 3) == 60 );
assert( gamma_move(board, 4, 12, 1) == 0 );
assert( gamma_move(board, 5, 14, 21) == 0 );
assert( gamma_move(board, 5, 2, 18) == 1 );
assert( gamma_move(board, 1, 15, 5) == 0 );
assert( gamma_move(board, 1, 21, 15) == 0 );
assert( gamma_free_fields(board, 1) == 66 );
assert( gamma_golden_move(board, 1, 16, 9) == 0 );
assert( gamma_move(board, 2, 4, 15) == 0 );
assert( gamma_move(board, 2, 2, 6) == 0 );
assert( gamma_busy_fields(board, 2) == 57 );
assert( gamma_move(board, 3, 5, 3) == 0 );
assert( gamma_free_fields(board, 3) == 57 );
assert( gamma_move(board, 4, 15, 1) == 0 );
assert( gamma_move(board, 5, 5, 23) == 0 );
assert( gamma_move(board, 5, 21, 12) == 0 );
assert( gamma_golden_move(board, 5, 5, 14) == 0 );
assert( gamma_move(board, 1, 3, 22) == 0 );
assert( gamma_golden_move(board, 1, 17, 8) == 0 );
assert( gamma_move(board, 2, 11, 2) == 0 );
assert( gamma_move(board, 2, 8, 9) == 1 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 5, 3) == 0 );
assert( gamma_move(board, 4, 13, 1) == 0 );
assert( gamma_move(board, 4, 3, 8) == 1 );
assert( gamma_move(board, 5, 16, 22) == 0 );
assert( gamma_move(board, 1, 2, 4) == 0 );
assert( gamma_move(board, 1, 10, 17) == 0 );
assert( gamma_busy_fields(board, 1) == 64 );
assert( gamma_move(board, 2, 14, 1) == 0 );
assert( gamma_move(board, 3, 7, 2) == 0 );
assert( gamma_busy_fields(board, 3) == 60 );
assert( gamma_move(board, 4, 9, 2) == 0 );
assert( gamma_move(board, 4, 13, 1) == 0 );
assert( gamma_move(board, 5, 23, 7) == 0 );
assert( gamma_move(board, 1, 5, 3) == 0 );
assert( gamma_move(board, 2, 9, 6) == 0 );
assert( gamma_move(board, 3, 0, 2) == 0 );
assert( gamma_move(board, 3, 18, 14) == 0 );
assert( gamma_move(board, 4, 13, 6) == 0 );
assert( gamma_busy_fields(board, 4) == 74 );
assert( gamma_free_fields(board, 4) == 68 );
assert( gamma_golden_move(board, 4, 4, 12) == 0 );
assert( gamma_move(board, 5, 2, 16) == 0 );
assert( gamma_move(board, 1, 17, 9) == 0 );
assert( gamma_move(board, 2, 9, 0) == 0 );
assert( gamma_free_fields(board, 2) == 63 );
assert( gamma_move(board, 3, 14, 12) == 0 );
assert( gamma_move(board, 4, 16, 6) == 0 );
assert( gamma_move(board, 1, 16, 8) == 0 );
assert( gamma_move(board, 2, 12, 16) == 0 );
assert( gamma_move(board, 3, 13, 15) == 0 );
assert( gamma_move(board, 3, 20, 4) == 0 );
assert( gamma_busy_fields(board, 3) == 60 );
assert( gamma_move(board, 4, 6, 8) == 1 );
assert( gamma_move(board, 5, 10, 23) == 0 );
assert( gamma_move(board, 1, 9, 16) == 0 );
assert( gamma_move(board, 2, 10, 8) == 0 );
assert( gamma_move(board, 2, 14, 6) == 0 );
assert( gamma_move(board, 3, 13, 18) == 0 );
assert( gamma_busy_fields(board, 3) == 60 );
assert( gamma_golden_move(board, 3, 9, 10) == 0 );
assert( gamma_move(board, 4, 11, 19) == 0 );
assert( gamma_move(board, 4, 20, 3) == 0 );
assert( gamma_move(board, 5, 22, 1) == 1 );
assert( gamma_move(board, 2, 16, 5) == 0 );
assert( gamma_move(board, 4, 15, 0) == 0 );
assert( gamma_move(board, 4, 22, 0) == 0 );
assert( gamma_move(board, 5, 14, 21) == 0 );
assert( gamma_busy_fields(board, 5) == 62 );
assert( gamma_free_fields(board, 5) == 53 );
assert( gamma_golden_move(board, 5, 3, 0) == 0 );
assert( gamma_move(board, 1, 12, 20) == 0 );
assert( gamma_move(board, 1, 3, 15) == 0 );
assert( gamma_move(board, 2, 17, 22) == 0 );
assert( gamma_move(board, 3, 15, 14) == 0 );
assert( gamma_move(board, 4, 15, 8) == 0 );
assert( gamma_move(board, 4, 1, 9) == 1 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 20, 5) == 0 );
assert( gamma_move(board, 5, 20, 12) == 0 );
assert( gamma_busy_fields(board, 5) == 62 );


char* board231347177 = gamma_board(board);
assert( board231347177 != NULL );
assert( strcmp(board231347177, 
"3.521124531553.45451....\n"
"5452412.5452535.444452..\n"
"3.44.....2..4.353.4432.4\n"
"3.234..2..44.5.51232.254\n"
"1..4.1.52.54.51334244.2.\n"
"5...11.4221225..4....11.\n"
"2.5255533.451.53.533..31\n"
"3..2533.3.4..21.1.5.1..4\n"
".4534..2..5342411.3.2...\n"
"54.3231.22131.4332..4153\n"
"51.411444435..4444112..3\n"
".1.2.111.434..2.151554.1\n"
"3.3.23.43344.14453.5.5.4\n"
"444.2532..33..444..55.2.\n"
"2.3515.54.3.13144.11.1.2\n"
"4531123545.2554...4.13.3\n"
"3.42..143512111..4144312\n"
".2113511.2133552142.2.55\n"
".5..2334142121.22225.231\n") == 0);
free(board231347177);
board231347177 = NULL;
assert( gamma_move(board, 1, 2, 2) == 0 );
assert( gamma_move(board, 1, 4, 0) == 0 );
assert( gamma_move(board, 2, 11, 21) == 0 );
assert( gamma_move(board, 2, 5, 1) == 0 );
assert( gamma_move(board, 3, 0, 3) == 0 );
assert( gamma_move(board, 4, 11, 12) == 0 );
assert( gamma_move(board, 4, 3, 9) == 0 );
assert( gamma_move(board, 1, 17, 23) == 0 );
assert( gamma_move(board, 1, 9, 10) == 0 );
assert( gamma_free_fields(board, 1) == 62 );
assert( gamma_move(board, 2, 16, 1) == 0 );
assert( gamma_move(board, 3, 7, 12) == 0 );
assert( gamma_move(board, 4, 11, 2) == 0 );
assert( gamma_move(board, 4, 3, 11) == 0 );
assert( gamma_move(board, 5, 13, 14) == 0 );
assert( gamma_golden_move(board, 5, 4, 13) == 1 );
assert( gamma_move(board, 1, 11, 1) == 0 );
assert( gamma_move(board, 2, 5, 2) == 1 );
assert( gamma_move(board, 2, 10, 10) == 0 );
assert( gamma_move(board, 3, 15, 11) == 1 );
assert( gamma_move(board, 4, 4, 9) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 1, 7) == 0 );
assert( gamma_move(board, 1, 2, 1) == 0 );
assert( gamma_move(board, 1, 1, 3) == 0 );
assert( gamma_busy_fields(board, 1) == 63 );
assert( gamma_move(board, 2, 4, 15) == 0 );
assert( gamma_busy_fields(board, 2) == 59 );
assert( gamma_move(board, 3, 10, 9) == 0 );
assert( gamma_move(board, 4, 11, 2) == 0 );
assert( gamma_move(board, 5, 4, 17) == 0 );
assert( gamma_move(board, 5, 20, 6) == 1 );
assert( gamma_golden_move(board, 5, 17, 16) == 0 );
assert( gamma_move(board, 1, 15, 20) == 0 );
assert( gamma_move(board, 1, 11, 14) == 0 );
assert( gamma_move(board, 3, 4, 6) == 0 );
assert( gamma_busy_fields(board, 3) == 61 );
assert( gamma_move(board, 4, 22, 15) == 0 );
assert( gamma_move(board, 5, 14, 2) == 0 );
assert( gamma_move(board, 1, 13, 6) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 15, 8) == 0 );
assert( gamma_move(board, 2, 18, 14) == 0 );
assert( gamma_move(board, 3, 20, 18) == 0 );
assert( gamma_move(board, 3, 9, 13) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 17, 15) == 0 );
assert( gamma_move(board, 5, 3, 17) == 0 );
assert( gamma_move(board, 5, 11, 5) == 0 );
assert( gamma_move(board, 1, 10, 15) == 0 );
assert( gamma_move(board, 2, 6, 3) == 0 );
assert( gamma_golden_move(board, 2, 1, 23) == 0 );
assert( gamma_move(board, 3, 1, 0) == 0 );
assert( gamma_busy_fields(board, 3) == 61 );
assert( gamma_golden_move(board, 3, 9, 14) == 0 );


char* board119770106 = gamma_board(board);
assert( board119770106 != NULL );
assert( strcmp(board119770106, 
"3.521124531553.45451....\n"
"5452412.5452535.444452..\n"
"3.44.....2..4.353.4432.4\n"
"3.234..2..44.5.51232.254\n"
"1..4.1.52.54.51334244.2.\n"
"5...51.4221225..4....11.\n"
"2.5255533.451.53.533..31\n"
"3..2533.3.4..2131.5.1..4\n"
".4534..2..5342411.3.2...\n"
"54.3231.22131.4332..4153\n"
"51.411444435..4444112..3\n"
".1.2.111.434..2.151554.1\n"
"3.3.23.43344.14453.555.4\n"
"444.2532..33..444..55.2.\n"
"2.3515.54.3.13144.11.1.2\n"
"4531123545.2554...4.13.3\n"
"3.42.2143512111..4144312\n"
".2113511.2133552142.2.55\n"
".5..2334142121.22225.231\n") == 0);
free(board119770106);
board119770106 = NULL;
assert( gamma_move(board, 4, 12, 20) == 0 );
assert( gamma_move(board, 4, 22, 5) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 22, 2) == 0 );
assert( gamma_move(board, 1, 10, 16) == 0 );
assert( gamma_free_fields(board, 2) == 62 );


char* board534174194 = gamma_board(board);
assert( board534174194 != NULL );
assert( strcmp(board534174194, 
"3.521124531553.45451....\n"
"5452412.5452535.444452..\n"
"3.44.....2..4.353.4432.4\n"
"3.234..2..44.5.51232.254\n"
"1..4.1.52.54.51334244.2.\n"
"5...51.4221225..4....11.\n"
"2.5255533.451.53.533..31\n"
"3..2533.3.4..2131.5.1..4\n"
".4534..2..5342411.3.2...\n"
"54.3231.22131.4332..4153\n"
"51.411444435..4444112..3\n"
".1.2.111.434..2.151554.1\n"
"3.3.23.43344.14453.555.4\n"
"444.2532..33..444..55.2.\n"
"2.3515.54.3.13144.11.1.2\n"
"4531123545.2554...4.13.3\n"
"3.42.2143512111..4144312\n"
".2113511.2133552142.2.55\n"
".5..2334142121.22225.231\n") == 0);
free(board534174194);
board534174194 = NULL;
assert( gamma_move(board, 3, 10, 6) == 0 );
assert( gamma_move(board, 3, 21, 12) == 1 );
assert( gamma_busy_fields(board, 3) == 62 );
assert( gamma_free_fields(board, 3) == 54 );
assert( gamma_golden_move(board, 3, 4, 4) == 0 );
assert( gamma_move(board, 4, 11, 21) == 0 );
assert( gamma_move(board, 4, 5, 1) == 0 );
assert( gamma_golden_move(board, 4, 1, 5) == 0 );
assert( gamma_move(board, 5, 18, 4) == 0 );
assert( gamma_free_fields(board, 5) == 132 );
assert( gamma_move(board, 1, 10, 19) == 0 );
assert( gamma_busy_fields(board, 1) == 63 );
assert( gamma_move(board, 2, 0, 16) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 12, 20) == 0 );
assert( gamma_move(board, 3, 5, 6) == 0 );
assert( gamma_move(board, 4, 22, 16) == 1 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 21, 1) == 1 );
assert( gamma_free_fields(board, 5) == 130 );
assert( gamma_move(board, 1, 2, 12) == 0 );
assert( gamma_move(board, 2, 11, 6) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 5, 17) == 0 );
assert( gamma_move(board, 3, 0, 17) == 0 );
assert( gamma_move(board, 4, 3, 10) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 10, 6) == 0 );
assert( gamma_move(board, 1, 18, 23) == 0 );
assert( gamma_move(board, 2, 22, 4) == 1 );
assert( gamma_move(board, 2, 0, 0) == 1 );
assert( gamma_move(board, 3, 11, 10) == 0 );
assert( gamma_move(board, 4, 10, 6) == 0 );
assert( gamma_move(board, 4, 16, 0) == 0 );
assert( gamma_free_fields(board, 4) == 67 );
assert( gamma_move(board, 5, 21, 16) == 0 );
assert( gamma_move(board, 5, 17, 13) == 1 );
assert( gamma_move(board, 1, 7, 0) == 0 );
assert( gamma_move(board, 1, 4, 16) == 0 );
assert( gamma_move(board, 2, 7, 0) == 0 );
assert( gamma_move(board, 2, 12, 1) == 0 );
assert( gamma_move(board, 3, 16, 4) == 0 );
assert( gamma_move(board, 3, 3, 15) == 0 );
assert( gamma_move(board, 4, 14, 2) == 0 );
assert( gamma_move(board, 4, 4, 0) == 0 );
assert( gamma_free_fields(board, 4) == 66 );
assert( gamma_move(board, 5, 19, 2) == 0 );
assert( gamma_move(board, 5, 16, 1) == 0 );


char* board502018464 = gamma_board(board);
assert( board502018464 != NULL );
assert( strcmp(board502018464, 
"3.521124531553.45451....\n"
"5452412.5452535.444452..\n"
"3.44.....2..4.353.443244\n"
"3.234..2..44.5.51232.254\n"
"1..4.1.52.54.51334244.2.\n"
"5...51.4221225..45...11.\n"
"2.5255533.451.53.533.331\n"
"3..2533.3.4..2131.5.1..4\n"
".4534..2..5342411.3.2...\n"
"54.3231.22131.4332..4153\n"
"51.411444435..4444112..3\n"
".1.2.111.434..2.151554.1\n"
"3.3.23.43344.14453.555.4\n"
"444.2532..33..444..55.2.\n"
"2.3515.54.3.13144.11.122\n"
"4531123545.2554...4.13.3\n"
"3.42.2143512111..4144312\n"
".2113511.2133552142.2555\n"
"25..2334142121.22225.231\n") == 0);
free(board502018464);
board502018464 = NULL;
assert( gamma_move(board, 1, 13, 14) == 0 );
assert( gamma_move(board, 1, 17, 11) == 1 );


char* board870641399 = gamma_board(board);
assert( board870641399 != NULL );
assert( strcmp(board870641399, 
"3.521124531553.45451....\n"
"5452412.5452535.444452..\n"
"3.44.....2..4.353.443244\n"
"3.234..2..44.5.51232.254\n"
"1..4.1.52.54.51334244.2.\n"
"5...51.4221225..45...11.\n"
"2.5255533.451.53.533.331\n"
"3..2533.3.4..213115.1..4\n"
".4534..2..5342411.3.2...\n"
"54.3231.22131.4332..4153\n"
"51.411444435..4444112..3\n"
".1.2.111.434..2.151554.1\n"
"3.3.23.43344.14453.555.4\n"
"444.2532..33..444..55.2.\n"
"2.3515.54.3.13144.11.122\n"
"4531123545.2554...4.13.3\n"
"3.42.2143512111..4144312\n"
".2113511.2133552142.2555\n"
"25..2334142121.22225.231\n") == 0);
free(board870641399);
board870641399 = NULL;
assert( gamma_move(board, 2, 11, 12) == 0 );
assert( gamma_move(board, 3, 3, 22) == 0 );
assert( gamma_move(board, 3, 18, 15) == 0 );
assert( gamma_move(board, 4, 5, 11) == 0 );
assert( gamma_free_fields(board, 4) == 66 );
assert( gamma_move(board, 5, 12, 16) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 1, 15, 9) == 0 );
assert( gamma_move(board, 2, 5, 1) == 0 );
assert( gamma_move(board, 2, 21, 4) == 0 );
assert( gamma_move(board, 3, 13, 1) == 0 );
assert( gamma_move(board, 5, 2, 15) == 0 );
assert( gamma_move(board, 5, 15, 4) == 0 );
assert( gamma_move(board, 3, 12, 13) == 0 );
assert( gamma_move(board, 3, 6, 8) == 0 );
assert( gamma_move(board, 4, 9, 19) == 0 );
assert( gamma_move(board, 4, 23, 9) == 0 );
assert( gamma_move(board, 5, 14, 6) == 0 );
assert( gamma_move(board, 1, 18, 15) == 0 );


char* board487790905 = gamma_board(board);
assert( board487790905 != NULL );
assert( strcmp(board487790905, 
"3.521124531553.45451....\n"
"5452412.5452535.444452..\n"
"3.44.....2..4.353.443244\n"
"3.234..2..44.5.51232.254\n"
"1..4.1.52.54.51334244.2.\n"
"5...51.4221225..45...11.\n"
"2.5255533.451.53.533.331\n"
"3..2533.3.4..213115.1..4\n"
".4534..2..5342411.3.2...\n"
"54.3231.22131.4332..4153\n"
"51.411444435..4444112..3\n"
".1.2.111.434..2.151554.1\n"
"3.3.23.43344.14453.555.4\n"
"444.2532..33..444..55.2.\n"
"2.3515.54.3.13144.11.122\n"
"4531123545.2554...4.13.3\n"
"3.42.2143512111..4144312\n"
".2113511.2133552142.2555\n"
"25..2334142121.22225.231\n") == 0);
free(board487790905);
board487790905 = NULL;
assert( gamma_move(board, 2, 17, 10) == 1 );
assert( gamma_move(board, 2, 21, 7) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );


char* board418231763 = gamma_board(board);
assert( board418231763 != NULL );
assert( strcmp(board418231763, 
"3.521124531553.45451....\n"
"5452412.5452535.444452..\n"
"3.44.....2..4.353.443244\n"
"3.234..2..44.5.51232.254\n"
"1..4.1.52.54.51334244.2.\n"
"5...51.4221225..45...11.\n"
"2.5255533.451.53.533.331\n"
"3..2533.3.4..213115.1..4\n"
".4534..2..534241123.2...\n"
"54.3231.22131.4332..4153\n"
"51.411444435..4444112..3\n"
".1.2.111.434..2.151554.1\n"
"3.3.23.43344.14453.555.4\n"
"444.2532..33..444..55.2.\n"
"2.3515.54.3.13144.11.122\n"
"4531123545.2554...4.13.3\n"
"3.42.2143512111..4144312\n"
".2113511.2133552142.2555\n"
"25..2334142121.22225.231\n") == 0);
free(board418231763);
board418231763 = NULL;
assert( gamma_move(board, 3, 10, 6) == 0 );
assert( gamma_move(board, 4, 4, 0) == 0 );
assert( gamma_move(board, 4, 19, 8) == 0 );
assert( gamma_move(board, 5, 2, 15) == 0 );
assert( gamma_busy_fields(board, 5) == 66 );
assert( gamma_move(board, 1, 16, 1) == 0 );
assert( gamma_move(board, 1, 3, 9) == 0 );
assert( gamma_move(board, 2, 13, 19) == 0 );
assert( gamma_free_fields(board, 2) == 59 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 13, 19) == 0 );
assert( gamma_move(board, 4, 3, 9) == 0 );
assert( gamma_move(board, 4, 14, 13) == 0 );
assert( gamma_free_fields(board, 4) == 66 );
assert( gamma_move(board, 5, 19, 12) == 0 );
assert( gamma_move(board, 2, 16, 13) == 0 );
assert( gamma_move(board, 2, 7, 14) == 0 );
assert( gamma_move(board, 3, 17, 22) == 0 );
assert( gamma_move(board, 3, 17, 4) == 0 );
assert( gamma_move(board, 4, 3, 22) == 0 );
assert( gamma_free_fields(board, 4) == 66 );
assert( gamma_move(board, 5, 6, 3) == 0 );
assert( gamma_free_fields(board, 5) == 125 );


char* board498154443 = gamma_board(board);
assert( board498154443 != NULL );
assert( strcmp(board498154443, 
"3.521124531553.45451....\n"
"5452412.5452535.444452..\n"
"3.44.....2..4.353.443244\n"
"3.234..2..44.5.51232.254\n"
"1..4.1.52.54.51334244.2.\n"
"5...51.4221225..45...11.\n"
"2.5255533.451.53.533.331\n"
"3..2533.3.4..213115.1..4\n"
".4534..2..534241123.2...\n"
"54.3231.22131.4332..4153\n"
"51.411444435..4444112..3\n"
".1.2.111.434..2.151554.1\n"
"3.3.23.43344.14453.555.4\n"
"444.2532..33..444..55.2.\n"
"2.3515.54.3.13144.11.122\n"
"4531123545.2554...4.13.3\n"
"3.42.2143512111..4144312\n"
".2113511.2133552142.2555\n"
"25..2334142121.22225.231\n") == 0);
free(board498154443);
board498154443 = NULL;
assert( gamma_move(board, 1, 11, 21) == 0 );
assert( gamma_move(board, 1, 18, 10) == 0 );
assert( gamma_move(board, 2, 4, 10) == 0 );
assert( gamma_move(board, 3, 4, 16) == 0 );
assert( gamma_move(board, 4, 8, 13) == 0 );
assert( gamma_move(board, 5, 13, 3) == 0 );
assert( gamma_move(board, 1, 16, 1) == 0 );
assert( gamma_move(board, 2, 15, 1) == 0 );
assert( gamma_move(board, 3, 0, 10) == 1 );
assert( gamma_move(board, 4, 5, 12) == 0 );
assert( gamma_move(board, 4, 12, 12) == 0 );
assert( gamma_free_fields(board, 4) == 65 );
assert( gamma_move(board, 5, 12, 16) == 0 );
assert( gamma_move(board, 1, 7, 13) == 0 );
assert( gamma_move(board, 1, 7, 5) == 0 );
assert( gamma_move(board, 2, 12, 1) == 0 );
assert( gamma_move(board, 2, 8, 3) == 0 );
assert( gamma_move(board, 3, 11, 7) == 0 );
assert( gamma_busy_fields(board, 3) == 63 );
assert( gamma_move(board, 4, 11, 1) == 0 );


char* board795389310 = gamma_board(board);
assert( board795389310 != NULL );
assert( strcmp(board795389310, 
"3.521124531553.45451....\n"
"5452412.5452535.444452..\n"
"3.44.....2..4.353.443244\n"
"3.234..2..44.5.51232.254\n"
"1..4.1.52.54.51334244.2.\n"
"5...51.4221225..45...11.\n"
"2.5255533.451.53.533.331\n"
"3..2533.3.4..213115.1..4\n"
"34534..2..534241123.2...\n"
"54.3231.22131.4332..4153\n"
"51.411444435..4444112..3\n"
".1.2.111.434..2.151554.1\n"
"3.3.23.43344.14453.555.4\n"
"444.2532..33..444..55.2.\n"
"2.3515.54.3.13144.11.122\n"
"4531123545.2554...4.13.3\n"
"3.42.2143512111..4144312\n"
".2113511.2133552142.2555\n"
"25..2334142121.22225.231\n") == 0);
free(board795389310);
board795389310 = NULL;
assert( gamma_move(board, 5, 5, 15) == 1 );
assert( gamma_move(board, 1, 10, 21) == 0 );
assert( gamma_busy_fields(board, 1) == 64 );
assert( gamma_move(board, 2, 18, 20) == 0 );
assert( gamma_move(board, 2, 22, 11) == 0 );


char* board298002969 = gamma_board(board);
assert( board298002969 != NULL );
assert( strcmp(board298002969, 
"3.521124531553.45451....\n"
"5452412.5452535.444452..\n"
"3.44.....2..4.353.443244\n"
"3.2345.2..44.5.51232.254\n"
"1..4.1.52.54.51334244.2.\n"
"5...51.4221225..45...11.\n"
"2.5255533.451.53.533.331\n"
"3..2533.3.4..213115.1..4\n"
"34534..2..534241123.2...\n"
"54.3231.22131.4332..4153\n"
"51.411444435..4444112..3\n"
".1.2.111.434..2.151554.1\n"
"3.3.23.43344.14453.555.4\n"
"444.2532..33..444..55.2.\n"
"2.3515.54.3.13144.11.122\n"
"4531123545.2554...4.13.3\n"
"3.42.2143512111..4144312\n"
".2113511.2133552142.2555\n"
"25..2334142121.22225.231\n") == 0);
free(board298002969);
board298002969 = NULL;
assert( gamma_move(board, 4, 10, 4) == 0 );
assert( gamma_move(board, 4, 15, 12) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 18, 14) == 0 );
assert( gamma_move(board, 5, 6, 15) == 1 );
assert( gamma_move(board, 1, 12, 9) == 0 );
assert( gamma_move(board, 1, 7, 1) == 0 );
assert( gamma_move(board, 2, 9, 0) == 0 );


char* board347060246 = gamma_board(board);
assert( board347060246 != NULL );
assert( strcmp(board347060246, 
"3.521124531553.45451....\n"
"5452412.5452535.444452..\n"
"3.44.....2..4.353.443244\n"
"3.234552..44.5.51232.254\n"
"1..4.1.52.54.51334244.2.\n"
"5...51.4221225..45...11.\n"
"2.5255533.451.53.533.331\n"
"3..2533.3.4..213115.1..4\n"
"34534..2..534241123.2...\n"
"54.3231.22131.4332..4153\n"
"51.411444435..4444112..3\n"
".1.2.111.434..2.151554.1\n"
"3.3.23.43344.14453.555.4\n"
"444.2532..33..444..55.2.\n"
"2.3515.54.3.13144.11.122\n"
"4531123545.2554...4.13.3\n"
"3.42.2143512111..4144312\n"
".2113511.2133552142.2555\n"
"25..2334142121.22225.231\n") == 0);
free(board347060246);
board347060246 = NULL;
assert( gamma_move(board, 3, 15, 9) == 0 );
assert( gamma_move(board, 4, 7, 10) == 0 );
assert( gamma_busy_fields(board, 4) == 77 );
assert( gamma_move(board, 5, 10, 23) == 0 );
assert( gamma_move(board, 5, 5, 9) == 0 );
assert( gamma_move(board, 1, 14, 4) == 0 );
assert( gamma_busy_fields(board, 1) == 64 );
assert( gamma_move(board, 3, 2, 4) == 0 );
assert( gamma_move(board, 3, 15, 13) == 1 );
assert( gamma_move(board, 4, 10, 11) == 0 );
assert( gamma_move(board, 5, 15, 12) == 0 );
assert( gamma_move(board, 1, 10, 21) == 0 );
assert( gamma_move(board, 2, 7, 15) == 0 );
assert( gamma_busy_fields(board, 2) == 62 );
assert( gamma_move(board, 3, 15, 16) == 0 );
assert( gamma_move(board, 3, 11, 18) == 0 );
assert( gamma_move(board, 4, 6, 12) == 0 );
assert( gamma_move(board, 4, 17, 4) == 1 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 1, 14) == 0 );
assert( gamma_move(board, 1, 12, 13) == 0 );
assert( gamma_move(board, 1, 14, 13) == 1 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 11, 19) == 0 );
assert( gamma_move(board, 3, 7, 8) == 0 );
assert( gamma_move(board, 3, 1, 5) == 0 );
assert( gamma_move(board, 4, 15, 9) == 0 );
assert( gamma_move(board, 4, 14, 17) == 0 );
assert( gamma_move(board, 5, 5, 9) == 0 );
assert( gamma_free_fields(board, 5) == 48 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 1, 12, 5) == 1 );
assert( gamma_move(board, 1, 2, 11) == 0 );
assert( gamma_move(board, 2, 9, 7) == 0 );
assert( gamma_move(board, 2, 19, 6) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 9, 13) == 0 );
assert( gamma_move(board, 3, 20, 5) == 0 );
assert( gamma_move(board, 4, 16, 7) == 0 );
assert( gamma_move(board, 5, 5, 18) == 0 );
assert( gamma_move(board, 1, 1, 17) == 0 );
assert( gamma_move(board, 1, 4, 1) == 0 );
assert( gamma_move(board, 2, 10, 23) == 0 );
assert( gamma_move(board, 3, 5, 18) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 3, 15) == 0 );
assert( gamma_busy_fields(board, 4) == 78 );
assert( gamma_move(board, 5, 12, 1) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 1, 6, 18) == 0 );
assert( gamma_move(board, 2, 0, 20) == 0 );
assert( gamma_move(board, 2, 19, 2) == 0 );
assert( gamma_free_fields(board, 2) == 58 );
assert( gamma_move(board, 3, 4, 6) == 0 );
assert( gamma_golden_move(board, 3, 1, 5) == 0 );
assert( gamma_move(board, 4, 16, 1) == 0 );
assert( gamma_move(board, 5, 23, 15) == 0 );
assert( gamma_move(board, 1, 4, 11) == 0 );
assert( gamma_move(board, 2, 3, 15) == 0 );
assert( gamma_move(board, 2, 10, 1) == 0 );
assert( gamma_free_fields(board, 2) == 58 );
assert( gamma_move(board, 3, 7, 4) == 0 );
assert( gamma_move(board, 4, 18, 12) == 0 );
assert( gamma_move(board, 4, 10, 17) == 0 );
assert( gamma_move(board, 5, 9, 15) == 0 );
assert( gamma_move(board, 1, 3, 17) == 0 );
assert( gamma_move(board, 2, 4, 11) == 0 );
assert( gamma_move(board, 3, 14, 23) == 0 );
assert( gamma_move(board, 3, 19, 9) == 1 );
assert( gamma_free_fields(board, 3) == 49 );
assert( gamma_move(board, 4, 13, 0) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 0, 3) == 0 );
assert( gamma_move(board, 1, 11, 16) == 0 );
assert( gamma_move(board, 2, 11, 12) == 0 );
assert( gamma_move(board, 3, 3, 5) == 0 );
assert( gamma_free_fields(board, 3) == 49 );
assert( gamma_move(board, 4, 9, 18) == 0 );
assert( gamma_move(board, 5, 5, 13) == 0 );
assert( gamma_move(board, 5, 15, 13) == 0 );
assert( gamma_move(board, 1, 18, 14) == 0 );
assert( gamma_move(board, 1, 16, 7) == 0 );
assert( gamma_move(board, 2, 3, 8) == 0 );
assert( gamma_move(board, 2, 4, 15) == 0 );
assert( gamma_free_fields(board, 2) == 58 );
assert( gamma_move(board, 3, 9, 18) == 0 );
assert( gamma_move(board, 4, 7, 22) == 0 );
assert( gamma_free_fields(board, 4) == 61 );


char* board362467006 = gamma_board(board);
assert( board362467006 != NULL );
assert( strcmp(board362467006, 
"3.521124531553.45451....\n"
"5452412.5452535.444452..\n"
"3.44.....2..4.353.443244\n"
"3.234552..44.5.51232.254\n"
"1..4.1.52.54.51334244.2.\n"
"5...51.42212251345...11.\n"
"2.5255533.451.53.533.331\n"
"3..2533.3.4..213115.1..4\n"
"34534..2..534241123.2...\n"
"54.3231.22131.4332.34153\n"
"51.411444435..4444112..3\n"
".1.2.111.434..2.151554.1\n"
"3.3.23.43344.14453.555.4\n"
"444.2532..331.444..55.2.\n"
"2.3515.54.3.13144411.122\n"
"4531123545.2554...4.13.3\n"
"3.42.2143512111..4144312\n"
".2113511.2133552142.2555\n"
"25..2334142121.22225.231\n") == 0);
free(board362467006);
board362467006 = NULL;
assert( gamma_move(board, 5, 7, 22) == 0 );
assert( gamma_move(board, 5, 8, 10) == 0 );
assert( gamma_golden_move(board, 5, 16, 3) == 0 );


char* board841050189 = gamma_board(board);
assert( board841050189 != NULL );
assert( strcmp(board841050189, 
"3.521124531553.45451....\n"
"5452412.5452535.444452..\n"
"3.44.....2..4.353.443244\n"
"3.234552..44.5.51232.254\n"
"1..4.1.52.54.51334244.2.\n"
"5...51.42212251345...11.\n"
"2.5255533.451.53.533.331\n"
"3..2533.3.4..213115.1..4\n"
"34534..2..534241123.2...\n"
"54.3231.22131.4332.34153\n"
"51.411444435..4444112..3\n"
".1.2.111.434..2.151554.1\n"
"3.3.23.43344.14453.555.4\n"
"444.2532..331.444..55.2.\n"
"2.3515.54.3.13144411.122\n"
"4531123545.2554...4.13.3\n"
"3.42.2143512111..4144312\n"
".2113511.2133552142.2555\n"
"25..2334142121.22225.231\n") == 0);
free(board841050189);
board841050189 = NULL;
assert( gamma_move(board, 1, 17, 15) == 0 );
assert( gamma_busy_fields(board, 1) == 66 );
assert( gamma_move(board, 2, 10, 14) == 0 );
assert( gamma_move(board, 2, 4, 18) == 0 );
assert( gamma_move(board, 3, 14, 2) == 0 );
assert( gamma_move(board, 4, 18, 13) == 0 );
assert( gamma_move(board, 4, 12, 15) == 1 );
assert( gamma_free_fields(board, 4) == 116 );
assert( gamma_move(board, 5, 0, 3) == 0 );
assert( gamma_free_fields(board, 5) == 47 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 1, 7, 2) == 0 );
assert( gamma_free_fields(board, 1) == 50 );
assert( gamma_move(board, 2, 11, 1) == 0 );
assert( gamma_busy_fields(board, 2) == 62 );
assert( gamma_move(board, 3, 11, 21) == 0 );
assert( gamma_move(board, 3, 16, 1) == 0 );
assert( gamma_move(board, 4, 16, 7) == 0 );
assert( gamma_busy_fields(board, 4) == 79 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 21, 0) == 0 );
assert( gamma_move(board, 1, 1, 8) == 0 );
assert( gamma_move(board, 2, 9, 2) == 0 );
assert( gamma_move(board, 3, 13, 19) == 0 );
assert( gamma_move(board, 4, 9, 15) == 1 );
assert( gamma_move(board, 5, 9, 9) == 0 );
assert( gamma_move(board, 1, 16, 10) == 0 );
assert( gamma_move(board, 1, 5, 18) == 0 );
assert( gamma_move(board, 2, 16, 8) == 0 );
assert( gamma_move(board, 3, 6, 18) == 0 );
assert( gamma_busy_fields(board, 3) == 65 );
assert( gamma_free_fields(board, 4) == 115 );
assert( gamma_move(board, 5, 7, 22) == 0 );
assert( gamma_move(board, 1, 9, 2) == 0 );
assert( gamma_move(board, 2, 1, 11) == 0 );
assert( gamma_busy_fields(board, 2) == 62 );
assert( gamma_move(board, 3, 12, 7) == 0 );
assert( gamma_busy_fields(board, 3) == 65 );
assert( gamma_free_fields(board, 3) == 49 );
assert( gamma_move(board, 4, 10, 2) == 0 );
assert( gamma_move(board, 5, 8, 21) == 0 );
assert( gamma_move(board, 1, 2, 8) == 1 );
assert( gamma_move(board, 2, 4, 9) == 0 );
assert( gamma_busy_fields(board, 2) == 62 );
assert( gamma_free_fields(board, 2) == 57 );
assert( gamma_move(board, 3, 1, 1) == 0 );
assert( gamma_move(board, 4, 14, 3) == 0 );
assert( gamma_move(board, 5, 10, 22) == 0 );
assert( gamma_free_fields(board, 5) == 47 );
assert( gamma_golden_move(board, 5, 5, 2) == 0 );
assert( gamma_move(board, 1, 20, 16) == 0 );
assert( gamma_move(board, 2, 13, 19) == 0 );
assert( gamma_move(board, 2, 13, 17) == 0 );
assert( gamma_move(board, 3, 21, 7) == 0 );
assert( gamma_move(board, 3, 4, 17) == 0 );
assert( gamma_move(board, 4, 18, 23) == 0 );
assert( gamma_move(board, 4, 18, 14) == 0 );
assert( gamma_move(board, 5, 2, 15) == 0 );
assert( gamma_move(board, 1, 0, 18) == 0 );
assert( gamma_move(board, 1, 18, 4) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 16, 7) == 0 );
assert( gamma_move(board, 2, 13, 10) == 0 );
assert( gamma_move(board, 3, 14, 23) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );


char* board674680871 = gamma_board(board);
assert( board674680871 != NULL );
assert( strcmp(board674680871, 
"3.521124531553.45451....\n"
"5452412.5452535.444452..\n"
"3.44.....2..4.353.443244\n"
"3.234552.44445.51232.254\n"
"1..4.1.52.54.51334244.2.\n"
"5...51.42212251345...11.\n"
"2.5255533.451.53.533.331\n"
"3..2533.3.4..213115.1..4\n"
"34534..2..534241123.2...\n"
"54.3231.22131.4332.34153\n"
"511411444435..4444112..3\n"
".1.2.111.434..2.151554.1\n"
"3.3.23.43344.14453.555.4\n"
"444.2532..331.444..55.2.\n"
"2.3515.54.3.13144411.122\n"
"4531123545.2554...4.13.3\n"
"3.42.2143512111..4144312\n"
".2113511.2133552142.2555\n"
"25..2334142121.22225.231\n") == 0);
free(board674680871);
board674680871 = NULL;
assert( gamma_move(board, 5, 1, 19) == 0 );
assert( gamma_busy_fields(board, 1) == 67 );
assert( gamma_move(board, 2, 15, 20) == 0 );
assert( gamma_move(board, 2, 18, 13) == 1 );
assert( gamma_busy_fields(board, 2) == 63 );
assert( gamma_move(board, 3, 14, 9) == 0 );
assert( gamma_move(board, 3, 23, 15) == 0 );
assert( gamma_busy_fields(board, 3) == 65 );
assert( gamma_move(board, 4, 12, 9) == 0 );
assert( gamma_move(board, 5, 7, 8) == 0 );
assert( gamma_move(board, 5, 19, 17) == 0 );
assert( gamma_move(board, 1, 21, 0) == 0 );
assert( gamma_golden_move(board, 2, 17, 1) == 0 );


gamma_delete(board);

    return 0;
}
