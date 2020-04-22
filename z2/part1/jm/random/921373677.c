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
uuid: 921373677
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(8, 8, 5, 9);
assert( board != NULL );


assert( gamma_move(board, 1, 4, 3) == 1 );
assert( gamma_busy_fields(board, 1) == 1 );
assert( gamma_move(board, 3, 7, 4) == 1 );
assert( gamma_move(board, 4, 5, 0) == 1 );
assert( gamma_move(board, 4, 4, 5) == 1 );
assert( gamma_move(board, 5, 7, 2) == 1 );
assert( gamma_move(board, 1, 3, 6) == 1 );
assert( gamma_move(board, 1, 4, 2) == 1 );
assert( gamma_move(board, 2, 7, 7) == 1 );
assert( gamma_move(board, 4, 2, 6) == 1 );
assert( gamma_move(board, 5, 3, 0) == 1 );
assert( gamma_move(board, 5, 1, 2) == 1 );
assert( gamma_move(board, 1, 2, 6) == 0 );
assert( gamma_move(board, 2, 7, 4) == 0 );
assert( gamma_move(board, 2, 6, 3) == 1 );
assert( gamma_move(board, 3, 7, 6) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_golden_move(board, 3, 0, 3) == 0 );
assert( gamma_move(board, 4, 0, 0) == 1 );
assert( gamma_move(board, 4, 4, 3) == 0 );
assert( gamma_busy_fields(board, 4) == 4 );
assert( gamma_golden_move(board, 4, 7, 7) == 1 );
assert( gamma_move(board, 5, 3, 3) == 1 );
assert( gamma_move(board, 5, 7, 1) == 1 );
assert( gamma_move(board, 1, 0, 6) == 1 );
assert( gamma_move(board, 1, 0, 6) == 0 );


char* board481951689 = gamma_board(board);
assert( board481951689 != NULL );
assert( strcmp(board481951689, 
".......4\n"
"1.41...3\n"
"....4...\n"
".......3\n"
"...51.2.\n"
".5..1..5\n"
".......5\n"
"4..5.4..\n") == 0);
free(board481951689);
board481951689 = NULL;
assert( gamma_move(board, 2, 4, 2) == 0 );
assert( gamma_move(board, 3, 5, 5) == 1 );
assert( gamma_move(board, 4, 3, 2) == 1 );
assert( gamma_move(board, 4, 5, 3) == 1 );
assert( gamma_move(board, 5, 1, 2) == 0 );
assert( gamma_free_fields(board, 5) == 44 );
assert( gamma_move(board, 1, 2, 5) == 1 );
assert( gamma_move(board, 2, 2, 5) == 0 );
assert( gamma_move(board, 3, 6, 1) == 1 );
assert( gamma_move(board, 3, 4, 5) == 0 );
assert( gamma_busy_fields(board, 3) == 4 );
assert( gamma_move(board, 4, 7, 5) == 1 );
assert( gamma_move(board, 4, 6, 1) == 0 );
assert( gamma_move(board, 5, 2, 5) == 0 );
assert( gamma_move(board, 5, 7, 7) == 0 );
assert( gamma_busy_fields(board, 5) == 5 );
assert( gamma_move(board, 1, 5, 1) == 1 );
assert( gamma_move(board, 2, 6, 4) == 1 );
assert( gamma_move(board, 3, 3, 6) == 0 );
assert( gamma_move(board, 4, 3, 0) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 2, 0) == 1 );
assert( gamma_busy_fields(board, 5) == 6 );
assert( gamma_move(board, 1, 5, 6) == 1 );
assert( gamma_move(board, 2, 6, 3) == 0 );
assert( gamma_move(board, 3, 4, 3) == 0 );
assert( gamma_move(board, 3, 4, 7) == 1 );
assert( gamma_move(board, 4, 0, 6) == 0 );
assert( gamma_move(board, 4, 5, 1) == 0 );
assert( gamma_free_fields(board, 4) == 36 );
assert( gamma_move(board, 5, 2, 2) == 1 );
assert( gamma_move(board, 1, 0, 4) == 1 );
assert( gamma_move(board, 2, 5, 0) == 0 );
assert( gamma_free_fields(board, 2) == 34 );
assert( gamma_move(board, 3, 5, 4) == 1 );
assert( gamma_move(board, 4, 3, 1) == 1 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 1, 4) == 1 );
assert( gamma_move(board, 5, 7, 4) == 0 );
assert( gamma_free_fields(board, 5) == 31 );
assert( gamma_golden_move(board, 5, 1, 7) == 0 );
assert( gamma_move(board, 1, 6, 1) == 0 );
assert( gamma_move(board, 1, 0, 3) == 1 );
assert( gamma_move(board, 2, 7, 3) == 1 );
assert( gamma_move(board, 2, 7, 4) == 0 );
assert( gamma_move(board, 3, 5, 3) == 0 );
assert( gamma_move(board, 4, 1, 1) == 1 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 1, 4) == 0 );
assert( gamma_move(board, 5, 2, 2) == 0 );
assert( gamma_move(board, 1, 7, 6) == 0 );
assert( gamma_move(board, 2, 0, 6) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 7, 4) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 3, 1) == 0 );


char* board402166036 = gamma_board(board);
assert( board402166036 != NULL );
assert( strcmp(board402166036, 
"....3..4\n"
"1.41.1.3\n"
"..1.43.4\n"
"15...323\n"
"1..51422\n"
".5541..5\n"
".4.4.135\n"
"4.55.4..\n") == 0);
free(board402166036);
board402166036 = NULL;
assert( gamma_move(board, 5, 6, 1) == 0 );
assert( gamma_busy_fields(board, 5) == 8 );
assert( gamma_move(board, 1, 7, 0) == 1 );
assert( gamma_move(board, 1, 1, 0) == 1 );
assert( gamma_free_fields(board, 1) == 16 );
assert( gamma_golden_move(board, 1, 2, 2) == 0 );
assert( gamma_move(board, 2, 1, 2) == 0 );
assert( gamma_move(board, 2, 0, 0) == 0 );
assert( gamma_busy_fields(board, 2) == 3 );
assert( gamma_move(board, 3, 4, 6) == 1 );
assert( gamma_move(board, 4, 7, 2) == 0 );
assert( gamma_move(board, 4, 6, 7) == 1 );
assert( gamma_busy_fields(board, 4) == 11 );
assert( gamma_move(board, 5, 7, 0) == 0 );
assert( gamma_move(board, 5, 0, 2) == 1 );
assert( gamma_busy_fields(board, 5) == 9 );
assert( gamma_golden_move(board, 5, 5, 5) == 1 );
assert( gamma_move(board, 1, 6, 6) == 1 );
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_move(board, 2, 1, 0) == 0 );
assert( gamma_move(board, 3, 6, 2) == 1 );
assert( gamma_move(board, 4, 2, 1) == 1 );
assert( gamma_move(board, 4, 6, 6) == 0 );


char* board896418869 = gamma_board(board);
assert( board896418869 != NULL );
assert( strcmp(board896418869, 
"....3.44\n"
"1.413113\n"
"..1.45.4\n"
"15...323\n"
"1..51422\n"
"55541.35\n"
".444.135\n"
"4155.4.1\n") == 0);
free(board896418869);
board896418869 = NULL;
assert( gamma_move(board, 5, 0, 4) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 4, 4) == 1 );


char* board613628219 = gamma_board(board);
assert( board613628219 != NULL );
assert( strcmp(board613628219, 
"....3.44\n"
"1.413113\n"
"..1.45.4\n"
"15..2323\n"
"1..51422\n"
"55541.35\n"
".444.135\n"
"4155.4.1\n") == 0);
free(board613628219);
board613628219 = NULL;
assert( gamma_move(board, 3, 5, 0) == 0 );
assert( gamma_move(board, 3, 1, 5) == 1 );
assert( gamma_busy_fields(board, 3) == 8 );
assert( gamma_move(board, 4, 2, 5) == 0 );
assert( gamma_move(board, 4, 4, 7) == 0 );
assert( gamma_busy_fields(board, 5) == 10 );
assert( gamma_free_fields(board, 5) == 18 );
assert( gamma_move(board, 1, 4, 2) == 0 );
assert( gamma_move(board, 1, 0, 6) == 0 );
assert( gamma_move(board, 2, 3, 1) == 0 );
assert( gamma_move(board, 2, 6, 2) == 0 );
assert( gamma_move(board, 3, 7, 2) == 0 );
assert( gamma_move(board, 3, 0, 5) == 1 );
assert( gamma_golden_move(board, 3, 4, 4) == 1 );
assert( gamma_move(board, 4, 4, 7) == 0 );
assert( gamma_busy_fields(board, 5) == 10 );
assert( gamma_free_fields(board, 5) == 17 );
assert( gamma_move(board, 1, 5, 0) == 0 );
assert( gamma_move(board, 3, 7, 1) == 0 );
assert( gamma_move(board, 4, 1, 4) == 0 );
assert( gamma_move(board, 5, 3, 1) == 0 );
assert( gamma_move(board, 5, 3, 5) == 1 );
assert( gamma_move(board, 1, 4, 3) == 0 );


char* board893348685 = gamma_board(board);
assert( board893348685 != NULL );
assert( strcmp(board893348685, 
"....3.44\n"
"1.413113\n"
"331545.4\n"
"15..3323\n"
"1..51422\n"
"55541.35\n"
".444.135\n"
"4155.4.1\n") == 0);
free(board893348685);
board893348685 = NULL;
assert( gamma_move(board, 2, 4, 3) == 0 );
assert( gamma_move(board, 4, 3, 7) == 1 );
assert( gamma_move(board, 5, 3, 2) == 0 );
assert( gamma_move(board, 5, 1, 3) == 1 );
assert( gamma_move(board, 1, 0, 4) == 0 );
assert( gamma_move(board, 2, 7, 5) == 0 );
assert( gamma_move(board, 3, 7, 5) == 0 );
assert( gamma_move(board, 4, 2, 5) == 0 );
assert( gamma_move(board, 4, 7, 6) == 0 );
assert( gamma_busy_fields(board, 4) == 13 );
assert( gamma_golden_possible(board, 4) == 0 );


char* board185588040 = gamma_board(board);
assert( board185588040 != NULL );
assert( strcmp(board185588040, 
"...43.44\n"
"1.413113\n"
"331545.4\n"
"15..3323\n"
"15.51422\n"
"55541.35\n"
".444.135\n"
"4155.4.1\n") == 0);
free(board185588040);
board185588040 = NULL;
assert( gamma_move(board, 5, 3, 2) == 0 );
assert( gamma_busy_fields(board, 5) == 12 );
assert( gamma_move(board, 1, 1, 4) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 0, 4) == 0 );
assert( gamma_move(board, 3, 7, 5) == 0 );
assert( gamma_golden_move(board, 3, 1, 5) == 0 );
assert( gamma_move(board, 4, 7, 2) == 0 );
assert( gamma_move(board, 4, 5, 7) == 1 );
assert( gamma_move(board, 5, 7, 1) == 0 );
assert( gamma_move(board, 5, 3, 5) == 0 );
assert( gamma_golden_move(board, 5, 7, 7) == 0 );


char* board641202236 = gamma_board(board);
assert( board641202236 != NULL );
assert( strcmp(board641202236, 
"...43444\n"
"1.413113\n"
"331545.4\n"
"15..3323\n"
"15.51422\n"
"55541.35\n"
".444.135\n"
"4155.4.1\n") == 0);
free(board641202236);
board641202236 = NULL;
assert( gamma_move(board, 1, 1, 2) == 0 );
assert( gamma_move(board, 2, 7, 0) == 0 );
assert( gamma_golden_move(board, 2, 6, 6) == 1 );
assert( gamma_move(board, 3, 5, 6) == 0 );
assert( gamma_move(board, 4, 3, 2) == 0 );
assert( gamma_move(board, 4, 5, 3) == 0 );
assert( gamma_move(board, 5, 5, 6) == 0 );
assert( gamma_move(board, 5, 3, 7) == 0 );
assert( gamma_move(board, 1, 0, 4) == 0 );
assert( gamma_move(board, 2, 4, 3) == 0 );
assert( gamma_move(board, 3, 1, 0) == 0 );
assert( gamma_move(board, 3, 1, 2) == 0 );
assert( gamma_move(board, 4, 6, 2) == 0 );
assert( gamma_move(board, 5, 1, 4) == 0 );
assert( gamma_move(board, 5, 7, 6) == 0 );
assert( gamma_move(board, 2, 1, 4) == 0 );
assert( gamma_move(board, 3, 6, 1) == 0 );
assert( gamma_move(board, 3, 2, 2) == 0 );
assert( gamma_move(board, 4, 0, 7) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 3, 2) == 0 );
assert( gamma_move(board, 5, 1, 2) == 0 );
assert( gamma_free_fields(board, 5) == 13 );
assert( gamma_move(board, 1, 7, 4) == 0 );
assert( gamma_move(board, 1, 1, 3) == 0 );
assert( gamma_busy_fields(board, 1) == 11 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 2, 6) == 0 );


char* board636573199 = gamma_board(board);
assert( board636573199 != NULL );
assert( strcmp(board636573199, 
"...43444\n"
"1.413123\n"
"331545.4\n"
"15..3323\n"
"15.51422\n"
"55541.35\n"
".444.135\n"
"4155.4.1\n") == 0);
free(board636573199);
board636573199 = NULL;
assert( gamma_move(board, 3, 3, 5) == 0 );
assert( gamma_move(board, 3, 3, 1) == 0 );
assert( gamma_move(board, 4, 5, 5) == 0 );
assert( gamma_move(board, 4, 3, 0) == 0 );
assert( gamma_move(board, 5, 1, 4) == 0 );
assert( gamma_move(board, 5, 1, 5) == 0 );
assert( gamma_move(board, 1, 4, 7) == 0 );
assert( gamma_golden_move(board, 1, 7, 5) == 0 );
assert( gamma_move(board, 2, 2, 2) == 0 );
assert( gamma_move(board, 3, 2, 5) == 0 );
assert( gamma_free_fields(board, 3) == 13 );
assert( gamma_move(board, 4, 1, 7) == 0 );
assert( gamma_busy_fields(board, 5) == 12 );
assert( gamma_move(board, 1, 7, 0) == 0 );
assert( gamma_move(board, 2, 0, 6) == 0 );
assert( gamma_move(board, 2, 1, 6) == 1 );
assert( gamma_busy_fields(board, 2) == 5 );
assert( gamma_move(board, 3, 4, 2) == 0 );
assert( gamma_move(board, 3, 7, 6) == 0 );
assert( gamma_free_fields(board, 3) == 12 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_golden_move(board, 3, 6, 6) == 0 );
assert( gamma_move(board, 4, 0, 6) == 0 );
assert( gamma_busy_fields(board, 4) == 14 );
assert( gamma_move(board, 5, 5, 6) == 0 );
assert( gamma_free_fields(board, 5) == 12 );
assert( gamma_move(board, 1, 1, 0) == 0 );
assert( gamma_move(board, 1, 2, 1) == 0 );
assert( gamma_move(board, 2, 7, 1) == 0 );
assert( gamma_move(board, 2, 4, 0) == 1 );
assert( gamma_move(board, 3, 7, 1) == 0 );
assert( gamma_move(board, 4, 5, 0) == 0 );
assert( gamma_move(board, 5, 5, 6) == 0 );
assert( gamma_move(board, 5, 1, 7) == 1 );
assert( gamma_move(board, 1, 4, 3) == 0 );
assert( gamma_busy_fields(board, 1) == 11 );
assert( gamma_move(board, 3, 7, 6) == 0 );


gamma_delete(board);

    return 0;
}
