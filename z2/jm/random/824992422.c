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
uuid: 824992422
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(14, 7, 4, 14);
assert( board != NULL );


assert( gamma_move(board, 1, 2, 6) == 1 );
assert( gamma_move(board, 2, 4, 11) == 0 );
assert( gamma_move(board, 2, 3, 3) == 1 );
assert( gamma_free_fields(board, 2) == 96 );
assert( gamma_move(board, 3, 10, 0) == 1 );
assert( gamma_busy_fields(board, 3) == 1 );


char* board302382419 = gamma_board(board);
assert( board302382419 != NULL );
assert( strcmp(board302382419, 
"..1...........\n"
"..............\n"
"..............\n"
"...2..........\n"
"..............\n"
"..............\n"
"..........3...\n") == 0);
free(board302382419);
board302382419 = NULL;
assert( gamma_free_fields(board, 4) == 95 );
assert( gamma_free_fields(board, 1) == 95 );


char* board921920999 = gamma_board(board);
assert( board921920999 != NULL );
assert( strcmp(board921920999, 
"..1...........\n"
"..............\n"
"..............\n"
"...2..........\n"
"..............\n"
"..............\n"
"..........3...\n") == 0);
free(board921920999);
board921920999 = NULL;
assert( gamma_move(board, 2, 4, 1) == 1 );
assert( gamma_move(board, 3, 7, 6) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 5, 0) == 1 );
assert( gamma_move(board, 4, 3, 5) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );


char* board733133266 = gamma_board(board);
assert( board733133266 != NULL );
assert( strcmp(board733133266, 
"..1....3......\n"
"...4..........\n"
"..............\n"
"...2..........\n"
"..............\n"
"....2.........\n"
".....4....3...\n") == 0);
free(board733133266);
board733133266 = NULL;
assert( gamma_busy_fields(board, 1) == 1 );
assert( gamma_move(board, 2, 0, 9) == 0 );
assert( gamma_move(board, 3, 1, 6) == 1 );


char* board261732212 = gamma_board(board);
assert( board261732212 != NULL );
assert( strcmp(board261732212, 
".31....3......\n"
"...4..........\n"
"..............\n"
"...2..........\n"
"..............\n"
"....2.........\n"
".....4....3...\n") == 0);
free(board261732212);
board261732212 = NULL;
assert( gamma_move(board, 4, 0, 3) == 1 );
assert( gamma_move(board, 1, 1, 0) == 1 );
assert( gamma_move(board, 2, 4, 8) == 0 );
assert( gamma_move(board, 2, 3, 5) == 0 );
assert( gamma_move(board, 3, 0, 7) == 0 );
assert( gamma_move(board, 3, 10, 6) == 1 );
assert( gamma_move(board, 4, 2, 13) == 0 );
assert( gamma_move(board, 1, 11, 2) == 1 );
assert( gamma_move(board, 1, 0, 2) == 1 );
assert( gamma_free_fields(board, 1) == 85 );
assert( gamma_move(board, 2, 0, 1) == 1 );
assert( gamma_move(board, 2, 6, 2) == 1 );
assert( gamma_move(board, 3, 9, 3) == 1 );
assert( gamma_move(board, 4, 3, 8) == 0 );
assert( gamma_move(board, 4, 11, 2) == 0 );
assert( gamma_move(board, 1, 3, 10) == 0 );
assert( gamma_move(board, 1, 8, 1) == 1 );
assert( gamma_busy_fields(board, 1) == 5 );
assert( gamma_move(board, 2, 4, 7) == 0 );
assert( gamma_move(board, 2, 4, 2) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 3, 6) == 1 );
assert( gamma_move(board, 4, 1, 3) == 1 );
assert( gamma_move(board, 1, 5, 4) == 1 );


char* board484346393 = gamma_board(board);
assert( board484346393 != NULL );
assert( strcmp(board484346393, 
".313...3..3...\n"
"...4..........\n"
".....1........\n"
"44.2.....3....\n"
"1...2.2....1..\n"
"2...2...1.....\n"
".1...4....3...\n") == 0);
free(board484346393);
board484346393 = NULL;
assert( gamma_move(board, 2, 11, 3) == 1 );
assert( gamma_move(board, 3, 2, 5) == 1 );
assert( gamma_move(board, 1, 0, 4) == 1 );
assert( gamma_move(board, 1, 0, 1) == 0 );
assert( gamma_move(board, 3, 2, 5) == 0 );
assert( gamma_move(board, 4, 3, 6) == 0 );
assert( gamma_move(board, 1, 7, 6) == 0 );
assert( gamma_move(board, 1, 6, 1) == 1 );
assert( gamma_move(board, 2, 1, 12) == 0 );
assert( gamma_move(board, 2, 3, 6) == 0 );
assert( gamma_move(board, 3, 8, 2) == 1 );
assert( gamma_move(board, 3, 6, 1) == 0 );
assert( gamma_busy_fields(board, 3) == 8 );
assert( gamma_move(board, 4, 1, 0) == 0 );


char* board214586160 = gamma_board(board);
assert( board214586160 != NULL );
assert( strcmp(board214586160, 
".313...3..3...\n"
"..34..........\n"
"1....1........\n"
"44.2.....3.2..\n"
"1...2.2.3..1..\n"
"2...2.1.1.....\n"
".1...4....3...\n") == 0);
free(board214586160);
board214586160 = NULL;
assert( gamma_move(board, 1, 2, 4) == 1 );
assert( gamma_move(board, 1, 7, 2) == 1 );
assert( gamma_move(board, 2, 3, 7) == 0 );
assert( gamma_move(board, 2, 5, 4) == 0 );
assert( gamma_move(board, 3, 4, 7) == 0 );
assert( gamma_move(board, 3, 12, 4) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 0, 0) == 1 );
assert( gamma_move(board, 4, 10, 1) == 1 );


char* board917533588 = gamma_board(board);
assert( board917533588 != NULL );
assert( strcmp(board917533588, 
".313...3..3...\n"
"..34..........\n"
"1.1..1......3.\n"
"44.2.....3.2..\n"
"1...2.213..1..\n"
"2...2.1.1.4...\n"
"41...4....3...\n") == 0);
free(board917533588);
board917533588 = NULL;
assert( gamma_move(board, 2, 4, 7) == 0 );
assert( gamma_move(board, 3, 9, 1) == 1 );
assert( gamma_golden_move(board, 3, 4, 5) == 0 );
assert( gamma_move(board, 4, 6, 9) == 0 );
assert( gamma_move(board, 1, 2, 3) == 1 );
assert( gamma_move(board, 1, 2, 5) == 0 );
assert( gamma_move(board, 2, 3, 5) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 0, 4) == 0 );
assert( gamma_move(board, 1, 0, 11) == 0 );
assert( gamma_move(board, 1, 0, 1) == 0 );
assert( gamma_move(board, 2, 1, 1) == 1 );
assert( gamma_move(board, 3, 6, 11) == 0 );
assert( gamma_move(board, 3, 12, 5) == 1 );
assert( gamma_move(board, 4, 1, 5) == 1 );
assert( gamma_move(board, 4, 9, 0) == 1 );
assert( gamma_move(board, 1, 1, 6) == 0 );
assert( gamma_golden_move(board, 1, 5, 3) == 0 );
assert( gamma_move(board, 2, 4, 4) == 1 );
assert( gamma_move(board, 2, 8, 5) == 1 );
assert( gamma_move(board, 3, 1, 13) == 0 );
assert( gamma_move(board, 4, 5, 4) == 0 );
assert( gamma_golden_move(board, 4, 4, 2) == 1 );
assert( gamma_move(board, 1, 2, 0) == 1 );
assert( gamma_move(board, 1, 8, 0) == 1 );
assert( gamma_move(board, 2, 5, 10) == 0 );
assert( gamma_move(board, 3, 2, 4) == 0 );
assert( gamma_move(board, 3, 7, 2) == 0 );
assert( gamma_busy_fields(board, 3) == 11 );
assert( gamma_move(board, 4, 9, 2) == 1 );
assert( gamma_move(board, 4, 3, 4) == 1 );
assert( gamma_move(board, 1, 0, 12) == 0 );
assert( gamma_move(board, 2, 6, 11) == 0 );
assert( gamma_move(board, 2, 3, 4) == 0 );
assert( gamma_move(board, 3, 6, 0) == 1 );
assert( gamma_move(board, 4, 1, 2) == 1 );
assert( gamma_busy_fields(board, 4) == 12 );
assert( gamma_golden_move(board, 4, 2, 7) == 0 );
assert( gamma_move(board, 1, 1, 5) == 0 );
assert( gamma_move(board, 1, 12, 2) == 1 );
assert( gamma_move(board, 2, 5, 11) == 0 );
assert( gamma_move(board, 2, 1, 2) == 0 );
assert( gamma_move(board, 3, 2, 5) == 0 );
assert( gamma_move(board, 4, 3, 3) == 0 );
assert( gamma_busy_fields(board, 4) == 12 );
assert( gamma_move(board, 1, 4, 10) == 0 );
assert( gamma_move(board, 1, 13, 2) == 1 );
assert( gamma_move(board, 2, 5, 5) == 1 );
assert( gamma_move(board, 2, 7, 1) == 1 );
assert( gamma_move(board, 3, 7, 0) == 1 );
assert( gamma_move(board, 4, 9, 2) == 0 );
assert( gamma_move(board, 4, 13, 3) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_golden_move(board, 1, 2, 1) == 0 );
assert( gamma_move(board, 2, 2, 1) == 1 );
assert( gamma_move(board, 3, 6, 4) == 1 );
assert( gamma_move(board, 4, 6, 11) == 0 );
assert( gamma_move(board, 1, 5, 6) == 1 );
assert( gamma_move(board, 2, 3, 10) == 0 );
assert( gamma_move(board, 2, 6, 2) == 0 );
assert( gamma_move(board, 3, 5, 10) == 0 );
assert( gamma_move(board, 1, 2, 5) == 0 );
assert( gamma_move(board, 2, 3, 10) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 5, 3) == 1 );
assert( gamma_busy_fields(board, 3) == 15 );
assert( gamma_move(board, 4, 13, 6) == 1 );
assert( gamma_move(board, 4, 7, 4) == 1 );
assert( gamma_move(board, 1, 11, 0) == 1 );
assert( gamma_move(board, 2, 11, 1) == 1 );
assert( gamma_move(board, 3, 10, 5) == 1 );
assert( gamma_move(board, 4, 2, 4) == 0 );
assert( gamma_move(board, 4, 9, 6) == 1 );
assert( gamma_move(board, 1, 2, 5) == 0 );
assert( gamma_move(board, 2, 3, 4) == 0 );
assert( gamma_move(board, 2, 8, 3) == 1 );
assert( gamma_move(board, 3, 5, 7) == 0 );
assert( gamma_move(board, 3, 3, 2) == 1 );
assert( gamma_move(board, 4, 1, 13) == 0 );
assert( gamma_move(board, 4, 12, 4) == 0 );
assert( gamma_move(board, 1, 5, 6) == 0 );


char* board216216637 = gamma_board(board);
assert( board216216637 != NULL );
assert( strcmp(board216216637, 
".313.1.3.43..4\n"
".434.2..2.3.3.\n"
"1.142134....3.\n"
"4412.3..23.2.4\n"
"14.34.2134.111\n"
"222.2.121342..\n"
"411..4331431..\n") == 0);
free(board216216637);
board216216637 = NULL;
assert( gamma_move(board, 2, 2, 2) == 1 );
assert( gamma_move(board, 2, 0, 3) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 4, 2, 5) == 0 );
assert( gamma_move(board, 4, 12, 4) == 0 );
assert( gamma_move(board, 1, 3, 10) == 0 );
assert( gamma_move(board, 1, 7, 3) == 1 );
assert( gamma_move(board, 2, 4, 10) == 0 );
assert( gamma_busy_fields(board, 2) == 14 );
assert( gamma_move(board, 3, 5, 6) == 0 );
assert( gamma_busy_fields(board, 3) == 17 );


char* board600901131 = gamma_board(board);
assert( board600901131 != NULL );
assert( strcmp(board600901131, 
".313.1.3.43..4\n"
".434.2..2.3.3.\n"
"1.142134....3.\n"
"4412.3.123.2.4\n"
"14234.2134.111\n"
"222.2.121342..\n"
"411..4331431..\n") == 0);
free(board600901131);
board600901131 = NULL;
assert( gamma_move(board, 4, 8, 1) == 0 );
assert( gamma_move(board, 1, 11, 3) == 0 );
assert( gamma_move(board, 2, 5, 13) == 0 );
assert( gamma_move(board, 2, 2, 2) == 0 );
assert( gamma_move(board, 3, 8, 4) == 0 );
assert( gamma_free_fields(board, 4) == 33 );
assert( gamma_move(board, 1, 1, 3) == 0 );
assert( gamma_move(board, 1, 6, 2) == 0 );
assert( gamma_move(board, 2, 13, 6) == 0 );
assert( gamma_move(board, 3, 6, 3) == 1 );
assert( gamma_move(board, 1, 4, 13) == 0 );
assert( gamma_move(board, 1, 13, 0) == 1 );
assert( gamma_busy_fields(board, 1) == 19 );
assert( gamma_move(board, 2, 1, 13) == 0 );
assert( gamma_move(board, 3, 6, 8) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 6, 8) == 0 );
assert( gamma_move(board, 4, 8, 5) == 0 );
assert( gamma_move(board, 1, 2, 4) == 0 );
assert( gamma_move(board, 2, 5, 0) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 0, 4) == 0 );
assert( gamma_move(board, 4, 2, 4) == 0 );
assert( gamma_golden_move(board, 4, 3, 7) == 0 );
assert( gamma_move(board, 1, 5, 0) == 0 );
assert( gamma_move(board, 1, 4, 3) == 1 );
assert( gamma_move(board, 2, 4, 10) == 0 );
assert( gamma_move(board, 2, 6, 6) == 1 );
assert( gamma_busy_fields(board, 2) == 15 );
assert( gamma_move(board, 3, 6, 4) == 0 );
assert( gamma_move(board, 4, 1, 1) == 0 );
assert( gamma_move(board, 1, 11, 5) == 0 );
assert( gamma_move(board, 2, 5, 2) == 1 );
assert( gamma_free_fields(board, 2) == 28 );
assert( gamma_move(board, 3, 5, 7) == 0 );
assert( gamma_move(board, 1, 4, 6) == 1 );
assert( gamma_free_fields(board, 2) == 27 );
assert( gamma_move(board, 3, 3, 12) == 0 );
assert( gamma_move(board, 3, 2, 5) == 0 );
assert( gamma_busy_fields(board, 3) == 18 );
assert( gamma_move(board, 4, 9, 0) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 1, 5, 1) == 1 );
assert( gamma_move(board, 2, 5, 11) == 0 );
assert( gamma_move(board, 2, 4, 3) == 0 );
assert( gamma_move(board, 3, 4, 13) == 0 );
assert( gamma_busy_fields(board, 3) == 18 );
assert( gamma_move(board, 4, 0, 12) == 0 );
assert( gamma_move(board, 4, 6, 1) == 0 );
assert( gamma_busy_fields(board, 4) == 16 );
assert( gamma_move(board, 1, 12, 6) == 0 );
assert( gamma_move(board, 1, 8, 5) == 0 );
assert( gamma_move(board, 3, 5, 11) == 0 );
assert( gamma_golden_move(board, 3, 6, 4) == 0 );


char* board218874925 = gamma_board(board);
assert( board218874925 != NULL );
assert( strcmp(board218874925, 
".3131123.43..4\n"
".434.2..2.3.3.\n"
"1.142134....3.\n"
"4412133123.2.4\n"
"1423422134.111\n"
"222.21121342..\n"
"411..4331431.1\n") == 0);
free(board218874925);
board218874925 = NULL;
assert( gamma_move(board, 1, 4, 11) == 0 );
assert( gamma_move(board, 1, 12, 1) == 1 );
assert( gamma_move(board, 2, 5, 2) == 0 );
assert( gamma_move(board, 2, 7, 6) == 0 );
assert( gamma_move(board, 3, 0, 3) == 0 );
assert( gamma_move(board, 4, 6, 11) == 0 );
assert( gamma_move(board, 4, 7, 6) == 0 );
assert( gamma_move(board, 1, 4, 13) == 0 );
assert( gamma_move(board, 1, 8, 2) == 0 );
assert( gamma_move(board, 2, 0, 0) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 5, 4) == 0 );
assert( gamma_move(board, 3, 12, 1) == 0 );
assert( gamma_busy_fields(board, 3) == 18 );
assert( gamma_move(board, 4, 4, 13) == 0 );
assert( gamma_move(board, 4, 10, 2) == 1 );
assert( gamma_free_fields(board, 1) == 7 );
assert( gamma_move(board, 2, 0, 3) == 0 );


char* board259396870 = gamma_board(board);
assert( board259396870 != NULL );
assert( strcmp(board259396870, 
".3131123.43..4\n"
".434.2..2.3.3.\n"
"1.142134....3.\n"
"4412133123.2.4\n"
"14234221344111\n"
"222.211213421.\n"
"411..4331431.1\n") == 0);
free(board259396870);
board259396870 = NULL;
assert( gamma_move(board, 3, 3, 12) == 0 );
assert( gamma_move(board, 3, 2, 2) == 0 );
assert( gamma_move(board, 4, 0, 12) == 0 );
assert( gamma_move(board, 4, 11, 2) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 1, 6, 0) == 0 );
assert( gamma_move(board, 1, 1, 2) == 0 );
assert( gamma_move(board, 2, 4, 11) == 0 );
assert( gamma_move(board, 2, 7, 4) == 0 );
assert( gamma_golden_move(board, 2, 0, 1) == 0 );
assert( gamma_move(board, 3, 11, 1) == 0 );
assert( gamma_move(board, 4, 6, 8) == 0 );
assert( gamma_busy_fields(board, 4) == 17 );
assert( gamma_move(board, 1, 1, 6) == 0 );
assert( gamma_move(board, 2, 13, 1) == 1 );


char* board586776193 = gamma_board(board);
assert( board586776193 != NULL );
assert( strcmp(board586776193, 
".3131123.43..4\n"
".434.2..2.3.3.\n"
"1.142134....3.\n"
"4412133123.2.4\n"
"14234221344111\n"
"222.2112134212\n"
"411..4331431.1\n") == 0);
free(board586776193);
board586776193 = NULL;
assert( gamma_move(board, 3, 1, 3) == 0 );
assert( gamma_free_fields(board, 4) == 23 );
assert( gamma_move(board, 1, 10, 4) == 0 );
assert( gamma_move(board, 2, 5, 0) == 0 );
assert( gamma_busy_fields(board, 2) == 17 );
assert( gamma_move(board, 3, 0, 4) == 0 );
assert( gamma_move(board, 4, 5, 4) == 0 );
assert( gamma_move(board, 4, 7, 2) == 0 );
assert( gamma_free_fields(board, 4) == 23 );
assert( gamma_move(board, 1, 6, 1) == 0 );
assert( gamma_move(board, 1, 8, 4) == 0 );
assert( gamma_move(board, 2, 6, 8) == 0 );
assert( gamma_move(board, 2, 10, 2) == 0 );
assert( gamma_move(board, 3, 4, 9) == 0 );
assert( gamma_move(board, 3, 0, 2) == 0 );
assert( gamma_move(board, 4, 5, 0) == 0 );
assert( gamma_move(board, 4, 12, 0) == 1 );
assert( gamma_move(board, 1, 11, 1) == 0 );
assert( gamma_move(board, 2, 4, 13) == 0 );
assert( gamma_move(board, 2, 12, 2) == 0 );
assert( gamma_move(board, 3, 10, 2) == 0 );
assert( gamma_move(board, 4, 2, 2) == 0 );
assert( gamma_golden_move(board, 4, 3, 9) == 0 );
assert( gamma_golden_move(board, 1, 6, 6) == 1 );
assert( gamma_move(board, 3, 4, 13) == 0 );
assert( gamma_move(board, 4, 5, 6) == 0 );
assert( gamma_move(board, 4, 2, 4) == 0 );
assert( gamma_move(board, 1, 8, 3) == 0 );
assert( gamma_move(board, 1, 11, 5) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 5, 11) == 0 );
assert( gamma_move(board, 2, 7, 5) == 1 );
assert( gamma_free_fields(board, 2) == 21 );
assert( gamma_move(board, 3, 4, 13) == 0 );
assert( gamma_move(board, 3, 13, 3) == 0 );
assert( gamma_move(board, 1, 5, 6) == 0 );


char* board546592111 = gamma_board(board);
assert( board546592111 != NULL );
assert( strcmp(board546592111, 
".3131113.43..4\n"
".434.2.22.3.3.\n"
"1.142134....3.\n"
"4412133123.2.4\n"
"14234221344111\n"
"222.2112134212\n"
"411..433143141\n") == 0);
free(board546592111);
board546592111 = NULL;
assert( gamma_move(board, 2, 8, 1) == 0 );
assert( gamma_move(board, 2, 5, 2) == 0 );
assert( gamma_free_fields(board, 2) == 21 );
assert( gamma_move(board, 3, 3, 12) == 0 );
assert( gamma_move(board, 3, 11, 6) == 1 );
assert( gamma_move(board, 4, 0, 4) == 0 );
assert( gamma_move(board, 4, 8, 3) == 0 );
assert( gamma_move(board, 1, 1, 4) == 1 );
assert( gamma_move(board, 2, 5, 13) == 0 );
assert( gamma_move(board, 3, 5, 11) == 0 );
assert( gamma_move(board, 3, 7, 5) == 0 );
assert( gamma_move(board, 4, 5, 13) == 0 );
assert( gamma_move(board, 4, 5, 5) == 0 );
assert( gamma_move(board, 1, 5, 11) == 0 );
assert( gamma_move(board, 2, 3, 10) == 0 );
assert( gamma_move(board, 3, 3, 10) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 0, 3) == 0 );


char* board384592779 = gamma_board(board);
assert( board384592779 != NULL );
assert( strcmp(board384592779, 
".3131113.433.4\n"
".434.2.22.3.3.\n"
"11142134....3.\n"
"4412133123.2.4\n"
"14234221344111\n"
"222.2112134212\n"
"411..433143141\n") == 0);
free(board384592779);
board384592779 = NULL;
assert( gamma_move(board, 1, 2, 0) == 0 );
assert( gamma_move(board, 1, 6, 6) == 0 );
assert( gamma_move(board, 3, 5, 4) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 7, 5) == 0 );
assert( gamma_busy_fields(board, 4) == 18 );
assert( gamma_move(board, 1, 6, 2) == 0 );
assert( gamma_busy_fields(board, 1) == 25 );
assert( gamma_move(board, 2, 0, 1) == 0 );
assert( gamma_golden_move(board, 2, 6, 10) == 0 );
assert( gamma_move(board, 3, 4, 13) == 0 );
assert( gamma_move(board, 3, 2, 4) == 0 );
assert( gamma_move(board, 4, 4, 10) == 0 );


gamma_delete(board);

    return 0;
}
