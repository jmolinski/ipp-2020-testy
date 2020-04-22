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
uuid: 454178192
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(8, 11, 8, 15);
assert( board != NULL );


assert( gamma_move(board, 1, 3, 7) == 1 );
assert( gamma_move(board, 2, 2, 3) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 5, 3) == 1 );
assert( gamma_move(board, 3, 6, 10) == 1 );
assert( gamma_move(board, 4, 10, 4) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 2, 4) == 1 );
assert( gamma_move(board, 6, 3, 7) == 0 );


char* board655294736 = gamma_board(board);
assert( board655294736 != NULL );
assert( strcmp(board655294736, 
"......3.\n"
"........\n"
"........\n"
"...1....\n"
"........\n"
"........\n"
"..5.....\n"
"..2..3..\n"
"........\n"
"........\n"
"........\n") == 0);
free(board655294736);
board655294736 = NULL;
assert( gamma_move(board, 7, 3, 0) == 1 );
assert( gamma_move(board, 7, 2, 9) == 1 );


char* board904098398 = gamma_board(board);
assert( board904098398 != NULL );
assert( strcmp(board904098398, 
"......3.\n"
"..7.....\n"
"........\n"
"...1....\n"
"........\n"
"........\n"
"..5.....\n"
"..2..3..\n"
"........\n"
"........\n"
"...7....\n") == 0);
free(board904098398);
board904098398 = NULL;
assert( gamma_move(board, 8, 10, 5) == 0 );
assert( gamma_move(board, 8, 7, 4) == 1 );
assert( gamma_golden_move(board, 8, 4, 2) == 0 );
assert( gamma_free_fields(board, 1) == 80 );
assert( gamma_move(board, 2, 7, 9) == 1 );
assert( gamma_move(board, 2, 0, 3) == 1 );
assert( gamma_move(board, 3, 3, 8) == 1 );
assert( gamma_free_fields(board, 3) == 77 );
assert( gamma_move(board, 4, 1, 3) == 1 );
assert( gamma_move(board, 5, 1, 2) == 1 );
assert( gamma_move(board, 5, 5, 1) == 1 );
assert( gamma_move(board, 6, 10, 0) == 0 );
assert( gamma_move(board, 6, 7, 3) == 1 );
assert( gamma_move(board, 7, 7, 0) == 1 );
assert( gamma_move(board, 8, 1, 4) == 1 );
assert( gamma_move(board, 1, 2, 8) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 9, 0) == 0 );
assert( gamma_busy_fields(board, 2) == 3 );
assert( gamma_move(board, 3, 7, 4) == 0 );
assert( gamma_move(board, 4, 5, 6) == 1 );
assert( gamma_move(board, 5, 2, 2) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 4, 3) == 1 );
assert( gamma_move(board, 7, 4, 3) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 8, 2, 5) == 1 );
assert( gamma_free_fields(board, 8) == 66 );
assert( gamma_move(board, 1, 5, 7) == 1 );
assert( gamma_busy_fields(board, 1) == 3 );
assert( gamma_move(board, 2, 1, 7) == 1 );
assert( gamma_busy_fields(board, 2) == 4 );
assert( gamma_free_fields(board, 2) == 64 );
assert( gamma_move(board, 4, 7, 6) == 1 );
assert( gamma_move(board, 5, 10, 7) == 0 );
assert( gamma_move(board, 5, 3, 0) == 0 );
assert( gamma_move(board, 6, 4, 3) == 0 );
assert( gamma_move(board, 6, 5, 5) == 1 );


char* board113690675 = gamma_board(board);
assert( board113690675 != NULL );
assert( strcmp(board113690675, 
"......3.\n"
"..7....2\n"
"..13....\n"
".2.1.1..\n"
".....4.4\n"
"..8..6..\n"
".85....8\n"
"242.63.6\n"
".55.....\n"
".....5..\n"
"...7...7\n") == 0);
free(board113690675);
board113690675 = NULL;
assert( gamma_move(board, 8, 6, 9) == 1 );
assert( gamma_move(board, 8, 3, 4) == 1 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 1, 7, 4) == 0 );
assert( gamma_move(board, 2, 7, 1) == 1 );
assert( gamma_free_fields(board, 3) == 59 );
assert( gamma_move(board, 4, 4, 9) == 1 );
assert( gamma_move(board, 4, 1, 7) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 6, 7, 2) == 1 );


char* board606412760 = gamma_board(board);
assert( board606412760 != NULL );
assert( strcmp(board606412760, 
"......3.\n"
"..7.4.82\n"
"..13....\n"
".2.1.1..\n"
".....4.4\n"
"..8..6..\n"
".858...8\n"
"242.63.6\n"
".55....6\n"
".....5.2\n"
"...7...7\n") == 0);
free(board606412760);
board606412760 = NULL;
assert( gamma_move(board, 7, 0, 2) == 1 );
assert( gamma_move(board, 7, 4, 9) == 0 );
assert( gamma_move(board, 8, 4, 9) == 0 );
assert( gamma_free_fields(board, 8) == 56 );
assert( gamma_move(board, 1, 4, 0) == 1 );
assert( gamma_move(board, 2, 7, 2) == 0 );
assert( gamma_move(board, 2, 1, 0) == 1 );
assert( gamma_move(board, 3, 3, 3) == 1 );
assert( gamma_move(board, 4, 4, 6) == 1 );
assert( gamma_move(board, 5, 1, 8) == 1 );
assert( gamma_move(board, 6, 4, 6) == 0 );
assert( gamma_move(board, 7, 7, 3) == 0 );
assert( gamma_move(board, 8, 0, 2) == 0 );
assert( gamma_move(board, 8, 4, 6) == 0 );
assert( gamma_move(board, 1, 1, 3) == 0 );
assert( gamma_move(board, 1, 3, 8) == 0 );
assert( gamma_move(board, 2, 6, 2) == 1 );
assert( gamma_move(board, 2, 0, 8) == 1 );
assert( gamma_move(board, 3, 5, 2) == 1 );
assert( gamma_busy_fields(board, 3) == 5 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 5, 4) == 1 );
assert( gamma_move(board, 4, 6, 5) == 1 );
assert( gamma_move(board, 5, 2, 3) == 0 );
assert( gamma_move(board, 5, 2, 9) == 0 );
assert( gamma_move(board, 6, 0, 0) == 1 );
assert( gamma_move(board, 7, 2, 3) == 0 );
assert( gamma_move(board, 7, 7, 8) == 1 );
assert( gamma_move(board, 8, 7, 2) == 0 );
assert( gamma_move(board, 8, 2, 8) == 0 );
assert( gamma_move(board, 1, 5, 0) == 1 );
assert( gamma_move(board, 1, 5, 6) == 0 );
assert( gamma_move(board, 2, 3, 8) == 0 );
assert( gamma_move(board, 3, 1, 1) == 1 );
assert( gamma_busy_fields(board, 3) == 6 );
assert( gamma_move(board, 4, 10, 7) == 0 );


char* board961104581 = gamma_board(board);
assert( board961104581 != NULL );
assert( strcmp(board961104581, 
"......3.\n"
"..7.4.82\n"
"2513...7\n"
".2.1.1..\n"
"....44.4\n"
"..8..64.\n"
".858.4.8\n"
"242363.6\n"
"755..326\n"
".3...5.2\n"
"62.711.7\n") == 0);
free(board961104581);
board961104581 = NULL;
assert( gamma_move(board, 5, 5, 3) == 0 );
assert( gamma_move(board, 5, 4, 0) == 0 );
assert( gamma_move(board, 6, 1, 9) == 1 );
assert( gamma_move(board, 6, 2, 9) == 0 );
assert( gamma_free_fields(board, 6) == 41 );
assert( gamma_move(board, 7, 5, 1) == 0 );
assert( gamma_move(board, 7, 1, 1) == 0 );
assert( gamma_busy_fields(board, 7) == 5 );
assert( gamma_move(board, 8, 0, 6) == 1 );
assert( gamma_move(board, 1, 6, 2) == 0 );
assert( gamma_move(board, 2, 7, 6) == 0 );
assert( gamma_move(board, 2, 3, 4) == 0 );
assert( gamma_free_fields(board, 2) == 40 );
assert( gamma_move(board, 3, 7, 2) == 0 );
assert( gamma_move(board, 3, 5, 6) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 3, 9) == 1 );
assert( gamma_move(board, 4, 6, 0) == 1 );
assert( gamma_move(board, 5, 5, 3) == 0 );
assert( gamma_move(board, 5, 7, 4) == 0 );
assert( gamma_move(board, 6, 0, 2) == 0 );
assert( gamma_move(board, 7, 4, 0) == 0 );
assert( gamma_move(board, 7, 7, 1) == 0 );
assert( gamma_move(board, 8, 5, 1) == 0 );
assert( gamma_move(board, 1, 7, 0) == 0 );
assert( gamma_free_fields(board, 1) == 38 );
assert( gamma_move(board, 2, 1, 7) == 0 );
assert( gamma_move(board, 3, 7, 3) == 0 );
assert( gamma_busy_fields(board, 4) == 9 );
assert( gamma_move(board, 5, 3, 6) == 1 );
assert( gamma_free_fields(board, 5) == 37 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 1, 0) == 0 );
assert( gamma_move(board, 6, 5, 5) == 0 );
assert( gamma_move(board, 7, 5, 3) == 0 );
assert( gamma_move(board, 8, 6, 10) == 0 );
assert( gamma_move(board, 1, 6, 1) == 1 );
assert( gamma_move(board, 1, 2, 10) == 1 );
assert( gamma_busy_fields(board, 1) == 7 );
assert( gamma_move(board, 2, 1, 4) == 0 );
assert( gamma_move(board, 2, 1, 6) == 1 );
assert( gamma_golden_move(board, 2, 5, 3) == 1 );
assert( gamma_move(board, 3, 5, 3) == 0 );
assert( gamma_move(board, 3, 6, 1) == 0 );
assert( gamma_move(board, 4, 4, 3) == 0 );
assert( gamma_move(board, 5, 4, 0) == 0 );
assert( gamma_busy_fields(board, 5) == 6 );


char* board389249130 = gamma_board(board);
assert( board389249130 != NULL );
assert( strcmp(board389249130, 
"..1...3.\n"
".6744.82\n"
"2513...7\n"
".2.1.1..\n"
"82.544.4\n"
"..8..64.\n"
".858.4.8\n"
"242362.6\n"
"755..326\n"
".3...512\n"
"62.71147\n") == 0);
free(board389249130);
board389249130 = NULL;
assert( gamma_move(board, 6, 10, 3) == 0 );
assert( gamma_move(board, 6, 5, 9) == 1 );
assert( gamma_move(board, 7, 7, 1) == 0 );
assert( gamma_golden_move(board, 7, 10, 2) == 0 );
assert( gamma_move(board, 8, 0, 4) == 1 );
assert( gamma_move(board, 1, 6, 1) == 0 );
assert( gamma_move(board, 1, 2, 2) == 0 );
assert( gamma_move(board, 2, 7, 4) == 0 );
assert( gamma_move(board, 2, 6, 1) == 0 );
assert( gamma_move(board, 3, 8, 4) == 0 );
assert( gamma_move(board, 3, 3, 6) == 0 );
assert( gamma_move(board, 4, 5, 1) == 0 );
assert( gamma_move(board, 4, 3, 6) == 0 );
assert( gamma_move(board, 5, 1, 0) == 0 );
assert( gamma_move(board, 5, 1, 2) == 0 );
assert( gamma_move(board, 6, 6, 6) == 1 );
assert( gamma_move(board, 7, 6, 10) == 0 );
assert( gamma_move(board, 8, 7, 2) == 0 );
assert( gamma_move(board, 8, 1, 7) == 0 );
assert( gamma_busy_fields(board, 8) == 7 );
assert( gamma_move(board, 1, 7, 7) == 1 );
assert( gamma_move(board, 1, 4, 1) == 1 );
assert( gamma_busy_fields(board, 1) == 9 );
assert( gamma_move(board, 2, 7, 8) == 0 );
assert( gamma_move(board, 2, 2, 7) == 1 );
assert( gamma_move(board, 3, 3, 4) == 0 );
assert( gamma_free_fields(board, 3) == 28 );
assert( gamma_move(board, 4, 7, 6) == 0 );
assert( gamma_move(board, 4, 7, 3) == 0 );
assert( gamma_move(board, 5, 7, 6) == 0 );
assert( gamma_move(board, 6, 5, 3) == 0 );
assert( gamma_move(board, 6, 3, 3) == 0 );
assert( gamma_busy_fields(board, 6) == 8 );
assert( gamma_move(board, 7, 7, 9) == 0 );
assert( gamma_move(board, 1, 1, 7) == 0 );
assert( gamma_move(board, 2, 10, 0) == 0 );
assert( gamma_move(board, 3, 4, 4) == 1 );
assert( gamma_move(board, 3, 5, 10) == 1 );
assert( gamma_free_fields(board, 3) == 26 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 2, 3) == 0 );
assert( gamma_move(board, 4, 2, 4) == 0 );
assert( gamma_move(board, 5, 3, 6) == 0 );
assert( gamma_move(board, 6, 4, 6) == 0 );
assert( gamma_move(board, 6, 4, 7) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 5, 6) == 0 );
assert( gamma_busy_fields(board, 7) == 5 );
assert( gamma_move(board, 8, 8, 5) == 0 );
assert( gamma_move(board, 1, 4, 0) == 0 );
assert( gamma_move(board, 2, 6, 2) == 0 );
assert( gamma_move(board, 3, 1, 0) == 0 );
assert( gamma_move(board, 3, 1, 4) == 0 );
assert( gamma_move(board, 4, 5, 4) == 0 );
assert( gamma_move(board, 4, 1, 5) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 3, 4) == 0 );
assert( gamma_move(board, 5, 5, 1) == 0 );
assert( gamma_move(board, 6, 7, 7) == 0 );
assert( gamma_busy_fields(board, 6) == 9 );
assert( gamma_free_fields(board, 6) == 24 );


char* board148084998 = gamma_board(board);
assert( board148084998 != NULL );
assert( strcmp(board148084998, 
"..1..33.\n"
".6744682\n"
"2513...7\n"
".22161.1\n"
"82.54464\n"
".48..64.\n"
"885834.8\n"
"242362.6\n"
"755..326\n"
".3..1512\n"
"62.71147\n") == 0);
free(board148084998);
board148084998 = NULL;
assert( gamma_move(board, 7, 7, 0) == 0 );
assert( gamma_move(board, 7, 0, 3) == 0 );
assert( gamma_move(board, 8, 0, 10) == 1 );
assert( gamma_move(board, 8, 3, 4) == 0 );
assert( gamma_move(board, 1, 2, 4) == 0 );
assert( gamma_move(board, 2, 5, 7) == 0 );
assert( gamma_move(board, 3, 3, 6) == 0 );
assert( gamma_move(board, 4, 10, 7) == 0 );
assert( gamma_move(board, 4, 6, 6) == 0 );
assert( gamma_move(board, 5, 3, 5) == 1 );
assert( gamma_move(board, 5, 6, 9) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 1, 0) == 0 );
assert( gamma_move(board, 7, 6, 2) == 0 );
assert( gamma_golden_move(board, 7, 1, 6) == 1 );
assert( gamma_move(board, 8, 1, 2) == 0 );
assert( gamma_free_fields(board, 8) == 22 );
assert( gamma_move(board, 1, 6, 2) == 0 );
assert( gamma_move(board, 1, 0, 0) == 0 );
assert( gamma_move(board, 2, 8, 4) == 0 );
assert( gamma_free_fields(board, 2) == 22 );
assert( gamma_move(board, 3, 4, 6) == 0 );
assert( gamma_move(board, 4, 1, 3) == 0 );
assert( gamma_free_fields(board, 4) == 22 );
assert( gamma_golden_move(board, 4, 3, 3) == 1 );
assert( gamma_move(board, 5, 10, 7) == 0 );
assert( gamma_move(board, 5, 2, 9) == 0 );
assert( gamma_move(board, 6, 1, 0) == 0 );
assert( gamma_move(board, 7, 8, 6) == 0 );
assert( gamma_move(board, 7, 6, 10) == 0 );
assert( gamma_move(board, 8, 5, 4) == 0 );
assert( gamma_move(board, 8, 7, 9) == 0 );
assert( gamma_busy_fields(board, 8) == 8 );
assert( gamma_move(board, 2, 4, 3) == 0 );
assert( gamma_move(board, 3, 5, 7) == 0 );
assert( gamma_move(board, 3, 1, 4) == 0 );
assert( gamma_move(board, 4, 7, 0) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 5, 5) == 0 );
assert( gamma_golden_move(board, 5, 3, 3) == 1 );
assert( gamma_move(board, 6, 5, 0) == 0 );
assert( gamma_move(board, 7, 1, 1) == 0 );
assert( gamma_move(board, 8, 5, 0) == 0 );
assert( gamma_move(board, 2, 2, 6) == 1 );
assert( gamma_move(board, 3, 7, 0) == 0 );
assert( gamma_move(board, 4, 1, 4) == 0 );
assert( gamma_move(board, 5, 5, 4) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );


char* board495051468 = gamma_board(board);
assert( board495051468 != NULL );
assert( strcmp(board495051468, 
"8.1..33.\n"
".6744682\n"
"2513...7\n"
".22161.1\n"
"87254464\n"
".485.64.\n"
"885834.8\n"
"242562.6\n"
"755..326\n"
".3..1512\n"
"62.71147\n") == 0);
free(board495051468);
board495051468 = NULL;
assert( gamma_move(board, 6, 10, 3) == 0 );


char* board310207006 = gamma_board(board);
assert( board310207006 != NULL );
assert( strcmp(board310207006, 
"8.1..33.\n"
".6744682\n"
"2513...7\n"
".22161.1\n"
"87254464\n"
".485.64.\n"
"885834.8\n"
"242562.6\n"
"755..326\n"
".3..1512\n"
"62.71147\n") == 0);
free(board310207006);
board310207006 = NULL;
assert( gamma_move(board, 8, 10, 4) == 0 );
assert( gamma_move(board, 1, 7, 3) == 0 );
assert( gamma_move(board, 2, 5, 6) == 0 );
assert( gamma_move(board, 2, 7, 4) == 0 );
assert( gamma_move(board, 3, 2, 3) == 0 );
assert( gamma_move(board, 3, 2, 8) == 0 );
assert( gamma_move(board, 4, 1, 2) == 0 );
assert( gamma_move(board, 4, 6, 8) == 1 );
assert( gamma_move(board, 5, 5, 0) == 0 );
assert( gamma_busy_fields(board, 5) == 8 );
assert( gamma_move(board, 6, 10, 7) == 0 );
assert( gamma_move(board, 6, 0, 10) == 0 );
assert( gamma_move(board, 7, 10, 7) == 0 );
assert( gamma_move(board, 7, 7, 4) == 0 );
assert( gamma_move(board, 8, 4, 7) == 0 );
assert( gamma_move(board, 8, 7, 4) == 0 );
assert( gamma_move(board, 1, 8, 5) == 0 );
assert( gamma_free_fields(board, 2) == 20 );
assert( gamma_move(board, 3, 10, 3) == 0 );
assert( gamma_golden_move(board, 3, 2, 0) == 0 );
assert( gamma_move(board, 4, 9, 0) == 0 );
assert( gamma_move(board, 5, 10, 4) == 0 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 10, 1) == 0 );
assert( gamma_move(board, 6, 2, 8) == 0 );
assert( gamma_free_fields(board, 6) == 20 );
assert( gamma_move(board, 7, 7, 10) == 1 );
assert( gamma_move(board, 7, 3, 0) == 0 );
assert( gamma_move(board, 8, 2, 4) == 0 );
assert( gamma_move(board, 8, 7, 10) == 0 );


char* board212457816 = gamma_board(board);
assert( board212457816 != NULL );
assert( strcmp(board212457816, 
"8.1..337\n"
".6744682\n"
"2513..47\n"
".22161.1\n"
"87254464\n"
".485.64.\n"
"885834.8\n"
"242562.6\n"
"755..326\n"
".3..1512\n"
"62.71147\n") == 0);
free(board212457816);
board212457816 = NULL;
assert( gamma_move(board, 2, 4, 1) == 0 );
assert( gamma_move(board, 2, 2, 1) == 1 );
assert( gamma_move(board, 3, 10, 4) == 0 );
assert( gamma_move(board, 3, 0, 3) == 0 );
assert( gamma_move(board, 4, 0, 3) == 0 );
assert( gamma_free_fields(board, 4) == 18 );
assert( gamma_move(board, 5, 7, 0) == 0 );
assert( gamma_free_fields(board, 5) == 18 );
assert( gamma_move(board, 6, 1, 10) == 1 );
assert( gamma_move(board, 8, 7, 10) == 0 );
assert( gamma_move(board, 8, 0, 5) == 1 );


gamma_delete(board);

    return 0;
}
