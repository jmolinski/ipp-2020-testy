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
uuid: 165656991
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(6, 8, 4, 8);
assert( board != NULL );


assert( gamma_move(board, 1, 0, 2) == 1 );
assert( gamma_golden_possible(board, 1) == 0 );


char* board818211239 = gamma_board(board);
assert( board818211239 != NULL );
assert( strcmp(board818211239, 
"......\n"
"......\n"
"......\n"
"......\n"
"......\n"
"1.....\n"
"......\n"
"......\n") == 0);
free(board818211239);
board818211239 = NULL;
assert( gamma_move(board, 2, 0, 3) == 1 );
assert( gamma_move(board, 2, 2, 7) == 1 );
assert( gamma_free_fields(board, 2) == 45 );
assert( gamma_move(board, 3, 4, 3) == 1 );
assert( gamma_move(board, 3, 3, 6) == 1 );
assert( gamma_move(board, 4, 5, 1) == 1 );
assert( gamma_move(board, 1, 0, 2) == 0 );
assert( gamma_move(board, 2, 7, 3) == 0 );
assert( gamma_move(board, 2, 4, 4) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 5, 3) == 1 );
assert( gamma_move(board, 3, 0, 5) == 1 );
assert( gamma_move(board, 4, 5, 1) == 0 );
assert( gamma_move(board, 2, 5, 4) == 1 );
assert( gamma_move(board, 3, 5, 3) == 0 );
assert( gamma_move(board, 4, 3, 3) == 1 );
assert( gamma_move(board, 1, 6, 4) == 0 );
assert( gamma_move(board, 1, 2, 2) == 1 );
assert( gamma_move(board, 2, 4, 0) == 1 );
assert( gamma_busy_fields(board, 2) == 5 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 0, 4) == 1 );
assert( gamma_move(board, 4, 5, 3) == 0 );
assert( gamma_move(board, 1, 1, 3) == 1 );
assert( gamma_move(board, 1, 2, 1) == 1 );
assert( gamma_move(board, 2, 1, 4) == 1 );
assert( gamma_move(board, 2, 5, 3) == 0 );
assert( gamma_move(board, 3, 7, 4) == 0 );
assert( gamma_move(board, 3, 4, 6) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 2, 3) == 1 );
assert( gamma_move(board, 1, 5, 5) == 1 );
assert( gamma_move(board, 1, 0, 2) == 0 );
assert( gamma_move(board, 2, 5, 2) == 1 );
assert( gamma_move(board, 3, 4, 2) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 2, 7) == 0 );
assert( gamma_move(board, 4, 3, 4) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 7, 1) == 0 );
assert( gamma_move(board, 2, 2, 1) == 0 );
assert( gamma_move(board, 2, 1, 0) == 1 );
assert( gamma_move(board, 4, 1, 0) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 5, 4) == 0 );
assert( gamma_move(board, 1, 4, 6) == 0 );
assert( gamma_free_fields(board, 1) == 24 );
assert( gamma_move(board, 2, 2, 2) == 0 );
assert( gamma_move(board, 2, 5, 3) == 0 );
assert( gamma_free_fields(board, 2) == 24 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 5, 2) == 0 );
assert( gamma_move(board, 3, 3, 3) == 0 );
assert( gamma_move(board, 4, 1, 1) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 6, 2) == 0 );
assert( gamma_move(board, 2, 7, 5) == 0 );
assert( gamma_busy_fields(board, 2) == 8 );
assert( gamma_move(board, 3, 7, 0) == 0 );
assert( gamma_move(board, 3, 1, 4) == 0 );


char* board477122068 = gamma_board(board);
assert( board477122068 != NULL );
assert( strcmp(board477122068, 
"..2...\n"
"...33.\n"
"3....1\n"
"42.422\n"
"214433\n"
"1.1.32\n"
".41..4\n"
".2..2.\n") == 0);
free(board477122068);
board477122068 = NULL;
assert( gamma_move(board, 4, 7, 1) == 0 );
assert( gamma_busy_fields(board, 4) == 6 );
assert( gamma_free_fields(board, 4) == 23 );
assert( gamma_move(board, 1, 5, 3) == 0 );
assert( gamma_move(board, 1, 1, 1) == 0 );
assert( gamma_move(board, 2, 3, 0) == 1 );
assert( gamma_move(board, 2, 4, 4) == 0 );
assert( gamma_move(board, 3, 6, 5) == 0 );
assert( gamma_move(board, 4, 7, 5) == 0 );
assert( gamma_move(board, 1, 4, 3) == 0 );
assert( gamma_move(board, 1, 2, 4) == 1 );
assert( gamma_move(board, 3, 5, 2) == 0 );
assert( gamma_move(board, 3, 1, 7) == 1 );
assert( gamma_move(board, 4, 0, 7) == 1 );
assert( gamma_move(board, 4, 5, 7) == 1 );
assert( gamma_move(board, 1, 2, 1) == 0 );
assert( gamma_move(board, 2, 1, 3) == 0 );
assert( gamma_move(board, 2, 3, 6) == 0 );
assert( gamma_move(board, 3, 5, 2) == 0 );
assert( gamma_move(board, 3, 1, 1) == 0 );
assert( gamma_move(board, 4, 2, 1) == 0 );
assert( gamma_move(board, 1, 1, 6) == 1 );
assert( gamma_move(board, 1, 1, 6) == 0 );
assert( gamma_move(board, 2, 4, 6) == 0 );
assert( gamma_move(board, 3, 0, 0) == 1 );
assert( gamma_busy_fields(board, 3) == 8 );
assert( gamma_move(board, 4, 1, 5) == 1 );
assert( gamma_move(board, 1, 3, 6) == 0 );
assert( gamma_move(board, 1, 1, 7) == 0 );


char* board807432917 = gamma_board(board);
assert( board807432917 != NULL );
assert( strcmp(board807432917, 
"432..4\n"
".1.33.\n"
"34...1\n"
"421422\n"
"214433\n"
"1.1.32\n"
".41..4\n"
"32.22.\n") == 0);
free(board807432917);
board807432917 = NULL;
assert( gamma_move(board, 2, 7, 4) == 0 );
assert( gamma_move(board, 3, 3, 3) == 0 );
assert( gamma_move(board, 4, 2, 1) == 0 );
assert( gamma_move(board, 4, 1, 0) == 0 );
assert( gamma_move(board, 1, 2, 4) == 0 );
assert( gamma_busy_fields(board, 1) == 7 );
assert( gamma_free_fields(board, 1) == 15 );
assert( gamma_move(board, 2, 0, 7) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 0, 4) == 0 );
assert( gamma_move(board, 4, 5, 5) == 0 );
assert( gamma_move(board, 2, 6, 0) == 0 );
assert( gamma_move(board, 3, 7, 4) == 0 );
assert( gamma_move(board, 4, 4, 3) == 0 );
assert( gamma_move(board, 1, 4, 1) == 1 );
assert( gamma_move(board, 2, 6, 5) == 0 );
assert( gamma_move(board, 3, 2, 3) == 0 );
assert( gamma_busy_fields(board, 3) == 8 );
assert( gamma_golden_move(board, 3, 5, 5) == 1 );
assert( gamma_move(board, 4, 5, 2) == 0 );
assert( gamma_move(board, 4, 4, 7) == 1 );
assert( gamma_free_fields(board, 4) == 13 );
assert( gamma_golden_move(board, 4, 6, 1) == 0 );
assert( gamma_move(board, 1, 4, 1) == 0 );


char* board448249246 = gamma_board(board);
assert( board448249246 != NULL );
assert( strcmp(board448249246, 
"432.44\n"
".1.33.\n"
"34...3\n"
"421422\n"
"214433\n"
"1.1.32\n"
".41.14\n"
"32.22.\n") == 0);
free(board448249246);
board448249246 = NULL;
assert( gamma_move(board, 3, 6, 5) == 0 );
assert( gamma_move(board, 4, 5, 2) == 0 );
assert( gamma_move(board, 4, 4, 3) == 0 );
assert( gamma_move(board, 1, 4, 6) == 0 );
assert( gamma_move(board, 1, 1, 3) == 0 );
assert( gamma_move(board, 2, 4, 6) == 0 );
assert( gamma_move(board, 3, 5, 2) == 0 );
assert( gamma_busy_fields(board, 3) == 9 );
assert( gamma_move(board, 4, 0, 5) == 0 );
assert( gamma_busy_fields(board, 4) == 10 );
assert( gamma_move(board, 1, 2, 1) == 0 );
assert( gamma_move(board, 2, 5, 2) == 0 );
assert( gamma_move(board, 3, 6, 2) == 0 );
assert( gamma_move(board, 4, 1, 3) == 0 );
assert( gamma_move(board, 4, 3, 1) == 1 );
assert( gamma_move(board, 1, 1, 1) == 0 );
assert( gamma_move(board, 2, 6, 0) == 0 );
assert( gamma_move(board, 3, 1, 3) == 0 );
assert( gamma_move(board, 4, 6, 0) == 0 );
assert( gamma_move(board, 1, 0, 6) == 1 );
assert( gamma_move(board, 2, 6, 2) == 0 );
assert( gamma_move(board, 3, 4, 3) == 0 );
assert( gamma_move(board, 4, 1, 2) == 1 );
assert( gamma_move(board, 1, 7, 3) == 0 );
assert( gamma_move(board, 2, 5, 4) == 0 );
assert( gamma_move(board, 2, 5, 3) == 0 );
assert( gamma_move(board, 3, 0, 2) == 0 );
assert( gamma_golden_move(board, 3, 4, 0) == 0 );


char* board486639615 = gamma_board(board);
assert( board486639615 != NULL );
assert( strcmp(board486639615, 
"432.44\n"
"11.33.\n"
"34...3\n"
"421422\n"
"214433\n"
"141.32\n"
".41414\n"
"32.22.\n") == 0);
free(board486639615);
board486639615 = NULL;
assert( gamma_move(board, 4, 1, 0) == 0 );
assert( gamma_move(board, 1, 0, 2) == 0 );
assert( gamma_move(board, 1, 0, 2) == 0 );
assert( gamma_move(board, 2, 6, 2) == 0 );
assert( gamma_move(board, 3, 2, 3) == 0 );
assert( gamma_move(board, 3, 1, 4) == 0 );


gamma_delete(board);

    return 0;
}
