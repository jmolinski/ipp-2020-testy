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
uuid: 707363462
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(5, 13, 6, 10);
assert( board != NULL );


assert( gamma_move(board, 2, 4, 1) == 1 );
assert( gamma_move(board, 5, 10, 2) == 0 );
assert( gamma_move(board, 5, 3, 2) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 12, 3) == 0 );
assert( gamma_move(board, 1, 8, 1) == 0 );
assert( gamma_move(board, 1, 0, 10) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 11, 2) == 0 );
assert( gamma_move(board, 2, 0, 0) == 1 );
assert( gamma_move(board, 3, 12, 1) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 8, 3) == 0 );
assert( gamma_busy_fields(board, 4) == 0 );
assert( gamma_move(board, 5, 4, 0) == 1 );
assert( gamma_move(board, 6, 3, 3) == 1 );
assert( gamma_move(board, 6, 0, 4) == 1 );
assert( gamma_free_fields(board, 6) == 58 );
assert( gamma_golden_move(board, 1, 4, 0) == 1 );
assert( gamma_move(board, 2, 0, 7) == 1 );
assert( gamma_free_fields(board, 2) == 57 );
assert( gamma_move(board, 3, 2, 1) == 1 );
assert( gamma_busy_fields(board, 4) == 0 );
assert( gamma_move(board, 5, 4, 3) == 1 );
assert( gamma_move(board, 6, 12, 4) == 0 );
assert( gamma_free_fields(board, 6) == 55 );
assert( gamma_move(board, 1, 2, 1) == 0 );
assert( gamma_move(board, 1, 0, 4) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 2, 2) == 1 );
assert( gamma_move(board, 2, 1, 0) == 1 );
assert( gamma_busy_fields(board, 2) == 5 );
assert( gamma_free_fields(board, 2) == 53 );
assert( gamma_move(board, 3, 1, 1) == 1 );
assert( gamma_move(board, 3, 1, 12) == 1 );
assert( gamma_move(board, 4, 1, 8) == 1 );
assert( gamma_move(board, 5, 6, 1) == 0 );
assert( gamma_move(board, 5, 4, 12) == 1 );
assert( gamma_move(board, 6, 6, 0) == 0 );
assert( gamma_free_fields(board, 6) == 49 );
assert( gamma_move(board, 1, 1, 10) == 1 );
assert( gamma_move(board, 2, 1, 0) == 0 );
assert( gamma_move(board, 3, 11, 3) == 0 );
assert( gamma_move(board, 3, 4, 1) == 0 );
assert( gamma_busy_fields(board, 3) == 3 );
assert( gamma_move(board, 4, 6, 4) == 0 );
assert( gamma_move(board, 5, 9, 4) == 0 );
assert( gamma_move(board, 6, 1, 6) == 1 );
assert( gamma_move(board, 1, 2, 1) == 0 );
assert( gamma_move(board, 2, 1, 4) == 1 );
assert( gamma_move(board, 2, 4, 2) == 1 );
assert( gamma_move(board, 3, 2, 0) == 1 );
assert( gamma_move(board, 3, 3, 7) == 1 );
assert( gamma_move(board, 4, 3, 2) == 0 );
assert( gamma_busy_fields(board, 4) == 1 );
assert( gamma_move(board, 5, 5, 3) == 0 );
assert( gamma_move(board, 6, 3, 5) == 1 );
assert( gamma_move(board, 1, 9, 2) == 0 );
assert( gamma_move(board, 1, 1, 2) == 1 );
assert( gamma_move(board, 2, 3, 5) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 9, 1) == 0 );
assert( gamma_busy_fields(board, 3) == 5 );
assert( gamma_free_fields(board, 3) == 41 );
assert( gamma_move(board, 4, 8, 3) == 0 );
assert( gamma_move(board, 4, 4, 4) == 1 );
assert( gamma_move(board, 5, 11, 4) == 0 );
assert( gamma_move(board, 5, 1, 2) == 0 );
assert( gamma_move(board, 6, 0, 1) == 1 );
assert( gamma_move(board, 1, 0, 3) == 1 );
assert( gamma_move(board, 1, 2, 2) == 0 );
assert( gamma_move(board, 2, 0, 12) == 1 );
assert( gamma_move(board, 3, 1, 3) == 1 );
assert( gamma_move(board, 3, 4, 10) == 1 );
assert( gamma_move(board, 4, 2, 2) == 0 );
assert( gamma_move(board, 4, 2, 11) == 1 );
assert( gamma_move(board, 5, 0, 11) == 1 );
assert( gamma_move(board, 6, 3, 9) == 1 );
assert( gamma_free_fields(board, 6) == 32 );
assert( gamma_move(board, 1, 4, 2) == 0 );
assert( gamma_move(board, 1, 2, 5) == 1 );
assert( gamma_busy_fields(board, 1) == 6 );
assert( gamma_move(board, 3, 9, 1) == 0 );
assert( gamma_move(board, 3, 2, 10) == 1 );


char* board462436967 = gamma_board(board);
assert( board462436967 != NULL );
assert( strcmp(board462436967, 
"23..5\n"
"5.4..\n"
"113.3\n"
"...6.\n"
".4...\n"
"2..3.\n"
".6...\n"
"..16.\n"
"62..4\n"
"13.65\n"
".1252\n"
"633.2\n"
"223.1\n") == 0);
free(board462436967);
board462436967 = NULL;
assert( gamma_move(board, 4, 0, 3) == 0 );
assert( gamma_move(board, 4, 1, 0) == 0 );
assert( gamma_move(board, 5, 6, 4) == 0 );
assert( gamma_move(board, 5, 0, 9) == 1 );
assert( gamma_free_fields(board, 5) == 29 );
assert( gamma_move(board, 6, 3, 8) == 1 );
assert( gamma_move(board, 6, 3, 9) == 0 );


char* board361222461 = gamma_board(board);
assert( board361222461 != NULL );
assert( strcmp(board361222461, 
"23..5\n"
"5.4..\n"
"113.3\n"
"5..6.\n"
".4.6.\n"
"2..3.\n"
".6...\n"
"..16.\n"
"62..4\n"
"13.65\n"
".1252\n"
"633.2\n"
"223.1\n") == 0);
free(board361222461);
board361222461 = NULL;
assert( gamma_move(board, 1, 2, 0) == 0 );
assert( gamma_move(board, 1, 1, 8) == 0 );
assert( gamma_free_fields(board, 1) == 28 );
assert( gamma_move(board, 2, 12, 3) == 0 );


char* board718693627 = gamma_board(board);
assert( board718693627 != NULL );
assert( strcmp(board718693627, 
"23..5\n"
"5.4..\n"
"113.3\n"
"5..6.\n"
".4.6.\n"
"2..3.\n"
".6...\n"
"..16.\n"
"62..4\n"
"13.65\n"
".1252\n"
"633.2\n"
"223.1\n") == 0);
free(board718693627);
board718693627 = NULL;
assert( gamma_move(board, 3, 8, 2) == 0 );
assert( gamma_move(board, 3, 3, 1) == 1 );


char* board191062652 = gamma_board(board);
assert( board191062652 != NULL );
assert( strcmp(board191062652, 
"23..5\n"
"5.4..\n"
"113.3\n"
"5..6.\n"
".4.6.\n"
"2..3.\n"
".6...\n"
"..16.\n"
"62..4\n"
"13.65\n"
".1252\n"
"63332\n"
"223.1\n") == 0);
free(board191062652);
board191062652 = NULL;
assert( gamma_move(board, 4, 8, 0) == 0 );
assert( gamma_move(board, 4, 2, 7) == 1 );


char* board221272240 = gamma_board(board);
assert( board221272240 != NULL );
assert( strcmp(board221272240, 
"23..5\n"
"5.4..\n"
"113.3\n"
"5..6.\n"
".4.6.\n"
"2.43.\n"
".6...\n"
"..16.\n"
"62..4\n"
"13.65\n"
".1252\n"
"63332\n"
"223.1\n") == 0);
free(board221272240);
board221272240 = NULL;
assert( gamma_move(board, 5, 11, 4) == 0 );
assert( gamma_move(board, 6, 3, 0) == 1 );
assert( gamma_move(board, 1, 3, 2) == 0 );
assert( gamma_move(board, 1, 2, 0) == 0 );
assert( gamma_move(board, 2, 3, 12) == 1 );
assert( gamma_move(board, 3, 11, 4) == 0 );
assert( gamma_move(board, 4, 4, 2) == 0 );
assert( gamma_move(board, 4, 0, 2) == 1 );
assert( gamma_golden_move(board, 4, 3, 1) == 1 );
assert( gamma_move(board, 5, 2, 12) == 1 );
assert( gamma_move(board, 6, 1, 2) == 0 );
assert( gamma_move(board, 1, 0, 0) == 0 );
assert( gamma_move(board, 1, 0, 9) == 0 );
assert( gamma_move(board, 2, 5, 1) == 0 );
assert( gamma_move(board, 2, 2, 10) == 0 );
assert( gamma_move(board, 3, 5, 0) == 0 );
assert( gamma_move(board, 3, 4, 6) == 1 );
assert( gamma_move(board, 4, 5, 0) == 0 );
assert( gamma_move(board, 4, 1, 11) == 1 );
assert( gamma_move(board, 5, 4, 3) == 0 );
assert( gamma_move(board, 6, 5, 0) == 0 );
assert( gamma_move(board, 6, 4, 11) == 1 );
assert( gamma_move(board, 1, 3, 1) == 0 );
assert( gamma_move(board, 2, 4, 3) == 0 );
assert( gamma_move(board, 2, 4, 3) == 0 );
assert( gamma_busy_fields(board, 3) == 9 );
assert( gamma_move(board, 4, 4, 3) == 0 );
assert( gamma_move(board, 5, 6, 2) == 0 );
assert( gamma_move(board, 5, 0, 7) == 0 );
assert( gamma_move(board, 6, 8, 0) == 0 );
assert( gamma_move(board, 1, 7, 1) == 0 );
assert( gamma_move(board, 1, 1, 11) == 0 );
assert( gamma_busy_fields(board, 1) == 6 );
assert( gamma_move(board, 2, 4, 6) == 0 );
assert( gamma_move(board, 3, 9, 1) == 0 );
assert( gamma_move(board, 3, 1, 6) == 0 );
assert( gamma_busy_fields(board, 3) == 9 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_golden_move(board, 3, 10, 0) == 0 );
assert( gamma_move(board, 4, 3, 0) == 0 );
assert( gamma_move(board, 5, 4, 7) == 1 );
assert( gamma_move(board, 6, 8, 2) == 0 );
assert( gamma_move(board, 6, 3, 6) == 1 );
assert( gamma_move(board, 1, 4, 8) == 1 );
assert( gamma_move(board, 2, 5, 0) == 0 );
assert( gamma_move(board, 2, 2, 4) == 1 );
assert( gamma_move(board, 3, 6, 0) == 0 );
assert( gamma_move(board, 3, 4, 7) == 0 );
assert( gamma_busy_fields(board, 3) == 9 );
assert( gamma_move(board, 4, 0, 12) == 0 );
assert( gamma_golden_move(board, 4, 12, 2) == 0 );
assert( gamma_move(board, 5, 4, 1) == 0 );
assert( gamma_move(board, 6, 10, 3) == 0 );
assert( gamma_move(board, 1, 6, 0) == 0 );
assert( gamma_move(board, 1, 3, 12) == 0 );
assert( gamma_move(board, 2, 0, 12) == 0 );
assert( gamma_move(board, 2, 2, 10) == 0 );
assert( gamma_move(board, 3, 0, 10) == 0 );
assert( gamma_move(board, 4, 9, 2) == 0 );
assert( gamma_move(board, 4, 2, 9) == 1 );
assert( gamma_move(board, 6, 10, 3) == 0 );
assert( gamma_move(board, 1, 4, 3) == 0 );
assert( gamma_free_fields(board, 1) == 14 );
assert( gamma_move(board, 2, 0, 2) == 0 );
assert( gamma_free_fields(board, 3) == 14 );
assert( gamma_move(board, 4, 10, 3) == 0 );
assert( gamma_move(board, 4, 1, 11) == 0 );
assert( gamma_move(board, 5, 5, 4) == 0 );
assert( gamma_move(board, 6, 7, 1) == 0 );
assert( gamma_move(board, 1, 2, 8) == 1 );
assert( gamma_free_fields(board, 1) == 13 );
assert( gamma_move(board, 2, 3, 5) == 0 );
assert( gamma_free_fields(board, 2) == 13 );


char* board427106555 = gamma_board(board);
assert( board427106555 != NULL );
assert( strcmp(board427106555, 
"23525\n"
"544.6\n"
"113.3\n"
"5.46.\n"
".4161\n"
"2.435\n"
".6.63\n"
"..16.\n"
"622.4\n"
"13.65\n"
"41252\n"
"63342\n"
"22361\n") == 0);
free(board427106555);
board427106555 = NULL;
assert( gamma_move(board, 3, 9, 1) == 0 );
assert( gamma_move(board, 4, 4, 3) == 0 );
assert( gamma_golden_move(board, 4, 3, 4) == 0 );
assert( gamma_move(board, 5, 7, 1) == 0 );
assert( gamma_move(board, 5, 4, 4) == 0 );
assert( gamma_busy_fields(board, 5) == 7 );
assert( gamma_move(board, 6, 4, 11) == 0 );
assert( gamma_move(board, 6, 1, 3) == 0 );


char* board975098728 = gamma_board(board);
assert( board975098728 != NULL );
assert( strcmp(board975098728, 
"23525\n"
"544.6\n"
"113.3\n"
"5.46.\n"
".4161\n"
"2.435\n"
".6.63\n"
"..16.\n"
"622.4\n"
"13.65\n"
"41252\n"
"63342\n"
"22361\n") == 0);
free(board975098728);
board975098728 = NULL;
assert( gamma_move(board, 1, 6, 0) == 0 );
assert( gamma_move(board, 1, 2, 11) == 0 );
assert( gamma_free_fields(board, 1) == 13 );
assert( gamma_move(board, 2, 4, 3) == 0 );
assert( gamma_move(board, 2, 3, 8) == 0 );
assert( gamma_free_fields(board, 2) == 13 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 5, 1) == 0 );
assert( gamma_move(board, 3, 3, 4) == 1 );
assert( gamma_move(board, 4, 6, 2) == 0 );
assert( gamma_move(board, 4, 2, 11) == 0 );
assert( gamma_busy_fields(board, 4) == 8 );
assert( gamma_golden_possible(board, 4) == 0 );


char* board308006394 = gamma_board(board);
assert( board308006394 != NULL );
assert( strcmp(board308006394, 
"23525\n"
"544.6\n"
"113.3\n"
"5.46.\n"
".4161\n"
"2.435\n"
".6.63\n"
"..16.\n"
"62234\n"
"13.65\n"
"41252\n"
"63342\n"
"22361\n") == 0);
free(board308006394);
board308006394 = NULL;
assert( gamma_move(board, 5, 2, 10) == 0 );
assert( gamma_move(board, 6, 11, 3) == 0 );
assert( gamma_move(board, 6, 3, 11) == 1 );
assert( gamma_move(board, 2, 5, 0) == 0 );
assert( gamma_move(board, 3, 6, 2) == 0 );
assert( gamma_move(board, 4, 9, 4) == 0 );
assert( gamma_move(board, 5, 1, 11) == 0 );
assert( gamma_move(board, 6, 5, 0) == 0 );
assert( gamma_move(board, 6, 4, 10) == 0 );


char* board555063980 = gamma_board(board);
assert( board555063980 != NULL );
assert( strcmp(board555063980, 
"23525\n"
"54466\n"
"113.3\n"
"5.46.\n"
".4161\n"
"2.435\n"
".6.63\n"
"..16.\n"
"62234\n"
"13.65\n"
"41252\n"
"63342\n"
"22361\n") == 0);
free(board555063980);
board555063980 = NULL;
assert( gamma_move(board, 1, 3, 6) == 0 );
assert( gamma_move(board, 1, 4, 3) == 0 );
assert( gamma_move(board, 2, 9, 4) == 0 );
assert( gamma_busy_fields(board, 2) == 10 );
assert( gamma_move(board, 3, 3, 4) == 0 );
assert( gamma_busy_fields(board, 3) == 10 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 1, 2) == 0 );
assert( gamma_move(board, 4, 2, 4) == 0 );
assert( gamma_free_fields(board, 4) == 11 );
assert( gamma_move(board, 5, 6, 0) == 0 );


char* board770774063 = gamma_board(board);
assert( board770774063 != NULL );
assert( strcmp(board770774063, 
"23525\n"
"54466\n"
"113.3\n"
"5.46.\n"
".4161\n"
"2.435\n"
".6.63\n"
"..16.\n"
"62234\n"
"13.65\n"
"41252\n"
"63342\n"
"22361\n") == 0);
free(board770774063);
board770774063 = NULL;
assert( gamma_move(board, 6, 6, 0) == 0 );
assert( gamma_move(board, 6, 4, 9) == 1 );
assert( gamma_move(board, 1, 6, 2) == 0 );
assert( gamma_move(board, 1, 3, 6) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 5, 0) == 0 );
assert( gamma_move(board, 4, 10, 3) == 0 );
assert( gamma_move(board, 4, 1, 7) == 1 );
assert( gamma_free_fields(board, 4) == 9 );


gamma_delete(board);

    return 0;
}
