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
uuid: 938017664
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(7, 7, 6, 10);
assert( board != NULL );


assert( gamma_move(board, 1, 3, 6) == 1 );
assert( gamma_move(board, 1, 4, 0) == 1 );
assert( gamma_busy_fields(board, 2) == 0 );
assert( gamma_move(board, 3, 1, 2) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 5, 4) == 1 );
assert( gamma_move(board, 6, 6, 5) == 1 );
assert( gamma_move(board, 6, 0, 5) == 1 );
assert( gamma_move(board, 1, 2, 1) == 1 );
assert( gamma_move(board, 1, 0, 3) == 1 );
assert( gamma_move(board, 2, 1, 6) == 1 );
assert( gamma_move(board, 3, 2, 5) == 1 );
assert( gamma_move(board, 3, 6, 1) == 1 );
assert( gamma_move(board, 5, 6, 6) == 1 );
assert( gamma_free_fields(board, 5) == 37 );
assert( gamma_move(board, 6, 5, 2) == 1 );
assert( gamma_move(board, 1, 3, 2) == 1 );
assert( gamma_move(board, 1, 1, 6) == 0 );
assert( gamma_move(board, 2, 5, 6) == 1 );


char* board870720930 = gamma_board(board);
assert( board870720930 != NULL );
assert( strcmp(board870720930, 
".2.1.25\n"
"6.3...6\n"
".....5.\n"
"1......\n"
".3.1.6.\n"
"..1...3\n"
"....1..\n") == 0);
free(board870720930);
board870720930 = NULL;
assert( gamma_move(board, 4, 0, 4) == 1 );
assert( gamma_busy_fields(board, 4) == 1 );
assert( gamma_move(board, 5, 2, 2) == 1 );
assert( gamma_busy_fields(board, 5) == 3 );
assert( gamma_move(board, 6, 0, 5) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 5, 4) == 0 );
assert( gamma_free_fields(board, 1) == 32 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 4, 4) == 1 );


char* board711727637 = gamma_board(board);
assert( board711727637 != NULL );
assert( strcmp(board711727637, 
".2.1.25\n"
"6.3...6\n"
"4...25.\n"
"1......\n"
".351.6.\n"
"..1...3\n"
"....1..\n") == 0);
free(board711727637);
board711727637 = NULL;
assert( gamma_move(board, 3, 2, 5) == 0 );
assert( gamma_move(board, 3, 1, 6) == 0 );
assert( gamma_move(board, 4, 0, 3) == 0 );
assert( gamma_move(board, 4, 2, 4) == 1 );
assert( gamma_golden_move(board, 4, 4, 5) == 0 );
assert( gamma_move(board, 5, 3, 5) == 1 );
assert( gamma_move(board, 5, 2, 5) == 0 );
assert( gamma_move(board, 6, 3, 4) == 1 );
assert( gamma_move(board, 6, 4, 4) == 0 );
assert( gamma_move(board, 1, 3, 1) == 1 );
assert( gamma_free_fields(board, 1) == 27 );
assert( gamma_move(board, 2, 3, 6) == 0 );
assert( gamma_move(board, 5, 0, 1) == 1 );
assert( gamma_move(board, 6, 3, 3) == 1 );
assert( gamma_move(board, 6, 3, 0) == 1 );
assert( gamma_move(board, 1, 4, 6) == 1 );
assert( gamma_free_fields(board, 1) == 23 );
assert( gamma_move(board, 2, 0, 4) == 0 );
assert( gamma_busy_fields(board, 2) == 3 );
assert( gamma_golden_move(board, 2, 5, 2) == 1 );
assert( gamma_move(board, 3, 3, 6) == 0 );
assert( gamma_move(board, 3, 6, 3) == 1 );
assert( gamma_free_fields(board, 3) == 22 );
assert( gamma_golden_move(board, 3, 4, 2) == 0 );
assert( gamma_move(board, 4, 5, 4) == 0 );
assert( gamma_move(board, 4, 4, 3) == 1 );
assert( gamma_move(board, 5, 0, 2) == 1 );
assert( gamma_move(board, 6, 6, 2) == 1 );
assert( gamma_move(board, 6, 2, 6) == 1 );
assert( gamma_move(board, 1, 0, 2) == 0 );
assert( gamma_move(board, 3, 6, 6) == 0 );
assert( gamma_free_fields(board, 3) == 18 );
assert( gamma_golden_move(board, 3, 4, 2) == 0 );
assert( gamma_move(board, 4, 0, 1) == 0 );
assert( gamma_free_fields(board, 4) == 18 );
assert( gamma_move(board, 5, 5, 4) == 0 );


char* board619602607 = gamma_board(board);
assert( board619602607 != NULL );
assert( strcmp(board619602607, 
".261125\n"
"6.35..6\n"
"4.4625.\n"
"1..64.3\n"
"5351.26\n"
"5.11..3\n"
"...61..\n") == 0);
free(board619602607);
board619602607 = NULL;
assert( gamma_move(board, 6, 0, 5) == 0 );
assert( gamma_busy_fields(board, 6) == 7 );
assert( gamma_move(board, 1, 5, 4) == 0 );
assert( gamma_move(board, 2, 5, 5) == 1 );
assert( gamma_move(board, 3, 0, 5) == 0 );
assert( gamma_move(board, 3, 6, 4) == 1 );
assert( gamma_move(board, 4, 4, 1) == 1 );
assert( gamma_move(board, 4, 4, 1) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 5, 6) == 0 );
assert( gamma_move(board, 2, 0, 2) == 0 );
assert( gamma_move(board, 2, 2, 0) == 1 );
assert( gamma_move(board, 3, 2, 0) == 0 );
assert( gamma_move(board, 4, 1, 2) == 0 );
assert( gamma_move(board, 5, 0, 1) == 0 );
assert( gamma_move(board, 5, 1, 5) == 1 );
assert( gamma_move(board, 6, 2, 4) == 0 );
assert( gamma_move(board, 6, 2, 1) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 0, 4) == 0 );
assert( gamma_busy_fields(board, 1) == 7 );


char* board553951410 = gamma_board(board);
assert( board553951410 != NULL );
assert( strcmp(board553951410, 
".261125\n"
"6535.26\n"
"4.46253\n"
"1..64.3\n"
"5351.26\n"
"5.114.3\n"
"..261..\n") == 0);
free(board553951410);
board553951410 = NULL;
assert( gamma_move(board, 3, 0, 6) == 1 );
assert( gamma_move(board, 3, 6, 6) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_golden_move(board, 3, 2, 0) == 1 );
assert( gamma_move(board, 4, 2, 1) == 0 );
assert( gamma_move(board, 4, 3, 4) == 0 );
assert( gamma_move(board, 5, 3, 0) == 0 );
assert( gamma_busy_fields(board, 5) == 7 );
assert( gamma_move(board, 6, 1, 0) == 1 );
assert( gamma_move(board, 6, 2, 0) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 0, 6) == 0 );
assert( gamma_move(board, 3, 1, 1) == 1 );
assert( gamma_free_fields(board, 3) == 10 );
assert( gamma_move(board, 4, 0, 0) == 1 );
assert( gamma_move(board, 4, 5, 6) == 0 );
assert( gamma_move(board, 5, 0, 6) == 0 );
assert( gamma_move(board, 6, 2, 6) == 0 );
assert( gamma_free_fields(board, 6) == 9 );
assert( gamma_move(board, 1, 6, 6) == 0 );
assert( gamma_move(board, 1, 6, 0) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 6, 3) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 5, 4) == 0 );
assert( gamma_move(board, 3, 0, 5) == 0 );
assert( gamma_busy_fields(board, 3) == 8 );
assert( gamma_move(board, 4, 1, 5) == 0 );
assert( gamma_move(board, 4, 2, 0) == 0 );
assert( gamma_move(board, 5, 3, 2) == 0 );
assert( gamma_move(board, 5, 1, 2) == 0 );
assert( gamma_move(board, 6, 4, 1) == 0 );
assert( gamma_free_fields(board, 6) == 8 );
assert( gamma_move(board, 1, 1, 5) == 0 );
assert( gamma_busy_fields(board, 1) == 8 );


char* board398555381 = gamma_board(board);
assert( board398555381 != NULL );
assert( strcmp(board398555381, 
"3261125\n"
"6535.26\n"
"4.46253\n"
"1..64.3\n"
"5351.26\n"
"53114.3\n"
"46361.1\n") == 0);
free(board398555381);
board398555381 = NULL;
assert( gamma_move(board, 2, 2, 4) == 0 );
assert( gamma_move(board, 2, 2, 3) == 1 );
assert( gamma_move(board, 3, 3, 4) == 0 );
assert( gamma_free_fields(board, 3) == 7 );
assert( gamma_move(board, 4, 4, 1) == 0 );
assert( gamma_move(board, 4, 4, 6) == 0 );
assert( gamma_move(board, 5, 4, 1) == 0 );
assert( gamma_move(board, 6, 0, 5) == 0 );
assert( gamma_move(board, 2, 4, 1) == 0 );
assert( gamma_move(board, 2, 3, 0) == 0 );
assert( gamma_busy_fields(board, 2) == 6 );
assert( gamma_move(board, 3, 2, 4) == 0 );
assert( gamma_move(board, 3, 2, 3) == 0 );
assert( gamma_busy_fields(board, 3) == 8 );
assert( gamma_move(board, 4, 2, 4) == 0 );
assert( gamma_busy_fields(board, 5) == 7 );


char* board607863146 = gamma_board(board);
assert( board607863146 != NULL );
assert( strcmp(board607863146, 
"3261125\n"
"6535.26\n"
"4.46253\n"
"1.264.3\n"
"5351.26\n"
"53114.3\n"
"46361.1\n") == 0);
free(board607863146);
board607863146 = NULL;
assert( gamma_move(board, 1, 3, 5) == 0 );
assert( gamma_move(board, 1, 0, 4) == 0 );
assert( gamma_move(board, 2, 2, 4) == 0 );
assert( gamma_move(board, 2, 1, 4) == 1 );
assert( gamma_move(board, 3, 5, 4) == 0 );
assert( gamma_move(board, 3, 1, 3) == 1 );
assert( gamma_move(board, 4, 0, 5) == 0 );
assert( gamma_move(board, 4, 0, 4) == 0 );
assert( gamma_move(board, 5, 2, 4) == 0 );
assert( gamma_move(board, 6, 0, 5) == 0 );
assert( gamma_move(board, 6, 6, 6) == 0 );
assert( gamma_free_fields(board, 6) == 5 );
assert( gamma_golden_move(board, 6, 6, 1) == 1 );
assert( gamma_move(board, 1, 5, 4) == 0 );
assert( gamma_move(board, 2, 0, 5) == 0 );


char* board345754347 = gamma_board(board);
assert( board345754347 != NULL );
assert( strcmp(board345754347, 
"3261125\n"
"6535.26\n"
"4246253\n"
"13264.3\n"
"5351.26\n"
"53114.6\n"
"46361.1\n") == 0);
free(board345754347);
board345754347 = NULL;
assert( gamma_move(board, 3, 2, 4) == 0 );
assert( gamma_move(board, 3, 5, 0) == 1 );
assert( gamma_move(board, 4, 6, 3) == 0 );
assert( gamma_move(board, 5, 2, 4) == 0 );
assert( gamma_move(board, 6, 3, 5) == 0 );
assert( gamma_move(board, 1, 3, 5) == 0 );
assert( gamma_move(board, 1, 5, 3) == 1 );
assert( gamma_move(board, 2, 0, 5) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );


char* board739256939 = gamma_board(board);
assert( board739256939 != NULL );
assert( strcmp(board739256939, 
"3261125\n"
"6535.26\n"
"4246253\n"
"1326413\n"
"5351.26\n"
"53114.6\n"
"4636131\n") == 0);
free(board739256939);
board739256939 = NULL;


gamma_delete(board);

    return 0;
}
