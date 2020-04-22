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
uuid: 214863118
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(8, 11, 7, 9);
assert( board != NULL );


assert( gamma_move(board, 1, 1, 7) == 1 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 1, 6) == 1 );
assert( gamma_busy_fields(board, 2) == 1 );
assert( gamma_move(board, 3, 8, 0) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 7, 7) == 1 );
assert( gamma_busy_fields(board, 4) == 1 );
assert( gamma_move(board, 5, 8, 4) == 0 );
assert( gamma_move(board, 6, 4, 6) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 1, 10, 7) == 0 );
assert( gamma_move(board, 2, 5, 2) == 1 );
assert( gamma_move(board, 3, 0, 3) == 1 );
assert( gamma_busy_fields(board, 3) == 1 );
assert( gamma_move(board, 4, 2, 2) == 1 );
assert( gamma_move(board, 4, 5, 7) == 1 );
assert( gamma_free_fields(board, 4) == 80 );
assert( gamma_move(board, 5, 3, 3) == 1 );
assert( gamma_move(board, 5, 3, 7) == 1 );
assert( gamma_move(board, 6, 8, 6) == 0 );
assert( gamma_move(board, 6, 7, 1) == 1 );
assert( gamma_move(board, 7, 5, 5) == 1 );
assert( gamma_move(board, 7, 0, 9) == 1 );


char* board156823652 = gamma_board(board);
assert( board156823652 != NULL );
assert( strcmp(board156823652, 
"........\n"
"7.......\n"
"........\n"
".1.5.4.4\n"
".2..6...\n"
".....7..\n"
"........\n"
"3..5....\n"
"..4..2..\n"
".......6\n"
"........\n") == 0);
free(board156823652);
board156823652 = NULL;
assert( gamma_move(board, 1, 4, 2) == 1 );
assert( gamma_move(board, 2, 9, 1) == 0 );
assert( gamma_busy_fields(board, 2) == 2 );
assert( gamma_move(board, 3, 6, 10) == 1 );
assert( gamma_golden_move(board, 3, 7, 3) == 0 );
assert( gamma_move(board, 4, 5, 7) == 0 );
assert( gamma_move(board, 4, 1, 6) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 6, 3) == 1 );
assert( gamma_move(board, 5, 6, 1) == 1 );
assert( gamma_golden_move(board, 6, 2, 4) == 0 );
assert( gamma_move(board, 7, 1, 4) == 1 );
assert( gamma_move(board, 7, 5, 7) == 0 );
assert( gamma_move(board, 1, 0, 7) == 1 );
assert( gamma_move(board, 2, 10, 2) == 0 );
assert( gamma_move(board, 2, 2, 2) == 0 );
assert( gamma_move(board, 3, 3, 4) == 1 );
assert( gamma_move(board, 3, 0, 10) == 1 );
assert( gamma_move(board, 4, 8, 3) == 0 );
assert( gamma_move(board, 4, 5, 7) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 1, 5) == 1 );
assert( gamma_move(board, 5, 4, 5) == 1 );
assert( gamma_free_fields(board, 5) == 65 );
assert( gamma_move(board, 6, 5, 3) == 1 );
assert( gamma_move(board, 6, 6, 10) == 0 );
assert( gamma_busy_fields(board, 6) == 3 );
assert( gamma_free_fields(board, 6) == 64 );
assert( gamma_move(board, 7, 7, 4) == 1 );
assert( gamma_golden_move(board, 7, 3, 5) == 0 );
assert( gamma_move(board, 1, 3, 1) == 1 );
assert( gamma_move(board, 1, 7, 9) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 3, 2) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_golden_move(board, 2, 4, 3) == 0 );
assert( gamma_move(board, 3, 9, 6) == 0 );
assert( gamma_move(board, 3, 2, 9) == 1 );
assert( gamma_free_fields(board, 3) == 59 );
assert( gamma_move(board, 4, 6, 2) == 1 );
assert( gamma_move(board, 5, 0, 0) == 1 );
assert( gamma_move(board, 5, 3, 3) == 0 );
assert( gamma_free_fields(board, 5) == 57 );
assert( gamma_move(board, 6, 2, 8) == 1 );
assert( gamma_move(board, 6, 3, 1) == 0 );
assert( gamma_move(board, 7, 1, 4) == 0 );
assert( gamma_move(board, 7, 7, 10) == 1 );
assert( gamma_move(board, 1, 3, 2) == 0 );
assert( gamma_move(board, 1, 2, 3) == 1 );
assert( gamma_move(board, 2, 0, 2) == 1 );
assert( gamma_move(board, 2, 7, 10) == 0 );
assert( gamma_free_fields(board, 2) == 53 );
assert( gamma_golden_possible(board, 2) == 1 );


char* board662532954 = gamma_board(board);
assert( board662532954 != NULL );
assert( strcmp(board662532954, 
"3.....37\n"
"7.3....1\n"
"..6.....\n"
"11.5.4.4\n"
".2..6...\n"
".5..57..\n"
".7.3...7\n"
"3.15.65.\n"
"2.42124.\n"
"...1..56\n"
"5.......\n") == 0);
free(board662532954);
board662532954 = NULL;
assert( gamma_move(board, 3, 7, 4) == 0 );
assert( gamma_move(board, 3, 7, 3) == 1 );
assert( gamma_golden_move(board, 3, 7, 5) == 0 );
assert( gamma_move(board, 4, 4, 0) == 1 );
assert( gamma_move(board, 4, 4, 9) == 1 );
assert( gamma_move(board, 5, 3, 7) == 0 );
assert( gamma_move(board, 6, 5, 6) == 1 );
assert( gamma_move(board, 6, 4, 8) == 1 );
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_free_fields(board, 1) == 48 );
assert( gamma_move(board, 2, 0, 7) == 0 );
assert( gamma_move(board, 2, 3, 3) == 0 );
assert( gamma_move(board, 3, 6, 3) == 0 );


char* board494960186 = gamma_board(board);
assert( board494960186 != NULL );
assert( strcmp(board494960186, 
"3.....37\n"
"7.3.4..1\n"
"..6.6...\n"
"11.5.4.4\n"
".2..66..\n"
".5..57..\n"
".7.3...7\n"
"3.15.653\n"
"2.42124.\n"
"...1..56\n"
"5...4...\n") == 0);
free(board494960186);
board494960186 = NULL;
assert( gamma_move(board, 4, 10, 5) == 0 );
assert( gamma_move(board, 5, 8, 3) == 0 );
assert( gamma_move(board, 5, 5, 9) == 1 );
assert( gamma_move(board, 6, 6, 0) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 0, 5) == 1 );
assert( gamma_move(board, 1, 8, 1) == 0 );
assert( gamma_busy_fields(board, 1) == 6 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 0, 1) == 1 );
assert( gamma_move(board, 3, 6, 3) == 0 );
assert( gamma_move(board, 3, 4, 0) == 0 );
assert( gamma_move(board, 4, 7, 6) == 1 );
assert( gamma_move(board, 4, 7, 8) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 4, 6) == 0 );
assert( gamma_move(board, 6, 3, 1) == 0 );
assert( gamma_move(board, 6, 0, 0) == 0 );
assert( gamma_move(board, 7, 0, 1) == 0 );
assert( gamma_move(board, 7, 0, 7) == 0 );
assert( gamma_busy_fields(board, 7) == 6 );
assert( gamma_move(board, 2, 0, 6) == 1 );
assert( gamma_move(board, 3, 3, 9) == 1 );
assert( gamma_move(board, 4, 5, 3) == 0 );
assert( gamma_move(board, 4, 0, 7) == 0 );
assert( gamma_move(board, 5, 1, 1) == 1 );
assert( gamma_move(board, 5, 0, 9) == 0 );
assert( gamma_move(board, 6, 4, 6) == 0 );
assert( gamma_move(board, 6, 2, 8) == 0 );
assert( gamma_busy_fields(board, 7) == 6 );


char* board681002579 = gamma_board(board);
assert( board681002579 != NULL );
assert( strcmp(board681002579, 
"3.....37\n"
"7.3345.1\n"
"..6.6..4\n"
"11.5.4.4\n"
"22..66.4\n"
"75..57..\n"
".7.3...7\n"
"3.15.653\n"
"2.42124.\n"
"25.1..56\n"
"5...4.6.\n") == 0);
free(board681002579);
board681002579 = NULL;
assert( gamma_move(board, 1, 6, 0) == 0 );
assert( gamma_move(board, 2, 10, 4) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 7, 5) == 1 );
assert( gamma_move(board, 4, 5, 3) == 0 );
assert( gamma_move(board, 4, 5, 0) == 1 );
assert( gamma_move(board, 5, 0, 3) == 0 );
assert( gamma_move(board, 5, 3, 2) == 0 );
assert( gamma_move(board, 6, 1, 4) == 0 );
assert( gamma_move(board, 1, 6, 1) == 0 );
assert( gamma_move(board, 1, 0, 4) == 1 );
assert( gamma_golden_move(board, 1, 7, 7) == 1 );
assert( gamma_move(board, 2, 1, 2) == 1 );
assert( gamma_golden_move(board, 2, 2, 4) == 0 );
assert( gamma_move(board, 3, 5, 3) == 0 );
assert( gamma_move(board, 4, 4, 7) == 1 );
assert( gamma_move(board, 4, 3, 1) == 0 );
assert( gamma_move(board, 5, 3, 5) == 1 );
assert( gamma_move(board, 6, 4, 5) == 0 );
assert( gamma_move(board, 7, 6, 6) == 1 );
assert( gamma_move(board, 7, 4, 3) == 1 );
assert( gamma_free_fields(board, 7) == 31 );
assert( gamma_move(board, 1, 1, 1) == 0 );
assert( gamma_move(board, 1, 5, 2) == 0 );
assert( gamma_move(board, 2, 10, 3) == 0 );
assert( gamma_free_fields(board, 2) == 31 );


char* board436454618 = gamma_board(board);
assert( board436454618 != NULL );
assert( strcmp(board436454618, 
"3.....37\n"
"7.3345.1\n"
"..6.6..4\n"
"11.544.1\n"
"22..6674\n"
"75.557.3\n"
"17.3...7\n"
"3.157653\n"
"2242124.\n"
"25.1..56\n"
"5...446.\n") == 0);
free(board436454618);
board436454618 = NULL;
assert( gamma_move(board, 3, 8, 3) == 0 );
assert( gamma_move(board, 3, 2, 5) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 0, 1) == 0 );
assert( gamma_move(board, 4, 1, 7) == 0 );
assert( gamma_free_fields(board, 4) == 30 );
assert( gamma_move(board, 5, 1, 5) == 0 );


char* board547060800 = gamma_board(board);
assert( board547060800 != NULL );
assert( strcmp(board547060800, 
"3.....37\n"
"7.3345.1\n"
"..6.6..4\n"
"11.544.1\n"
"22..6674\n"
"753557.3\n"
"17.3...7\n"
"3.157653\n"
"2242124.\n"
"25.1..56\n"
"5...446.\n") == 0);
free(board547060800);
board547060800 = NULL;
assert( gamma_move(board, 7, 7, 1) == 0 );
assert( gamma_move(board, 1, 5, 4) == 1 );
assert( gamma_move(board, 1, 2, 3) == 0 );
assert( gamma_move(board, 2, 10, 1) == 0 );
assert( gamma_move(board, 2, 7, 0) == 1 );
assert( gamma_move(board, 3, 3, 1) == 0 );
assert( gamma_move(board, 4, 3, 9) == 0 );
assert( gamma_move(board, 4, 2, 1) == 1 );
assert( gamma_move(board, 5, 0, 1) == 0 );
assert( gamma_busy_fields(board, 5) == 10 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 3, 1) == 0 );
assert( gamma_move(board, 6, 4, 2) == 0 );
assert( gamma_move(board, 7, 5, 2) == 0 );
assert( gamma_move(board, 1, 5, 6) == 0 );
assert( gamma_move(board, 2, 0, 3) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 10, 3) == 0 );
assert( gamma_move(board, 3, 6, 6) == 0 );
assert( gamma_move(board, 4, 8, 0) == 0 );
assert( gamma_move(board, 4, 7, 8) == 0 );
assert( gamma_move(board, 5, 1, 5) == 0 );
assert( gamma_move(board, 6, 1, 7) == 0 );
assert( gamma_free_fields(board, 6) == 27 );
assert( gamma_move(board, 7, 0, 6) == 0 );
assert( gamma_move(board, 2, 10, 2) == 0 );
assert( gamma_move(board, 3, 4, 6) == 0 );
assert( gamma_move(board, 4, 7, 7) == 0 );
assert( gamma_move(board, 4, 2, 5) == 0 );
assert( gamma_move(board, 5, 10, 3) == 0 );
assert( gamma_move(board, 5, 1, 5) == 0 );
assert( gamma_busy_fields(board, 5) == 10 );
assert( gamma_move(board, 6, 6, 3) == 0 );
assert( gamma_move(board, 7, 8, 6) == 0 );
assert( gamma_move(board, 1, 0, 2) == 0 );
assert( gamma_move(board, 1, 1, 5) == 0 );
assert( gamma_free_fields(board, 1) == 27 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 9, 1) == 0 );
assert( gamma_move(board, 3, 1, 4) == 0 );
assert( gamma_move(board, 3, 2, 2) == 0 );
assert( gamma_move(board, 4, 8, 0) == 0 );
assert( gamma_move(board, 4, 3, 3) == 0 );
assert( gamma_busy_fields(board, 4) == 10 );


char* board133531622 = gamma_board(board);
assert( board133531622 != NULL );
assert( strcmp(board133531622, 
"3.....37\n"
"7.3345.1\n"
"..6.6..4\n"
"11.544.1\n"
"22..6674\n"
"753557.3\n"
"17.3.1.7\n"
"3.157653\n"
"2242124.\n"
"2541..56\n"
"5...4462\n") == 0);
free(board133531622);
board133531622 = NULL;
assert( gamma_move(board, 5, 4, 6) == 0 );
assert( gamma_move(board, 5, 4, 1) == 0 );
assert( gamma_move(board, 6, 1, 4) == 0 );
assert( gamma_move(board, 7, 4, 6) == 0 );
assert( gamma_move(board, 7, 0, 0) == 0 );
assert( gamma_move(board, 1, 6, 3) == 0 );
assert( gamma_move(board, 1, 6, 2) == 0 );
assert( gamma_move(board, 2, 2, 3) == 0 );
assert( gamma_move(board, 2, 5, 3) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 1, 5) == 0 );
assert( gamma_move(board, 3, 7, 6) == 0 );


char* board658326180 = gamma_board(board);
assert( board658326180 != NULL );
assert( strcmp(board658326180, 
"3.....37\n"
"7.3345.1\n"
"..6.6..4\n"
"11.544.1\n"
"22..6674\n"
"753557.3\n"
"17.3.1.7\n"
"3.157653\n"
"2242124.\n"
"2541..56\n"
"5...4462\n") == 0);
free(board658326180);
board658326180 = NULL;
assert( gamma_move(board, 4, 8, 6) == 0 );
assert( gamma_move(board, 4, 1, 6) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 3, 1) == 0 );
assert( gamma_move(board, 5, 0, 7) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 10, 4) == 0 );
assert( gamma_move(board, 7, 3, 5) == 0 );
assert( gamma_move(board, 1, 0, 5) == 0 );
assert( gamma_busy_fields(board, 1) == 9 );
assert( gamma_move(board, 2, 3, 3) == 0 );
assert( gamma_move(board, 2, 5, 5) == 0 );
assert( gamma_move(board, 3, 0, 0) == 0 );
assert( gamma_move(board, 4, 6, 0) == 0 );
assert( gamma_move(board, 4, 7, 0) == 0 );
assert( gamma_golden_move(board, 4, 6, 4) == 0 );
assert( gamma_move(board, 5, 6, 10) == 0 );
assert( gamma_move(board, 5, 0, 6) == 0 );
assert( gamma_move(board, 6, 6, 2) == 0 );


char* board820793237 = gamma_board(board);
assert( board820793237 != NULL );
assert( strcmp(board820793237, 
"3.....37\n"
"7.3345.1\n"
"..6.6..4\n"
"11.544.1\n"
"22..6674\n"
"753557.3\n"
"17.3.1.7\n"
"3.157653\n"
"2242124.\n"
"2541..56\n"
"5...4462\n") == 0);
free(board820793237);
board820793237 = NULL;
assert( gamma_move(board, 7, 2, 7) == 1 );
assert( gamma_move(board, 7, 0, 9) == 0 );
assert( gamma_move(board, 1, 1, 3) == 1 );
assert( gamma_move(board, 1, 1, 0) == 1 );
assert( gamma_move(board, 2, 8, 6) == 0 );
assert( gamma_move(board, 2, 1, 3) == 0 );
assert( gamma_move(board, 3, 6, 3) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 6, 2) == 0 );
assert( gamma_move(board, 4, 2, 4) == 1 );
assert( gamma_move(board, 5, 2, 7) == 0 );
assert( gamma_move(board, 6, 1, 4) == 0 );
assert( gamma_move(board, 7, 1, 4) == 0 );
assert( gamma_busy_fields(board, 7) == 9 );
assert( gamma_move(board, 1, 0, 2) == 0 );
assert( gamma_busy_fields(board, 1) == 11 );
assert( gamma_move(board, 2, 7, 6) == 0 );
assert( gamma_busy_fields(board, 2) == 8 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 9, 6) == 0 );
assert( gamma_move(board, 3, 5, 0) == 0 );
assert( gamma_move(board, 4, 7, 5) == 0 );
assert( gamma_move(board, 5, 9, 6) == 0 );
assert( gamma_move(board, 5, 1, 6) == 0 );
assert( gamma_move(board, 6, 0, 2) == 0 );
assert( gamma_move(board, 6, 4, 2) == 0 );
assert( gamma_free_fields(board, 6) == 23 );
assert( gamma_move(board, 7, 7, 6) == 0 );
assert( gamma_move(board, 1, 4, 6) == 0 );
assert( gamma_move(board, 1, 3, 10) == 0 );
assert( gamma_move(board, 2, 0, 5) == 0 );
assert( gamma_move(board, 3, 6, 2) == 0 );
assert( gamma_move(board, 4, 8, 3) == 0 );
assert( gamma_move(board, 4, 3, 7) == 0 );
assert( gamma_move(board, 5, 1, 4) == 0 );
assert( gamma_move(board, 6, 10, 2) == 0 );


char* board646195290 = gamma_board(board);
assert( board646195290 != NULL );
assert( strcmp(board646195290, 
"3.....37\n"
"7.3345.1\n"
"..6.6..4\n"
"117544.1\n"
"22..6674\n"
"753557.3\n"
"1743.1.7\n"
"31157653\n"
"2242124.\n"
"2541..56\n"
"51..4462\n") == 0);
free(board646195290);
board646195290 = NULL;
assert( gamma_move(board, 7, 8, 6) == 0 );
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_move(board, 2, 8, 5) == 0 );
assert( gamma_move(board, 3, 10, 5) == 0 );
assert( gamma_move(board, 3, 0, 8) == 1 );
assert( gamma_move(board, 5, 10, 4) == 0 );
assert( gamma_move(board, 5, 0, 2) == 0 );
assert( gamma_move(board, 6, 10, 5) == 0 );
assert( gamma_move(board, 6, 5, 8) == 1 );
assert( gamma_move(board, 7, 4, 4) == 1 );
assert( gamma_busy_fields(board, 7) == 10 );
assert( gamma_move(board, 1, 8, 3) == 0 );
assert( gamma_move(board, 1, 5, 10) == 0 );
assert( gamma_free_fields(board, 1) == 7 );
assert( gamma_move(board, 2, 10, 2) == 0 );
assert( gamma_move(board, 3, 3, 1) == 0 );
assert( gamma_move(board, 3, 4, 7) == 0 );
assert( gamma_golden_move(board, 3, 4, 0) == 0 );
assert( gamma_move(board, 5, 1, 4) == 0 );
assert( gamma_move(board, 5, 1, 6) == 0 );
assert( gamma_move(board, 6, 10, 2) == 0 );
assert( gamma_move(board, 6, 6, 7) == 1 );
assert( gamma_free_fields(board, 6) == 19 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 1, 4) == 0 );
assert( gamma_move(board, 7, 5, 5) == 0 );
assert( gamma_move(board, 1, 2, 3) == 0 );
assert( gamma_move(board, 2, 5, 8) == 0 );
assert( gamma_move(board, 2, 6, 2) == 0 );
assert( gamma_move(board, 3, 8, 1) == 0 );
assert( gamma_move(board, 3, 1, 1) == 0 );
assert( gamma_move(board, 4, 10, 2) == 0 );
assert( gamma_move(board, 5, 10, 3) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 4, 9) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 8, 6) == 0 );
assert( gamma_move(board, 7, 3, 2) == 0 );
assert( gamma_move(board, 1, 6, 4) == 1 );
assert( gamma_move(board, 2, 10, 1) == 0 );
assert( gamma_move(board, 2, 4, 0) == 0 );
assert( gamma_move(board, 3, 8, 1) == 0 );
assert( gamma_golden_move(board, 3, 2, 5) == 0 );
assert( gamma_move(board, 4, 5, 6) == 0 );
assert( gamma_move(board, 5, 3, 9) == 0 );
assert( gamma_move(board, 6, 10, 4) == 0 );
assert( gamma_move(board, 7, 4, 3) == 0 );
assert( gamma_busy_fields(board, 7) == 10 );
assert( gamma_move(board, 1, 10, 5) == 0 );
assert( gamma_move(board, 1, 1, 8) == 1 );


gamma_delete(board);

    return 0;
}
