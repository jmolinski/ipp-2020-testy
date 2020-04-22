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
uuid: 758090764
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(13, 6, 8, 20);
assert( board != NULL );


assert( gamma_move(board, 1, 3, 0) == 1 );
assert( gamma_move(board, 2, 3, 5) == 1 );
assert( gamma_busy_fields(board, 2) == 1 );
assert( gamma_golden_move(board, 2, 0, 3) == 0 );
assert( gamma_move(board, 3, 4, 9) == 0 );
assert( gamma_move(board, 3, 2, 5) == 1 );
assert( gamma_move(board, 4, 2, 9) == 0 );
assert( gamma_free_fields(board, 4) == 75 );
assert( gamma_move(board, 5, 3, 11) == 0 );
assert( gamma_move(board, 5, 12, 0) == 1 );
assert( gamma_move(board, 6, 2, 10) == 0 );
assert( gamma_move(board, 7, 4, 12) == 0 );
assert( gamma_move(board, 8, 3, 10) == 0 );
assert( gamma_move(board, 8, 6, 1) == 1 );
assert( gamma_move(board, 2, 5, 5) == 1 );
assert( gamma_move(board, 3, 1, 4) == 1 );
assert( gamma_move(board, 3, 0, 5) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 5, 6) == 0 );
assert( gamma_move(board, 4, 10, 1) == 1 );
assert( gamma_move(board, 5, 11, 0) == 1 );
assert( gamma_move(board, 5, 0, 0) == 1 );
assert( gamma_busy_fields(board, 5) == 3 );
assert( gamma_move(board, 6, 4, 6) == 0 );
assert( gamma_move(board, 7, 10, 0) == 1 );
assert( gamma_move(board, 7, 2, 0) == 1 );
assert( gamma_move(board, 8, 10, 2) == 1 );
assert( gamma_move(board, 1, 11, 1) == 1 );
assert( gamma_free_fields(board, 1) == 63 );
assert( gamma_move(board, 2, 10, 3) == 1 );
assert( gamma_move(board, 3, 12, 1) == 1 );


char* board631250342 = gamma_board(board);
assert( board631250342 != NULL );
assert( strcmp(board631250342, 
"3.32.2.......\n"
".3...........\n"
"..........2..\n"
"..........8..\n"
"......8...413\n"
"5.71......755\n") == 0);
free(board631250342);
board631250342 = NULL;
assert( gamma_move(board, 4, 0, 9) == 0 );
assert( gamma_move(board, 4, 7, 4) == 1 );
assert( gamma_move(board, 5, 2, 12) == 0 );
assert( gamma_golden_move(board, 5, 0, 3) == 0 );
assert( gamma_move(board, 6, 2, 6) == 0 );
assert( gamma_busy_fields(board, 7) == 2 );


char* board222463358 = gamma_board(board);
assert( board222463358 != NULL );
assert( strcmp(board222463358, 
"3.32.2.......\n"
".3.....4.....\n"
"..........2..\n"
"..........8..\n"
"......8...413\n"
"5.71......755\n") == 0);
free(board222463358);
board222463358 = NULL;
assert( gamma_move(board, 8, 1, 0) == 1 );
assert( gamma_move(board, 8, 12, 4) == 1 );
assert( gamma_move(board, 1, 3, 4) == 1 );
assert( gamma_move(board, 2, 3, 5) == 0 );
assert( gamma_move(board, 3, 0, 5) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 2, 12) == 0 );
assert( gamma_busy_fields(board, 5) == 3 );
assert( gamma_move(board, 6, 2, 8) == 0 );
assert( gamma_move(board, 7, 3, 6) == 0 );
assert( gamma_move(board, 8, 3, 6) == 0 );
assert( gamma_move(board, 1, 2, 2) == 1 );
assert( gamma_busy_fields(board, 1) == 4 );
assert( gamma_move(board, 2, 5, 4) == 1 );
assert( gamma_busy_fields(board, 2) == 4 );
assert( gamma_move(board, 3, 5, 4) == 0 );
assert( gamma_move(board, 3, 7, 3) == 1 );


char* board754088713 = gamma_board(board);
assert( board754088713 != NULL );
assert( strcmp(board754088713, 
"3.32.2.......\n"
".3.1.2.4....8\n"
".......3..2..\n"
"..1.......8..\n"
"......8...413\n"
"5871......755\n") == 0);
free(board754088713);
board754088713 = NULL;
assert( gamma_move(board, 4, 2, 9) == 0 );
assert( gamma_move(board, 4, 8, 1) == 1 );


char* board415945009 = gamma_board(board);
assert( board415945009 != NULL );
assert( strcmp(board415945009, 
"3.32.2.......\n"
".3.1.2.4....8\n"
".......3..2..\n"
"..1.......8..\n"
"......8.4.413\n"
"5871......755\n") == 0);
free(board415945009);
board415945009 = NULL;
assert( gamma_move(board, 5, 5, 7) == 0 );
assert( gamma_move(board, 5, 2, 3) == 1 );
assert( gamma_move(board, 6, 1, 2) == 1 );
assert( gamma_move(board, 6, 5, 0) == 1 );
assert( gamma_move(board, 7, 4, 0) == 1 );
assert( gamma_move(board, 8, 7, 2) == 1 );
assert( gamma_move(board, 8, 12, 5) == 1 );
assert( gamma_busy_fields(board, 8) == 6 );
assert( gamma_move(board, 1, 2, 8) == 0 );
assert( gamma_move(board, 1, 1, 1) == 1 );
assert( gamma_move(board, 2, 7, 2) == 0 );
assert( gamma_move(board, 2, 12, 2) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 4, 8) == 0 );
assert( gamma_free_fields(board, 3) == 45 );
assert( gamma_move(board, 4, 2, 11) == 0 );
assert( gamma_move(board, 5, 5, 4) == 0 );
assert( gamma_move(board, 6, 9, 3) == 1 );
assert( gamma_free_fields(board, 6) == 44 );
assert( gamma_move(board, 7, 12, 5) == 0 );
assert( gamma_move(board, 7, 0, 4) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 5, 4) == 0 );
assert( gamma_move(board, 8, 10, 4) == 1 );
assert( gamma_move(board, 1, 0, 3) == 1 );
assert( gamma_move(board, 1, 10, 0) == 0 );
assert( gamma_move(board, 2, 7, 4) == 0 );
assert( gamma_move(board, 3, 2, 6) == 0 );
assert( gamma_golden_move(board, 3, 0, 2) == 0 );
assert( gamma_move(board, 4, 1, 2) == 0 );
assert( gamma_move(board, 4, 10, 0) == 0 );
assert( gamma_move(board, 5, 4, 6) == 0 );
assert( gamma_move(board, 5, 0, 5) == 0 );
assert( gamma_busy_fields(board, 5) == 4 );
assert( gamma_move(board, 6, 0, 7) == 0 );
assert( gamma_move(board, 6, 12, 2) == 0 );
assert( gamma_move(board, 7, 1, 5) == 1 );
assert( gamma_free_fields(board, 7) == 40 );
assert( gamma_move(board, 8, 10, 2) == 0 );
assert( gamma_move(board, 1, 2, 5) == 0 );
assert( gamma_free_fields(board, 1) == 40 );
assert( gamma_move(board, 2, 3, 6) == 0 );
assert( gamma_move(board, 2, 11, 0) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 5, 11) == 0 );
assert( gamma_move(board, 4, 3, 5) == 0 );
assert( gamma_free_fields(board, 4) == 40 );
assert( gamma_move(board, 5, 2, 8) == 0 );
assert( gamma_move(board, 6, 3, 12) == 0 );
assert( gamma_move(board, 6, 5, 5) == 0 );
assert( gamma_move(board, 7, 0, 8) == 0 );
assert( gamma_move(board, 7, 9, 4) == 1 );
assert( gamma_golden_move(board, 7, 0, 12) == 0 );
assert( gamma_move(board, 8, 3, 2) == 1 );
assert( gamma_golden_move(board, 8, 4, 5) == 0 );
assert( gamma_move(board, 1, 4, 2) == 1 );
assert( gamma_move(board, 2, 11, 4) == 1 );
assert( gamma_move(board, 3, 4, 4) == 1 );
assert( gamma_move(board, 4, 1, 2) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 1, 9) == 0 );
assert( gamma_golden_move(board, 5, 5, 5) == 1 );
assert( gamma_move(board, 6, 3, 1) == 1 );
assert( gamma_move(board, 6, 10, 2) == 0 );
assert( gamma_move(board, 7, 1, 2) == 0 );
assert( gamma_move(board, 7, 9, 4) == 0 );
assert( gamma_move(board, 8, 3, 8) == 0 );
assert( gamma_move(board, 8, 7, 0) == 1 );
assert( gamma_busy_fields(board, 8) == 9 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 1, 3, 5) == 0 );
assert( gamma_move(board, 1, 0, 2) == 1 );
assert( gamma_busy_fields(board, 1) == 8 );
assert( gamma_move(board, 2, 4, 5) == 1 );
assert( gamma_move(board, 2, 6, 2) == 1 );
assert( gamma_busy_fields(board, 2) == 7 );


char* board831921401 = gamma_board(board);
assert( board831921401 != NULL );
assert( strcmp(board831921401, 
"373225......8\n"
"73.132.4.7828\n"
"1.5....3.62..\n"
"16181.28..8.2\n"
".1.6..8.4.413\n"
"587176.8..755\n") == 0);
free(board831921401);
board831921401 = NULL;
assert( gamma_move(board, 3, 2, 8) == 0 );
assert( gamma_move(board, 3, 1, 2) == 0 );
assert( gamma_move(board, 4, 3, 4) == 0 );
assert( gamma_move(board, 4, 12, 4) == 0 );
assert( gamma_busy_fields(board, 4) == 3 );
assert( gamma_move(board, 6, 9, 3) == 0 );
assert( gamma_move(board, 7, 5, 6) == 0 );
assert( gamma_move(board, 7, 4, 0) == 0 );
assert( gamma_move(board, 8, 4, 6) == 0 );
assert( gamma_move(board, 1, 11, 0) == 0 );
assert( gamma_move(board, 3, 1, 7) == 0 );
assert( gamma_move(board, 4, 12, 5) == 0 );


char* board135018736 = gamma_board(board);
assert( board135018736 != NULL );
assert( strcmp(board135018736, 
"373225......8\n"
"73.132.4.7828\n"
"1.5....3.62..\n"
"16181.28..8.2\n"
".1.6..8.4.413\n"
"587176.8..755\n") == 0);
free(board135018736);
board135018736 = NULL;
assert( gamma_move(board, 5, 4, 0) == 0 );
assert( gamma_move(board, 5, 2, 4) == 1 );
assert( gamma_move(board, 6, 2, 9) == 0 );
assert( gamma_move(board, 6, 9, 4) == 0 );
assert( gamma_move(board, 7, 0, 8) == 0 );
assert( gamma_move(board, 7, 3, 1) == 0 );
assert( gamma_golden_move(board, 7, 1, 1) == 1 );


char* board801086473 = gamma_board(board);
assert( board801086473 != NULL );
assert( strcmp(board801086473, 
"373225......8\n"
"735132.4.7828\n"
"1.5....3.62..\n"
"16181.28..8.2\n"
".7.6..8.4.413\n"
"587176.8..755\n") == 0);
free(board801086473);
board801086473 = NULL;
assert( gamma_move(board, 8, 2, 11) == 0 );
assert( gamma_move(board, 1, 2, 11) == 0 );
assert( gamma_move(board, 1, 11, 0) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 1, 0) == 0 );
assert( gamma_move(board, 3, 4, 8) == 0 );
assert( gamma_free_fields(board, 3) == 29 );
assert( gamma_move(board, 4, 2, 4) == 0 );
assert( gamma_move(board, 4, 1, 0) == 0 );
assert( gamma_move(board, 5, 4, 8) == 0 );
assert( gamma_move(board, 6, 3, 3) == 1 );
assert( gamma_move(board, 6, 12, 0) == 0 );
assert( gamma_move(board, 7, 3, 5) == 0 );
assert( gamma_move(board, 7, 10, 5) == 1 );
assert( gamma_move(board, 8, 1, 9) == 0 );
assert( gamma_move(board, 8, 6, 1) == 0 );
assert( gamma_move(board, 1, 1, 4) == 0 );
assert( gamma_move(board, 2, 1, 4) == 0 );
assert( gamma_move(board, 3, 3, 5) == 0 );
assert( gamma_move(board, 3, 9, 3) == 0 );
assert( gamma_move(board, 4, 3, 12) == 0 );
assert( gamma_move(board, 4, 3, 5) == 0 );
assert( gamma_move(board, 5, 8, 1) == 0 );
assert( gamma_move(board, 6, 3, 11) == 0 );
assert( gamma_move(board, 6, 5, 3) == 1 );
assert( gamma_move(board, 7, 0, 9) == 0 );
assert( gamma_move(board, 7, 10, 5) == 0 );
assert( gamma_move(board, 8, 3, 8) == 0 );
assert( gamma_move(board, 1, 12, 2) == 0 );
assert( gamma_free_fields(board, 1) == 26 );
assert( gamma_move(board, 3, 2, 1) == 1 );
assert( gamma_move(board, 4, 1, 4) == 0 );
assert( gamma_move(board, 5, 4, 5) == 0 );
assert( gamma_busy_fields(board, 5) == 6 );
assert( gamma_move(board, 6, 3, 6) == 0 );
assert( gamma_move(board, 6, 1, 0) == 0 );
assert( gamma_move(board, 7, 8, 5) == 1 );
assert( gamma_move(board, 7, 9, 1) == 1 );
assert( gamma_move(board, 8, 3, 4) == 0 );
assert( gamma_move(board, 2, 7, 4) == 0 );
assert( gamma_move(board, 3, 1, 0) == 0 );
assert( gamma_move(board, 3, 11, 3) == 1 );
assert( gamma_move(board, 4, 6, 1) == 0 );
assert( gamma_move(board, 5, 3, 6) == 0 );
assert( gamma_move(board, 5, 4, 0) == 0 );
assert( gamma_move(board, 6, 1, 0) == 0 );
assert( gamma_move(board, 6, 11, 2) == 1 );
assert( gamma_move(board, 7, 3, 12) == 0 );
assert( gamma_move(board, 7, 4, 3) == 1 );
assert( gamma_move(board, 8, 5, 6) == 0 );
assert( gamma_move(board, 8, 1, 2) == 0 );
assert( gamma_move(board, 1, 5, 7) == 0 );
assert( gamma_move(board, 2, 5, 9) == 0 );
assert( gamma_move(board, 3, 1, 0) == 0 );
assert( gamma_move(board, 3, 9, 3) == 0 );
assert( gamma_move(board, 5, 11, 1) == 0 );
assert( gamma_move(board, 5, 0, 4) == 0 );
assert( gamma_move(board, 6, 4, 3) == 0 );
assert( gamma_move(board, 1, 5, 11) == 0 );
assert( gamma_move(board, 1, 8, 0) == 1 );
assert( gamma_move(board, 2, 5, 6) == 0 );
assert( gamma_free_fields(board, 2) == 19 );
assert( gamma_move(board, 3, 5, 1) == 1 );
assert( gamma_move(board, 3, 5, 3) == 0 );
assert( gamma_move(board, 4, 4, 8) == 0 );
assert( gamma_move(board, 5, 0, 6) == 0 );
assert( gamma_move(board, 6, 2, 9) == 0 );
assert( gamma_move(board, 6, 11, 3) == 0 );
assert( gamma_move(board, 7, 10, 2) == 0 );
assert( gamma_move(board, 7, 3, 5) == 0 );
assert( gamma_move(board, 8, 3, 12) == 0 );
assert( gamma_move(board, 8, 0, 0) == 0 );
assert( gamma_free_fields(board, 8) == 18 );
assert( gamma_move(board, 1, 4, 8) == 0 );
assert( gamma_move(board, 1, 0, 1) == 1 );
assert( gamma_move(board, 2, 9, 1) == 0 );
assert( gamma_busy_fields(board, 2) == 7 );


char* board883060058 = gamma_board(board);
assert( board883060058 != NULL );
assert( strcmp(board883060058, 
"373225..7.7.8\n"
"735132.4.7828\n"
"1.5676.3.623.\n"
"16181.28..862\n"
"1736.38.47413\n"
"587176.81.755\n") == 0);
free(board883060058);
board883060058 = NULL;
assert( gamma_move(board, 3, 3, 8) == 0 );
assert( gamma_move(board, 3, 5, 2) == 1 );
assert( gamma_move(board, 4, 3, 8) == 0 );
assert( gamma_move(board, 5, 9, 2) == 1 );
assert( gamma_move(board, 6, 5, 11) == 0 );
assert( gamma_move(board, 7, 7, 3) == 0 );
assert( gamma_move(board, 8, 1, 7) == 0 );
assert( gamma_move(board, 1, 4, 6) == 0 );
assert( gamma_move(board, 1, 10, 1) == 0 );
assert( gamma_move(board, 2, 11, 2) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_golden_move(board, 2, 2, 9) == 0 );
assert( gamma_move(board, 3, 11, 2) == 0 );
assert( gamma_busy_fields(board, 3) == 10 );


char* board252904654 = gamma_board(board);
assert( board252904654 != NULL );
assert( strcmp(board252904654, 
"373225..7.7.8\n"
"735132.4.7828\n"
"1.5676.3.623.\n"
"16181328.5862\n"
"1736.38.47413\n"
"587176.81.755\n") == 0);
free(board252904654);
board252904654 = NULL;
assert( gamma_move(board, 4, 5, 3) == 0 );
assert( gamma_move(board, 4, 9, 2) == 0 );
assert( gamma_busy_fields(board, 4) == 3 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 0, 6) == 0 );
assert( gamma_move(board, 5, 10, 2) == 0 );
assert( gamma_move(board, 6, 5, 7) == 0 );
assert( gamma_busy_fields(board, 6) == 7 );
assert( gamma_move(board, 7, 1, 7) == 0 );
assert( gamma_move(board, 7, 10, 1) == 0 );
assert( gamma_move(board, 8, 4, 0) == 0 );
assert( gamma_move(board, 1, 0, 5) == 0 );
assert( gamma_move(board, 1, 8, 4) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 5, 0) == 0 );
assert( gamma_move(board, 2, 3, 3) == 0 );
assert( gamma_move(board, 3, 5, 0) == 0 );
assert( gamma_move(board, 4, 3, 6) == 0 );


gamma_delete(board);

    return 0;
}
