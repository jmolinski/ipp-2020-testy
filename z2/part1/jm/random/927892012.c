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
uuid: 927892012
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(11, 4, 4, 3);
assert( board != NULL );


assert( gamma_move(board, 1, 2, 8) == 0 );
assert( gamma_move(board, 2, 0, 9) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 2, 9) == 0 );
assert( gamma_move(board, 3, 10, 0) == 1 );
assert( gamma_move(board, 4, 3, 6) == 0 );


char* board517822999 = gamma_board(board);
assert( board517822999 != NULL );
assert( strcmp(board517822999, 
"...........\n"
"...........\n"
"...........\n"
"..........3\n") == 0);
free(board517822999);
board517822999 = NULL;
assert( gamma_move(board, 1, 2, 2) == 1 );
assert( gamma_move(board, 1, 2, 1) == 1 );
assert( gamma_move(board, 2, 9, 0) == 1 );
assert( gamma_move(board, 2, 10, 3) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 2, 4) == 0 );
assert( gamma_move(board, 3, 0, 3) == 1 );
assert( gamma_move(board, 4, 3, 1) == 1 );
assert( gamma_move(board, 4, 1, 2) == 1 );
assert( gamma_move(board, 1, 3, 3) == 1 );
assert( gamma_move(board, 1, 6, 3) == 1 );
assert( gamma_move(board, 2, 3, 0) == 1 );
assert( gamma_move(board, 3, 6, 3) == 0 );
assert( gamma_move(board, 4, 8, 2) == 1 );
assert( gamma_busy_fields(board, 4) == 3 );
assert( gamma_move(board, 1, 2, 7) == 0 );
assert( gamma_move(board, 2, 10, 0) == 0 );
assert( gamma_move(board, 2, 7, 3) == 0 );
assert( gamma_busy_fields(board, 2) == 3 );
assert( gamma_move(board, 3, 2, 7) == 0 );
assert( gamma_move(board, 3, 6, 1) == 1 );
assert( gamma_move(board, 4, 3, 8) == 0 );
assert( gamma_move(board, 4, 3, 0) == 0 );
assert( gamma_move(board, 1, 6, 0) == 0 );
assert( gamma_move(board, 1, 6, 1) == 0 );
assert( gamma_move(board, 2, 7, 2) == 0 );
assert( gamma_move(board, 3, 3, 1) == 0 );
assert( gamma_move(board, 3, 2, 1) == 0 );
assert( gamma_move(board, 4, 3, 9) == 0 );
assert( gamma_move(board, 4, 5, 0) == 0 );
assert( gamma_move(board, 1, 10, 3) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 7, 3) == 0 );
assert( gamma_busy_fields(board, 2) == 3 );
assert( gamma_move(board, 3, 0, 7) == 0 );
assert( gamma_move(board, 4, 2, 6) == 0 );
assert( gamma_move(board, 4, 8, 0) == 0 );
assert( gamma_move(board, 1, 9, 2) == 0 );
assert( gamma_move(board, 2, 2, 0) == 1 );
assert( gamma_move(board, 3, 2, 4) == 0 );
assert( gamma_move(board, 4, 1, 9) == 0 );


char* board160532560 = gamma_board(board);
assert( board160532560 != NULL );
assert( strcmp(board160532560, 
"3..1..1...2\n"
".41.....4..\n"
"..14..3....\n"
"..22.....23\n") == 0);
free(board160532560);
board160532560 = NULL;
assert( gamma_move(board, 1, 9, 0) == 0 );
assert( gamma_move(board, 2, 1, 4) == 0 );
assert( gamma_move(board, 3, 6, 1) == 0 );
assert( gamma_move(board, 3, 6, 3) == 0 );
assert( gamma_move(board, 4, 3, 7) == 0 );
assert( gamma_free_fields(board, 4) == 9 );
assert( gamma_move(board, 3, 3, 8) == 0 );
assert( gamma_move(board, 4, 1, 9) == 0 );


char* board268017160 = gamma_board(board);
assert( board268017160 != NULL );
assert( strcmp(board268017160, 
"3..1..1...2\n"
".41.....4..\n"
"..14..3....\n"
"..22.....23\n") == 0);
free(board268017160);
board268017160 = NULL;
assert( gamma_move(board, 2, 1, 4) == 0 );
assert( gamma_move(board, 2, 7, 3) == 0 );
assert( gamma_move(board, 3, 0, 0) == 0 );
assert( gamma_move(board, 3, 4, 3) == 0 );
assert( gamma_move(board, 4, 3, 7) == 0 );
assert( gamma_move(board, 4, 7, 2) == 1 );
assert( gamma_busy_fields(board, 4) == 4 );
assert( gamma_free_fields(board, 4) == 11 );
assert( gamma_move(board, 1, 2, 2) == 0 );
assert( gamma_move(board, 1, 7, 2) == 0 );
assert( gamma_move(board, 2, 3, 4) == 0 );
assert( gamma_move(board, 2, 1, 2) == 0 );
assert( gamma_move(board, 3, 0, 0) == 0 );
assert( gamma_move(board, 3, 6, 1) == 0 );
assert( gamma_move(board, 4, 3, 5) == 0 );
assert( gamma_move(board, 1, 1, 9) == 0 );
assert( gamma_move(board, 1, 7, 0) == 0 );
assert( gamma_move(board, 2, 2, 3) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 2, 1) == 0 );


char* board269812667 = gamma_board(board);
assert( board269812667 != NULL );
assert( strcmp(board269812667, 
"3..1..1...2\n"
".41....44..\n"
"..14..3....\n"
"..22.....23\n") == 0);
free(board269812667);
board269812667 = NULL;
assert( gamma_move(board, 4, 1, 0) == 0 );
assert( gamma_move(board, 4, 9, 0) == 0 );
assert( gamma_move(board, 1, 1, 4) == 0 );
assert( gamma_move(board, 1, 2, 2) == 0 );
assert( gamma_move(board, 2, 1, 10) == 0 );


char* board118888687 = gamma_board(board);
assert( board118888687 != NULL );
assert( strcmp(board118888687, 
"3..1..1...2\n"
".41....44..\n"
"..14..3....\n"
"..22.....23\n") == 0);
free(board118888687);
board118888687 = NULL;
assert( gamma_move(board, 3, 2, 4) == 0 );
assert( gamma_move(board, 3, 10, 2) == 0 );
assert( gamma_move(board, 4, 0, 5) == 0 );
assert( gamma_move(board, 1, 2, 3) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 0, 0) == 0 );
assert( gamma_move(board, 3, 3, 1) == 0 );
assert( gamma_move(board, 4, 1, 5) == 0 );


char* board207097819 = gamma_board(board);
assert( board207097819 != NULL );
assert( strcmp(board207097819, 
"3.11..1...2\n"
".41....44..\n"
"..14..3....\n"
"..22.....23\n") == 0);
free(board207097819);
board207097819 = NULL;
assert( gamma_move(board, 2, 1, 5) == 0 );
assert( gamma_golden_move(board, 2, 0, 9) == 0 );
assert( gamma_move(board, 3, 2, 3) == 0 );
assert( gamma_move(board, 4, 3, 9) == 0 );
assert( gamma_move(board, 1, 1, 5) == 0 );
assert( gamma_move(board, 1, 6, 2) == 1 );
assert( gamma_move(board, 2, 10, 3) == 0 );
assert( gamma_move(board, 3, 7, 3) == 0 );
assert( gamma_move(board, 4, 2, 0) == 0 );
assert( gamma_move(board, 4, 8, 1) == 1 );
assert( gamma_move(board, 1, 1, 7) == 0 );
assert( gamma_move(board, 1, 10, 2) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 9, 1) == 1 );
assert( gamma_move(board, 3, 0, 6) == 0 );
assert( gamma_golden_move(board, 3, 0, 3) == 0 );
assert( gamma_move(board, 4, 1, 10) == 0 );
assert( gamma_move(board, 4, 8, 0) == 1 );
assert( gamma_move(board, 1, 0, 6) == 0 );
assert( gamma_move(board, 1, 1, 1) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );


char* board493337878 = gamma_board(board);
assert( board493337878 != NULL );
assert( strcmp(board493337878, 
"3.11..1...2\n"
".41...144.1\n"
".114..3.42.\n"
"..22....423\n") == 0);
free(board493337878);
board493337878 = NULL;
assert( gamma_move(board, 2, 8, 2) == 0 );
assert( gamma_move(board, 3, 2, 3) == 0 );
assert( gamma_move(board, 3, 3, 3) == 0 );
assert( gamma_golden_move(board, 3, 3, 6) == 0 );
assert( gamma_move(board, 4, 3, 1) == 0 );


char* board633551942 = gamma_board(board);
assert( board633551942 != NULL );
assert( strcmp(board633551942, 
"3.11..1...2\n"
".41...144.1\n"
".114..3.42.\n"
"..22....423\n") == 0);
free(board633551942);
board633551942 = NULL;
assert( gamma_move(board, 1, 2, 2) == 0 );
assert( gamma_move(board, 1, 3, 0) == 0 );


char* board371020642 = gamma_board(board);
assert( board371020642 != NULL );
assert( strcmp(board371020642, 
"3.11..1...2\n"
".41...144.1\n"
".114..3.42.\n"
"..22....423\n") == 0);
free(board371020642);
board371020642 = NULL;
assert( gamma_move(board, 2, 1, 4) == 0 );
assert( gamma_move(board, 3, 2, 5) == 0 );
assert( gamma_move(board, 3, 9, 2) == 0 );
assert( gamma_move(board, 4, 2, 3) == 0 );
assert( gamma_move(board, 4, 6, 1) == 0 );
assert( gamma_move(board, 1, 1, 10) == 0 );
assert( gamma_move(board, 1, 5, 0) == 0 );
assert( gamma_move(board, 2, 1, 7) == 0 );
assert( gamma_move(board, 3, 2, 3) == 0 );
assert( gamma_busy_fields(board, 3) == 3 );
assert( gamma_move(board, 4, 1, 0) == 0 );
assert( gamma_move(board, 4, 1, 2) == 0 );
assert( gamma_move(board, 1, 0, 2) == 0 );
assert( gamma_move(board, 1, 7, 3) == 1 );
assert( gamma_move(board, 2, 0, 3) == 0 );
assert( gamma_move(board, 3, 0, 5) == 0 );
assert( gamma_move(board, 3, 5, 2) == 0 );
assert( gamma_free_fields(board, 3) == 6 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 1, 9, 2) == 1 );
assert( gamma_busy_fields(board, 1) == 10 );
assert( gamma_move(board, 2, 4, 0) == 1 );
assert( gamma_move(board, 3, 3, 9) == 0 );
assert( gamma_move(board, 3, 0, 3) == 0 );
assert( gamma_move(board, 4, 1, 5) == 0 );
assert( gamma_move(board, 4, 1, 3) == 1 );


gamma_delete(board);

    return 0;
}
