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
uuid: 369266501
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(6, 7, 8, 1);
assert( board != NULL );


assert( gamma_move(board, 1, 1, 3) == 1 );
assert( gamma_move(board, 1, 1, 6) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 2, 5) == 1 );
assert( gamma_move(board, 2, 4, 3) == 0 );
assert( gamma_move(board, 3, 0, 2) == 1 );
assert( gamma_move(board, 3, 1, 4) == 0 );
assert( gamma_move(board, 4, 0, 5) == 1 );
assert( gamma_move(board, 4, 0, 3) == 0 );
assert( gamma_move(board, 5, 5, 2) == 1 );
assert( gamma_move(board, 6, 3, 3) == 1 );
assert( gamma_move(board, 7, 6, 3) == 0 );
assert( gamma_move(board, 7, 3, 5) == 1 );
assert( gamma_move(board, 8, 3, 0) == 1 );
assert( gamma_move(board, 8, 2, 4) == 0 );
assert( gamma_move(board, 1, 1, 5) == 0 );
assert( gamma_free_fields(board, 1) == 4 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 3, 0) == 0 );
assert( gamma_move(board, 2, 4, 2) == 0 );
assert( gamma_move(board, 3, 6, 1) == 0 );
assert( gamma_move(board, 3, 3, 5) == 0 );
assert( gamma_move(board, 4, 2, 3) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 6, 0) == 0 );
assert( gamma_move(board, 7, 0, 0) == 0 );
assert( gamma_move(board, 7, 4, 2) == 0 );
assert( gamma_busy_fields(board, 8) == 1 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 1, 6, 2) == 0 );
assert( gamma_busy_fields(board, 2) == 1 );
assert( gamma_golden_move(board, 2, 3, 3) == 0 );
assert( gamma_move(board, 3, 5, 4) == 0 );
assert( gamma_move(board, 3, 0, 0) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 4, 5) == 0 );
assert( gamma_move(board, 4, 4, 6) == 0 );
assert( gamma_move(board, 5, 4, 4) == 0 );
assert( gamma_move(board, 6, 4, 1) == 0 );
assert( gamma_move(board, 6, 5, 3) == 0 );
assert( gamma_move(board, 7, 4, 4) == 0 );
assert( gamma_move(board, 7, 3, 0) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 0, 6) == 0 );
assert( gamma_move(board, 1, 0, 1) == 0 );
assert( gamma_busy_fields(board, 2) == 1 );
assert( gamma_move(board, 3, 6, 1) == 0 );
assert( gamma_move(board, 3, 3, 4) == 0 );
assert( gamma_move(board, 4, 1, 5) == 1 );
assert( gamma_busy_fields(board, 4) == 2 );
assert( gamma_move(board, 5, 2, 4) == 0 );
assert( gamma_busy_fields(board, 5) == 1 );
assert( gamma_move(board, 6, 6, 0) == 0 );
assert( gamma_move(board, 6, 2, 2) == 0 );


char* board317629902 = gamma_board(board);
assert( board317629902 != NULL );
assert( strcmp(board317629902, 
"......\n"
"4427..\n"
"......\n"
".1.6..\n"
"3....5\n"
"......\n"
"...8..\n") == 0);
free(board317629902);
board317629902 = NULL;
assert( gamma_move(board, 7, 5, 5) == 0 );
assert( gamma_move(board, 7, 3, 6) == 1 );
assert( gamma_move(board, 8, 5, 5) == 0 );
assert( gamma_move(board, 8, 2, 4) == 0 );
assert( gamma_busy_fields(board, 8) == 1 );
assert( gamma_move(board, 2, 0, 2) == 0 );
assert( gamma_move(board, 2, 4, 5) == 0 );
assert( gamma_move(board, 3, 0, 0) == 0 );
assert( gamma_free_fields(board, 3) == 3 );
assert( gamma_move(board, 4, 2, 4) == 0 );
assert( gamma_move(board, 4, 5, 5) == 0 );
assert( gamma_move(board, 5, 5, 1) == 1 );
assert( gamma_busy_fields(board, 5) == 2 );
assert( gamma_move(board, 7, 2, 4) == 0 );
assert( gamma_move(board, 1, 2, 3) == 1 );
assert( gamma_free_fields(board, 1) == 5 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 0, 0) == 0 );
assert( gamma_golden_move(board, 2, 1, 5) == 1 );
assert( gamma_move(board, 3, 0, 0) == 0 );
assert( gamma_busy_fields(board, 3) == 1 );
assert( gamma_move(board, 4, 0, 1) == 0 );
assert( gamma_move(board, 4, 5, 5) == 0 );
assert( gamma_move(board, 5, 0, 5) == 0 );
assert( gamma_move(board, 5, 2, 0) == 0 );
assert( gamma_busy_fields(board, 5) == 2 );
assert( gamma_move(board, 6, 1, 5) == 0 );
assert( gamma_move(board, 1, 1, 2) == 1 );
assert( gamma_move(board, 2, 2, 0) == 0 );
assert( gamma_move(board, 2, 2, 0) == 0 );
assert( gamma_move(board, 3, 1, 4) == 0 );
assert( gamma_move(board, 3, 4, 5) == 0 );
assert( gamma_busy_fields(board, 3) == 1 );
assert( gamma_move(board, 4, 4, 5) == 0 );
assert( gamma_move(board, 5, 2, 4) == 0 );
assert( gamma_move(board, 6, 6, 0) == 0 );
assert( gamma_move(board, 6, 5, 1) == 0 );
assert( gamma_move(board, 7, 4, 4) == 0 );
assert( gamma_move(board, 8, 6, 5) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 1, 6, 4) == 0 );
assert( gamma_move(board, 1, 5, 6) == 0 );
assert( gamma_move(board, 2, 1, 1) == 0 );
assert( gamma_move(board, 2, 4, 2) == 0 );
assert( gamma_move(board, 3, 1, 1) == 0 );
assert( gamma_move(board, 4, 5, 4) == 0 );
assert( gamma_move(board, 4, 0, 5) == 0 );
assert( gamma_move(board, 5, 5, 6) == 0 );
assert( gamma_move(board, 6, 3, 0) == 0 );
assert( gamma_move(board, 6, 5, 0) == 0 );
assert( gamma_move(board, 7, 2, 4) == 0 );
assert( gamma_move(board, 7, 4, 6) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 3, 0) == 0 );
assert( gamma_move(board, 1, 1, 2) == 0 );
assert( gamma_move(board, 2, 1, 1) == 0 );
assert( gamma_move(board, 3, 4, 5) == 0 );
assert( gamma_move(board, 3, 3, 6) == 0 );
assert( gamma_free_fields(board, 3) == 2 );
assert( gamma_move(board, 4, 1, 2) == 0 );
assert( gamma_move(board, 5, 4, 1) == 1 );
assert( gamma_move(board, 6, 1, 0) == 0 );
assert( gamma_move(board, 6, 0, 3) == 0 );
assert( gamma_free_fields(board, 6) == 3 );
assert( gamma_move(board, 7, 0, 4) == 0 );
assert( gamma_move(board, 7, 1, 4) == 0 );
assert( gamma_move(board, 8, 2, 3) == 0 );
assert( gamma_move(board, 1, 1, 1) == 1 );
assert( gamma_move(board, 2, 0, 4) == 0 );
assert( gamma_move(board, 3, 1, 0) == 0 );
assert( gamma_move(board, 3, 2, 1) == 0 );
assert( gamma_move(board, 4, 4, 4) == 0 );
assert( gamma_move(board, 5, 4, 3) == 0 );
assert( gamma_move(board, 5, 5, 5) == 0 );
assert( gamma_move(board, 6, 4, 5) == 0 );
assert( gamma_move(board, 7, 4, 4) == 0 );


char* board122092890 = gamma_board(board);
assert( board122092890 != NULL );
assert( strcmp(board122092890, 
"...77.\n"
"4227..\n"
"......\n"
".116..\n"
"31...5\n"
".1..55\n"
"...8..\n") == 0);
free(board122092890);
board122092890 = NULL;
assert( gamma_move(board, 8, 4, 2) == 0 );
assert( gamma_move(board, 1, 1, 4) == 1 );
assert( gamma_golden_move(board, 1, 6, 3) == 0 );
assert( gamma_move(board, 2, 5, 2) == 0 );
assert( gamma_free_fields(board, 2) == 3 );


char* board265092447 = gamma_board(board);
assert( board265092447 != NULL );
assert( strcmp(board265092447, 
"...77.\n"
"4227..\n"
".1....\n"
".116..\n"
"31...5\n"
".1..55\n"
"...8..\n") == 0);
free(board265092447);
board265092447 = NULL;
assert( gamma_move(board, 3, 5, 5) == 0 );
assert( gamma_move(board, 4, 5, 6) == 0 );
assert( gamma_move(board, 4, 5, 6) == 0 );


char* board248645222 = gamma_board(board);
assert( board248645222 != NULL );
assert( strcmp(board248645222, 
"...77.\n"
"4227..\n"
".1....\n"
".116..\n"
"31...5\n"
".1..55\n"
"...8..\n") == 0);
free(board248645222);
board248645222 = NULL;


gamma_delete(board);

    return 0;
}
