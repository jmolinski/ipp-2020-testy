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
uuid: 967070050
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(15, 6, 7, 9);
assert( board != NULL );


assert( gamma_move(board, 1, 4, 5) == 1 );
assert( gamma_move(board, 1, 0, 3) == 1 );


char* board616038101 = gamma_board(board);
assert( board616038101 != NULL );
assert( strcmp(board616038101, 
"....1..........\n"
"...............\n"
"1..............\n"
"...............\n"
"...............\n"
"...............\n") == 0);
free(board616038101);
board616038101 = NULL;
assert( gamma_move(board, 2, 1, 2) == 1 );
assert( gamma_move(board, 2, 14, 3) == 1 );
assert( gamma_move(board, 3, 1, 5) == 1 );
assert( gamma_move(board, 3, 12, 5) == 1 );
assert( gamma_move(board, 4, 3, 0) == 1 );
assert( gamma_move(board, 5, 4, 1) == 1 );
assert( gamma_move(board, 5, 12, 0) == 1 );
assert( gamma_move(board, 6, 0, 3) == 0 );
assert( gamma_move(board, 6, 1, 4) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 2, 6) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 1, 6, 5) == 1 );
assert( gamma_move(board, 2, 0, 2) == 1 );
assert( gamma_move(board, 2, 8, 3) == 1 );
assert( gamma_move(board, 3, 1, 1) == 1 );
assert( gamma_move(board, 4, 5, 8) == 0 );
assert( gamma_golden_move(board, 4, 5, 4) == 0 );
assert( gamma_move(board, 5, 2, 7) == 0 );
assert( gamma_move(board, 5, 3, 0) == 0 );


char* board911228006 = gamma_board(board);
assert( board911228006 != NULL );
assert( strcmp(board911228006, 
".3..1.1.....3..\n"
".6.............\n"
"1.......2.....2\n"
"22.............\n"
".3..5..........\n"
"...4........5..\n") == 0);
free(board911228006);
board911228006 = NULL;
assert( gamma_move(board, 6, 3, 12) == 0 );
assert( gamma_move(board, 6, 0, 3) == 0 );
assert( gamma_move(board, 7, 4, 8) == 0 );
assert( gamma_move(board, 1, 2, 11) == 0 );
assert( gamma_golden_move(board, 1, 5, 12) == 0 );
assert( gamma_move(board, 2, 4, 4) == 1 );
assert( gamma_free_fields(board, 2) == 75 );
assert( gamma_move(board, 3, 2, 10) == 0 );
assert( gamma_move(board, 3, 0, 1) == 1 );
assert( gamma_move(board, 4, 3, 1) == 1 );
assert( gamma_move(board, 4, 3, 1) == 0 );
assert( gamma_move(board, 5, 4, 6) == 0 );
assert( gamma_move(board, 5, 3, 0) == 0 );
assert( gamma_move(board, 6, 0, 8) == 0 );
assert( gamma_move(board, 7, 0, 6) == 0 );
assert( gamma_move(board, 7, 7, 0) == 1 );
assert( gamma_busy_fields(board, 7) == 1 );
assert( gamma_move(board, 1, 14, 4) == 1 );
assert( gamma_move(board, 1, 14, 0) == 1 );
assert( gamma_golden_move(board, 1, 5, 1) == 0 );
assert( gamma_move(board, 2, 2, 6) == 0 );
assert( gamma_move(board, 2, 5, 0) == 1 );
assert( gamma_move(board, 3, 1, 4) == 0 );
assert( gamma_free_fields(board, 3) == 69 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 3, 11) == 0 );
assert( gamma_move(board, 4, 14, 4) == 0 );
assert( gamma_move(board, 5, 3, 1) == 0 );
assert( gamma_move(board, 6, 4, 5) == 0 );
assert( gamma_move(board, 7, 4, 2) == 1 );
assert( gamma_busy_fields(board, 1) == 5 );
assert( gamma_move(board, 2, 2, 7) == 0 );
assert( gamma_move(board, 2, 14, 4) == 0 );
assert( gamma_move(board, 3, 1, 5) == 0 );
assert( gamma_move(board, 3, 6, 4) == 1 );
assert( gamma_move(board, 4, 4, 10) == 0 );
assert( gamma_move(board, 4, 5, 4) == 1 );
assert( gamma_move(board, 5, 5, 9) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 0, 2) == 0 );
assert( gamma_move(board, 6, 8, 0) == 1 );
assert( gamma_move(board, 7, 5, 7) == 0 );
assert( gamma_move(board, 7, 0, 4) == 1 );
assert( gamma_free_fields(board, 7) == 64 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 1, 0, 1) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 3, 10) == 0 );
assert( gamma_move(board, 2, 6, 2) == 1 );
assert( gamma_move(board, 3, 1, 12) == 0 );
assert( gamma_move(board, 3, 12, 0) == 0 );


char* board579367167 = gamma_board(board);
assert( board579367167 != NULL );
assert( strcmp(board579367167, 
".3..1.1.....3..\n"
"76..243.......1\n"
"1.......2.....2\n"
"22..7.2........\n"
"33.45..........\n"
"...4.2.76...5.1\n") == 0);
free(board579367167);
board579367167 = NULL;
assert( gamma_move(board, 4, 0, 3) == 0 );
assert( gamma_move(board, 4, 6, 3) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 5, 8) == 0 );
assert( gamma_move(board, 6, 1, 12) == 0 );
assert( gamma_move(board, 1, 0, 11) == 0 );
assert( gamma_move(board, 2, 12, 5) == 0 );
assert( gamma_free_fields(board, 2) == 62 );
assert( gamma_move(board, 3, 5, 0) == 0 );
assert( gamma_busy_fields(board, 3) == 5 );
assert( gamma_move(board, 4, 3, 2) == 1 );
assert( gamma_move(board, 4, 6, 0) == 1 );
assert( gamma_move(board, 5, 1, 7) == 0 );
assert( gamma_move(board, 5, 6, 0) == 0 );
assert( gamma_move(board, 6, 3, 3) == 1 );
assert( gamma_move(board, 7, 4, 12) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_free_fields(board, 1) == 59 );
assert( gamma_move(board, 2, 5, 10) == 0 );
assert( gamma_move(board, 3, 1, 7) == 0 );
assert( gamma_move(board, 3, 10, 1) == 1 );
assert( gamma_move(board, 4, 9, 2) == 1 );
assert( gamma_move(board, 4, 13, 3) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 3, 4) == 1 );
assert( gamma_move(board, 5, 14, 4) == 0 );
assert( gamma_move(board, 6, 1, 14) == 0 );
assert( gamma_move(board, 7, 2, 13) == 0 );
assert( gamma_move(board, 7, 2, 3) == 1 );
assert( gamma_golden_move(board, 7, 3, 3) == 1 );
assert( gamma_move(board, 1, 1, 5) == 0 );
assert( gamma_free_fields(board, 1) == 54 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 4, 2) == 0 );
assert( gamma_move(board, 2, 9, 2) == 0 );
assert( gamma_move(board, 3, 5, 13) == 0 );
assert( gamma_move(board, 3, 10, 2) == 1 );
assert( gamma_busy_fields(board, 3) == 7 );
assert( gamma_move(board, 4, 2, 13) == 0 );
assert( gamma_move(board, 4, 10, 5) == 1 );
assert( gamma_move(board, 5, 3, 2) == 0 );
assert( gamma_move(board, 6, 1, 3) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 0, 13) == 0 );
assert( gamma_move(board, 1, 5, 8) == 0 );
assert( gamma_move(board, 2, 0, 4) == 0 );
assert( gamma_move(board, 2, 0, 3) == 0 );
assert( gamma_free_fields(board, 2) == 51 );
assert( gamma_move(board, 4, 4, 11) == 0 );
assert( gamma_move(board, 5, 3, 10) == 0 );
assert( gamma_move(board, 6, 5, 3) == 1 );
assert( gamma_move(board, 7, 4, 2) == 0 );
assert( gamma_move(board, 1, 1, 5) == 0 );
assert( gamma_move(board, 2, 0, 9) == 0 );
assert( gamma_move(board, 2, 6, 3) == 0 );
assert( gamma_move(board, 3, 4, 2) == 0 );
assert( gamma_move(board, 4, 11, 1) == 1 );
assert( gamma_move(board, 5, 10, 0) == 1 );
assert( gamma_move(board, 6, 5, 5) == 1 );
assert( gamma_busy_fields(board, 6) == 5 );
assert( gamma_free_fields(board, 6) == 47 );
assert( gamma_move(board, 7, 7, 3) == 1 );
assert( gamma_move(board, 7, 9, 2) == 0 );
assert( gamma_move(board, 1, 11, 1) == 0 );
assert( gamma_move(board, 1, 7, 5) == 1 );
assert( gamma_move(board, 2, 2, 11) == 0 );
assert( gamma_move(board, 2, 9, 1) == 1 );
assert( gamma_move(board, 3, 2, 2) == 1 );
assert( gamma_busy_fields(board, 3) == 8 );
assert( gamma_move(board, 4, 1, 5) == 0 );
assert( gamma_move(board, 5, 3, 4) == 0 );
assert( gamma_free_fields(board, 5) == 43 );
assert( gamma_move(board, 6, 3, 3) == 0 );
assert( gamma_move(board, 7, 5, 13) == 0 );
assert( gamma_move(board, 1, 4, 13) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 0, 1) == 0 );
assert( gamma_busy_fields(board, 2) == 8 );
assert( gamma_move(board, 3, 12, 5) == 0 );
assert( gamma_move(board, 4, 12, 4) == 1 );
assert( gamma_move(board, 4, 13, 2) == 1 );
assert( gamma_move(board, 5, 4, 1) == 0 );
assert( gamma_free_fields(board, 5) == 41 );
assert( gamma_move(board, 6, 4, 2) == 0 );
assert( gamma_move(board, 7, 3, 4) == 0 );
assert( gamma_move(board, 1, 0, 4) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );


char* board689475628 = gamma_board(board);
assert( board689475628 != NULL );
assert( strcmp(board689475628, 
".3..1611..4.3..\n"
"76.5243.....4.1\n"
"1677.6472....42\n"
"22347.2..43..4.\n"
"33.45....234...\n"
"...4.2476.5.5.1\n") == 0);
free(board689475628);
board689475628 = NULL;
assert( gamma_move(board, 2, 4, 10) == 0 );
assert( gamma_move(board, 2, 2, 4) == 1 );
assert( gamma_busy_fields(board, 2) == 9 );
assert( gamma_move(board, 3, 9, 3) == 1 );
assert( gamma_golden_move(board, 3, 0, 10) == 0 );
assert( gamma_move(board, 4, 12, 4) == 0 );
assert( gamma_move(board, 4, 0, 4) == 0 );
assert( gamma_move(board, 5, 2, 5) == 1 );
assert( gamma_move(board, 5, 14, 4) == 0 );
assert( gamma_move(board, 6, 1, 6) == 0 );
assert( gamma_move(board, 6, 0, 0) == 1 );
assert( gamma_move(board, 7, 1, 6) == 0 );
assert( gamma_move(board, 7, 1, 3) == 0 );
assert( gamma_move(board, 1, 5, 0) == 0 );
assert( gamma_free_fields(board, 1) == 37 );
assert( gamma_move(board, 2, 7, 3) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 4, 0) == 1 );
assert( gamma_busy_fields(board, 4) == 13 );
assert( gamma_move(board, 5, 3, 10) == 0 );
assert( gamma_move(board, 5, 3, 4) == 0 );
assert( gamma_move(board, 6, 5, 4) == 0 );
assert( gamma_move(board, 6, 13, 1) == 1 );
assert( gamma_move(board, 7, 0, 9) == 0 );
assert( gamma_move(board, 1, 1, 6) == 0 );
assert( gamma_move(board, 1, 12, 1) == 1 );
assert( gamma_move(board, 2, 2, 8) == 0 );
assert( gamma_busy_fields(board, 2) == 9 );
assert( gamma_move(board, 3, 3, 4) == 0 );
assert( gamma_move(board, 3, 2, 4) == 0 );
assert( gamma_move(board, 4, 3, 12) == 0 );
assert( gamma_move(board, 4, 11, 3) == 0 );
assert( gamma_move(board, 5, 2, 12) == 0 );
assert( gamma_golden_move(board, 5, 2, 0) == 0 );
assert( gamma_move(board, 6, 0, 5) == 1 );
assert( gamma_move(board, 7, 1, 7) == 0 );
assert( gamma_move(board, 1, 14, 0) == 0 );
assert( gamma_move(board, 1, 13, 5) == 1 );
assert( gamma_move(board, 2, 1, 8) == 0 );
assert( gamma_move(board, 3, 4, 13) == 0 );
assert( gamma_free_fields(board, 3) == 32 );
assert( gamma_move(board, 4, 1, 14) == 0 );
assert( gamma_busy_fields(board, 4) == 13 );
assert( gamma_move(board, 5, 7, 5) == 0 );
assert( gamma_move(board, 5, 14, 0) == 0 );
assert( gamma_busy_fields(board, 5) == 5 );
assert( gamma_move(board, 6, 1, 6) == 0 );
assert( gamma_move(board, 7, 4, 7) == 0 );
assert( gamma_move(board, 1, 5, 11) == 0 );
assert( gamma_move(board, 2, 2, 3) == 0 );
assert( gamma_move(board, 2, 1, 3) == 0 );
assert( gamma_move(board, 3, 2, 7) == 0 );


char* board508088589 = gamma_board(board);
assert( board508088589 != NULL );
assert( strcmp(board508088589, 
"635.1611..4.31.\n"
"7625243.....4.1\n"
"1677.64723...42\n"
"22347.2..43..4.\n"
"33.45....23416.\n"
"6..442476.5.5.1\n") == 0);
free(board508088589);
board508088589 = NULL;
assert( gamma_move(board, 4, 5, 9) == 0 );
assert( gamma_move(board, 4, 6, 0) == 0 );
assert( gamma_move(board, 5, 2, 8) == 0 );
assert( gamma_move(board, 5, 6, 1) == 1 );
assert( gamma_free_fields(board, 5) == 31 );
assert( gamma_move(board, 6, 6, 0) == 0 );
assert( gamma_move(board, 7, 9, 4) == 1 );
assert( gamma_move(board, 7, 13, 3) == 0 );
assert( gamma_free_fields(board, 7) == 30 );
assert( gamma_move(board, 1, 5, 8) == 0 );
assert( gamma_move(board, 2, 5, 14) == 0 );
assert( gamma_move(board, 3, 4, 5) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 7, 5) == 0 );
assert( gamma_move(board, 5, 2, 7) == 0 );
assert( gamma_golden_move(board, 6, 1, 4) == 0 );
assert( gamma_move(board, 7, 14, 0) == 0 );
assert( gamma_move(board, 1, 12, 4) == 0 );
assert( gamma_move(board, 1, 4, 3) == 1 );
assert( gamma_move(board, 2, 5, 14) == 0 );
assert( gamma_move(board, 2, 4, 5) == 0 );
assert( gamma_move(board, 3, 4, 13) == 0 );
assert( gamma_move(board, 3, 0, 0) == 0 );
assert( gamma_move(board, 4, 0, 11) == 0 );
assert( gamma_move(board, 5, 5, 3) == 0 );
assert( gamma_move(board, 6, 4, 8) == 0 );
assert( gamma_move(board, 6, 2, 0) == 1 );
assert( gamma_move(board, 7, 14, 0) == 0 );
assert( gamma_move(board, 7, 3, 1) == 0 );
assert( gamma_move(board, 1, 7, 4) == 1 );
assert( gamma_move(board, 1, 2, 3) == 0 );
assert( gamma_move(board, 2, 1, 8) == 0 );
assert( gamma_busy_fields(board, 2) == 9 );
assert( gamma_move(board, 3, 2, 5) == 0 );
assert( gamma_move(board, 3, 9, 3) == 0 );
assert( gamma_move(board, 4, 2, 14) == 0 );
assert( gamma_move(board, 4, 13, 1) == 0 );
assert( gamma_move(board, 5, 5, 5) == 0 );
assert( gamma_move(board, 5, 11, 3) == 1 );
assert( gamma_move(board, 7, 4, 13) == 0 );
assert( gamma_move(board, 1, 4, 10) == 0 );
assert( gamma_move(board, 1, 1, 5) == 0 );
assert( gamma_move(board, 2, 5, 9) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 12, 2) == 1 );
assert( gamma_move(board, 3, 7, 5) == 0 );
assert( gamma_busy_fields(board, 3) == 10 );
assert( gamma_move(board, 4, 12, 4) == 0 );
assert( gamma_move(board, 4, 1, 0) == 0 );
assert( gamma_move(board, 5, 0, 5) == 0 );
assert( gamma_move(board, 5, 7, 0) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 12, 2) == 0 );
assert( gamma_move(board, 6, 12, 2) == 0 );
assert( gamma_free_fields(board, 6) == 25 );
assert( gamma_move(board, 7, 0, 5) == 0 );
assert( gamma_move(board, 7, 12, 0) == 0 );
assert( gamma_move(board, 1, 5, 8) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 1, 5) == 0 );
assert( gamma_move(board, 3, 1, 2) == 0 );
assert( gamma_move(board, 4, 9, 5) == 1 );
assert( gamma_move(board, 5, 10, 3) == 1 );
assert( gamma_move(board, 6, 2, 8) == 0 );
assert( gamma_move(board, 6, 7, 5) == 0 );
assert( gamma_move(board, 7, 4, 4) == 0 );
assert( gamma_move(board, 7, 1, 3) == 0 );
assert( gamma_move(board, 1, 11, 3) == 0 );
assert( gamma_move(board, 1, 2, 0) == 0 );


char* board502092096 = gamma_board(board);
assert( board502092096 != NULL );
assert( strcmp(board502092096, 
"635.1611.44.31.\n"
"76252431.7..4.1\n"
"167716472355.42\n"
"22347.2..43.34.\n"
"33.45.5..23416.\n"
"6.6442476.5.5.1\n") == 0);
free(board502092096);
board502092096 = NULL;
assert( gamma_move(board, 2, 5, 3) == 0 );
assert( gamma_move(board, 3, 0, 11) == 0 );
assert( gamma_move(board, 4, 5, 14) == 0 );
assert( gamma_move(board, 4, 0, 5) == 0 );
assert( gamma_move(board, 5, 1, 2) == 0 );
assert( gamma_move(board, 5, 8, 0) == 0 );
assert( gamma_move(board, 6, 2, 14) == 0 );
assert( gamma_move(board, 6, 14, 1) == 1 );
assert( gamma_golden_move(board, 7, 0, 6) == 0 );
assert( gamma_move(board, 1, 0, 1) == 0 );
assert( gamma_move(board, 1, 9, 4) == 0 );
assert( gamma_move(board, 2, 3, 5) == 1 );
assert( gamma_move(board, 2, 9, 5) == 0 );
assert( gamma_free_fields(board, 2) == 8 );
assert( gamma_move(board, 3, 5, 14) == 0 );
assert( gamma_move(board, 4, 10, 1) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 0, 13) == 0 );
assert( gamma_golden_move(board, 5, 3, 9) == 0 );
assert( gamma_move(board, 6, 5, 11) == 0 );
assert( gamma_move(board, 6, 5, 1) == 1 );
assert( gamma_golden_possible(board, 7) == 0 );
assert( gamma_move(board, 1, 8, 3) == 0 );
assert( gamma_move(board, 2, 1, 2) == 0 );
assert( gamma_move(board, 2, 13, 3) == 0 );
assert( gamma_move(board, 3, 5, 1) == 0 );
assert( gamma_move(board, 3, 3, 1) == 0 );
assert( gamma_move(board, 4, 3, 12) == 0 );
assert( gamma_move(board, 5, 11, 1) == 0 );
assert( gamma_move(board, 5, 11, 5) == 1 );


gamma_delete(board);

    return 0;
}
