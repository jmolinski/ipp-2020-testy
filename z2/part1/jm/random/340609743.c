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
uuid: 340609743
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(11, 8, 8, 9);
assert( board != NULL );


assert( gamma_move(board, 1, 1, 2) == 1 );
assert( gamma_move(board, 1, 6, 1) == 1 );
assert( gamma_move(board, 2, 7, 7) == 1 );
assert( gamma_move(board, 3, 8, 5) == 1 );
assert( gamma_move(board, 3, 7, 4) == 1 );
assert( gamma_move(board, 4, 6, 5) == 1 );
assert( gamma_move(board, 5, 5, 3) == 1 );
assert( gamma_move(board, 5, 2, 3) == 1 );
assert( gamma_golden_move(board, 5, 7, 7) == 1 );
assert( gamma_move(board, 6, 1, 4) == 1 );
assert( gamma_move(board, 6, 9, 5) == 1 );
assert( gamma_busy_fields(board, 6) == 2 );
assert( gamma_move(board, 7, 7, 2) == 1 );
assert( gamma_move(board, 7, 5, 2) == 1 );
assert( gamma_move(board, 8, 3, 6) == 1 );
assert( gamma_move(board, 1, 3, 7) == 1 );
assert( gamma_move(board, 1, 0, 3) == 1 );
assert( gamma_move(board, 2, 0, 6) == 1 );
assert( gamma_move(board, 2, 4, 7) == 1 );
assert( gamma_golden_move(board, 2, 6, 3) == 0 );
assert( gamma_move(board, 3, 2, 8) == 0 );
assert( gamma_move(board, 4, 4, 9) == 0 );
assert( gamma_move(board, 4, 4, 1) == 1 );
assert( gamma_move(board, 5, 7, 8) == 0 );
assert( gamma_move(board, 5, 6, 2) == 1 );
assert( gamma_move(board, 6, 0, 5) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 10, 3) == 1 );
assert( gamma_move(board, 7, 5, 3) == 0 );
assert( gamma_busy_fields(board, 7) == 3 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 5, 1) == 1 );
assert( gamma_busy_fields(board, 8) == 2 );
assert( gamma_busy_fields(board, 1) == 4 );
assert( gamma_free_fields(board, 1) == 66 );
assert( gamma_move(board, 2, 10, 0) == 1 );
assert( gamma_move(board, 2, 10, 7) == 1 );
assert( gamma_move(board, 3, 4, 9) == 0 );
assert( gamma_move(board, 3, 9, 1) == 1 );
assert( gamma_busy_fields(board, 3) == 3 );
assert( gamma_move(board, 4, 4, 9) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 2, 5) == 1 );
assert( gamma_move(board, 8, 3, 1) == 1 );
assert( gamma_move(board, 1, 6, 6) == 1 );
assert( gamma_move(board, 2, 6, 1) == 0 );
assert( gamma_move(board, 2, 0, 6) == 0 );
assert( gamma_move(board, 3, 3, 8) == 0 );
assert( gamma_move(board, 4, 5, 1) == 0 );
assert( gamma_move(board, 4, 4, 1) == 0 );
assert( gamma_move(board, 5, 3, 6) == 0 );
assert( gamma_move(board, 5, 10, 7) == 0 );
assert( gamma_move(board, 6, 4, 2) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );


char* board586226092 = gamma_board(board);
assert( board586226092 != NULL );
assert( strcmp(board586226092, 
"...12..5..2\n"
"2..8..1....\n"
"6.6...4.36.\n"
".6.....3...\n"
"1.5..5....7\n"
".1..6757...\n"
"...8481..3.\n"
"..........2\n") == 0);
free(board586226092);
board586226092 = NULL;
assert( gamma_move(board, 7, 2, 7) == 1 );
assert( gamma_move(board, 8, 4, 8) == 0 );
assert( gamma_move(board, 1, 3, 5) == 1 );
assert( gamma_move(board, 3, 6, 1) == 0 );
assert( gamma_move(board, 3, 5, 5) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 4, 0) == 1 );
assert( gamma_move(board, 4, 1, 7) == 1 );
assert( gamma_move(board, 5, 8, 1) == 1 );
assert( gamma_move(board, 6, 6, 4) == 1 );
assert( gamma_busy_fields(board, 6) == 6 );
assert( gamma_move(board, 7, 6, 0) == 1 );
assert( gamma_move(board, 8, 4, 5) == 1 );
assert( gamma_move(board, 8, 9, 6) == 1 );
assert( gamma_move(board, 1, 0, 7) == 1 );
assert( gamma_move(board, 1, 8, 2) == 1 );
assert( gamma_golden_move(board, 1, 2, 5) == 1 );
assert( gamma_move(board, 2, 6, 10) == 0 );
assert( gamma_busy_fields(board, 2) == 4 );
assert( gamma_move(board, 3, 5, 0) == 1 );
assert( gamma_move(board, 4, 10, 3) == 0 );
assert( gamma_move(board, 5, 10, 3) == 0 );
assert( gamma_move(board, 6, 1, 10) == 0 );
assert( gamma_move(board, 7, 8, 0) == 1 );
assert( gamma_move(board, 7, 7, 4) == 0 );
assert( gamma_move(board, 8, 6, 1) == 0 );
assert( gamma_move(board, 1, 7, 6) == 1 );
assert( gamma_move(board, 2, 6, 4) == 0 );
assert( gamma_move(board, 3, 2, 0) == 1 );
assert( gamma_move(board, 4, 9, 3) == 1 );
assert( gamma_move(board, 5, 10, 1) == 1 );
assert( gamma_move(board, 5, 10, 4) == 1 );
assert( gamma_move(board, 6, 3, 7) == 0 );


char* board827739682 = gamma_board(board);
assert( board827739682 != NULL );
assert( strcmp(board827739682, 
"14712..5..2\n"
"2..8..11.8.\n"
"6.11834.36.\n"
".6....63..5\n"
"1.5..5...47\n"
".1..67571..\n"
"...8481.535\n"
"..3.437.7.2\n") == 0);
free(board827739682);
board827739682 = NULL;
assert( gamma_move(board, 7, 4, 7) == 0 );
assert( gamma_move(board, 8, 2, 0) == 0 );
assert( gamma_move(board, 8, 6, 1) == 0 );
assert( gamma_move(board, 1, 2, 9) == 0 );
assert( gamma_busy_fields(board, 1) == 10 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 0, 2) == 1 );
assert( gamma_move(board, 2, 7, 3) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_golden_move(board, 2, 6, 3) == 0 );
assert( gamma_move(board, 3, 7, 9) == 0 );
assert( gamma_move(board, 3, 4, 6) == 1 );
assert( gamma_busy_fields(board, 3) == 7 );
assert( gamma_move(board, 4, 5, 6) == 1 );
assert( gamma_move(board, 5, 3, 4) == 1 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 3, 4) == 0 );
assert( gamma_move(board, 6, 0, 1) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 0, 9) == 0 );
assert( gamma_move(board, 8, 5, 10) == 0 );
assert( gamma_move(board, 1, 7, 4) == 0 );
assert( gamma_move(board, 2, 2, 2) == 1 );
assert( gamma_move(board, 2, 8, 2) == 0 );
assert( gamma_move(board, 3, 5, 3) == 0 );
assert( gamma_busy_fields(board, 3) == 7 );
assert( gamma_move(board, 4, 2, 9) == 0 );
assert( gamma_move(board, 4, 0, 0) == 1 );
assert( gamma_move(board, 5, 6, 1) == 0 );
assert( gamma_busy_fields(board, 5) == 8 );
assert( gamma_free_fields(board, 5) == 32 );
assert( gamma_move(board, 6, 7, 9) == 0 );
assert( gamma_move(board, 7, 2, 6) == 1 );
assert( gamma_move(board, 7, 0, 0) == 0 );
assert( gamma_move(board, 8, 5, 3) == 0 );


char* board863689194 = gamma_board(board);
assert( board863689194 != NULL );
assert( strcmp(board863689194, 
"14712..5..2\n"
"2.783411.8.\n"
"6.11834.36.\n"
".6.5..63..5\n"
"1.5..5.2.47\n"
"212.67571..\n"
"6..8481.535\n"
"4.3.437.7.2\n") == 0);
free(board863689194);
board863689194 = NULL;
assert( gamma_move(board, 1, 5, 7) == 1 );
assert( gamma_move(board, 2, 5, 1) == 0 );
assert( gamma_move(board, 2, 3, 4) == 0 );
assert( gamma_busy_fields(board, 2) == 7 );
assert( gamma_move(board, 3, 2, 3) == 0 );
assert( gamma_move(board, 3, 1, 7) == 0 );
assert( gamma_free_fields(board, 3) == 30 );
assert( gamma_move(board, 4, 6, 8) == 0 );
assert( gamma_move(board, 5, 2, 10) == 0 );
assert( gamma_move(board, 5, 7, 2) == 0 );
assert( gamma_move(board, 6, 2, 4) == 1 );
assert( gamma_move(board, 7, 0, 1) == 0 );
assert( gamma_move(board, 8, 5, 3) == 0 );
assert( gamma_move(board, 8, 3, 1) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 1, 7, 9) == 0 );
assert( gamma_busy_fields(board, 1) == 11 );
assert( gamma_move(board, 2, 6, 2) == 0 );
assert( gamma_move(board, 2, 3, 0) == 1 );
assert( gamma_move(board, 3, 6, 2) == 0 );
assert( gamma_busy_fields(board, 3) == 7 );
assert( gamma_move(board, 4, 5, 2) == 0 );
assert( gamma_move(board, 4, 1, 2) == 0 );
assert( gamma_move(board, 5, 2, 3) == 0 );
assert( gamma_busy_fields(board, 5) == 8 );
assert( gamma_move(board, 6, 7, 8) == 0 );
assert( gamma_free_fields(board, 6) == 28 );
assert( gamma_golden_move(board, 6, 5, 5) == 1 );
assert( gamma_move(board, 7, 1, 7) == 0 );
assert( gamma_move(board, 8, 4, 4) == 1 );
assert( gamma_move(board, 8, 5, 7) == 0 );
assert( gamma_free_fields(board, 8) == 27 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 1, 3, 6) == 0 );
assert( gamma_move(board, 1, 9, 3) == 0 );
assert( gamma_busy_fields(board, 1) == 11 );
assert( gamma_move(board, 2, 2, 7) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 3, 3) == 1 );
assert( gamma_move(board, 4, 2, 10) == 0 );
assert( gamma_move(board, 4, 2, 6) == 0 );
assert( gamma_busy_fields(board, 4) == 7 );
assert( gamma_free_fields(board, 4) == 26 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 6, 1) == 0 );
assert( gamma_free_fields(board, 5) == 26 );


char* board418834466 = gamma_board(board);
assert( board418834466 != NULL );
assert( strcmp(board418834466, 
"147121.5..2\n"
"2.783411.8.\n"
"6.11864.36.\n"
".6658.63..5\n"
"1.53.5.2.47\n"
"212.67571..\n"
"6..8481.535\n"
"4.32437.7.2\n") == 0);
free(board418834466);
board418834466 = NULL;
assert( gamma_move(board, 6, 5, 1) == 0 );
assert( gamma_free_fields(board, 6) == 26 );
assert( gamma_move(board, 7, 2, 3) == 0 );
assert( gamma_free_fields(board, 7) == 26 );
assert( gamma_move(board, 8, 1, 2) == 0 );
assert( gamma_move(board, 8, 8, 1) == 0 );


char* board187852411 = gamma_board(board);
assert( board187852411 != NULL );
assert( strcmp(board187852411, 
"147121.5..2\n"
"2.783411.8.\n"
"6.11864.36.\n"
".6658.63..5\n"
"1.53.5.2.47\n"
"212.67571..\n"
"6..8481.535\n"
"4.32437.7.2\n") == 0);
free(board187852411);
board187852411 = NULL;
assert( gamma_move(board, 1, 2, 0) == 0 );
assert( gamma_move(board, 1, 9, 6) == 0 );
assert( gamma_golden_move(board, 1, 0, 0) == 0 );
assert( gamma_move(board, 2, 7, 5) == 1 );
assert( gamma_free_fields(board, 2) == 8 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 2, 6) == 0 );
assert( gamma_free_fields(board, 3) == 25 );
assert( gamma_golden_move(board, 3, 0, 8) == 0 );
assert( gamma_move(board, 4, 10, 3) == 0 );
assert( gamma_move(board, 5, 0, 9) == 0 );
assert( gamma_move(board, 5, 6, 7) == 1 );
assert( gamma_move(board, 7, 3, 1) == 0 );
assert( gamma_move(board, 8, 2, 3) == 0 );
assert( gamma_move(board, 1, 0, 0) == 0 );
assert( gamma_move(board, 2, 8, 4) == 0 );
assert( gamma_free_fields(board, 2) == 8 );
assert( gamma_move(board, 3, 9, 4) == 1 );
assert( gamma_move(board, 3, 3, 2) == 1 );
assert( gamma_move(board, 4, 7, 9) == 0 );
assert( gamma_move(board, 4, 10, 0) == 0 );
assert( gamma_move(board, 5, 6, 1) == 0 );
assert( gamma_move(board, 5, 7, 5) == 0 );


char* board999177483 = gamma_board(board);
assert( board999177483 != NULL );
assert( strcmp(board999177483, 
"14712155..2\n"
"2.783411.8.\n"
"6.11864236.\n"
".6658.63.35\n"
"1.53.5.2.47\n"
"212367571..\n"
"6..8481.535\n"
"4.32437.7.2\n") == 0);
free(board999177483);
board999177483 = NULL;
assert( gamma_move(board, 6, 5, 10) == 0 );
assert( gamma_move(board, 6, 4, 6) == 0 );
assert( gamma_move(board, 7, 4, 0) == 0 );
assert( gamma_move(board, 7, 2, 6) == 0 );
assert( gamma_busy_fields(board, 7) == 7 );
assert( gamma_move(board, 8, 3, 3) == 0 );
assert( gamma_move(board, 8, 5, 6) == 0 );
assert( gamma_move(board, 1, 3, 8) == 0 );
assert( gamma_move(board, 1, 1, 0) == 0 );
assert( gamma_move(board, 2, 1, 2) == 0 );
assert( gamma_busy_fields(board, 2) == 9 );
assert( gamma_move(board, 3, 4, 8) == 0 );
assert( gamma_move(board, 3, 8, 7) == 1 );
assert( gamma_move(board, 4, 7, 9) == 0 );
assert( gamma_move(board, 4, 5, 2) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 1, 1) == 1 );
assert( gamma_move(board, 6, 5, 10) == 0 );
assert( gamma_busy_fields(board, 6) == 8 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 7, 7, 9) == 0 );
assert( gamma_move(board, 7, 3, 0) == 0 );
assert( gamma_move(board, 1, 3, 8) == 0 );
assert( gamma_move(board, 1, 4, 4) == 0 );
assert( gamma_move(board, 2, 5, 10) == 0 );
assert( gamma_move(board, 3, 0, 1) == 0 );
assert( gamma_move(board, 3, 8, 2) == 0 );
assert( gamma_move(board, 4, 10, 1) == 0 );
assert( gamma_move(board, 5, 9, 6) == 0 );
assert( gamma_free_fields(board, 5) == 9 );
assert( gamma_move(board, 6, 6, 1) == 0 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 7, 10, 1) == 0 );
assert( gamma_move(board, 8, 3, 6) == 0 );
assert( gamma_move(board, 8, 4, 3) == 1 );
assert( gamma_move(board, 2, 9, 3) == 0 );
assert( gamma_move(board, 3, 0, 9) == 0 );
assert( gamma_move(board, 3, 8, 1) == 0 );
assert( gamma_golden_move(board, 3, 2, 7) == 0 );
assert( gamma_move(board, 4, 5, 6) == 0 );
assert( gamma_move(board, 5, 4, 4) == 0 );
assert( gamma_move(board, 6, 3, 1) == 0 );


char* board675792873 = gamma_board(board);
assert( board675792873 != NULL );
assert( strcmp(board675792873, 
"147121553.2\n"
"2.783411.8.\n"
"6.11864236.\n"
".6658.63.35\n"
"1.5385.2.47\n"
"212367571..\n"
"65.8481.535\n"
"4.32437.7.2\n") == 0);
free(board675792873);
board675792873 = NULL;
assert( gamma_move(board, 8, 0, 7) == 0 );
assert( gamma_move(board, 8, 9, 1) == 0 );
assert( gamma_busy_fields(board, 8) == 7 );
assert( gamma_move(board, 1, 5, 1) == 0 );
assert( gamma_move(board, 2, 0, 7) == 0 );
assert( gamma_move(board, 2, 0, 1) == 0 );
assert( gamma_move(board, 3, 6, 6) == 0 );
assert( gamma_move(board, 3, 9, 7) == 1 );
assert( gamma_move(board, 4, 0, 9) == 0 );
assert( gamma_busy_fields(board, 4) == 7 );
assert( gamma_move(board, 5, 3, 3) == 0 );
assert( gamma_move(board, 6, 4, 5) == 0 );
assert( gamma_move(board, 7, 5, 1) == 0 );
assert( gamma_move(board, 8, 6, 10) == 0 );
assert( gamma_move(board, 8, 3, 0) == 0 );
assert( gamma_move(board, 2, 3, 6) == 0 );
assert( gamma_move(board, 3, 5, 4) == 0 );
assert( gamma_move(board, 3, 8, 2) == 0 );
assert( gamma_move(board, 4, 6, 0) == 0 );
assert( gamma_move(board, 5, 8, 1) == 0 );
assert( gamma_free_fields(board, 5) == 8 );


char* board514530344 = gamma_board(board);
assert( board514530344 != NULL );
assert( strcmp(board514530344, 
"14712155332\n"
"2.783411.8.\n"
"6.11864236.\n"
".6658.63.35\n"
"1.5385.2.47\n"
"212367571..\n"
"65.8481.535\n"
"4.32437.7.2\n") == 0);
free(board514530344);
board514530344 = NULL;
assert( gamma_move(board, 6, 1, 7) == 0 );
assert( gamma_move(board, 6, 6, 2) == 0 );
assert( gamma_move(board, 7, 1, 2) == 0 );
assert( gamma_move(board, 7, 6, 6) == 0 );
assert( gamma_move(board, 8, 1, 2) == 0 );
assert( gamma_move(board, 1, 0, 9) == 0 );
assert( gamma_move(board, 1, 6, 7) == 0 );
assert( gamma_move(board, 2, 3, 6) == 0 );
assert( gamma_move(board, 2, 1, 1) == 0 );
assert( gamma_free_fields(board, 2) == 6 );
assert( gamma_move(board, 3, 0, 9) == 0 );
assert( gamma_move(board, 3, 9, 6) == 0 );
assert( gamma_move(board, 4, 3, 1) == 0 );
assert( gamma_move(board, 5, 2, 4) == 0 );
assert( gamma_move(board, 6, 3, 6) == 0 );
assert( gamma_busy_fields(board, 6) == 8 );
assert( gamma_move(board, 8, 5, 10) == 0 );
assert( gamma_move(board, 8, 10, 7) == 0 );
assert( gamma_free_fields(board, 8) == 18 );
assert( gamma_move(board, 1, 6, 8) == 0 );
assert( gamma_move(board, 2, 4, 5) == 0 );
assert( gamma_move(board, 2, 4, 7) == 0 );
assert( gamma_move(board, 3, 0, 1) == 0 );
assert( gamma_move(board, 3, 4, 5) == 0 );
assert( gamma_move(board, 4, 1, 2) == 0 );
assert( gamma_move(board, 4, 0, 1) == 0 );
assert( gamma_free_fields(board, 4) == 18 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 0, 9) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 4, 5) == 0 );
assert( gamma_move(board, 6, 9, 4) == 0 );
assert( gamma_move(board, 7, 8, 6) == 1 );
assert( gamma_move(board, 1, 0, 9) == 0 );
assert( gamma_move(board, 1, 6, 2) == 0 );
assert( gamma_move(board, 2, 10, 4) == 0 );
assert( gamma_move(board, 3, 5, 1) == 0 );
assert( gamma_move(board, 4, 2, 7) == 0 );
assert( gamma_golden_move(board, 4, 1, 6) == 0 );
assert( gamma_busy_fields(board, 5) == 10 );
assert( gamma_golden_move(board, 5, 3, 3) == 0 );
assert( gamma_move(board, 6, 0, 9) == 0 );
assert( gamma_move(board, 6, 8, 2) == 0 );
assert( gamma_move(board, 7, 2, 2) == 0 );
assert( gamma_busy_fields(board, 7) == 8 );
assert( gamma_move(board, 8, 0, 1) == 0 );
assert( gamma_move(board, 8, 10, 6) == 1 );


gamma_delete(board);

    return 0;
}
