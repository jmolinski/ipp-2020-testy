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
uuid: 260414890
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(6, 6, 4, 4);
assert( board != NULL );


assert( gamma_move(board, 1, 1, 4) == 1 );
assert( gamma_move(board, 2, 1, 5) == 1 );
assert( gamma_move(board, 3, 2, 2) == 1 );
assert( gamma_move(board, 3, 1, 0) == 1 );
assert( gamma_busy_fields(board, 3) == 2 );
assert( gamma_move(board, 4, 2, 5) == 1 );
assert( gamma_move(board, 4, 4, 0) == 1 );
assert( gamma_move(board, 1, 2, 4) == 1 );
assert( gamma_move(board, 2, 4, 5) == 1 );
assert( gamma_move(board, 2, 2, 4) == 0 );
assert( gamma_busy_fields(board, 2) == 2 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 1, 0) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 5, 3) == 1 );
assert( gamma_move(board, 4, 3, 4) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 5, 5) == 1 );
assert( gamma_move(board, 2, 5, 0) == 1 );
assert( gamma_move(board, 2, 0, 0) == 1 );


char* board512831166 = gamma_board(board);
assert( board512831166 != NULL );
assert( strcmp(board512831166, 
".24.21\n"
".114..\n"
".....4\n"
"..3...\n"
"......\n"
"23..42\n") == 0);
free(board512831166);
board512831166 = NULL;
assert( gamma_move(board, 3, 2, 0) == 1 );
assert( gamma_move(board, 3, 0, 4) == 1 );
assert( gamma_move(board, 4, 1, 5) == 0 );
assert( gamma_move(board, 1, 2, 5) == 0 );
assert( gamma_move(board, 2, 5, 0) == 0 );
assert( gamma_move(board, 3, 0, 3) == 1 );
assert( gamma_busy_fields(board, 3) == 5 );
assert( gamma_move(board, 4, 3, 4) == 0 );
assert( gamma_move(board, 1, 1, 3) == 1 );
assert( gamma_move(board, 1, 3, 4) == 0 );
assert( gamma_busy_fields(board, 1) == 4 );
assert( gamma_move(board, 2, 1, 2) == 0 );
assert( gamma_move(board, 2, 1, 2) == 0 );
assert( gamma_golden_move(board, 2, 0, 1) == 0 );
assert( gamma_move(board, 3, 5, 0) == 0 );
assert( gamma_move(board, 4, 0, 3) == 0 );
assert( gamma_move(board, 4, 3, 4) == 0 );
assert( gamma_move(board, 1, 4, 3) == 1 );
assert( gamma_move(board, 1, 2, 3) == 1 );
assert( gamma_move(board, 2, 0, 3) == 0 );
assert( gamma_move(board, 2, 5, 1) == 1 );
assert( gamma_move(board, 3, 4, 4) == 1 );
assert( gamma_move(board, 3, 0, 3) == 0 );
assert( gamma_free_fields(board, 3) == 8 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 0, 0) == 0 );
assert( gamma_move(board, 4, 1, 1) == 0 );
assert( gamma_move(board, 1, 2, 0) == 0 );
assert( gamma_move(board, 1, 5, 0) == 0 );
assert( gamma_golden_move(board, 1, 5, 2) == 0 );
assert( gamma_free_fields(board, 2) == 5 );
assert( gamma_move(board, 3, 0, 3) == 0 );
assert( gamma_move(board, 4, 1, 0) == 0 );
assert( gamma_move(board, 1, 5, 0) == 0 );
assert( gamma_move(board, 2, 5, 3) == 0 );
assert( gamma_move(board, 2, 2, 3) == 0 );
assert( gamma_busy_fields(board, 2) == 5 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 3, 0) == 1 );
assert( gamma_move(board, 1, 2, 0) == 0 );
assert( gamma_move(board, 1, 2, 4) == 0 );
assert( gamma_move(board, 2, 2, 3) == 0 );
assert( gamma_move(board, 2, 0, 5) == 1 );
assert( gamma_move(board, 3, 3, 3) == 0 );
assert( gamma_busy_fields(board, 3) == 7 );
assert( gamma_move(board, 4, 5, 2) == 1 );


char* board316946248 = gamma_board(board);
assert( board316946248 != NULL );
assert( strcmp(board316946248, 
"224.21\n"
"31143.\n"
"311.14\n"
"..3..4\n"
".....2\n"
"233342\n") == 0);
free(board316946248);
board316946248 = NULL;
assert( gamma_move(board, 1, 1, 4) == 0 );
assert( gamma_free_fields(board, 1) == 12 );
assert( gamma_move(board, 2, 2, 0) == 0 );
assert( gamma_move(board, 3, 3, 0) == 0 );
assert( gamma_free_fields(board, 3) == 7 );
assert( gamma_move(board, 4, 1, 1) == 0 );
assert( gamma_move(board, 4, 1, 0) == 0 );
assert( gamma_move(board, 1, 1, 4) == 0 );
assert( gamma_move(board, 2, 2, 3) == 0 );
assert( gamma_move(board, 2, 1, 2) == 0 );
assert( gamma_move(board, 3, 1, 4) == 0 );
assert( gamma_move(board, 4, 2, 3) == 0 );
assert( gamma_move(board, 1, 1, 3) == 0 );
assert( gamma_move(board, 1, 5, 4) == 1 );
assert( gamma_busy_fields(board, 1) == 7 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 3, 3) == 0 );
assert( gamma_move(board, 2, 0, 0) == 0 );
assert( gamma_move(board, 3, 0, 2) == 1 );
assert( gamma_move(board, 4, 1, 2) == 0 );
assert( gamma_move(board, 4, 4, 3) == 0 );
assert( gamma_move(board, 1, 1, 1) == 1 );
assert( gamma_move(board, 1, 4, 5) == 0 );
assert( gamma_move(board, 2, 2, 4) == 0 );
assert( gamma_move(board, 2, 1, 0) == 0 );
assert( gamma_move(board, 3, 1, 5) == 0 );
assert( gamma_free_fields(board, 3) == 5 );
assert( gamma_move(board, 4, 1, 2) == 0 );
assert( gamma_move(board, 1, 0, 1) == 1 );
assert( gamma_move(board, 3, 1, 3) == 0 );
assert( gamma_move(board, 4, 2, 4) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 2, 1) == 1 );


char* board525702312 = gamma_board(board);
assert( board525702312 != NULL );
assert( strcmp(board525702312, 
"224.21\n"
"311431\n"
"311.14\n"
"3.3..4\n"
"111..2\n"
"233342\n") == 0);
free(board525702312);
board525702312 = NULL;
assert( gamma_move(board, 3, 5, 3) == 0 );
assert( gamma_move(board, 3, 0, 4) == 0 );
assert( gamma_golden_move(board, 3, 5, 2) == 0 );


char* board812572362 = gamma_board(board);
assert( board812572362 != NULL );
assert( strcmp(board812572362, 
"224.21\n"
"311431\n"
"311.14\n"
"3.3..4\n"
"111..2\n"
"233342\n") == 0);
free(board812572362);
board812572362 = NULL;
assert( gamma_move(board, 4, 5, 3) == 0 );
assert( gamma_move(board, 1, 3, 4) == 0 );
assert( gamma_free_fields(board, 1) == 4 );
assert( gamma_move(board, 2, 1, 1) == 0 );
assert( gamma_move(board, 2, 1, 5) == 0 );
assert( gamma_move(board, 3, 2, 4) == 0 );
assert( gamma_move(board, 3, 3, 5) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 0, 5) == 0 );
assert( gamma_move(board, 4, 2, 1) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 5, 3) == 0 );
assert( gamma_move(board, 2, 3, 3) == 0 );
assert( gamma_move(board, 2, 3, 0) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 2, 3) == 0 );
assert( gamma_move(board, 3, 4, 4) == 0 );
assert( gamma_move(board, 4, 1, 3) == 0 );
assert( gamma_move(board, 4, 5, 1) == 0 );
assert( gamma_busy_fields(board, 4) == 5 );
assert( gamma_move(board, 1, 1, 4) == 0 );
assert( gamma_move(board, 1, 5, 4) == 0 );


char* board710120642 = gamma_board(board);
assert( board710120642 != NULL );
assert( strcmp(board710120642, 
"224.21\n"
"311431\n"
"311.14\n"
"3.3..4\n"
"111..2\n"
"233342\n") == 0);
free(board710120642);
board710120642 = NULL;
assert( gamma_move(board, 2, 1, 5) == 0 );
assert( gamma_free_fields(board, 2) == 2 );
assert( gamma_move(board, 3, 2, 4) == 0 );
assert( gamma_busy_fields(board, 3) == 8 );


char* board470801425 = gamma_board(board);
assert( board470801425 != NULL );
assert( strcmp(board470801425, 
"224.21\n"
"311431\n"
"311.14\n"
"3.3..4\n"
"111..2\n"
"233342\n") == 0);
free(board470801425);
board470801425 = NULL;
assert( gamma_move(board, 4, 2, 3) == 0 );
assert( gamma_move(board, 4, 4, 3) == 0 );


gamma_delete(board);

    return 0;
}
