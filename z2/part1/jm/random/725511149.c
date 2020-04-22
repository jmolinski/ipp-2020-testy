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
uuid: 725511149
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(13, 9, 4, 18);
assert( board != NULL );


assert( gamma_move(board, 1, 0, 12) == 0 );
assert( gamma_move(board, 1, 9, 8) == 1 );
assert( gamma_move(board, 2, 6, 2) == 1 );
assert( gamma_move(board, 3, 11, 8) == 1 );
assert( gamma_move(board, 4, 7, 4) == 1 );
assert( gamma_move(board, 1, 12, 1) == 1 );
assert( gamma_move(board, 3, 12, 7) == 1 );
assert( gamma_free_fields(board, 3) == 111 );
assert( gamma_move(board, 4, 3, 0) == 1 );
assert( gamma_move(board, 1, 9, 4) == 1 );
assert( gamma_move(board, 1, 9, 8) == 0 );
assert( gamma_move(board, 2, 7, 0) == 1 );
assert( gamma_move(board, 3, 2, 5) == 1 );
assert( gamma_busy_fields(board, 3) == 3 );
assert( gamma_move(board, 4, 3, 7) == 1 );
assert( gamma_busy_fields(board, 4) == 3 );
assert( gamma_move(board, 1, 4, 11) == 0 );
assert( gamma_move(board, 1, 10, 8) == 1 );
assert( gamma_busy_fields(board, 1) == 4 );
assert( gamma_move(board, 2, 3, 7) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 5, 2) == 1 );
assert( gamma_move(board, 3, 1, 5) == 1 );
assert( gamma_golden_move(board, 3, 2, 6) == 0 );
assert( gamma_move(board, 4, 0, 6) == 1 );
assert( gamma_move(board, 1, 2, 4) == 1 );
assert( gamma_move(board, 1, 6, 5) == 1 );
assert( gamma_move(board, 3, 1, 10) == 0 );
assert( gamma_move(board, 3, 7, 6) == 1 );
assert( gamma_free_fields(board, 3) == 99 );
assert( gamma_move(board, 4, 4, 6) == 1 );
assert( gamma_move(board, 1, 2, 3) == 1 );
assert( gamma_move(board, 2, 1, 8) == 1 );
assert( gamma_move(board, 2, 2, 7) == 1 );
assert( gamma_move(board, 3, 1, 0) == 1 );
assert( gamma_move(board, 3, 2, 4) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 0, 7) == 1 );
assert( gamma_free_fields(board, 4) == 93 );
assert( gamma_move(board, 1, 3, 2) == 1 );
assert( gamma_move(board, 2, 7, 11) == 0 );
assert( gamma_move(board, 3, 3, 12) == 0 );
assert( gamma_move(board, 4, 0, 2) == 1 );
assert( gamma_move(board, 4, 11, 2) == 1 );
assert( gamma_busy_fields(board, 4) == 8 );
assert( gamma_move(board, 1, 0, 8) == 1 );
assert( gamma_move(board, 2, 1, 7) == 1 );
assert( gamma_golden_move(board, 2, 8, 11) == 0 );
assert( gamma_move(board, 3, 1, 1) == 1 );
assert( gamma_move(board, 4, 10, 5) == 1 );
assert( gamma_move(board, 4, 8, 0) == 1 );
assert( gamma_move(board, 1, 0, 12) == 0 );
assert( gamma_move(board, 2, 7, 7) == 1 );
assert( gamma_move(board, 2, 10, 0) == 1 );


char* board190113917 = gamma_board(board);
assert( board190113917 != NULL );
assert( strcmp(board190113917, 
"12.......113.\n"
"4224...2....3\n"
"4...4..3.....\n"
".33...1...4..\n"
"..1....4.1...\n"
"..1..........\n"
"4..1.32....4.\n"
".3..........1\n"
".3.4...24.2..\n") == 0);
free(board190113917);
board190113917 = NULL;
assert( gamma_move(board, 3, 5, 4) == 1 );
assert( gamma_move(board, 3, 8, 6) == 1 );


char* board823820885 = gamma_board(board);
assert( board823820885 != NULL );
assert( strcmp(board823820885, 
"12.......113.\n"
"4224...2....3\n"
"4...4..33....\n"
".33...1...4..\n"
"..1..3.4.1...\n"
"..1..........\n"
"4..1.32....4.\n"
".3..........1\n"
".3.4...24.2..\n") == 0);
free(board823820885);
board823820885 = NULL;
assert( gamma_move(board, 4, 6, 0) == 1 );
assert( gamma_move(board, 4, 1, 5) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 1, 0) == 0 );
assert( gamma_move(board, 1, 1, 6) == 1 );
assert( gamma_busy_fields(board, 1) == 10 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 8, 0) == 0 );
assert( gamma_move(board, 3, 2, 1) == 1 );
assert( gamma_move(board, 3, 0, 4) == 1 );


char* board481143564 = gamma_board(board);
assert( board481143564 != NULL );
assert( strcmp(board481143564, 
"12.......113.\n"
"4224...2....3\n"
"41..4..33....\n"
".33...1...4..\n"
"3.1..3.4.1...\n"
"..1..........\n"
"4..1.32....4.\n"
".33.........1\n"
".3.4..424.2..\n") == 0);
free(board481143564);
board481143564 = NULL;
assert( gamma_move(board, 4, 7, 10) == 0 );
assert( gamma_golden_move(board, 4, 7, 3) == 0 );
assert( gamma_move(board, 1, 2, 4) == 0 );
assert( gamma_move(board, 2, 4, 3) == 1 );
assert( gamma_move(board, 3, 4, 8) == 1 );
assert( gamma_free_fields(board, 3) == 75 );
assert( gamma_move(board, 4, 12, 3) == 1 );
assert( gamma_free_fields(board, 4) == 74 );
assert( gamma_move(board, 1, 0, 9) == 0 );
assert( gamma_move(board, 1, 7, 7) == 0 );
assert( gamma_free_fields(board, 1) == 74 );
assert( gamma_move(board, 2, 0, 2) == 0 );
assert( gamma_move(board, 2, 9, 2) == 1 );
assert( gamma_move(board, 3, 2, 10) == 0 );
assert( gamma_move(board, 4, 4, 2) == 1 );
assert( gamma_move(board, 1, 4, 11) == 0 );
assert( gamma_move(board, 1, 8, 0) == 0 );
assert( gamma_move(board, 2, 8, 6) == 0 );
assert( gamma_move(board, 3, 0, 0) == 1 );


char* board766761098 = gamma_board(board);
assert( board766761098 != NULL );
assert( strcmp(board766761098, 
"12..3....113.\n"
"4224...2....3\n"
"41..4..33....\n"
".33...1...4..\n"
"3.1..3.4.1...\n"
"..1.2.......4\n"
"4..1432..2.4.\n"
".33.........1\n"
"33.4..424.2..\n") == 0);
free(board766761098);
board766761098 = NULL;
assert( gamma_move(board, 4, 5, 7) == 1 );
assert( gamma_move(board, 1, 1, 11) == 0 );
assert( gamma_free_fields(board, 1) == 70 );
assert( gamma_move(board, 3, 2, 12) == 0 );
assert( gamma_move(board, 3, 2, 7) == 0 );
assert( gamma_move(board, 4, 8, 6) == 0 );
assert( gamma_move(board, 1, 5, 8) == 1 );
assert( gamma_move(board, 2, 8, 7) == 1 );
assert( gamma_move(board, 2, 3, 3) == 1 );
assert( gamma_move(board, 4, 3, 8) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_golden_move(board, 4, 5, 1) == 0 );
assert( gamma_move(board, 1, 5, 4) == 0 );
assert( gamma_busy_fields(board, 1) == 11 );
assert( gamma_move(board, 2, 3, 11) == 0 );
assert( gamma_move(board, 3, 8, 2) == 1 );
assert( gamma_move(board, 3, 3, 2) == 0 );
assert( gamma_busy_fields(board, 3) == 15 );
assert( gamma_move(board, 4, 4, 10) == 0 );
assert( gamma_move(board, 4, 4, 0) == 1 );
assert( gamma_move(board, 2, 5, 11) == 0 );
assert( gamma_move(board, 3, 5, 11) == 0 );
assert( gamma_move(board, 3, 2, 1) == 0 );
assert( gamma_move(board, 4, 5, 12) == 0 );
assert( gamma_golden_move(board, 4, 4, 2) == 0 );
assert( gamma_move(board, 1, 0, 2) == 0 );
assert( gamma_move(board, 1, 10, 4) == 1 );
assert( gamma_move(board, 2, 10, 4) == 0 );
assert( gamma_free_fields(board, 2) == 63 );
assert( gamma_move(board, 3, 8, 12) == 0 );
assert( gamma_move(board, 3, 6, 8) == 1 );
assert( gamma_move(board, 4, 1, 0) == 0 );
assert( gamma_free_fields(board, 4) == 62 );
assert( gamma_move(board, 1, 0, 11) == 0 );
assert( gamma_move(board, 2, 1, 11) == 0 );
assert( gamma_move(board, 3, 4, 1) == 1 );
assert( gamma_move(board, 3, 12, 0) == 1 );
assert( gamma_move(board, 4, 3, 10) == 0 );


char* board264096638 = gamma_board(board);
assert( board264096638 != NULL );
assert( strcmp(board264096638, 
"12.4313..113.\n"
"4224.4.22...3\n"
"41..4..33....\n"
".33...1...4..\n"
"3.1..3.4.11..\n"
"..122.......4\n"
"4..1432.32.4.\n"
".33.3.......1\n"
"33.44.424.2.3\n") == 0);
free(board264096638);
board264096638 = NULL;
assert( gamma_move(board, 1, 3, 10) == 0 );
assert( gamma_move(board, 2, 4, 6) == 0 );
assert( gamma_move(board, 2, 1, 4) == 1 );


char* board394317872 = gamma_board(board);
assert( board394317872 != NULL );
assert( strcmp(board394317872, 
"12.4313..113.\n"
"4224.4.22...3\n"
"41..4..33....\n"
".33...1...4..\n"
"321..3.4.11..\n"
"..122.......4\n"
"4..1432.32.4.\n"
".33.3.......1\n"
"33.44.424.2.3\n") == 0);
free(board394317872);
board394317872 = NULL;
assert( gamma_move(board, 3, 5, 3) == 1 );
assert( gamma_move(board, 3, 7, 2) == 1 );
assert( gamma_move(board, 4, 5, 12) == 0 );
assert( gamma_move(board, 4, 7, 3) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 1, 11) == 0 );
assert( gamma_move(board, 1, 8, 3) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );


char* board985388973 = gamma_board(board);
assert( board985388973 != NULL );
assert( strcmp(board985388973, 
"12.4313..113.\n"
"4224.4.22...3\n"
"41..4..33....\n"
".33...1...4..\n"
"321..3.4.11..\n"
"..1223.41...4\n"
"4..1432332.4.\n"
".33.3.......1\n"
"33.44.424.2.3\n") == 0);
free(board985388973);
board985388973 = NULL;
assert( gamma_move(board, 2, 8, 7) == 0 );
assert( gamma_move(board, 2, 8, 1) == 1 );
assert( gamma_move(board, 3, 5, 2) == 0 );
assert( gamma_move(board, 4, 6, 3) == 1 );
assert( gamma_move(board, 4, 10, 0) == 0 );
assert( gamma_move(board, 1, 5, 3) == 0 );
assert( gamma_busy_fields(board, 2) == 13 );
assert( gamma_free_fields(board, 2) == 53 );
assert( gamma_move(board, 3, 12, 7) == 0 );
assert( gamma_move(board, 3, 1, 6) == 0 );
assert( gamma_move(board, 4, 5, 7) == 0 );
assert( gamma_move(board, 4, 2, 3) == 0 );
assert( gamma_free_fields(board, 4) == 53 );
assert( gamma_move(board, 1, 6, 12) == 0 );
assert( gamma_move(board, 2, 10, 8) == 0 );


char* board770975649 = gamma_board(board);
assert( board770975649 != NULL );
assert( strcmp(board770975649, 
"12.4313..113.\n"
"4224.4.22...3\n"
"41..4..33....\n"
".33...1...4..\n"
"321..3.4.11..\n"
"..1223441...4\n"
"4..1432332.4.\n"
".33.3...2...1\n"
"33.44.424.2.3\n") == 0);
free(board770975649);
board770975649 = NULL;
assert( gamma_move(board, 3, 9, 2) == 0 );
assert( gamma_move(board, 4, 3, 9) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 6, 5) == 0 );
assert( gamma_move(board, 2, 3, 1) == 1 );
assert( gamma_free_fields(board, 2) == 52 );
assert( gamma_move(board, 3, 5, 5) == 1 );
assert( gamma_move(board, 3, 12, 8) == 1 );
assert( gamma_free_fields(board, 3) == 50 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 0, 1) == 1 );
assert( gamma_move(board, 4, 9, 1) == 1 );
assert( gamma_move(board, 1, 5, 8) == 0 );
assert( gamma_move(board, 2, 12, 8) == 0 );
assert( gamma_move(board, 3, 4, 12) == 0 );
assert( gamma_move(board, 1, 1, 10) == 0 );
assert( gamma_move(board, 2, 5, 3) == 0 );
assert( gamma_move(board, 2, 3, 1) == 0 );
assert( gamma_move(board, 3, 5, 7) == 0 );
assert( gamma_move(board, 4, 10, 4) == 0 );


char* board763172097 = gamma_board(board);
assert( board763172097 != NULL );
assert( strcmp(board763172097, 
"12.4313..1133\n"
"4224.4.22...3\n"
"41..4..33....\n"
".33..31...4..\n"
"321..3.4.11..\n"
"..1223441...4\n"
"4..1432332.4.\n"
"43323...24..1\n"
"33.44.424.2.3\n") == 0);
free(board763172097);
board763172097 = NULL;
assert( gamma_move(board, 1, 1, 5) == 0 );
assert( gamma_move(board, 1, 0, 8) == 0 );
assert( gamma_move(board, 2, 3, 8) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 6, 3) == 0 );
assert( gamma_move(board, 3, 10, 1) == 1 );
assert( gamma_move(board, 4, 5, 3) == 0 );
assert( gamma_move(board, 4, 5, 2) == 0 );
assert( gamma_move(board, 1, 6, 2) == 0 );
assert( gamma_golden_move(board, 1, 0, 12) == 0 );
assert( gamma_move(board, 2, 5, 7) == 0 );
assert( gamma_move(board, 2, 11, 2) == 0 );
assert( gamma_move(board, 3, 7, 5) == 1 );
assert( gamma_move(board, 4, 5, 2) == 0 );
assert( gamma_move(board, 4, 2, 0) == 1 );
assert( gamma_move(board, 1, 4, 12) == 0 );
assert( gamma_move(board, 1, 4, 1) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 3, 0) == 0 );
assert( gamma_move(board, 2, 9, 8) == 0 );
assert( gamma_move(board, 3, 7, 10) == 0 );
assert( gamma_move(board, 4, 7, 6) == 0 );
assert( gamma_move(board, 1, 8, 8) == 1 );
assert( gamma_move(board, 2, 5, 4) == 0 );
assert( gamma_move(board, 3, 4, 6) == 0 );
assert( gamma_move(board, 3, 9, 4) == 0 );
assert( gamma_busy_fields(board, 3) == 24 );
assert( gamma_move(board, 4, 2, 1) == 0 );
assert( gamma_move(board, 1, 2, 8) == 1 );
assert( gamma_busy_fields(board, 1) == 15 );
assert( gamma_move(board, 2, 2, 5) == 0 );
assert( gamma_free_fields(board, 2) == 43 );
assert( gamma_move(board, 3, 1, 11) == 0 );
assert( gamma_move(board, 4, 10, 5) == 0 );
assert( gamma_free_fields(board, 4) == 43 );
assert( gamma_move(board, 1, 7, 10) == 0 );
assert( gamma_move(board, 1, 1, 3) == 1 );
assert( gamma_move(board, 2, 2, 1) == 0 );
assert( gamma_move(board, 2, 11, 7) == 1 );
assert( gamma_move(board, 3, 2, 2) == 1 );
assert( gamma_move(board, 4, 12, 8) == 0 );
assert( gamma_move(board, 1, 5, 3) == 0 );
assert( gamma_move(board, 1, 5, 7) == 0 );
assert( gamma_free_fields(board, 1) == 40 );
assert( gamma_move(board, 2, 1, 11) == 0 );
assert( gamma_move(board, 3, 2, 10) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );


char* board615460934 = gamma_board(board);
assert( board615460934 != NULL );
assert( strcmp(board615460934, 
"1214313.11133\n"
"4224.4.22..23\n"
"41..4..33....\n"
".33..313..4..\n"
"321..3.4.11..\n"
".11223441...4\n"
"4.31432332.4.\n"
"43323...243.1\n"
"33444.424.2.3\n") == 0);
free(board615460934);
board615460934 = NULL;
assert( gamma_move(board, 4, 1, 2) == 1 );
assert( gamma_move(board, 4, 11, 5) == 1 );
assert( gamma_move(board, 1, 12, 0) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 5, 8) == 0 );
assert( gamma_free_fields(board, 2) == 38 );
assert( gamma_move(board, 3, 5, 7) == 0 );
assert( gamma_move(board, 4, 12, 7) == 0 );
assert( gamma_move(board, 4, 7, 7) == 0 );
assert( gamma_move(board, 1, 0, 9) == 0 );
assert( gamma_move(board, 1, 3, 6) == 1 );
assert( gamma_move(board, 2, 8, 7) == 0 );
assert( gamma_move(board, 4, 1, 5) == 0 );
assert( gamma_move(board, 4, 8, 7) == 0 );
assert( gamma_busy_fields(board, 4) == 23 );
assert( gamma_golden_move(board, 4, 4, 0) == 0 );
assert( gamma_move(board, 1, 1, 5) == 0 );
assert( gamma_move(board, 1, 8, 6) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 6, 7) == 1 );
assert( gamma_move(board, 2, 8, 4) == 1 );
assert( gamma_free_fields(board, 2) == 35 );


char* board128408595 = gamma_board(board);
assert( board128408595 != NULL );
assert( strcmp(board128408595, 
"1214313.11133\n"
"4224.4222..23\n"
"41.14..33....\n"
".33..313..44.\n"
"321..3.4211..\n"
".11223441...4\n"
"4431432332.4.\n"
"43323...243.1\n"
"33444.424.2.3\n") == 0);
free(board128408595);
board128408595 = NULL;
assert( gamma_move(board, 3, 5, 12) == 0 );
assert( gamma_move(board, 3, 9, 1) == 0 );
assert( gamma_busy_fields(board, 3) == 25 );
assert( gamma_move(board, 4, 2, 10) == 0 );
assert( gamma_move(board, 1, 6, 6) == 1 );
assert( gamma_move(board, 1, 11, 1) == 1 );
assert( gamma_move(board, 2, 11, 6) == 1 );
assert( gamma_move(board, 2, 6, 8) == 0 );
assert( gamma_free_fields(board, 2) == 32 );


char* board466161909 = gamma_board(board);
assert( board466161909 != NULL );
assert( strcmp(board466161909, 
"1214313.11133\n"
"4224.4222..23\n"
"41.14.133..2.\n"
".33..313..44.\n"
"321..3.4211..\n"
".11223441...4\n"
"4431432332.4.\n"
"43323...24311\n"
"33444.424.2.3\n") == 0);
free(board466161909);
board466161909 = NULL;
assert( gamma_move(board, 3, 5, 3) == 0 );
assert( gamma_move(board, 4, 0, 2) == 0 );
assert( gamma_move(board, 4, 11, 5) == 0 );
assert( gamma_move(board, 1, 5, 1) == 1 );
assert( gamma_move(board, 1, 5, 6) == 1 );
assert( gamma_busy_fields(board, 1) == 21 );
assert( gamma_move(board, 2, 0, 5) == 1 );
assert( gamma_move(board, 2, 8, 0) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 1, 3) == 0 );
assert( gamma_move(board, 3, 2, 6) == 1 );
assert( gamma_move(board, 4, 4, 3) == 0 );
assert( gamma_move(board, 4, 7, 8) == 1 );
assert( gamma_move(board, 1, 3, 4) == 1 );
assert( gamma_move(board, 2, 4, 11) == 0 );
assert( gamma_move(board, 2, 7, 0) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 5, 12) == 0 );
assert( gamma_move(board, 3, 9, 0) == 1 );
assert( gamma_move(board, 4, 9, 6) == 1 );
assert( gamma_move(board, 1, 1, 6) == 0 );
assert( gamma_move(board, 1, 2, 3) == 0 );
assert( gamma_busy_fields(board, 1) == 22 );
assert( gamma_move(board, 3, 9, 5) == 1 );
assert( gamma_move(board, 3, 12, 2) == 1 );
assert( gamma_move(board, 4, 11, 2) == 0 );
assert( gamma_move(board, 4, 10, 8) == 0 );
assert( gamma_move(board, 1, 7, 10) == 0 );
assert( gamma_move(board, 1, 3, 0) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 10, 7) == 1 );
assert( gamma_move(board, 2, 9, 3) == 1 );
assert( gamma_busy_fields(board, 2) == 21 );
assert( gamma_free_fields(board, 2) == 20 );
assert( gamma_move(board, 3, 9, 2) == 0 );
assert( gamma_move(board, 3, 5, 5) == 0 );
assert( gamma_move(board, 4, 1, 5) == 0 );
assert( gamma_move(board, 1, 4, 12) == 0 );
assert( gamma_move(board, 1, 4, 0) == 0 );
assert( gamma_move(board, 2, 7, 9) == 0 );
assert( gamma_move(board, 2, 7, 4) == 0 );
assert( gamma_move(board, 3, 6, 10) == 0 );
assert( gamma_move(board, 3, 0, 1) == 0 );
assert( gamma_move(board, 4, 6, 12) == 0 );
assert( gamma_move(board, 4, 5, 8) == 0 );
assert( gamma_move(board, 1, 4, 11) == 0 );
assert( gamma_move(board, 2, 4, 4) == 1 );
assert( gamma_move(board, 3, 8, 2) == 0 );
assert( gamma_move(board, 3, 9, 0) == 0 );
assert( gamma_move(board, 4, 6, 12) == 0 );
assert( gamma_move(board, 4, 9, 5) == 0 );
assert( gamma_move(board, 2, 0, 11) == 0 );
assert( gamma_move(board, 2, 5, 7) == 0 );
assert( gamma_move(board, 3, 12, 0) == 0 );
assert( gamma_move(board, 4, 9, 2) == 0 );
assert( gamma_move(board, 4, 5, 1) == 0 );
assert( gamma_golden_move(board, 4, 2, 3) == 1 );
assert( gamma_move(board, 2, 0, 11) == 0 );
assert( gamma_move(board, 3, 1, 7) == 0 );
assert( gamma_move(board, 3, 3, 5) == 1 );
assert( gamma_free_fields(board, 3) == 18 );
assert( gamma_move(board, 4, 2, 10) == 0 );
assert( gamma_move(board, 4, 2, 8) == 0 );
assert( gamma_free_fields(board, 1) == 18 );
assert( gamma_move(board, 2, 5, 12) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 5, 6) == 0 );
assert( gamma_move(board, 3, 10, 5) == 0 );
assert( gamma_move(board, 4, 5, 8) == 0 );
assert( gamma_move(board, 1, 2, 6) == 0 );
assert( gamma_move(board, 2, 3, 10) == 0 );
assert( gamma_move(board, 2, 2, 8) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 6, 10) == 0 );


char* board622905546 = gamma_board(board);
assert( board622905546 != NULL );
assert( strcmp(board622905546, 
"1214313411133\n"
"4224.4222.223\n"
"4131411334.2.\n"
"2333.313.344.\n"
"321123.4211..\n"
".142234412..4\n"
"4431432332.43\n"
"433231..24311\n"
"33444.42432.3\n") == 0);
free(board622905546);
board622905546 = NULL;
assert( gamma_move(board, 4, 3, 0) == 0 );
assert( gamma_move(board, 1, 4, 11) == 0 );
assert( gamma_move(board, 2, 1, 5) == 0 );
assert( gamma_move(board, 2, 8, 0) == 0 );
assert( gamma_move(board, 4, 5, 4) == 0 );
assert( gamma_move(board, 4, 8, 2) == 0 );
assert( gamma_move(board, 1, 1, 6) == 0 );
assert( gamma_move(board, 2, 5, 4) == 0 );
assert( gamma_move(board, 3, 0, 5) == 0 );
assert( gamma_move(board, 4, 4, 6) == 0 );
assert( gamma_move(board, 1, 12, 0) == 0 );
assert( gamma_move(board, 2, 4, 6) == 0 );
assert( gamma_move(board, 2, 8, 7) == 0 );
assert( gamma_move(board, 3, 6, 12) == 0 );
assert( gamma_move(board, 3, 4, 5) == 1 );
assert( gamma_move(board, 4, 7, 9) == 0 );
assert( gamma_move(board, 4, 2, 7) == 0 );
assert( gamma_golden_move(board, 4, 6, 1) == 0 );
assert( gamma_move(board, 2, 9, 2) == 0 );
assert( gamma_move(board, 3, 7, 2) == 0 );
assert( gamma_move(board, 3, 2, 1) == 0 );
assert( gamma_move(board, 4, 7, 9) == 0 );
assert( gamma_move(board, 4, 0, 6) == 0 );
assert( gamma_move(board, 1, 7, 4) == 0 );
assert( gamma_move(board, 1, 12, 6) == 1 );
assert( gamma_move(board, 2, 4, 6) == 0 );
assert( gamma_move(board, 2, 8, 6) == 0 );


char* board780591195 = gamma_board(board);
assert( board780591195 != NULL );
assert( strcmp(board780591195, 
"1214313411133\n"
"4224.4222.223\n"
"4131411334.21\n"
"23333313.344.\n"
"321123.4211..\n"
".142234412..4\n"
"4431432332.43\n"
"433231..24311\n"
"33444.42432.3\n") == 0);
free(board780591195);
board780591195 = NULL;
assert( gamma_move(board, 3, 11, 6) == 0 );
assert( gamma_move(board, 3, 11, 1) == 0 );
assert( gamma_busy_fields(board, 3) == 31 );


char* board346217393 = gamma_board(board);
assert( board346217393 != NULL );
assert( strcmp(board346217393, 
"1214313411133\n"
"4224.4222.223\n"
"4131411334.21\n"
"23333313.344.\n"
"321123.4211..\n"
".142234412..4\n"
"4431432332.43\n"
"433231..24311\n"
"33444.42432.3\n") == 0);
free(board346217393);
board346217393 = NULL;
assert( gamma_move(board, 1, 3, 10) == 0 );
assert( gamma_move(board, 2, 4, 5) == 0 );
assert( gamma_busy_fields(board, 2) == 22 );
assert( gamma_move(board, 3, 7, 9) == 0 );
assert( gamma_move(board, 3, 6, 6) == 0 );
assert( gamma_move(board, 4, 3, 10) == 0 );
assert( gamma_move(board, 4, 5, 4) == 0 );
assert( gamma_move(board, 1, 3, 0) == 0 );
assert( gamma_move(board, 1, 10, 6) == 1 );
assert( gamma_free_fields(board, 1) == 15 );
assert( gamma_move(board, 2, 7, 9) == 0 );
assert( gamma_move(board, 2, 12, 0) == 0 );
assert( gamma_move(board, 3, 11, 5) == 0 );
assert( gamma_move(board, 3, 3, 2) == 0 );
assert( gamma_free_fields(board, 3) == 15 );
assert( gamma_move(board, 1, 7, 0) == 0 );
assert( gamma_move(board, 1, 12, 7) == 0 );
assert( gamma_move(board, 2, 1, 6) == 0 );
assert( gamma_move(board, 2, 5, 0) == 1 );
assert( gamma_move(board, 3, 3, 3) == 0 );
assert( gamma_move(board, 3, 7, 5) == 0 );
assert( gamma_move(board, 4, 5, 3) == 0 );
assert( gamma_move(board, 4, 2, 6) == 0 );
assert( gamma_move(board, 1, 1, 6) == 0 );
assert( gamma_move(board, 1, 4, 1) == 0 );
assert( gamma_move(board, 2, 4, 6) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 7, 9) == 0 );
assert( gamma_move(board, 4, 1, 3) == 0 );
assert( gamma_free_fields(board, 1) == 14 );
assert( gamma_move(board, 2, 5, 8) == 0 );
assert( gamma_move(board, 3, 9, 3) == 0 );
assert( gamma_move(board, 3, 3, 0) == 0 );
assert( gamma_move(board, 4, 2, 1) == 0 );
assert( gamma_move(board, 4, 2, 4) == 0 );
assert( gamma_busy_fields(board, 4) == 26 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 1, 4, 11) == 0 );
assert( gamma_busy_fields(board, 1) == 23 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 2, 10) == 0 );
assert( gamma_move(board, 2, 9, 4) == 0 );
assert( gamma_free_fields(board, 2) == 14 );
assert( gamma_move(board, 3, 5, 8) == 0 );
assert( gamma_move(board, 3, 0, 8) == 0 );


char* board199635665 = gamma_board(board);
assert( board199635665 != NULL );
assert( strcmp(board199635665, 
"1214313411133\n"
"4224.4222.223\n"
"4131411334121\n"
"23333313.344.\n"
"321123.4211..\n"
".142234412..4\n"
"4431432332.43\n"
"433231..24311\n"
"33444242432.3\n") == 0);
free(board199635665);
board199635665 = NULL;
assert( gamma_move(board, 1, 2, 7) == 0 );
assert( gamma_move(board, 1, 10, 7) == 0 );
assert( gamma_move(board, 2, 0, 7) == 0 );


gamma_delete(board);

    return 0;
}
