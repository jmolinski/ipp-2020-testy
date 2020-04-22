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
uuid: 220945263
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(6, 6, 6, 4);
assert( board != NULL );


assert( gamma_move(board, 1, 3, 2) == 1 );
assert( gamma_move(board, 1, 0, 2) == 1 );
assert( gamma_free_fields(board, 1) == 34 );


char* board705181824 = gamma_board(board);
assert( board705181824 != NULL );
assert( strcmp(board705181824, 
"......\n"
"......\n"
"......\n"
"1..1..\n"
"......\n"
"......\n") == 0);
free(board705181824);
board705181824 = NULL;
assert( gamma_move(board, 2, 0, 3) == 1 );
assert( gamma_move(board, 2, 3, 2) == 0 );
assert( gamma_move(board, 3, 5, 5) == 1 );
assert( gamma_move(board, 4, 2, 4) == 1 );
assert( gamma_move(board, 5, 1, 2) == 1 );
assert( gamma_move(board, 5, 1, 4) == 1 );
assert( gamma_move(board, 6, 1, 0) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 2, 0, 2) == 0 );
assert( gamma_move(board, 4, 2, 5) == 1 );
assert( gamma_move(board, 5, 4, 4) == 1 );
assert( gamma_move(board, 5, 3, 4) == 1 );
assert( gamma_move(board, 6, 3, 4) == 0 );
assert( gamma_move(board, 6, 5, 5) == 0 );
assert( gamma_busy_fields(board, 6) == 1 );
assert( gamma_golden_move(board, 1, 3, 0) == 0 );
assert( gamma_move(board, 2, 1, 4) == 0 );
assert( gamma_move(board, 2, 4, 5) == 1 );
assert( gamma_move(board, 3, 5, 0) == 1 );
assert( gamma_move(board, 3, 5, 4) == 1 );
assert( gamma_move(board, 4, 5, 2) == 1 );


char* board658881811 = gamma_board(board);
assert( board658881811 != NULL );
assert( strcmp(board658881811, 
"..4.23\n"
".54553\n"
"2.....\n"
"15.1.4\n"
"......\n"
".6...3\n") == 0);
free(board658881811);
board658881811 = NULL;
assert( gamma_move(board, 5, 1, 4) == 0 );
assert( gamma_move(board, 5, 3, 2) == 0 );
assert( gamma_free_fields(board, 5) == 21 );
assert( gamma_move(board, 6, 1, 5) == 1 );
assert( gamma_move(board, 1, 2, 2) == 1 );
assert( gamma_free_fields(board, 1) == 19 );
assert( gamma_move(board, 2, 0, 0) == 1 );
assert( gamma_move(board, 3, 3, 3) == 1 );
assert( gamma_move(board, 3, 0, 3) == 0 );
assert( gamma_move(board, 4, 4, 0) == 1 );
assert( gamma_free_fields(board, 4) == 16 );
assert( gamma_move(board, 5, 2, 4) == 0 );
assert( gamma_move(board, 5, 4, 0) == 0 );
assert( gamma_free_fields(board, 5) == 16 );
assert( gamma_move(board, 6, 2, 4) == 0 );
assert( gamma_move(board, 1, 4, 0) == 0 );
assert( gamma_move(board, 2, 5, 0) == 0 );
assert( gamma_move(board, 2, 0, 2) == 0 );
assert( gamma_move(board, 3, 0, 5) == 1 );
assert( gamma_move(board, 4, 0, 3) == 0 );
assert( gamma_move(board, 4, 0, 1) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 5, 1) == 1 );
assert( gamma_move(board, 6, 3, 1) == 1 );


char* board790579078 = gamma_board(board);
assert( board790579078 != NULL );
assert( strcmp(board790579078, 
"364.23\n"
".54553\n"
"2..3..\n"
"1511.4\n"
"4..6.5\n"
"26..43\n") == 0);
free(board790579078);
board790579078 = NULL;
assert( gamma_move(board, 2, 1, 1) == 1 );
assert( gamma_move(board, 3, 5, 0) == 0 );


char* board184782969 = gamma_board(board);
assert( board184782969 != NULL );
assert( strcmp(board184782969, 
"364.23\n"
".54553\n"
"2..3..\n"
"1511.4\n"
"42.6.5\n"
"26..43\n") == 0);
free(board184782969);
board184782969 = NULL;
assert( gamma_move(board, 4, 3, 2) == 0 );
assert( gamma_busy_fields(board, 4) == 5 );
assert( gamma_move(board, 5, 3, 3) == 0 );
assert( gamma_move(board, 5, 0, 3) == 0 );
assert( gamma_move(board, 6, 1, 0) == 0 );
assert( gamma_move(board, 6, 2, 0) == 1 );
assert( gamma_busy_fields(board, 6) == 4 );
assert( gamma_move(board, 1, 3, 1) == 0 );
assert( gamma_move(board, 1, 2, 1) == 1 );
assert( gamma_move(board, 2, 5, 4) == 0 );
assert( gamma_move(board, 2, 1, 2) == 0 );
assert( gamma_busy_fields(board, 2) == 4 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 0, 3) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 1, 4) == 0 );
assert( gamma_move(board, 4, 4, 1) == 1 );
assert( gamma_move(board, 5, 3, 2) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 3, 5) == 1 );
assert( gamma_move(board, 6, 1, 4) == 0 );
assert( gamma_golden_move(board, 6, 5, 4) == 0 );


char* board166175079 = gamma_board(board);
assert( board166175079 != NULL );
assert( strcmp(board166175079, 
"364623\n"
".54553\n"
"2..3..\n"
"1511.4\n"
"421645\n"
"266.43\n") == 0);
free(board166175079);
board166175079 = NULL;
assert( gamma_move(board, 1, 3, 4) == 0 );
assert( gamma_golden_move(board, 1, 0, 4) == 0 );
assert( gamma_move(board, 3, 1, 2) == 0 );
assert( gamma_move(board, 3, 3, 2) == 0 );
assert( gamma_move(board, 4, 3, 1) == 0 );
assert( gamma_move(board, 4, 1, 4) == 0 );


char* board688618799 = gamma_board(board);
assert( board688618799 != NULL );
assert( strcmp(board688618799, 
"364623\n"
".54553\n"
"2..3..\n"
"1511.4\n"
"421645\n"
"266.43\n") == 0);
free(board688618799);
board688618799 = NULL;
assert( gamma_move(board, 6, 2, 4) == 0 );
assert( gamma_move(board, 1, 3, 4) == 0 );
assert( gamma_move(board, 1, 3, 1) == 0 );
assert( gamma_move(board, 3, 3, 4) == 0 );
assert( gamma_move(board, 3, 1, 3) == 0 );
assert( gamma_move(board, 4, 4, 0) == 0 );
assert( gamma_move(board, 4, 0, 2) == 0 );


char* board667281626 = gamma_board(board);
assert( board667281626 != NULL );
assert( strcmp(board667281626, 
"364623\n"
".54553\n"
"2..3..\n"
"1511.4\n"
"421645\n"
"266.43\n") == 0);
free(board667281626);
board667281626 = NULL;
assert( gamma_move(board, 5, 3, 4) == 0 );
assert( gamma_move(board, 6, 3, 4) == 0 );
assert( gamma_busy_fields(board, 6) == 5 );
assert( gamma_move(board, 1, 1, 2) == 0 );
assert( gamma_move(board, 1, 0, 0) == 0 );
assert( gamma_move(board, 2, 2, 4) == 0 );
assert( gamma_move(board, 3, 0, 3) == 0 );
assert( gamma_move(board, 4, 0, 2) == 0 );
assert( gamma_move(board, 4, 0, 4) == 0 );
assert( gamma_move(board, 5, 2, 4) == 0 );
assert( gamma_move(board, 5, 5, 4) == 0 );
assert( gamma_move(board, 6, 0, 4) == 0 );
assert( gamma_move(board, 6, 4, 2) == 0 );
assert( gamma_move(board, 1, 2, 4) == 0 );
assert( gamma_move(board, 1, 5, 0) == 0 );
assert( gamma_move(board, 2, 0, 3) == 0 );
assert( gamma_move(board, 3, 5, 3) == 1 );
assert( gamma_move(board, 4, 2, 4) == 0 );
assert( gamma_move(board, 4, 3, 4) == 0 );
assert( gamma_move(board, 5, 3, 4) == 0 );
assert( gamma_move(board, 5, 0, 5) == 0 );
assert( gamma_move(board, 6, 3, 1) == 0 );
assert( gamma_move(board, 1, 4, 0) == 0 );
assert( gamma_move(board, 1, 1, 2) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_golden_move(board, 1, 4, 0) == 1 );
assert( gamma_move(board, 2, 2, 1) == 0 );
assert( gamma_move(board, 2, 1, 1) == 0 );
assert( gamma_move(board, 3, 3, 4) == 0 );
assert( gamma_busy_fields(board, 3) == 6 );
assert( gamma_move(board, 4, 2, 4) == 0 );
assert( gamma_move(board, 5, 5, 1) == 0 );
assert( gamma_move(board, 5, 3, 0) == 0 );


char* board572717036 = gamma_board(board);
assert( board572717036 != NULL );
assert( strcmp(board572717036, 
"364623\n"
".54553\n"
"2..3.3\n"
"1511.4\n"
"421645\n"
"266.13\n") == 0);
free(board572717036);
board572717036 = NULL;
assert( gamma_move(board, 6, 0, 3) == 0 );
assert( gamma_move(board, 6, 3, 0) == 1 );


gamma_delete(board);

    return 0;
}
