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
uuid: 435238194
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(9, 8, 5, 12);
assert( board != NULL );


assert( gamma_move(board, 1, 4, 6) == 1 );
assert( gamma_golden_move(board, 1, 7, 8) == 0 );
assert( gamma_move(board, 2, 6, 6) == 1 );
assert( gamma_move(board, 3, 2, 1) == 1 );
assert( gamma_move(board, 4, 5, 2) == 1 );
assert( gamma_move(board, 5, 6, 7) == 1 );
assert( gamma_move(board, 1, 6, 5) == 1 );
assert( gamma_move(board, 1, 7, 1) == 1 );
assert( gamma_move(board, 2, 1, 4) == 1 );
assert( gamma_move(board, 3, 0, 3) == 1 );
assert( gamma_move(board, 3, 3, 2) == 1 );
assert( gamma_move(board, 4, 1, 8) == 0 );
assert( gamma_move(board, 5, 0, 5) == 1 );
assert( gamma_move(board, 5, 7, 5) == 1 );
assert( gamma_move(board, 1, 1, 8) == 0 );
assert( gamma_move(board, 2, 0, 5) == 0 );
assert( gamma_move(board, 2, 0, 4) == 1 );
assert( gamma_move(board, 3, 1, 0) == 1 );
assert( gamma_move(board, 3, 1, 3) == 1 );
assert( gamma_busy_fields(board, 3) == 5 );
assert( gamma_move(board, 4, 7, 4) == 1 );
assert( gamma_busy_fields(board, 4) == 2 );
assert( gamma_free_fields(board, 4) == 56 );
assert( gamma_move(board, 5, 3, 2) == 0 );
assert( gamma_golden_move(board, 1, 7, 6) == 0 );
assert( gamma_move(board, 2, 6, 1) == 1 );
assert( gamma_move(board, 2, 7, 2) == 1 );
assert( gamma_golden_move(board, 2, 5, 6) == 0 );
assert( gamma_move(board, 3, 6, 5) == 0 );
assert( gamma_move(board, 3, 8, 2) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 3, 3) == 1 );
assert( gamma_move(board, 5, 0, 8) == 0 );
assert( gamma_busy_fields(board, 5) == 3 );
assert( gamma_move(board, 1, 4, 7) == 1 );
assert( gamma_move(board, 2, 5, 2) == 0 );
assert( gamma_move(board, 3, 3, 5) == 1 );
assert( gamma_golden_move(board, 3, 3, 3) == 1 );
assert( gamma_move(board, 4, 7, 1) == 0 );
assert( gamma_move(board, 5, 2, 1) == 0 );
assert( gamma_move(board, 5, 5, 5) == 1 );
assert( gamma_move(board, 1, 4, 3) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 4, 7) == 0 );
assert( gamma_busy_fields(board, 2) == 5 );
assert( gamma_move(board, 3, 2, 3) == 1 );
assert( gamma_move(board, 4, 6, 1) == 0 );
assert( gamma_move(board, 5, 3, 8) == 0 );
assert( gamma_move(board, 5, 5, 5) == 0 );
assert( gamma_golden_move(board, 5, 1, 7) == 0 );
assert( gamma_move(board, 1, 7, 2) == 0 );
assert( gamma_move(board, 2, 6, 1) == 0 );
assert( gamma_move(board, 3, 4, 4) == 1 );
assert( gamma_move(board, 3, 6, 2) == 1 );
assert( gamma_move(board, 4, 3, 7) == 1 );
assert( gamma_move(board, 5, 3, 3) == 0 );
assert( gamma_move(board, 5, 3, 7) == 0 );
assert( gamma_busy_fields(board, 1) == 5 );
assert( gamma_move(board, 2, 1, 5) == 1 );
assert( gamma_move(board, 3, 0, 2) == 1 );
assert( gamma_move(board, 3, 7, 3) == 1 );
assert( gamma_move(board, 4, 0, 3) == 0 );
assert( gamma_golden_move(board, 4, 3, 3) == 1 );
assert( gamma_move(board, 5, 6, 5) == 0 );
assert( gamma_free_fields(board, 5) == 41 );
assert( gamma_move(board, 1, 0, 6) == 1 );
assert( gamma_busy_fields(board, 1) == 6 );
assert( gamma_move(board, 2, 3, 6) == 1 );
assert( gamma_move(board, 3, 1, 1) == 1 );
assert( gamma_move(board, 4, 3, 6) == 0 );
assert( gamma_move(board, 4, 2, 3) == 0 );
assert( gamma_golden_move(board, 4, 5, 7) == 0 );
assert( gamma_move(board, 5, 2, 3) == 0 );
assert( gamma_move(board, 1, 8, 4) == 1 );
assert( gamma_move(board, 1, 1, 4) == 0 );
assert( gamma_move(board, 2, 4, 5) == 1 );
assert( gamma_move(board, 2, 3, 7) == 0 );
assert( gamma_move(board, 3, 5, 2) == 0 );
assert( gamma_free_fields(board, 3) == 36 );
assert( gamma_golden_move(board, 3, 5, 0) == 0 );
assert( gamma_move(board, 4, 7, 7) == 1 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 3, 1) == 1 );
assert( gamma_move(board, 5, 5, 7) == 1 );
assert( gamma_move(board, 1, 1, 5) == 0 );
assert( gamma_move(board, 1, 0, 4) == 0 );
assert( gamma_busy_fields(board, 1) == 7 );
assert( gamma_golden_move(board, 1, 5, 5) == 1 );
assert( gamma_move(board, 2, 5, 8) == 0 );
assert( gamma_busy_fields(board, 2) == 8 );
assert( gamma_move(board, 3, 3, 8) == 0 );
assert( gamma_move(board, 3, 4, 5) == 0 );
assert( gamma_move(board, 4, 7, 6) == 1 );
assert( gamma_move(board, 5, 2, 0) == 1 );
assert( gamma_move(board, 5, 0, 2) == 0 );
assert( gamma_free_fields(board, 5) == 31 );
assert( gamma_move(board, 1, 2, 1) == 0 );
assert( gamma_move(board, 1, 7, 7) == 0 );
assert( gamma_move(board, 3, 6, 1) == 0 );
assert( gamma_busy_fields(board, 3) == 13 );
assert( gamma_move(board, 4, 3, 5) == 0 );
assert( gamma_move(board, 5, 0, 0) == 1 );
assert( gamma_busy_fields(board, 5) == 7 );
assert( gamma_move(board, 1, 6, 8) == 0 );
assert( gamma_move(board, 1, 0, 0) == 0 );
assert( gamma_move(board, 2, 1, 7) == 1 );
assert( gamma_move(board, 3, 0, 6) == 0 );
assert( gamma_move(board, 3, 5, 3) == 1 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 7, 8) == 0 );
assert( gamma_move(board, 5, 8, 0) == 1 );
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_move(board, 1, 7, 1) == 0 );


char* board226146126 = gamma_board(board);
assert( board226146126 != NULL );
assert( strcmp(board226146126, 
".2.41554.\n"
"1..21.24.\n"
"52.32115.\n"
"22..3..41\n"
"333413.3.\n"
"3..3.4323\n"
".335..21.\n"
"535.....5\n") == 0);
free(board226146126);
board226146126 = NULL;
assert( gamma_move(board, 2, 4, 2) == 1 );
assert( gamma_move(board, 2, 7, 3) == 0 );
assert( gamma_busy_fields(board, 2) == 10 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 5, 7) == 0 );
assert( gamma_move(board, 3, 4, 1) == 1 );
assert( gamma_move(board, 4, 7, 8) == 0 );
assert( gamma_move(board, 5, 4, 3) == 0 );
assert( gamma_move(board, 5, 1, 5) == 0 );
assert( gamma_move(board, 1, 3, 8) == 0 );
assert( gamma_move(board, 1, 7, 2) == 0 );
assert( gamma_busy_fields(board, 1) == 8 );
assert( gamma_move(board, 2, 6, 4) == 1 );
assert( gamma_move(board, 2, 7, 4) == 0 );
assert( gamma_free_fields(board, 2) == 24 );
assert( gamma_golden_move(board, 2, 3, 2) == 1 );
assert( gamma_busy_fields(board, 3) == 14 );
assert( gamma_move(board, 4, 4, 3) == 0 );
assert( gamma_move(board, 4, 5, 0) == 1 );
assert( gamma_busy_fields(board, 4) == 7 );
assert( gamma_move(board, 5, 1, 0) == 0 );
assert( gamma_move(board, 5, 6, 1) == 0 );
assert( gamma_busy_fields(board, 5) == 8 );
assert( gamma_free_fields(board, 5) == 23 );
assert( gamma_busy_fields(board, 2) == 12 );
assert( gamma_move(board, 3, 6, 1) == 0 );
assert( gamma_move(board, 3, 4, 3) == 0 );
assert( gamma_move(board, 4, 1, 0) == 0 );
assert( gamma_move(board, 5, 6, 2) == 0 );
assert( gamma_move(board, 5, 8, 6) == 1 );
assert( gamma_move(board, 1, 7, 8) == 0 );
assert( gamma_move(board, 1, 5, 6) == 1 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 4, 5) == 0 );
assert( gamma_move(board, 2, 0, 0) == 0 );
assert( gamma_move(board, 3, 3, 3) == 0 );
assert( gamma_move(board, 4, 4, 1) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );


char* board315664699 = gamma_board(board);
assert( board315664699 != NULL );
assert( strcmp(board315664699, 
".2.41554.\n"
"1..211245\n"
"52.32115.\n"
"22..3.241\n"
"333413.3.\n"
"3..224323\n"
".3353.21.\n"
"535..4..5\n") == 0);
free(board315664699);
board315664699 = NULL;
assert( gamma_move(board, 1, 4, 1) == 0 );
assert( gamma_move(board, 1, 8, 4) == 0 );
assert( gamma_busy_fields(board, 1) == 9 );
assert( gamma_move(board, 2, 5, 8) == 0 );
assert( gamma_move(board, 2, 0, 2) == 0 );
assert( gamma_move(board, 3, 1, 1) == 0 );
assert( gamma_move(board, 3, 2, 4) == 1 );
assert( gamma_move(board, 4, 2, 2) == 1 );
assert( gamma_move(board, 4, 3, 7) == 0 );
assert( gamma_move(board, 5, 7, 0) == 1 );
assert( gamma_move(board, 1, 8, 1) == 1 );
assert( gamma_busy_fields(board, 1) == 10 );
assert( gamma_move(board, 2, 6, 2) == 0 );
assert( gamma_move(board, 3, 7, 0) == 0 );
assert( gamma_move(board, 3, 8, 1) == 0 );
assert( gamma_move(board, 4, 3, 6) == 0 );
assert( gamma_move(board, 5, 0, 4) == 0 );
assert( gamma_move(board, 1, 8, 6) == 0 );
assert( gamma_free_fields(board, 1) == 17 );
assert( gamma_move(board, 2, 4, 3) == 0 );
assert( gamma_move(board, 3, 7, 0) == 0 );
assert( gamma_move(board, 4, 3, 8) == 0 );
assert( gamma_move(board, 5, 3, 6) == 0 );
assert( gamma_move(board, 5, 7, 4) == 0 );
assert( gamma_move(board, 1, 1, 4) == 0 );
assert( gamma_busy_fields(board, 1) == 10 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 0, 4) == 0 );
assert( gamma_move(board, 2, 8, 0) == 0 );
assert( gamma_move(board, 3, 7, 5) == 0 );
assert( gamma_move(board, 3, 3, 2) == 0 );
assert( gamma_move(board, 4, 3, 7) == 0 );
assert( gamma_move(board, 5, 3, 8) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 1, 1, 0) == 0 );
assert( gamma_move(board, 1, 0, 2) == 0 );
assert( gamma_move(board, 2, 7, 1) == 0 );
assert( gamma_move(board, 3, 2, 1) == 0 );
assert( gamma_move(board, 3, 6, 1) == 0 );
assert( gamma_move(board, 4, 3, 6) == 0 );
assert( gamma_move(board, 4, 5, 3) == 0 );
assert( gamma_golden_move(board, 4, 7, 4) == 0 );
assert( gamma_move(board, 5, 3, 6) == 0 );
assert( gamma_move(board, 5, 0, 0) == 0 );
assert( gamma_move(board, 1, 4, 0) == 1 );
assert( gamma_move(board, 2, 7, 0) == 0 );
assert( gamma_move(board, 2, 3, 0) == 1 );
assert( gamma_busy_fields(board, 2) == 13 );
assert( gamma_move(board, 3, 0, 6) == 0 );
assert( gamma_move(board, 3, 5, 5) == 0 );
assert( gamma_move(board, 4, 3, 6) == 0 );
assert( gamma_free_fields(board, 4) == 15 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_busy_fields(board, 5) == 10 );
assert( gamma_move(board, 1, 6, 1) == 0 );
assert( gamma_move(board, 1, 6, 6) == 0 );
assert( gamma_move(board, 2, 0, 6) == 0 );
assert( gamma_move(board, 2, 0, 5) == 0 );
assert( gamma_move(board, 3, 5, 5) == 0 );
assert( gamma_move(board, 4, 6, 2) == 0 );
assert( gamma_move(board, 4, 5, 0) == 0 );
assert( gamma_move(board, 5, 1, 5) == 0 );
assert( gamma_move(board, 5, 2, 0) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 1, 1, 0) == 0 );
assert( gamma_move(board, 1, 6, 4) == 0 );
assert( gamma_busy_fields(board, 1) == 11 );
assert( gamma_move(board, 2, 7, 8) == 0 );
assert( gamma_move(board, 2, 3, 0) == 0 );
assert( gamma_move(board, 3, 1, 0) == 0 );
assert( gamma_move(board, 3, 6, 5) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 5, 8) == 0 );
assert( gamma_move(board, 5, 0, 1) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 1, 5, 3) == 0 );
assert( gamma_move(board, 1, 3, 1) == 0 );
assert( gamma_move(board, 2, 3, 6) == 0 );
assert( gamma_move(board, 2, 8, 2) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 5, 2) == 0 );
assert( gamma_move(board, 3, 3, 2) == 0 );
assert( gamma_busy_fields(board, 3) == 15 );
assert( gamma_move(board, 4, 3, 5) == 0 );
assert( gamma_move(board, 5, 5, 8) == 0 );
assert( gamma_golden_move(board, 5, 2, 8) == 0 );
assert( gamma_move(board, 2, 8, 5) == 1 );
assert( gamma_move(board, 3, 1, 2) == 1 );
assert( gamma_move(board, 4, 3, 8) == 0 );
assert( gamma_move(board, 4, 4, 3) == 0 );


char* board636047268 = gamma_board(board);
assert( board636047268 != NULL );
assert( strcmp(board636047268, 
".2.41554.\n"
"1..211245\n"
"52.321152\n"
"223.3.241\n"
"333413.3.\n"
"334224323\n"
"53353.211\n"
"535214.55\n") == 0);
free(board636047268);
board636047268 = NULL;
assert( gamma_move(board, 5, 0, 6) == 0 );
assert( gamma_move(board, 5, 4, 2) == 0 );
assert( gamma_move(board, 1, 5, 2) == 0 );
assert( gamma_move(board, 1, 8, 1) == 0 );
assert( gamma_busy_fields(board, 1) == 11 );
assert( gamma_move(board, 3, 3, 6) == 0 );
assert( gamma_move(board, 3, 0, 6) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 5, 0, 6) == 0 );
assert( gamma_move(board, 5, 0, 6) == 0 );
assert( gamma_move(board, 1, 3, 6) == 0 );
assert( gamma_move(board, 2, 7, 2) == 0 );
assert( gamma_move(board, 2, 5, 2) == 0 );
assert( gamma_move(board, 3, 4, 5) == 0 );
assert( gamma_move(board, 3, 8, 3) == 1 );
assert( gamma_move(board, 4, 4, 5) == 0 );


gamma_delete(board);

    return 0;
}
