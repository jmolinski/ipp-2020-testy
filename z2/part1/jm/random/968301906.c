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
uuid: 968301906
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(9, 7, 8, 10);
assert( board != NULL );


assert( gamma_move(board, 1, 5, 7) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 3, 2) == 1 );
assert( gamma_move(board, 3, 3, 6) == 1 );
assert( gamma_move(board, 4, 6, 3) == 1 );
assert( gamma_move(board, 5, 5, 5) == 1 );
assert( gamma_move(board, 6, 1, 2) == 1 );
assert( gamma_move(board, 6, 6, 1) == 1 );
assert( gamma_free_fields(board, 6) == 57 );
assert( gamma_move(board, 7, 2, 2) == 1 );
assert( gamma_busy_fields(board, 7) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 7, 5) == 1 );
assert( gamma_busy_fields(board, 8) == 1 );
assert( gamma_move(board, 1, 4, 1) == 1 );
assert( gamma_move(board, 1, 5, 3) == 1 );
assert( gamma_move(board, 2, 6, 2) == 1 );
assert( gamma_move(board, 3, 1, 5) == 1 );
assert( gamma_move(board, 4, 1, 7) == 0 );
assert( gamma_move(board, 4, 1, 4) == 1 );
assert( gamma_move(board, 5, 1, 2) == 0 );
assert( gamma_move(board, 5, 4, 6) == 1 );
assert( gamma_free_fields(board, 5) == 49 );
assert( gamma_move(board, 6, 1, 2) == 0 );
assert( gamma_move(board, 7, 0, 1) == 1 );
assert( gamma_move(board, 7, 2, 1) == 1 );
assert( gamma_move(board, 8, 6, 8) == 0 );
assert( gamma_move(board, 2, 3, 7) == 0 );
assert( gamma_move(board, 2, 7, 3) == 1 );
assert( gamma_move(board, 3, 3, 1) == 1 );
assert( gamma_move(board, 3, 2, 2) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_golden_move(board, 3, 2, 2) == 1 );
assert( gamma_move(board, 4, 8, 2) == 1 );
assert( gamma_free_fields(board, 4) == 44 );
assert( gamma_move(board, 5, 0, 3) == 1 );
assert( gamma_move(board, 5, 7, 1) == 1 );
assert( gamma_move(board, 6, 0, 0) == 1 );
assert( gamma_busy_fields(board, 6) == 3 );
assert( gamma_move(board, 7, 3, 1) == 0 );
assert( gamma_move(board, 8, 0, 5) == 1 );
assert( gamma_free_fields(board, 1) == 40 );
assert( gamma_move(board, 2, 7, 2) == 1 );
assert( gamma_move(board, 2, 0, 1) == 0 );
assert( gamma_move(board, 3, 0, 5) == 0 );
assert( gamma_move(board, 4, 0, 5) == 0 );
assert( gamma_move(board, 5, 1, 1) == 1 );
assert( gamma_move(board, 7, 5, 6) == 1 );
assert( gamma_move(board, 7, 7, 3) == 0 );
assert( gamma_move(board, 8, 7, 6) == 1 );
assert( gamma_move(board, 1, 0, 6) == 1 );


char* board224012034 = gamma_board(board);
assert( board224012034 != NULL );
assert( strcmp(board224012034, 
"1..357.8.\n"
"83...5.8.\n"
".4.......\n"
"5....142.\n"
".632..224\n"
"75731.65.\n"
"6........\n") == 0);
free(board224012034);
board224012034 = NULL;
assert( gamma_move(board, 3, 6, 1) == 0 );
assert( gamma_move(board, 3, 7, 5) == 0 );
assert( gamma_move(board, 5, 8, 2) == 0 );
assert( gamma_move(board, 5, 0, 5) == 0 );
assert( gamma_move(board, 6, 6, 4) == 1 );
assert( gamma_move(board, 6, 8, 4) == 1 );
assert( gamma_busy_fields(board, 6) == 5 );
assert( gamma_move(board, 7, 6, 8) == 0 );
assert( gamma_move(board, 7, 2, 6) == 1 );
assert( gamma_move(board, 8, 5, 4) == 1 );
assert( gamma_free_fields(board, 8) == 31 );
assert( gamma_move(board, 1, 1, 5) == 0 );
assert( gamma_move(board, 2, 6, 6) == 1 );
assert( gamma_move(board, 2, 3, 5) == 1 );
assert( gamma_move(board, 3, 5, 8) == 0 );
assert( gamma_move(board, 3, 0, 4) == 1 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 4, 4) == 1 );
assert( gamma_move(board, 5, 5, 3) == 0 );
assert( gamma_move(board, 5, 2, 0) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 3, 3) == 1 );
assert( gamma_move(board, 6, 8, 3) == 1 );
assert( gamma_move(board, 7, 1, 5) == 0 );
assert( gamma_free_fields(board, 7) == 24 );
assert( gamma_move(board, 8, 3, 1) == 0 );
assert( gamma_move(board, 8, 6, 3) == 0 );
assert( gamma_move(board, 1, 7, 5) == 0 );
assert( gamma_move(board, 2, 8, 6) == 1 );
assert( gamma_move(board, 3, 2, 4) == 1 );
assert( gamma_move(board, 4, 4, 5) == 1 );
assert( gamma_busy_fields(board, 4) == 5 );
assert( gamma_move(board, 6, 0, 3) == 0 );
assert( gamma_move(board, 7, 3, 1) == 0 );
assert( gamma_move(board, 8, 1, 0) == 1 );
assert( gamma_move(board, 8, 8, 5) == 1 );
assert( gamma_move(board, 1, 4, 7) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );


char* board838761399 = gamma_board(board);
assert( board838761399 != NULL );
assert( strcmp(board838761399, 
"1.7357282\n"
"83.245.88\n"
"343.486.6\n"
"5..6.1426\n"
".632..224\n"
"75731.65.\n"
"685......\n") == 0);
free(board838761399);
board838761399 = NULL;
assert( gamma_move(board, 2, 1, 8) == 0 );
assert( gamma_move(board, 3, 0, 8) == 0 );
assert( gamma_move(board, 4, 4, 3) == 1 );
assert( gamma_move(board, 4, 2, 6) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 3, 2) == 0 );
assert( gamma_free_fields(board, 5) == 18 );
assert( gamma_move(board, 6, 4, 3) == 0 );
assert( gamma_move(board, 7, 5, 2) == 1 );
assert( gamma_move(board, 7, 0, 2) == 1 );
assert( gamma_move(board, 8, 1, 8) == 0 );
assert( gamma_move(board, 8, 6, 2) == 0 );
assert( gamma_move(board, 1, 2, 5) == 1 );
assert( gamma_move(board, 1, 8, 5) == 0 );
assert( gamma_move(board, 2, 4, 7) == 0 );


char* board221097476 = gamma_board(board);
assert( board221097476 != NULL );
assert( strcmp(board221097476, 
"1.7357282\n"
"831245.88\n"
"343.486.6\n"
"5..641426\n"
"7632.7224\n"
"75731.65.\n"
"685......\n") == 0);
free(board221097476);
board221097476 = NULL;
assert( gamma_move(board, 3, 6, 1) == 0 );
assert( gamma_move(board, 4, 3, 2) == 0 );
assert( gamma_move(board, 5, 4, 7) == 0 );
assert( gamma_move(board, 5, 0, 6) == 0 );
assert( gamma_move(board, 6, 1, 8) == 0 );
assert( gamma_move(board, 6, 8, 5) == 0 );
assert( gamma_move(board, 7, 4, 3) == 0 );
assert( gamma_free_fields(board, 7) == 15 );
assert( gamma_move(board, 8, 1, 2) == 0 );
assert( gamma_move(board, 8, 2, 3) == 1 );
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_move(board, 1, 0, 3) == 0 );


char* board815199776 = gamma_board(board);
assert( board815199776 != NULL );
assert( strcmp(board815199776, 
"1.7357282\n"
"831245.88\n"
"343.486.6\n"
"5.8641426\n"
"7632.7224\n"
"75731.65.\n"
"685......\n") == 0);
free(board815199776);
board815199776 = NULL;
assert( gamma_move(board, 4, 0, 6) == 0 );
assert( gamma_free_fields(board, 4) == 14 );
assert( gamma_move(board, 5, 5, 6) == 0 );
assert( gamma_busy_fields(board, 5) == 6 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 0, 3) == 0 );
assert( gamma_move(board, 6, 2, 6) == 0 );
assert( gamma_move(board, 7, 1, 8) == 0 );
assert( gamma_free_fields(board, 7) == 14 );
assert( gamma_golden_move(board, 7, 1, 6) == 0 );
assert( gamma_move(board, 8, 0, 6) == 0 );
assert( gamma_busy_fields(board, 8) == 7 );
assert( gamma_free_fields(board, 2) == 14 );
assert( gamma_move(board, 3, 3, 1) == 0 );
assert( gamma_move(board, 3, 7, 1) == 0 );
assert( gamma_move(board, 4, 4, 3) == 0 );
assert( gamma_move(board, 4, 4, 1) == 0 );
assert( gamma_busy_fields(board, 4) == 6 );
assert( gamma_free_fields(board, 4) == 14 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 4, 3) == 0 );
assert( gamma_move(board, 6, 0, 7) == 0 );
assert( gamma_move(board, 7, 8, 6) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_golden_move(board, 7, 2, 8) == 0 );
assert( gamma_move(board, 8, 3, 6) == 0 );
assert( gamma_move(board, 1, 2, 6) == 0 );
assert( gamma_move(board, 2, 0, 8) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 7, 5) == 0 );
assert( gamma_move(board, 3, 1, 0) == 0 );
assert( gamma_golden_move(board, 3, 3, 5) == 0 );
assert( gamma_move(board, 4, 0, 4) == 0 );
assert( gamma_free_fields(board, 4) == 14 );
assert( gamma_move(board, 5, 3, 6) == 0 );
assert( gamma_move(board, 5, 0, 5) == 0 );
assert( gamma_move(board, 6, 0, 7) == 0 );
assert( gamma_move(board, 6, 3, 1) == 0 );
assert( gamma_move(board, 7, 4, 3) == 0 );
assert( gamma_move(board, 8, 1, 6) == 1 );
assert( gamma_move(board, 8, 4, 3) == 0 );


char* board232195488 = gamma_board(board);
assert( board232195488 != NULL );
assert( strcmp(board232195488, 
"187357282\n"
"831245.88\n"
"343.486.6\n"
"5.8641426\n"
"7632.7224\n"
"75731.65.\n"
"685......\n") == 0);
free(board232195488);
board232195488 = NULL;
assert( gamma_move(board, 1, 3, 2) == 0 );
assert( gamma_move(board, 1, 0, 2) == 0 );
assert( gamma_move(board, 2, 5, 0) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 0, 6) == 0 );
assert( gamma_move(board, 3, 5, 3) == 0 );
assert( gamma_free_fields(board, 3) == 12 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 0, 7) == 0 );
assert( gamma_move(board, 4, 1, 1) == 0 );
assert( gamma_busy_fields(board, 4) == 6 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 0, 6) == 0 );
assert( gamma_move(board, 6, 8, 2) == 0 );
assert( gamma_move(board, 6, 5, 0) == 0 );
assert( gamma_move(board, 7, 0, 4) == 0 );
assert( gamma_move(board, 7, 6, 5) == 1 );
assert( gamma_move(board, 8, 2, 4) == 0 );
assert( gamma_move(board, 8, 1, 0) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 1, 7, 0) == 1 );
assert( gamma_move(board, 1, 3, 5) == 0 );
assert( gamma_move(board, 2, 3, 1) == 0 );
assert( gamma_move(board, 2, 6, 3) == 0 );
assert( gamma_busy_fields(board, 2) == 8 );
assert( gamma_move(board, 3, 5, 6) == 0 );
assert( gamma_move(board, 3, 4, 0) == 1 );
assert( gamma_busy_fields(board, 3) == 7 );
assert( gamma_move(board, 4, 4, 2) == 1 );
assert( gamma_busy_fields(board, 4) == 7 );
assert( gamma_move(board, 5, 3, 1) == 0 );
assert( gamma_move(board, 5, 7, 5) == 0 );
assert( gamma_move(board, 6, 8, 2) == 0 );
assert( gamma_move(board, 6, 1, 4) == 0 );
assert( gamma_move(board, 7, 0, 6) == 0 );
assert( gamma_move(board, 8, 5, 0) == 0 );
assert( gamma_move(board, 8, 3, 1) == 0 );


char* board891557664 = gamma_board(board);
assert( board891557664 != NULL );
assert( strcmp(board891557664, 
"187357282\n"
"831245788\n"
"343.486.6\n"
"5.8641426\n"
"763247224\n"
"75731.65.\n"
"685.32.1.\n") == 0);
free(board891557664);
board891557664 = NULL;
assert( gamma_move(board, 1, 4, 3) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 8, 5) == 0 );
assert( gamma_move(board, 2, 1, 1) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 0, 3) == 0 );
assert( gamma_move(board, 3, 2, 0) == 0 );
assert( gamma_busy_fields(board, 3) == 7 );
assert( gamma_move(board, 4, 4, 7) == 0 );
assert( gamma_move(board, 5, 6, 0) == 1 );
assert( gamma_busy_fields(board, 5) == 7 );
assert( gamma_move(board, 6, 4, 3) == 0 );
assert( gamma_move(board, 7, 1, 8) == 0 );
assert( gamma_move(board, 8, 4, 7) == 0 );
assert( gamma_move(board, 1, 4, 2) == 0 );
assert( gamma_move(board, 2, 6, 5) == 0 );
assert( gamma_move(board, 3, 4, 3) == 0 );
assert( gamma_move(board, 4, 7, 2) == 0 );
assert( gamma_move(board, 4, 0, 0) == 0 );
assert( gamma_move(board, 5, 6, 4) == 0 );
assert( gamma_move(board, 5, 1, 6) == 0 );
assert( gamma_move(board, 6, 1, 5) == 0 );


char* board350234613 = gamma_board(board);
assert( board350234613 != NULL );
assert( strcmp(board350234613, 
"187357282\n"
"831245788\n"
"343.486.6\n"
"5.8641426\n"
"763247224\n"
"75731.65.\n"
"685.3251.\n") == 0);
free(board350234613);
board350234613 = NULL;


gamma_delete(board);

    return 0;
}
