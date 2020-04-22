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
uuid: 988529068
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(9, 9, 6, 19);
assert( board != NULL );


assert( gamma_move(board, 1, 7, 8) == 1 );
assert( gamma_move(board, 1, 4, 6) == 1 );
assert( gamma_busy_fields(board, 1) == 2 );
assert( gamma_move(board, 2, 6, 2) == 1 );
assert( gamma_move(board, 2, 8, 0) == 1 );
assert( gamma_move(board, 3, 2, 0) == 1 );
assert( gamma_move(board, 3, 0, 4) == 1 );
assert( gamma_busy_fields(board, 3) == 2 );
assert( gamma_move(board, 4, 5, 6) == 1 );
assert( gamma_move(board, 5, 5, 6) == 0 );


char* board326690330 = gamma_board(board);
assert( board326690330 != NULL );
assert( strcmp(board326690330, 
".......1.\n"
".........\n"
"....14...\n"
".........\n"
"3........\n"
".........\n"
"......2..\n"
".........\n"
"..3.....2\n") == 0);
free(board326690330);
board326690330 = NULL;
assert( gamma_move(board, 6, 1, 5) == 1 );
assert( gamma_move(board, 6, 6, 6) == 1 );
assert( gamma_move(board, 1, 1, 5) == 0 );
assert( gamma_move(board, 2, 4, 7) == 1 );
assert( gamma_move(board, 2, 1, 1) == 1 );
assert( gamma_move(board, 3, 7, 6) == 1 );
assert( gamma_move(board, 4, 4, 7) == 0 );
assert( gamma_move(board, 4, 5, 7) == 1 );
assert( gamma_move(board, 5, 7, 8) == 0 );
assert( gamma_busy_fields(board, 5) == 0 );
assert( gamma_move(board, 6, 4, 2) == 1 );
assert( gamma_move(board, 1, 6, 8) == 1 );
assert( gamma_move(board, 2, 4, 6) == 0 );
assert( gamma_move(board, 3, 7, 4) == 1 );
assert( gamma_move(board, 3, 0, 0) == 1 );
assert( gamma_move(board, 4, 2, 5) == 1 );
assert( gamma_move(board, 4, 0, 3) == 1 );
assert( gamma_move(board, 5, 1, 2) == 1 );
assert( gamma_move(board, 5, 1, 4) == 1 );
assert( gamma_free_fields(board, 5) == 60 );
assert( gamma_move(board, 6, 8, 8) == 1 );
assert( gamma_move(board, 1, 4, 3) == 1 );
assert( gamma_move(board, 1, 1, 2) == 0 );
assert( gamma_busy_fields(board, 1) == 4 );
assert( gamma_golden_move(board, 1, 3, 0) == 0 );
assert( gamma_move(board, 2, 6, 1) == 1 );


char* board710420381 = gamma_board(board);
assert( board710420381 != NULL );
assert( strcmp(board710420381, 
"......116\n"
"....24...\n"
"....1463.\n"
".64......\n"
"35.....3.\n"
"4...1....\n"
".5..6.2..\n"
".2....2..\n"
"3.3.....2\n") == 0);
free(board710420381);
board710420381 = NULL;
assert( gamma_move(board, 3, 1, 3) == 1 );
assert( gamma_move(board, 4, 2, 6) == 1 );
assert( gamma_move(board, 4, 8, 6) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 1, 1) == 0 );
assert( gamma_move(board, 6, 8, 1) == 1 );
assert( gamma_move(board, 1, 7, 4) == 0 );
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_move(board, 2, 8, 2) == 1 );
assert( gamma_move(board, 2, 7, 5) == 1 );
assert( gamma_move(board, 3, 0, 7) == 1 );
assert( gamma_move(board, 3, 5, 8) == 1 );
assert( gamma_move(board, 4, 2, 4) == 1 );
assert( gamma_move(board, 4, 3, 0) == 1 );
assert( gamma_move(board, 5, 8, 2) == 0 );
assert( gamma_golden_move(board, 5, 3, 4) == 0 );
assert( gamma_move(board, 6, 0, 6) == 1 );
assert( gamma_move(board, 6, 2, 8) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 2, 0, 8) == 1 );
assert( gamma_move(board, 2, 6, 2) == 0 );
assert( gamma_busy_fields(board, 2) == 8 );
assert( gamma_free_fields(board, 2) == 44 );
assert( gamma_golden_move(board, 2, 6, 5) == 0 );
assert( gamma_move(board, 3, 1, 3) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 1, 7) == 1 );
assert( gamma_move(board, 4, 8, 1) == 0 );
assert( gamma_busy_fields(board, 4) == 9 );
assert( gamma_move(board, 5, 3, 2) == 1 );
assert( gamma_move(board, 6, 0, 4) == 0 );
assert( gamma_move(board, 6, 6, 6) == 0 );
assert( gamma_free_fields(board, 6) == 42 );
assert( gamma_move(board, 1, 0, 5) == 1 );
assert( gamma_move(board, 1, 2, 5) == 0 );
assert( gamma_move(board, 2, 1, 3) == 0 );
assert( gamma_move(board, 2, 8, 6) == 0 );
assert( gamma_busy_fields(board, 2) == 8 );
assert( gamma_move(board, 3, 1, 3) == 0 );
assert( gamma_move(board, 3, 0, 0) == 0 );


char* board926683570 = gamma_board(board);
assert( board926683570 != NULL );
assert( strcmp(board926683570, 
"2.6..3116\n"
"34..24...\n"
"6.4.14634\n"
"164....2.\n"
"354....3.\n"
"43..1....\n"
".5.56.2.2\n"
".2....2.6\n"
"3.34....2\n") == 0);
free(board926683570);
board926683570 = NULL;
assert( gamma_move(board, 4, 4, 8) == 1 );
assert( gamma_move(board, 4, 0, 4) == 0 );
assert( gamma_move(board, 5, 3, 8) == 1 );
assert( gamma_move(board, 5, 8, 6) == 0 );
assert( gamma_move(board, 6, 3, 8) == 0 );


char* board755305223 = gamma_board(board);
assert( board755305223 != NULL );
assert( strcmp(board755305223, 
"2.6543116\n"
"34..24...\n"
"6.4.14634\n"
"164....2.\n"
"354....3.\n"
"43..1....\n"
".5.56.2.2\n"
".2....2.6\n"
"3.34....2\n") == 0);
free(board755305223);
board755305223 = NULL;
assert( gamma_move(board, 2, 2, 5) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 4, 5) == 1 );
assert( gamma_move(board, 4, 1, 5) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 0, 7) == 0 );
assert( gamma_busy_fields(board, 5) == 4 );
assert( gamma_move(board, 6, 0, 7) == 0 );


char* board548687112 = gamma_board(board);
assert( board548687112 != NULL );
assert( strcmp(board548687112, 
"2.6543116\n"
"34..24...\n"
"6.4.14634\n"
"164.3..2.\n"
"354....3.\n"
"43..1....\n"
".5.56.2.2\n"
".2....2.6\n"
"3.34....2\n") == 0);
free(board548687112);
board548687112 = NULL;
assert( gamma_move(board, 1, 5, 6) == 0 );
assert( gamma_move(board, 1, 6, 1) == 0 );
assert( gamma_free_fields(board, 1) == 38 );
assert( gamma_move(board, 2, 8, 1) == 0 );
assert( gamma_move(board, 3, 4, 5) == 0 );
assert( gamma_move(board, 3, 8, 7) == 1 );
assert( gamma_busy_fields(board, 3) == 10 );
assert( gamma_move(board, 4, 0, 8) == 0 );
assert( gamma_move(board, 5, 5, 5) == 1 );
assert( gamma_move(board, 5, 3, 6) == 1 );
assert( gamma_busy_fields(board, 5) == 6 );
assert( gamma_move(board, 6, 1, 4) == 0 );
assert( gamma_move(board, 1, 4, 6) == 0 );
assert( gamma_move(board, 1, 7, 2) == 1 );
assert( gamma_move(board, 3, 3, 8) == 0 );
assert( gamma_move(board, 3, 4, 2) == 0 );
assert( gamma_move(board, 4, 4, 6) == 0 );
assert( gamma_move(board, 5, 0, 7) == 0 );
assert( gamma_move(board, 6, 2, 2) == 1 );
assert( gamma_move(board, 6, 2, 4) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 1, 3) == 0 );
assert( gamma_move(board, 1, 2, 1) == 1 );
assert( gamma_busy_fields(board, 1) == 7 );
assert( gamma_move(board, 2, 3, 3) == 1 );
assert( gamma_move(board, 2, 1, 1) == 0 );
assert( gamma_move(board, 3, 7, 6) == 0 );
assert( gamma_move(board, 4, 8, 1) == 0 );
assert( gamma_move(board, 4, 7, 3) == 1 );
assert( gamma_move(board, 5, 3, 6) == 0 );
assert( gamma_move(board, 6, 7, 0) == 1 );
assert( gamma_move(board, 1, 2, 1) == 0 );
assert( gamma_move(board, 1, 5, 8) == 0 );
assert( gamma_move(board, 2, 4, 5) == 0 );
assert( gamma_move(board, 2, 8, 3) == 1 );


char* board284048084 = gamma_board(board);
assert( board284048084 != NULL );
assert( strcmp(board284048084, 
"2.6543116\n"
"34..24..3\n"
"6.4514634\n"
"164.35.2.\n"
"354....3.\n"
"43.21..42\n"
".5656.212\n"
".21...2.6\n"
"3.34...62\n") == 0);
free(board284048084);
board284048084 = NULL;
assert( gamma_move(board, 3, 6, 0) == 1 );
assert( gamma_move(board, 4, 7, 7) == 1 );
assert( gamma_free_fields(board, 4) == 26 );
assert( gamma_move(board, 5, 2, 5) == 0 );
assert( gamma_move(board, 5, 2, 4) == 0 );
assert( gamma_move(board, 6, 7, 6) == 0 );
assert( gamma_move(board, 1, 7, 1) == 1 );
assert( gamma_move(board, 2, 5, 0) == 1 );
assert( gamma_move(board, 3, 1, 3) == 0 );
assert( gamma_free_fields(board, 3) == 24 );


char* board966153743 = gamma_board(board);
assert( board966153743 != NULL );
assert( strcmp(board966153743, 
"2.6543116\n"
"34..24.43\n"
"6.4514634\n"
"164.35.2.\n"
"354....3.\n"
"43.21..42\n"
".5656.212\n"
".21...216\n"
"3.34.2362\n") == 0);
free(board966153743);
board966153743 = NULL;
assert( gamma_move(board, 4, 3, 1) == 1 );
assert( gamma_move(board, 4, 6, 0) == 0 );
assert( gamma_move(board, 5, 1, 0) == 1 );
assert( gamma_move(board, 5, 2, 4) == 0 );
assert( gamma_move(board, 6, 4, 8) == 0 );


char* board935332212 = gamma_board(board);
assert( board935332212 != NULL );
assert( strcmp(board935332212, 
"2.6543116\n"
"34..24.43\n"
"6.4514634\n"
"164.35.2.\n"
"354....3.\n"
"43.21..42\n"
".5656.212\n"
".214..216\n"
"3534.2362\n") == 0);
free(board935332212);
board935332212 = NULL;
assert( gamma_move(board, 1, 7, 2) == 0 );
assert( gamma_free_fields(board, 1) == 22 );
assert( gamma_move(board, 2, 4, 4) == 1 );
assert( gamma_free_fields(board, 2) == 21 );
assert( gamma_move(board, 3, 7, 2) == 0 );
assert( gamma_move(board, 3, 8, 3) == 0 );
assert( gamma_move(board, 4, 6, 1) == 0 );
assert( gamma_move(board, 5, 5, 6) == 0 );
assert( gamma_golden_move(board, 6, 2, 8) == 0 );
assert( gamma_move(board, 1, 0, 5) == 0 );
assert( gamma_move(board, 2, 7, 6) == 0 );
assert( gamma_busy_fields(board, 2) == 12 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 4, 8) == 0 );
assert( gamma_move(board, 4, 8, 5) == 1 );
assert( gamma_move(board, 5, 3, 6) == 0 );


char* board121152877 = gamma_board(board);
assert( board121152877 != NULL );
assert( strcmp(board121152877, 
"2.6543116\n"
"34..24.43\n"
"6.4514634\n"
"164.35.24\n"
"354.2..3.\n"
"43.21..42\n"
".5656.212\n"
".214..216\n"
"3534.2362\n") == 0);
free(board121152877);
board121152877 = NULL;
assert( gamma_move(board, 6, 2, 3) == 1 );
assert( gamma_move(board, 6, 1, 1) == 0 );
assert( gamma_move(board, 1, 8, 1) == 0 );
assert( gamma_move(board, 2, 4, 5) == 0 );
assert( gamma_move(board, 2, 8, 7) == 0 );
assert( gamma_free_fields(board, 2) == 19 );
assert( gamma_move(board, 3, 7, 3) == 0 );
assert( gamma_busy_fields(board, 3) == 11 );
assert( gamma_move(board, 4, 7, 2) == 0 );
assert( gamma_move(board, 4, 1, 2) == 0 );
assert( gamma_move(board, 5, 5, 3) == 1 );
assert( gamma_move(board, 6, 4, 8) == 0 );
assert( gamma_move(board, 6, 8, 2) == 0 );
assert( gamma_move(board, 1, 2, 0) == 0 );
assert( gamma_move(board, 2, 4, 5) == 0 );
assert( gamma_move(board, 2, 4, 0) == 1 );
assert( gamma_free_fields(board, 2) == 17 );
assert( gamma_golden_move(board, 2, 5, 0) == 0 );
assert( gamma_move(board, 3, 7, 6) == 0 );
assert( gamma_free_fields(board, 3) == 17 );
assert( gamma_move(board, 4, 1, 4) == 0 );
assert( gamma_move(board, 5, 2, 0) == 0 );
assert( gamma_move(board, 5, 6, 8) == 0 );
assert( gamma_move(board, 6, 1, 0) == 0 );
assert( gamma_move(board, 6, 4, 4) == 0 );
assert( gamma_move(board, 1, 3, 0) == 0 );
assert( gamma_move(board, 1, 8, 1) == 0 );
assert( gamma_busy_fields(board, 1) == 8 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 4, 5) == 0 );
assert( gamma_move(board, 2, 2, 1) == 0 );
assert( gamma_move(board, 3, 1, 0) == 0 );
assert( gamma_move(board, 3, 7, 5) == 0 );
assert( gamma_move(board, 4, 4, 8) == 0 );
assert( gamma_move(board, 5, 4, 5) == 0 );
assert( gamma_move(board, 6, 8, 0) == 0 );
assert( gamma_move(board, 6, 3, 0) == 0 );
assert( gamma_move(board, 1, 5, 6) == 0 );
assert( gamma_move(board, 1, 2, 6) == 0 );
assert( gamma_move(board, 2, 4, 3) == 0 );
assert( gamma_move(board, 2, 3, 8) == 0 );
assert( gamma_move(board, 3, 5, 3) == 0 );
assert( gamma_move(board, 4, 2, 5) == 0 );
assert( gamma_move(board, 4, 7, 2) == 0 );
assert( gamma_move(board, 5, 6, 8) == 0 );
assert( gamma_move(board, 6, 5, 6) == 0 );
assert( gamma_move(board, 6, 1, 4) == 0 );
assert( gamma_busy_fields(board, 6) == 10 );
assert( gamma_free_fields(board, 6) == 17 );
assert( gamma_free_fields(board, 1) == 17 );
assert( gamma_move(board, 2, 7, 6) == 0 );
assert( gamma_move(board, 3, 5, 3) == 0 );
assert( gamma_move(board, 3, 8, 3) == 0 );
assert( gamma_free_fields(board, 3) == 17 );
assert( gamma_move(board, 4, 4, 6) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 3, 6) == 0 );
assert( gamma_move(board, 6, 2, 0) == 0 );
assert( gamma_free_fields(board, 6) == 17 );
assert( gamma_move(board, 1, 7, 8) == 0 );
assert( gamma_move(board, 2, 2, 5) == 0 );
assert( gamma_move(board, 2, 7, 7) == 0 );
assert( gamma_move(board, 3, 4, 6) == 0 );
assert( gamma_move(board, 3, 5, 3) == 0 );
assert( gamma_move(board, 4, 8, 1) == 0 );
assert( gamma_move(board, 4, 3, 4) == 1 );
assert( gamma_busy_fields(board, 4) == 15 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 5, 6) == 0 );
assert( gamma_move(board, 5, 2, 8) == 0 );
assert( gamma_move(board, 6, 7, 3) == 0 );


char* board189510551 = gamma_board(board);
assert( board189510551 != NULL );
assert( strcmp(board189510551, 
"2.6543116\n"
"34..24.43\n"
"6.4514634\n"
"164.35.24\n"
"35442..3.\n"
"436215.42\n"
".5656.212\n"
".214..216\n"
"353422362\n") == 0);
free(board189510551);
board189510551 = NULL;
assert( gamma_move(board, 2, 5, 6) == 0 );
assert( gamma_move(board, 3, 5, 6) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 5, 1) == 1 );
assert( gamma_move(board, 5, 8, 8) == 0 );
assert( gamma_move(board, 6, 2, 5) == 0 );
assert( gamma_move(board, 1, 3, 6) == 0 );
assert( gamma_move(board, 1, 7, 8) == 0 );
assert( gamma_move(board, 2, 7, 2) == 0 );
assert( gamma_move(board, 2, 1, 4) == 0 );
assert( gamma_move(board, 3, 8, 7) == 0 );
assert( gamma_free_fields(board, 3) == 15 );
assert( gamma_move(board, 5, 3, 6) == 0 );
assert( gamma_free_fields(board, 5) == 15 );
assert( gamma_move(board, 6, 2, 0) == 0 );
assert( gamma_move(board, 1, 5, 3) == 0 );
assert( gamma_move(board, 1, 1, 5) == 0 );
assert( gamma_move(board, 2, 1, 4) == 0 );
assert( gamma_move(board, 2, 3, 3) == 0 );
assert( gamma_move(board, 3, 1, 1) == 0 );
assert( gamma_move(board, 4, 1, 2) == 0 );
assert( gamma_move(board, 5, 4, 6) == 0 );
assert( gamma_move(board, 5, 1, 8) == 1 );
assert( gamma_move(board, 6, 4, 3) == 0 );
assert( gamma_move(board, 1, 2, 2) == 0 );
assert( gamma_move(board, 3, 1, 4) == 0 );
assert( gamma_move(board, 3, 1, 0) == 0 );
assert( gamma_move(board, 4, 0, 7) == 0 );
assert( gamma_golden_move(board, 4, 2, 4) == 0 );
assert( gamma_move(board, 5, 4, 5) == 0 );
assert( gamma_move(board, 5, 8, 4) == 1 );
assert( gamma_free_fields(board, 5) == 13 );
assert( gamma_move(board, 6, 1, 0) == 0 );
assert( gamma_move(board, 1, 6, 1) == 0 );
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_move(board, 2, 5, 4) == 1 );
assert( gamma_move(board, 2, 6, 1) == 0 );
assert( gamma_move(board, 3, 6, 1) == 0 );
assert( gamma_move(board, 4, 7, 3) == 0 );
assert( gamma_move(board, 5, 3, 6) == 0 );
assert( gamma_move(board, 5, 6, 4) == 1 );
assert( gamma_move(board, 6, 2, 2) == 0 );
assert( gamma_move(board, 1, 2, 0) == 0 );
assert( gamma_move(board, 1, 8, 7) == 0 );


char* board221564206 = gamma_board(board);
assert( board221564206 != NULL );
assert( strcmp(board221564206, 
"256543116\n"
"34..24.43\n"
"6.4514634\n"
"164.35.24\n"
"354422535\n"
"436215.42\n"
".5656.212\n"
".214.5216\n"
"353422362\n") == 0);
free(board221564206);
board221564206 = NULL;
assert( gamma_move(board, 2, 7, 2) == 0 );
assert( gamma_move(board, 3, 5, 6) == 0 );
assert( gamma_move(board, 4, 2, 5) == 0 );
assert( gamma_move(board, 4, 4, 7) == 0 );
assert( gamma_move(board, 5, 2, 2) == 0 );
assert( gamma_move(board, 6, 7, 3) == 0 );


gamma_delete(board);

    return 0;
}
