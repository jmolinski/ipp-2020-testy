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
uuid: 776610487
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(8, 9, 6, 4);
assert( board != NULL );


assert( gamma_move(board, 1, 0, 3) == 1 );
assert( gamma_move(board, 2, 8, 7) == 0 );
assert( gamma_busy_fields(board, 2) == 0 );
assert( gamma_golden_move(board, 2, 3, 0) == 0 );
assert( gamma_move(board, 3, 1, 4) == 1 );
assert( gamma_move(board, 3, 3, 7) == 1 );
assert( gamma_move(board, 4, 6, 7) == 1 );
assert( gamma_move(board, 5, 6, 5) == 1 );
assert( gamma_move(board, 5, 5, 7) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 2, 6) == 1 );
assert( gamma_move(board, 1, 0, 8) == 1 );
assert( gamma_move(board, 1, 7, 1) == 1 );
assert( gamma_move(board, 2, 3, 8) == 1 );
assert( gamma_move(board, 2, 4, 1) == 1 );
assert( gamma_busy_fields(board, 2) == 2 );
assert( gamma_move(board, 3, 0, 0) == 1 );
assert( gamma_move(board, 4, 1, 5) == 1 );
assert( gamma_move(board, 4, 0, 2) == 1 );
assert( gamma_move(board, 5, 3, 7) == 0 );
assert( gamma_move(board, 5, 7, 8) == 1 );
assert( gamma_move(board, 6, 4, 5) == 1 );
assert( gamma_move(board, 6, 3, 3) == 1 );
assert( gamma_move(board, 1, 0, 0) == 0 );
assert( gamma_move(board, 2, 1, 2) == 1 );
assert( gamma_move(board, 3, 6, 6) == 1 );
assert( gamma_move(board, 3, 6, 2) == 0 );
assert( gamma_move(board, 4, 2, 3) == 1 );
assert( gamma_move(board, 4, 3, 3) == 0 );
assert( gamma_free_fields(board, 4) == 9 );
assert( gamma_move(board, 5, 2, 3) == 0 );
assert( gamma_move(board, 6, 7, 7) == 1 );
assert( gamma_move(board, 6, 7, 3) == 0 );
assert( gamma_move(board, 1, 3, 8) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );


char* board476048771 = gamma_board(board);
assert( board476048771 != NULL );
assert( strcmp(board476048771, 
"1..2...5\n"
"...3.546\n"
"..6...3.\n"
".4..6.5.\n"
".3......\n"
"1.46....\n"
"42......\n"
"....2..1\n"
"3.......\n") == 0);
free(board476048771);
board476048771 = NULL;
assert( gamma_move(board, 2, 1, 3) == 1 );
assert( gamma_move(board, 3, 2, 5) == 0 );
assert( gamma_move(board, 4, 1, 1) == 0 );
assert( gamma_busy_fields(board, 4) == 4 );
assert( gamma_move(board, 5, 2, 3) == 0 );
assert( gamma_move(board, 5, 0, 0) == 0 );
assert( gamma_move(board, 6, 2, 5) == 1 );
assert( gamma_move(board, 1, 6, 0) == 1 );
assert( gamma_move(board, 2, 0, 3) == 0 );
assert( gamma_move(board, 2, 5, 3) == 1 );
assert( gamma_move(board, 3, 2, 6) == 0 );
assert( gamma_move(board, 3, 2, 7) == 1 );
assert( gamma_move(board, 4, 4, 2) == 0 );
assert( gamma_busy_fields(board, 4) == 4 );
assert( gamma_move(board, 5, 3, 8) == 0 );
assert( gamma_move(board, 5, 0, 8) == 0 );
assert( gamma_move(board, 6, 6, 3) == 0 );
assert( gamma_move(board, 6, 4, 4) == 1 );
assert( gamma_move(board, 1, 2, 3) == 0 );
assert( gamma_move(board, 2, 2, 4) == 0 );


char* board655407920 = gamma_board(board);
assert( board655407920 != NULL );
assert( strcmp(board655407920, 
"1..2...5\n"
"..33.546\n"
"..6...3.\n"
".46.6.5.\n"
".3..6...\n"
"1246.2..\n"
"42......\n"
"....2..1\n"
"3.....1.\n") == 0);
free(board655407920);
board655407920 = NULL;
assert( gamma_move(board, 3, 8, 6) == 0 );
assert( gamma_move(board, 3, 4, 2) == 0 );
assert( gamma_move(board, 4, 1, 3) == 0 );
assert( gamma_move(board, 4, 4, 0) == 0 );
assert( gamma_busy_fields(board, 4) == 4 );
assert( gamma_move(board, 5, 0, 8) == 0 );
assert( gamma_move(board, 6, 3, 6) == 1 );
assert( gamma_move(board, 1, 8, 4) == 0 );
assert( gamma_move(board, 2, 6, 0) == 0 );
assert( gamma_move(board, 3, 2, 3) == 0 );
assert( gamma_move(board, 5, 2, 6) == 0 );
assert( gamma_move(board, 6, 4, 6) == 1 );
assert( gamma_move(board, 6, 7, 7) == 0 );
assert( gamma_move(board, 1, 8, 5) == 0 );
assert( gamma_move(board, 1, 0, 0) == 0 );
assert( gamma_busy_fields(board, 1) == 4 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 3, 7) == 0 );
assert( gamma_move(board, 2, 2, 3) == 0 );
assert( gamma_move(board, 3, 1, 2) == 0 );
assert( gamma_move(board, 3, 0, 5) == 0 );
assert( gamma_golden_move(board, 3, 7, 3) == 0 );
assert( gamma_move(board, 4, 5, 4) == 0 );
assert( gamma_busy_fields(board, 4) == 4 );
assert( gamma_golden_move(board, 4, 1, 7) == 0 );
assert( gamma_move(board, 5, 7, 4) == 1 );
assert( gamma_free_fields(board, 5) == 8 );


char* board738070540 = gamma_board(board);
assert( board738070540 != NULL );
assert( strcmp(board738070540, 
"1..2...5\n"
"..33.546\n"
"..666.3.\n"
".46.6.5.\n"
".3..6..5\n"
"1246.2..\n"
"42......\n"
"....2..1\n"
"3.....1.\n") == 0);
free(board738070540);
board738070540 = NULL;
assert( gamma_move(board, 1, 8, 2) == 0 );
assert( gamma_free_fields(board, 1) == 7 );
assert( gamma_move(board, 2, 8, 2) == 0 );
assert( gamma_move(board, 3, 0, 2) == 0 );
assert( gamma_move(board, 3, 2, 5) == 0 );
assert( gamma_move(board, 4, 8, 1) == 0 );
assert( gamma_move(board, 5, 5, 0) == 0 );
assert( gamma_move(board, 6, 5, 3) == 0 );
assert( gamma_move(board, 1, 0, 4) == 1 );
assert( gamma_move(board, 2, 6, 4) == 0 );
assert( gamma_free_fields(board, 2) == 12 );


char* board338447028 = gamma_board(board);
assert( board338447028 != NULL );
assert( strcmp(board338447028, 
"1..2...5\n"
"..33.546\n"
"..666.3.\n"
".46.6.5.\n"
"13..6..5\n"
"1246.2..\n"
"42......\n"
"....2..1\n"
"3.....1.\n") == 0);
free(board338447028);
board338447028 = NULL;
assert( gamma_move(board, 3, 4, 6) == 0 );
assert( gamma_move(board, 4, 5, 7) == 0 );
assert( gamma_move(board, 5, 2, 5) == 0 );
assert( gamma_move(board, 5, 1, 2) == 0 );
assert( gamma_move(board, 6, 5, 5) == 1 );
assert( gamma_move(board, 6, 7, 6) == 1 );
assert( gamma_move(board, 1, 1, 0) == 0 );
assert( gamma_move(board, 2, 6, 7) == 0 );
assert( gamma_move(board, 2, 1, 6) == 0 );
assert( gamma_golden_move(board, 2, 8, 0) == 0 );
assert( gamma_move(board, 3, 3, 6) == 0 );
assert( gamma_move(board, 4, 2, 4) == 1 );
assert( gamma_move(board, 4, 4, 2) == 0 );
assert( gamma_free_fields(board, 4) == 6 );
assert( gamma_golden_move(board, 4, 4, 7) == 0 );
assert( gamma_move(board, 6, 8, 2) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 2, 6) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 2, 5) == 0 );
assert( gamma_move(board, 2, 2, 1) == 0 );
assert( gamma_move(board, 3, 1, 6) == 0 );
assert( gamma_move(board, 3, 6, 1) == 0 );
assert( gamma_move(board, 4, 3, 5) == 0 );
assert( gamma_move(board, 6, 4, 3) == 1 );
assert( gamma_move(board, 1, 0, 5) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 1, 3) == 0 );
assert( gamma_move(board, 2, 4, 5) == 0 );
assert( gamma_move(board, 3, 6, 5) == 0 );
assert( gamma_free_fields(board, 3) == 6 );
assert( gamma_move(board, 4, 0, 5) == 0 );
assert( gamma_free_fields(board, 4) == 5 );
assert( gamma_move(board, 5, 1, 3) == 0 );
assert( gamma_busy_fields(board, 5) == 4 );
assert( gamma_move(board, 1, 8, 5) == 0 );
assert( gamma_move(board, 1, 5, 8) == 0 );
assert( gamma_move(board, 2, 7, 1) == 0 );
assert( gamma_move(board, 3, 6, 3) == 0 );
assert( gamma_move(board, 4, 2, 7) == 0 );
assert( gamma_move(board, 4, 1, 6) == 1 );
assert( gamma_move(board, 5, 3, 6) == 0 );
assert( gamma_move(board, 6, 2, 4) == 0 );
assert( gamma_move(board, 1, 8, 4) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );


char* board379167409 = gamma_board(board);
assert( board379167409 != NULL );
assert( strcmp(board379167409, 
"1..2...5\n"
"..33.546\n"
".4666.36\n"
"146.665.\n"
"134.6..5\n"
"124662..\n"
"42......\n"
"....2..1\n"
"3.....1.\n") == 0);
free(board379167409);
board379167409 = NULL;
assert( gamma_move(board, 2, 0, 4) == 0 );
assert( gamma_busy_fields(board, 2) == 5 );
assert( gamma_move(board, 3, 7, 0) == 0 );
assert( gamma_move(board, 3, 2, 3) == 0 );
assert( gamma_busy_fields(board, 3) == 5 );
assert( gamma_move(board, 4, 3, 1) == 0 );
assert( gamma_move(board, 6, 6, 5) == 0 );
assert( gamma_move(board, 6, 3, 0) == 1 );
assert( gamma_move(board, 1, 0, 2) == 0 );
assert( gamma_busy_fields(board, 1) == 6 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 0, 0) == 0 );
assert( gamma_busy_fields(board, 3) == 5 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 7, 1) == 0 );
assert( gamma_move(board, 5, 1, 2) == 0 );
assert( gamma_move(board, 6, 1, 0) == 1 );
assert( gamma_move(board, 6, 2, 3) == 0 );
assert( gamma_move(board, 1, 8, 5) == 0 );
assert( gamma_move(board, 1, 7, 1) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 2, 4) == 0 );
assert( gamma_move(board, 3, 2, 5) == 0 );
assert( gamma_move(board, 3, 4, 8) == 0 );
assert( gamma_move(board, 4, 1, 0) == 0 );
assert( gamma_move(board, 5, 6, 5) == 0 );
assert( gamma_move(board, 5, 1, 2) == 0 );
assert( gamma_move(board, 6, 1, 1) == 1 );
assert( gamma_move(board, 6, 1, 3) == 0 );
assert( gamma_move(board, 1, 4, 6) == 0 );
assert( gamma_move(board, 1, 2, 7) == 0 );
assert( gamma_move(board, 2, 5, 3) == 0 );
assert( gamma_move(board, 2, 5, 0) == 0 );
assert( gamma_move(board, 3, 3, 6) == 0 );
assert( gamma_move(board, 3, 3, 6) == 0 );
assert( gamma_move(board, 4, 2, 5) == 0 );
assert( gamma_move(board, 4, 2, 5) == 0 );
assert( gamma_free_fields(board, 5) == 7 );
assert( gamma_move(board, 6, 6, 0) == 0 );
assert( gamma_move(board, 1, 7, 0) == 1 );
assert( gamma_move(board, 1, 7, 4) == 0 );
assert( gamma_move(board, 2, 2, 3) == 0 );
assert( gamma_busy_fields(board, 2) == 5 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 2, 2) == 0 );
assert( gamma_move(board, 3, 2, 0) == 0 );
assert( gamma_move(board, 4, 2, 5) == 0 );
assert( gamma_move(board, 4, 6, 5) == 0 );
assert( gamma_move(board, 5, 7, 1) == 0 );
assert( gamma_move(board, 6, 7, 1) == 0 );
assert( gamma_move(board, 6, 3, 4) == 1 );
assert( gamma_move(board, 1, 2, 4) == 0 );
assert( gamma_move(board, 2, 4, 5) == 0 );
assert( gamma_move(board, 3, 1, 0) == 0 );
assert( gamma_move(board, 3, 7, 5) == 0 );
assert( gamma_golden_move(board, 3, 3, 3) == 0 );
assert( gamma_move(board, 4, 7, 1) == 0 );
assert( gamma_free_fields(board, 4) == 5 );
assert( gamma_move(board, 5, 6, 3) == 0 );
assert( gamma_move(board, 6, 2, 2) == 0 );
assert( gamma_move(board, 1, 0, 5) == 0 );
assert( gamma_move(board, 1, 5, 3) == 0 );


char* board801750255 = gamma_board(board);
assert( board801750255 != NULL );
assert( strcmp(board801750255, 
"1..2...5\n"
"..33.546\n"
".4666.36\n"
"146.665.\n"
"13466..5\n"
"124662..\n"
"42......\n"
".6..2..1\n"
"36.6..11\n") == 0);
free(board801750255);
board801750255 = NULL;
assert( gamma_move(board, 2, 1, 2) == 0 );
assert( gamma_move(board, 3, 3, 6) == 0 );
assert( gamma_move(board, 4, 3, 4) == 0 );
assert( gamma_move(board, 4, 4, 7) == 0 );
assert( gamma_free_fields(board, 4) == 5 );
assert( gamma_move(board, 5, 6, 5) == 0 );
assert( gamma_free_fields(board, 5) == 7 );
assert( gamma_move(board, 6, 7, 1) == 0 );
assert( gamma_move(board, 6, 4, 6) == 0 );
assert( gamma_move(board, 1, 5, 2) == 1 );


char* board411039226 = gamma_board(board);
assert( board411039226 != NULL );
assert( strcmp(board411039226, 
"1..2...5\n"
"..33.546\n"
".4666.36\n"
"146.665.\n"
"13466..5\n"
"124662..\n"
"42...1..\n"
".6..2..1\n"
"36.6..11\n") == 0);
free(board411039226);
board411039226 = NULL;
assert( gamma_move(board, 2, 0, 4) == 0 );
assert( gamma_busy_fields(board, 2) == 5 );


char* board952683733 = gamma_board(board);
assert( board952683733 != NULL );
assert( strcmp(board952683733, 
"1..2...5\n"
"..33.546\n"
".4666.36\n"
"146.665.\n"
"13466..5\n"
"124662..\n"
"42...1..\n"
".6..2..1\n"
"36.6..11\n") == 0);
free(board952683733);
board952683733 = NULL;
assert( gamma_move(board, 3, 2, 3) == 0 );
assert( gamma_move(board, 4, 5, 2) == 0 );
assert( gamma_move(board, 4, 0, 6) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 8, 1) == 0 );
assert( gamma_move(board, 5, 1, 5) == 0 );
assert( gamma_free_fields(board, 5) == 7 );
assert( gamma_golden_move(board, 5, 1, 7) == 0 );
assert( gamma_move(board, 1, 5, 7) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 3, 7, 0) == 0 );
assert( gamma_move(board, 3, 7, 5) == 0 );
assert( gamma_move(board, 4, 2, 7) == 0 );
assert( gamma_move(board, 4, 6, 5) == 0 );
assert( gamma_move(board, 5, 2, 7) == 0 );
assert( gamma_move(board, 5, 7, 0) == 0 );
assert( gamma_move(board, 6, 5, 3) == 0 );
assert( gamma_move(board, 6, 1, 1) == 0 );
assert( gamma_busy_fields(board, 6) == 15 );
assert( gamma_move(board, 1, 7, 1) == 0 );
assert( gamma_move(board, 1, 1, 1) == 0 );
assert( gamma_move(board, 2, 2, 4) == 0 );


char* board661497099 = gamma_board(board);
assert( board661497099 != NULL );
assert( strcmp(board661497099, 
"1..2...5\n"
"..33.546\n"
"44666.36\n"
"146.665.\n"
"13466..5\n"
"124662..\n"
"42...1..\n"
".6..2..1\n"
"36.6..11\n") == 0);
free(board661497099);
board661497099 = NULL;
assert( gamma_move(board, 3, 7, 3) == 0 );
assert( gamma_move(board, 4, 1, 4) == 0 );
assert( gamma_move(board, 5, 2, 3) == 0 );
assert( gamma_move(board, 5, 6, 2) == 0 );
assert( gamma_move(board, 6, 2, 2) == 0 );


gamma_delete(board);

    return 0;
}
