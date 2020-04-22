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
uuid: 102568553
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(6, 11, 6, 6);
assert( board != NULL );


assert( gamma_move(board, 1, 10, 3) == 0 );
assert( gamma_move(board, 2, 6, 1) == 0 );
assert( gamma_move(board, 2, 5, 6) == 1 );
assert( gamma_golden_possible(board, 2) == 0 );


char* board965861734 = gamma_board(board);
assert( board965861734 != NULL );
assert( strcmp(board965861734, 
"......\n"
"......\n"
"......\n"
"......\n"
".....2\n"
"......\n"
"......\n"
"......\n"
"......\n"
"......\n"
"......\n") == 0);
free(board965861734);
board965861734 = NULL;
assert( gamma_move(board, 3, 2, 0) == 1 );
assert( gamma_move(board, 3, 2, 6) == 1 );
assert( gamma_busy_fields(board, 3) == 2 );
assert( gamma_golden_move(board, 4, 6, 5) == 0 );
assert( gamma_move(board, 5, 5, 5) == 1 );
assert( gamma_move(board, 5, 1, 9) == 1 );
assert( gamma_move(board, 6, 6, 0) == 0 );
assert( gamma_move(board, 6, 3, 5) == 1 );
assert( gamma_free_fields(board, 6) == 60 );
assert( gamma_golden_move(board, 6, 6, 2) == 0 );
assert( gamma_move(board, 2, 3, 2) == 1 );
assert( gamma_move(board, 2, 5, 9) == 1 );
assert( gamma_move(board, 3, 10, 1) == 0 );
assert( gamma_move(board, 3, 2, 5) == 1 );
assert( gamma_move(board, 4, 8, 4) == 0 );
assert( gamma_move(board, 5, 7, 1) == 0 );
assert( gamma_move(board, 6, 1, 2) == 1 );
assert( gamma_busy_fields(board, 6) == 2 );
assert( gamma_move(board, 1, 5, 3) == 1 );
assert( gamma_move(board, 2, 8, 4) == 0 );
assert( gamma_move(board, 3, 2, 3) == 1 );
assert( gamma_move(board, 3, 2, 4) == 1 );
assert( gamma_move(board, 4, 7, 2) == 0 );
assert( gamma_move(board, 4, 1, 8) == 1 );
assert( gamma_move(board, 5, 1, 2) == 0 );
assert( gamma_move(board, 5, 1, 4) == 1 );
assert( gamma_golden_move(board, 5, 2, 1) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 2, 5, 4) == 1 );
assert( gamma_move(board, 3, 3, 4) == 1 );
assert( gamma_move(board, 4, 9, 3) == 0 );
assert( gamma_move(board, 4, 4, 10) == 1 );
assert( gamma_move(board, 5, 1, 4) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 0, 3) == 1 );
assert( gamma_golden_move(board, 1, 4, 1) == 0 );
assert( gamma_move(board, 2, 2, 4) == 0 );
assert( gamma_move(board, 4, 10, 5) == 0 );
assert( gamma_move(board, 4, 2, 3) == 0 );
assert( gamma_move(board, 5, 5, 6) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 3, 4) == 0 );
assert( gamma_move(board, 1, 0, 10) == 1 );
assert( gamma_move(board, 2, 2, 4) == 0 );
assert( gamma_move(board, 3, 0, 5) == 1 );
assert( gamma_golden_move(board, 3, 2, 1) == 0 );
assert( gamma_move(board, 4, 9, 4) == 0 );
assert( gamma_move(board, 5, 2, 2) == 1 );
assert( gamma_move(board, 5, 3, 8) == 1 );
assert( gamma_move(board, 6, 4, 2) == 1 );
assert( gamma_move(board, 6, 2, 10) == 1 );
assert( gamma_busy_fields(board, 6) == 4 );
assert( gamma_move(board, 1, 1, 4) == 0 );
assert( gamma_move(board, 2, 1, 1) == 1 );
assert( gamma_golden_move(board, 2, 5, 5) == 1 );
assert( gamma_move(board, 3, 1, 9) == 0 );
assert( gamma_move(board, 3, 4, 3) == 1 );
assert( gamma_move(board, 5, 6, 1) == 0 );
assert( gamma_move(board, 1, 9, 2) == 0 );
assert( gamma_move(board, 2, 7, 0) == 0 );
assert( gamma_move(board, 3, 1, 3) == 1 );
assert( gamma_golden_move(board, 3, 8, 1) == 0 );
assert( gamma_move(board, 4, 9, 3) == 0 );
assert( gamma_move(board, 4, 1, 10) == 1 );
assert( gamma_move(board, 5, 5, 4) == 0 );
assert( gamma_move(board, 6, 3, 0) == 1 );
assert( gamma_move(board, 1, 3, 2) == 0 );
assert( gamma_move(board, 1, 3, 2) == 0 );
assert( gamma_free_fields(board, 1) == 36 );
assert( gamma_golden_move(board, 1, 10, 4) == 0 );
assert( gamma_move(board, 2, 4, 10) == 0 );
assert( gamma_move(board, 2, 5, 0) == 1 );
assert( gamma_free_fields(board, 2) == 35 );
assert( gamma_move(board, 3, 9, 3) == 0 );
assert( gamma_move(board, 4, 7, 1) == 0 );
assert( gamma_move(board, 5, 9, 2) == 0 );
assert( gamma_busy_fields(board, 5) == 4 );
assert( gamma_move(board, 6, 9, 4) == 0 );
assert( gamma_move(board, 6, 1, 1) == 0 );
assert( gamma_free_fields(board, 6) == 35 );
assert( gamma_move(board, 1, 7, 0) == 0 );
assert( gamma_move(board, 1, 5, 7) == 1 );
assert( gamma_move(board, 2, 1, 2) == 0 );
assert( gamma_move(board, 2, 3, 4) == 0 );
assert( gamma_move(board, 3, 2, 5) == 0 );
assert( gamma_move(board, 4, 6, 1) == 0 );
assert( gamma_move(board, 4, 1, 5) == 1 );
assert( gamma_free_fields(board, 4) == 33 );
assert( gamma_move(board, 5, 0, 0) == 1 );
assert( gamma_move(board, 6, 10, 5) == 0 );
assert( gamma_move(board, 1, 0, 1) == 1 );
assert( gamma_move(board, 2, 4, 10) == 0 );
assert( gamma_move(board, 2, 4, 7) == 1 );
assert( gamma_free_fields(board, 2) == 14 );
assert( gamma_move(board, 3, 1, 5) == 0 );
assert( gamma_move(board, 3, 0, 3) == 0 );
assert( gamma_move(board, 4, 3, 3) == 1 );
assert( gamma_golden_move(board, 4, 3, 5) == 1 );
assert( gamma_move(board, 5, 5, 10) == 1 );
assert( gamma_move(board, 6, 2, 4) == 0 );
assert( gamma_free_fields(board, 6) == 28 );
assert( gamma_golden_possible(board, 6) == 1 );


char* board281524249 = gamma_board(board);
assert( board281524249 != NULL );
assert( strcmp(board281524249, 
"146.45\n"
".5...2\n"
".4.5..\n"
"....21\n"
"..3..2\n"
"3434.2\n"
".533.2\n"
"133431\n"
".6526.\n"
"12....\n"
"5.36.2\n") == 0);
free(board281524249);
board281524249 = NULL;
assert( gamma_move(board, 1, 9, 4) == 0 );
assert( gamma_move(board, 2, 2, 5) == 0 );
assert( gamma_move(board, 3, 5, 7) == 0 );
assert( gamma_move(board, 4, 8, 2) == 0 );
assert( gamma_move(board, 4, 4, 7) == 0 );
assert( gamma_move(board, 5, 1, 4) == 0 );
assert( gamma_move(board, 5, 2, 7) == 0 );
assert( gamma_move(board, 6, 1, 5) == 0 );
assert( gamma_move(board, 6, 4, 0) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 2, 8) == 1 );
assert( gamma_move(board, 1, 4, 1) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 2, 3) == 0 );
assert( gamma_move(board, 3, 3, 3) == 0 );
assert( gamma_move(board, 4, 3, 4) == 0 );
assert( gamma_move(board, 5, 8, 5) == 0 );
assert( gamma_move(board, 5, 5, 0) == 0 );
assert( gamma_move(board, 6, 5, 5) == 0 );
assert( gamma_move(board, 6, 3, 0) == 0 );
assert( gamma_move(board, 1, 0, 2) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 4, 0) == 0 );
assert( gamma_move(board, 2, 5, 0) == 0 );
assert( gamma_move(board, 3, 1, 2) == 0 );
assert( gamma_busy_fields(board, 3) == 9 );
assert( gamma_move(board, 4, 3, 1) == 0 );
assert( gamma_move(board, 5, 6, 1) == 0 );
assert( gamma_move(board, 6, 9, 0) == 0 );
assert( gamma_move(board, 1, 1, 2) == 0 );
assert( gamma_move(board, 2, 4, 6) == 1 );


char* board838577959 = gamma_board(board);
assert( board838577959 != NULL );
assert( strcmp(board838577959, 
"146.45\n"
".5...2\n"
".415..\n"
"....21\n"
"..3.22\n"
"3434.2\n"
".533.2\n"
"133431\n"
"16526.\n"
"12....\n"
"5.3662\n") == 0);
free(board838577959);
board838577959 = NULL;
assert( gamma_move(board, 3, 0, 1) == 0 );
assert( gamma_move(board, 4, 2, 3) == 0 );
assert( gamma_free_fields(board, 4) == 7 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 5, 4) == 0 );
assert( gamma_move(board, 5, 1, 7) == 0 );
assert( gamma_move(board, 6, 0, 1) == 0 );
assert( gamma_move(board, 6, 1, 3) == 0 );
assert( gamma_move(board, 1, 9, 4) == 0 );
assert( gamma_move(board, 2, 1, 2) == 0 );
assert( gamma_move(board, 2, 2, 6) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 4, 0) == 0 );
assert( gamma_move(board, 3, 4, 2) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 8, 4) == 0 );
assert( gamma_move(board, 4, 4, 5) == 1 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 9, 4) == 0 );
assert( gamma_golden_move(board, 5, 10, 4) == 0 );
assert( gamma_move(board, 6, 1, 5) == 0 );
assert( gamma_move(board, 6, 1, 5) == 0 );
assert( gamma_move(board, 1, 5, 10) == 0 );
assert( gamma_move(board, 2, 8, 4) == 0 );
assert( gamma_move(board, 3, 0, 4) == 1 );
assert( gamma_move(board, 4, 4, 5) == 0 );
assert( gamma_move(board, 4, 3, 8) == 0 );
assert( gamma_move(board, 5, 1, 5) == 0 );
assert( gamma_move(board, 6, 0, 2) == 0 );
assert( gamma_move(board, 6, 1, 7) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 10, 3) == 0 );
assert( gamma_move(board, 1, 0, 0) == 0 );
assert( gamma_move(board, 2, 2, 9) == 1 );
assert( gamma_move(board, 2, 2, 10) == 0 );
assert( gamma_move(board, 3, 9, 0) == 0 );
assert( gamma_move(board, 3, 0, 10) == 0 );
assert( gamma_move(board, 4, 8, 0) == 0 );
assert( gamma_move(board, 5, 3, 9) == 1 );
assert( gamma_move(board, 6, 1, 5) == 0 );
assert( gamma_free_fields(board, 6) == 19 );


char* board900480746 = gamma_board(board);
assert( board900480746 != NULL );
assert( strcmp(board900480746, 
"146.45\n"
".525.2\n"
".415..\n"
".6..21\n"
"..3.22\n"
"343442\n"
"3533.2\n"
"133431\n"
"16526.\n"
"12....\n"
"5.3662\n") == 0);
free(board900480746);
board900480746 = NULL;
assert( gamma_move(board, 1, 6, 1) == 0 );
assert( gamma_busy_fields(board, 1) == 7 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 9, 4) == 0 );
assert( gamma_move(board, 2, 0, 6) == 0 );
assert( gamma_move(board, 3, 1, 2) == 0 );
assert( gamma_move(board, 4, 9, 4) == 0 );
assert( gamma_move(board, 4, 0, 10) == 0 );
assert( gamma_move(board, 5, 1, 5) == 0 );
assert( gamma_move(board, 6, 1, 5) == 0 );
assert( gamma_move(board, 1, 8, 0) == 0 );
assert( gamma_move(board, 1, 2, 7) == 1 );
assert( gamma_free_fields(board, 1) == 18 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 5, 6) == 0 );
assert( gamma_busy_fields(board, 2) == 10 );
assert( gamma_move(board, 3, 0, 8) == 1 );
assert( gamma_move(board, 4, 10, 3) == 0 );
assert( gamma_move(board, 5, 1, 3) == 0 );
assert( gamma_move(board, 5, 2, 9) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 1, 10) == 0 );
assert( gamma_free_fields(board, 6) == 17 );
assert( gamma_move(board, 2, 5, 5) == 0 );
assert( gamma_move(board, 2, 2, 2) == 0 );
assert( gamma_move(board, 3, 7, 0) == 0 );
assert( gamma_move(board, 3, 5, 1) == 1 );
assert( gamma_busy_fields(board, 3) == 12 );
assert( gamma_move(board, 4, 1, 6) == 1 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 9, 4) == 0 );
assert( gamma_move(board, 5, 2, 8) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 2, 9) == 0 );
assert( gamma_busy_fields(board, 1) == 8 );
assert( gamma_move(board, 2, 8, 5) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 8, 4) == 0 );
assert( gamma_move(board, 3, 5, 6) == 0 );
assert( gamma_move(board, 4, 5, 4) == 0 );
assert( gamma_move(board, 4, 2, 9) == 0 );
assert( gamma_move(board, 5, 1, 2) == 0 );
assert( gamma_busy_fields(board, 5) == 7 );
assert( gamma_move(board, 6, 0, 1) == 0 );


char* board657996482 = gamma_board(board);
assert( board657996482 != NULL );
assert( strcmp(board657996482, 
"146.45\n"
".525.2\n"
"3415..\n"
".61.21\n"
".43.22\n"
"343442\n"
"3533.2\n"
"133431\n"
"16526.\n"
"12...3\n"
"5.3662\n") == 0);
free(board657996482);
board657996482 = NULL;


gamma_delete(board);

    return 0;
}
