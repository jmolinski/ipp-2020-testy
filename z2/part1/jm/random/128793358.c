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
uuid: 128793358
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(6, 13, 5, 12);
assert( board != NULL );


assert( gamma_move(board, 1, 8, 2) == 0 );
assert( gamma_move(board, 1, 3, 11) == 1 );
assert( gamma_busy_fields(board, 1) == 1 );
assert( gamma_move(board, 2, 5, 8) == 1 );
assert( gamma_move(board, 3, 1, 6) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 6, 5) == 0 );
assert( gamma_move(board, 5, 3, 0) == 1 );
assert( gamma_move(board, 5, 4, 8) == 1 );
assert( gamma_busy_fields(board, 5) == 2 );
assert( gamma_move(board, 1, 2, 4) == 1 );
assert( gamma_move(board, 1, 2, 8) == 1 );
assert( gamma_move(board, 2, 0, 5) == 1 );
assert( gamma_move(board, 2, 5, 0) == 1 );
assert( gamma_busy_fields(board, 2) == 3 );
assert( gamma_move(board, 3, 11, 4) == 0 );
assert( gamma_move(board, 4, 12, 2) == 0 );
assert( gamma_move(board, 4, 2, 7) == 1 );
assert( gamma_move(board, 5, 9, 4) == 0 );
assert( gamma_busy_fields(board, 5) == 2 );
assert( gamma_move(board, 1, 2, 11) == 1 );
assert( gamma_move(board, 1, 2, 1) == 1 );
assert( gamma_move(board, 2, 3, 12) == 1 );
assert( gamma_move(board, 3, 4, 3) == 1 );
assert( gamma_move(board, 3, 3, 7) == 1 );
assert( gamma_move(board, 4, 10, 0) == 0 );
assert( gamma_move(board, 4, 0, 2) == 1 );
assert( gamma_move(board, 5, 3, 2) == 1 );
assert( gamma_move(board, 1, 3, 7) == 0 );
assert( gamma_move(board, 2, 4, 10) == 1 );
assert( gamma_free_fields(board, 2) == 60 );
assert( gamma_move(board, 3, 4, 3) == 0 );
assert( gamma_move(board, 3, 3, 9) == 1 );
assert( gamma_move(board, 4, 9, 2) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 10, 5) == 0 );
assert( gamma_move(board, 5, 5, 4) == 1 );
assert( gamma_free_fields(board, 5) == 58 );


char* board755764078 = gamma_board(board);
assert( board755764078 != NULL );
assert( strcmp(board755764078, 
"...2..\n"
"..11..\n"
"....2.\n"
"...3..\n"
"..1.52\n"
"..43..\n"
".3....\n"
"2.....\n"
"..1..5\n"
"....3.\n"
"4..5..\n"
"..1...\n"
"...5.2\n") == 0);
free(board755764078);
board755764078 = NULL;
assert( gamma_move(board, 1, 4, 2) == 1 );
assert( gamma_move(board, 2, 6, 2) == 0 );
assert( gamma_move(board, 2, 2, 11) == 0 );
assert( gamma_move(board, 3, 9, 0) == 0 );
assert( gamma_move(board, 3, 4, 1) == 1 );
assert( gamma_move(board, 4, 3, 0) == 0 );
assert( gamma_move(board, 5, 3, 0) == 0 );
assert( gamma_move(board, 5, 5, 0) == 0 );
assert( gamma_move(board, 1, 9, 4) == 0 );
assert( gamma_move(board, 1, 0, 8) == 1 );


char* board642684649 = gamma_board(board);
assert( board642684649 != NULL );
assert( strcmp(board642684649, 
"...2..\n"
"..11..\n"
"....2.\n"
"...3..\n"
"1.1.52\n"
"..43..\n"
".3....\n"
"2.....\n"
"..1..5\n"
"....3.\n"
"4..51.\n"
"..1.3.\n"
"...5.2\n") == 0);
free(board642684649);
board642684649 = NULL;
assert( gamma_move(board, 2, 0, 2) == 0 );
assert( gamma_move(board, 3, 3, 0) == 0 );
assert( gamma_move(board, 3, 0, 3) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 2, 12) == 1 );
assert( gamma_move(board, 5, 5, 4) == 0 );
assert( gamma_free_fields(board, 5) == 53 );
assert( gamma_golden_move(board, 5, 0, 5) == 1 );
assert( gamma_move(board, 1, 10, 3) == 0 );
assert( gamma_move(board, 1, 4, 10) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 12, 1) == 0 );
assert( gamma_move(board, 4, 4, 7) == 1 );
assert( gamma_move(board, 4, 5, 9) == 1 );
assert( gamma_move(board, 5, 11, 1) == 0 );
assert( gamma_busy_fields(board, 5) == 5 );
assert( gamma_move(board, 1, 3, 9) == 0 );
assert( gamma_move(board, 2, 1, 1) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 2, 9) == 1 );
assert( gamma_move(board, 3, 0, 9) == 1 );
assert( gamma_move(board, 4, 12, 0) == 0 );
assert( gamma_move(board, 4, 0, 0) == 1 );
assert( gamma_move(board, 5, 7, 5) == 0 );
assert( gamma_move(board, 1, 2, 5) == 1 );
assert( gamma_move(board, 2, 1, 5) == 1 );
assert( gamma_move(board, 3, 4, 1) == 0 );
assert( gamma_move(board, 3, 3, 4) == 1 );
assert( gamma_move(board, 4, 4, 1) == 0 );
assert( gamma_move(board, 5, 5, 5) == 1 );
assert( gamma_move(board, 1, 3, 2) == 0 );
assert( gamma_move(board, 2, 2, 1) == 0 );
assert( gamma_move(board, 3, 8, 1) == 0 );
assert( gamma_free_fields(board, 3) == 43 );
assert( gamma_move(board, 4, 9, 4) == 0 );
assert( gamma_move(board, 4, 1, 10) == 1 );
assert( gamma_move(board, 5, 3, 1) == 1 );
assert( gamma_move(board, 1, 0, 2) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 10, 2) == 0 );
assert( gamma_free_fields(board, 2) == 41 );
assert( gamma_move(board, 3, 10, 5) == 0 );
assert( gamma_free_fields(board, 3) == 41 );
assert( gamma_move(board, 4, 2, 1) == 0 );
assert( gamma_move(board, 5, 12, 0) == 0 );
assert( gamma_move(board, 5, 3, 6) == 1 );
assert( gamma_move(board, 1, 2, 1) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 6, 5) == 0 );
assert( gamma_free_fields(board, 2) == 40 );
assert( gamma_move(board, 3, 9, 4) == 0 );
assert( gamma_move(board, 4, 11, 0) == 0 );
assert( gamma_move(board, 4, 3, 9) == 0 );
assert( gamma_move(board, 5, 3, 7) == 0 );
assert( gamma_move(board, 5, 4, 3) == 0 );
assert( gamma_move(board, 2, 0, 2) == 0 );
assert( gamma_move(board, 3, 0, 4) == 1 );


char* board251384591 = gamma_board(board);
assert( board251384591 != NULL );
assert( strcmp(board251384591, 
"..42..\n"
"..11..\n"
".4..2.\n"
"3.33.4\n"
"1.1.52\n"
"..434.\n"
".3.5..\n"
"521..5\n"
"3.13.5\n"
"3...3.\n"
"4..51.\n"
".2153.\n"
"4..5.2\n") == 0);
free(board251384591);
board251384591 = NULL;
assert( gamma_move(board, 1, 4, 1) == 0 );
assert( gamma_move(board, 2, 12, 4) == 0 );
assert( gamma_move(board, 2, 0, 1) == 1 );
assert( gamma_move(board, 3, 1, 2) == 1 );
assert( gamma_move(board, 4, 6, 5) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 3, 3) == 1 );
assert( gamma_move(board, 1, 5, 8) == 0 );
assert( gamma_move(board, 2, 0, 2) == 0 );
assert( gamma_move(board, 2, 1, 11) == 1 );
assert( gamma_move(board, 3, 1, 5) == 0 );
assert( gamma_move(board, 4, 10, 0) == 0 );
assert( gamma_move(board, 5, 4, 1) == 0 );
assert( gamma_move(board, 5, 3, 1) == 0 );
assert( gamma_free_fields(board, 5) == 35 );
assert( gamma_move(board, 1, 3, 1) == 0 );
assert( gamma_move(board, 1, 2, 4) == 0 );
assert( gamma_busy_fields(board, 1) == 8 );
assert( gamma_move(board, 2, 7, 5) == 0 );
assert( gamma_move(board, 2, 4, 1) == 0 );
assert( gamma_move(board, 3, 9, 4) == 0 );
assert( gamma_move(board, 4, 5, 8) == 0 );
assert( gamma_move(board, 5, 2, 5) == 0 );
assert( gamma_free_fields(board, 5) == 35 );
assert( gamma_move(board, 1, 4, 7) == 0 );
assert( gamma_move(board, 1, 3, 0) == 0 );
assert( gamma_move(board, 2, 5, 3) == 1 );
assert( gamma_move(board, 3, 5, 6) == 1 );
assert( gamma_move(board, 3, 3, 7) == 0 );
assert( gamma_busy_fields(board, 3) == 12 );
assert( gamma_busy_fields(board, 4) == 7 );
assert( gamma_move(board, 5, 3, 10) == 1 );
assert( gamma_free_fields(board, 5) == 32 );
assert( gamma_move(board, 1, 10, 0) == 0 );
assert( gamma_move(board, 2, 11, 0) == 0 );
assert( gamma_move(board, 2, 4, 3) == 0 );
assert( gamma_move(board, 3, 11, 4) == 0 );
assert( gamma_move(board, 3, 5, 9) == 0 );
assert( gamma_busy_fields(board, 3) == 12 );
assert( gamma_move(board, 4, 0, 0) == 0 );
assert( gamma_move(board, 5, 7, 1) == 0 );
assert( gamma_move(board, 5, 4, 2) == 0 );
assert( gamma_move(board, 1, 6, 0) == 0 );
assert( gamma_move(board, 1, 3, 9) == 0 );
assert( gamma_move(board, 2, 6, 2) == 0 );
assert( gamma_move(board, 2, 0, 4) == 0 );
assert( gamma_move(board, 3, 12, 5) == 0 );
assert( gamma_move(board, 3, 2, 4) == 0 );
assert( gamma_move(board, 4, 6, 4) == 0 );
assert( gamma_move(board, 5, 7, 5) == 0 );
assert( gamma_move(board, 5, 5, 1) == 1 );
assert( gamma_move(board, 1, 8, 3) == 0 );
assert( gamma_move(board, 2, 8, 3) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 0, 1) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_busy_fields(board, 1) == 8 );
assert( gamma_free_fields(board, 2) == 31 );
assert( gamma_move(board, 3, 7, 5) == 0 );
assert( gamma_move(board, 3, 1, 10) == 0 );
assert( gamma_move(board, 4, 9, 4) == 0 );
assert( gamma_move(board, 4, 4, 0) == 1 );
assert( gamma_free_fields(board, 4) == 30 );
assert( gamma_move(board, 5, 9, 1) == 0 );
assert( gamma_move(board, 5, 5, 11) == 1 );
assert( gamma_free_fields(board, 5) == 29 );
assert( gamma_move(board, 1, 0, 8) == 0 );
assert( gamma_move(board, 1, 0, 4) == 0 );
assert( gamma_move(board, 2, 11, 4) == 0 );
assert( gamma_move(board, 3, 4, 1) == 0 );
assert( gamma_move(board, 4, 0, 10) == 1 );
assert( gamma_move(board, 4, 2, 7) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );


char* board317315119 = gamma_board(board);
assert( board317315119 != NULL );
assert( strcmp(board317315119, 
"..42..\n"
".211.5\n"
"44.52.\n"
"3.33.4\n"
"1.1.52\n"
"..434.\n"
".3.5.3\n"
"521..5\n"
"3.13.5\n"
"3..532\n"
"43.51.\n"
"221535\n"
"4..542\n") == 0);
free(board317315119);
board317315119 = NULL;
assert( gamma_move(board, 5, 1, 12) == 1 );
assert( gamma_move(board, 1, 2, 2) == 1 );
assert( gamma_busy_fields(board, 1) == 9 );
assert( gamma_move(board, 2, 10, 5) == 0 );
assert( gamma_move(board, 2, 2, 8) == 0 );
assert( gamma_free_fields(board, 2) == 26 );
assert( gamma_move(board, 3, 3, 1) == 0 );
assert( gamma_move(board, 3, 3, 7) == 0 );
assert( gamma_move(board, 4, 6, 4) == 0 );
assert( gamma_busy_fields(board, 4) == 9 );
assert( gamma_move(board, 5, 12, 0) == 0 );
assert( gamma_move(board, 5, 4, 5) == 1 );
assert( gamma_move(board, 1, 0, 1) == 0 );
assert( gamma_move(board, 1, 0, 7) == 1 );
assert( gamma_busy_fields(board, 1) == 10 );


char* board691775930 = gamma_board(board);
assert( board691775930 != NULL );
assert( strcmp(board691775930, 
".542..\n"
".211.5\n"
"44.52.\n"
"3.33.4\n"
"1.1.52\n"
"1.434.\n"
".3.5.3\n"
"521.55\n"
"3.13.5\n"
"3..532\n"
"43151.\n"
"221535\n"
"4..542\n") == 0);
free(board691775930);
board691775930 = NULL;
assert( gamma_move(board, 2, 2, 2) == 0 );


char* board972403145 = gamma_board(board);
assert( board972403145 != NULL );
assert( strcmp(board972403145, 
".542..\n"
".211.5\n"
"44.52.\n"
"3.33.4\n"
"1.1.52\n"
"1.434.\n"
".3.5.3\n"
"521.55\n"
"3.13.5\n"
"3..532\n"
"43151.\n"
"221535\n"
"4..542\n") == 0);
free(board972403145);
board972403145 = NULL;
assert( gamma_move(board, 3, 4, 1) == 0 );
assert( gamma_move(board, 4, 4, 4) == 1 );
assert( gamma_move(board, 5, 5, 3) == 0 );
assert( gamma_move(board, 1, 3, 1) == 0 );
assert( gamma_move(board, 1, 2, 8) == 0 );
assert( gamma_move(board, 2, 4, 7) == 0 );
assert( gamma_move(board, 3, 0, 1) == 0 );
assert( gamma_free_fields(board, 3) == 23 );
assert( gamma_move(board, 4, 5, 4) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 5, 3) == 0 );
assert( gamma_move(board, 1, 1, 4) == 1 );
assert( gamma_move(board, 2, 5, 12) == 1 );
assert( gamma_move(board, 3, 9, 1) == 0 );
assert( gamma_move(board, 3, 4, 1) == 0 );
assert( gamma_move(board, 4, 3, 2) == 0 );
assert( gamma_free_fields(board, 5) == 21 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 1, 10, 2) == 0 );
assert( gamma_move(board, 1, 2, 2) == 0 );
assert( gamma_free_fields(board, 1) == 21 );
assert( gamma_move(board, 2, 2, 5) == 0 );
assert( gamma_move(board, 3, 0, 7) == 0 );
assert( gamma_move(board, 3, 0, 1) == 0 );
assert( gamma_move(board, 4, 3, 1) == 0 );
assert( gamma_move(board, 4, 2, 6) == 1 );
assert( gamma_move(board, 5, 0, 10) == 0 );
assert( gamma_move(board, 1, 9, 1) == 0 );
assert( gamma_move(board, 1, 2, 5) == 0 );
assert( gamma_busy_fields(board, 1) == 11 );
assert( gamma_move(board, 2, 8, 1) == 0 );
assert( gamma_move(board, 2, 0, 10) == 0 );
assert( gamma_move(board, 3, 4, 0) == 0 );
assert( gamma_free_fields(board, 3) == 20 );
assert( gamma_move(board, 4, 2, 8) == 0 );
assert( gamma_move(board, 4, 1, 7) == 1 );
assert( gamma_move(board, 5, 1, 5) == 0 );
assert( gamma_move(board, 1, 2, 5) == 0 );
assert( gamma_move(board, 1, 2, 4) == 0 );
assert( gamma_move(board, 2, 11, 0) == 0 );
assert( gamma_move(board, 3, 0, 1) == 0 );
assert( gamma_busy_fields(board, 3) == 12 );


char* board131207794 = gamma_board(board);
assert( board131207794 != NULL );
assert( strcmp(board131207794, 
".542.2\n"
".211.5\n"
"44.52.\n"
"3.33.4\n"
"1.1.52\n"
"14434.\n"
".345.3\n"
"521.55\n"
"311345\n"
"3..532\n"
"43151.\n"
"221535\n"
"4..542\n") == 0);
free(board131207794);
board131207794 = NULL;
assert( gamma_move(board, 4, 10, 2) == 0 );
assert( gamma_golden_move(board, 1, 12, 1) == 0 );
assert( gamma_move(board, 2, 8, 3) == 0 );
assert( gamma_move(board, 2, 2, 8) == 0 );
assert( gamma_move(board, 3, 12, 4) == 0 );
assert( gamma_move(board, 4, 10, 5) == 0 );
assert( gamma_move(board, 4, 3, 3) == 0 );
assert( gamma_move(board, 5, 1, 2) == 0 );
assert( gamma_move(board, 1, 12, 4) == 0 );
assert( gamma_move(board, 1, 3, 11) == 0 );
assert( gamma_move(board, 2, 1, 2) == 0 );
assert( gamma_busy_fields(board, 2) == 10 );
assert( gamma_move(board, 3, 1, 7) == 0 );
assert( gamma_move(board, 3, 1, 6) == 0 );
assert( gamma_move(board, 4, 9, 1) == 0 );


char* board163655675 = gamma_board(board);
assert( board163655675 != NULL );
assert( strcmp(board163655675, 
".542.2\n"
".211.5\n"
"44.52.\n"
"3.33.4\n"
"1.1.52\n"
"14434.\n"
".345.3\n"
"521.55\n"
"311345\n"
"3..532\n"
"43151.\n"
"221535\n"
"4..542\n") == 0);
free(board163655675);
board163655675 = NULL;
assert( gamma_move(board, 5, 4, 6) == 1 );
assert( gamma_move(board, 1, 9, 4) == 0 );
assert( gamma_move(board, 1, 4, 9) == 1 );


gamma_delete(board);

    return 0;
}
