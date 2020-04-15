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
uuid: 867434563
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(15, 14, 4, 19);
assert( board != NULL );


assert( gamma_move(board, 1, 7, 9) == 1 );
assert( gamma_free_fields(board, 1) == 209 );
assert( gamma_move(board, 2, 9, 1) == 1 );
assert( gamma_busy_fields(board, 2) == 1 );
assert( gamma_move(board, 3, 6, 12) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 6, 9) == 1 );
assert( gamma_move(board, 1, 8, 1) == 1 );
assert( gamma_move(board, 1, 8, 9) == 1 );
assert( gamma_move(board, 2, 6, 0) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 9, 1) == 0 );


char* board858876978 = gamma_board(board);
assert( board858876978 != NULL );
assert( strcmp(board858876978, 
"...............\n"
"......3........\n"
"...............\n"
"...............\n"
"......411......\n"
"...............\n"
"...............\n"
"...............\n"
"...............\n"
"...............\n"
"...............\n"
"...............\n"
"........12.....\n"
"......2........\n") == 0);
free(board858876978);
board858876978 = NULL;
assert( gamma_move(board, 4, 12, 0) == 1 );
assert( gamma_move(board, 1, 6, 2) == 1 );
assert( gamma_move(board, 1, 8, 10) == 1 );
assert( gamma_move(board, 2, 9, 11) == 1 );
assert( gamma_move(board, 3, 8, 8) == 1 );
assert( gamma_move(board, 3, 5, 10) == 1 );
assert( gamma_move(board, 4, 2, 5) == 1 );
assert( gamma_busy_fields(board, 4) == 3 );
assert( gamma_move(board, 1, 7, 0) == 1 );
assert( gamma_move(board, 1, 7, 4) == 1 );
assert( gamma_move(board, 2, 0, 5) == 1 );
assert( gamma_move(board, 3, 0, 11) == 1 );
assert( gamma_move(board, 3, 2, 10) == 1 );
assert( gamma_move(board, 4, 4, 5) == 1 );
assert( gamma_move(board, 1, 3, 0) == 1 );
assert( gamma_move(board, 1, 7, 5) == 1 );
assert( gamma_move(board, 2, 5, 0) == 1 );
assert( gamma_move(board, 3, 1, 3) == 1 );
assert( gamma_move(board, 3, 1, 5) == 1 );
assert( gamma_move(board, 4, 11, 13) == 1 );
assert( gamma_move(board, 1, 8, 2) == 1 );
assert( gamma_move(board, 1, 10, 5) == 1 );
assert( gamma_golden_move(board, 1, 5, 2) == 0 );
assert( gamma_move(board, 2, 13, 0) == 1 );
assert( gamma_move(board, 2, 0, 3) == 1 );
assert( gamma_move(board, 3, 13, 9) == 1 );
assert( gamma_move(board, 4, 12, 10) == 1 );
assert( gamma_move(board, 1, 8, 10) == 0 );
assert( gamma_move(board, 2, 5, 8) == 1 );
assert( gamma_move(board, 2, 10, 12) == 1 );
assert( gamma_move(board, 3, 1, 13) == 1 );
assert( gamma_move(board, 1, 5, 6) == 1 );
assert( gamma_free_fields(board, 1) == 174 );
assert( gamma_move(board, 2, 0, 2) == 1 );
assert( gamma_move(board, 2, 0, 6) == 1 );
assert( gamma_move(board, 3, 6, 6) == 1 );
assert( gamma_move(board, 3, 4, 13) == 1 );
assert( gamma_move(board, 4, 11, 11) == 1 );
assert( gamma_busy_fields(board, 4) == 7 );
assert( gamma_move(board, 1, 7, 8) == 1 );
assert( gamma_move(board, 1, 11, 2) == 1 );
assert( gamma_move(board, 2, 2, 1) == 1 );
assert( gamma_move(board, 2, 0, 7) == 1 );
assert( gamma_move(board, 4, 13, 7) == 1 );
assert( gamma_move(board, 4, 6, 5) == 1 );
assert( gamma_move(board, 1, 13, 6) == 1 );
assert( gamma_move(board, 1, 1, 11) == 1 );
assert( gamma_move(board, 2, 13, 0) == 0 );
assert( gamma_move(board, 3, 2, 4) == 1 );
assert( gamma_move(board, 3, 3, 11) == 1 );
assert( gamma_move(board, 4, 5, 9) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 0, 11) == 0 );
assert( gamma_move(board, 1, 7, 9) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 1, 7) == 1 );
assert( gamma_move(board, 3, 8, 6) == 1 );
assert( gamma_move(board, 4, 6, 1) == 1 );
assert( gamma_free_fields(board, 1) == 155 );
assert( gamma_move(board, 2, 12, 14) == 0 );
assert( gamma_move(board, 2, 3, 2) == 1 );
assert( gamma_move(board, 3, 9, 9) == 1 );
assert( gamma_move(board, 3, 11, 11) == 0 );


char* board692911478 = gamma_board(board);
assert( board692911478 != NULL );
assert( strcmp(board692911478, 
".3..3......4...\n"
"......3...2....\n"
"31.3.....2.4...\n"
"..3..3..1...4..\n"
".....44113...3.\n"
".....2.13......\n"
"22...........4.\n"
"2....13.3....1.\n"
"234.4.41..1....\n"
"..3....1.......\n"
"23.............\n"
"2..2..1.1..1...\n"
"..2...4.12.....\n"
"...1.221....42.\n") == 0);
free(board692911478);
board692911478 = NULL;
assert( gamma_move(board, 4, 1, 5) == 0 );
assert( gamma_move(board, 4, 1, 5) == 0 );
assert( gamma_move(board, 1, 13, 5) == 1 );
assert( gamma_move(board, 1, 2, 3) == 1 );
assert( gamma_move(board, 2, 7, 13) == 1 );
assert( gamma_move(board, 3, 13, 9) == 0 );
assert( gamma_move(board, 4, 13, 3) == 1 );
assert( gamma_move(board, 4, 8, 13) == 1 );
assert( gamma_move(board, 1, 9, 6) == 1 );
assert( gamma_move(board, 1, 14, 5) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 8, 4) == 1 );
assert( gamma_move(board, 3, 13, 13) == 1 );
assert( gamma_move(board, 4, 5, 12) == 1 );
assert( gamma_move(board, 4, 9, 2) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 3, 7) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 10, 13) == 1 );
assert( gamma_move(board, 3, 10, 8) == 1 );
assert( gamma_golden_move(board, 3, 4, 8) == 0 );
assert( gamma_move(board, 4, 5, 3) == 1 );
assert( gamma_move(board, 1, 3, 7) == 0 );
assert( gamma_move(board, 1, 3, 10) == 1 );
assert( gamma_free_fields(board, 1) == 137 );
assert( gamma_move(board, 2, 7, 10) == 1 );
assert( gamma_move(board, 2, 0, 11) == 0 );
assert( gamma_move(board, 3, 3, 1) == 1 );
assert( gamma_move(board, 3, 6, 11) == 1 );


char* board304976241 = gamma_board(board);
assert( board304976241 != NULL );
assert( strcmp(board304976241, 
".3..3..24.34.3.\n"
".....43...2....\n"
"31.3..3..2.4...\n"
"..31.3.21...4..\n"
".....44113...3.\n"
".....2.13.3....\n"
"22.1.........4.\n"
"2....13.31...1.\n"
"234.4.41..1..11\n"
"..3....12......\n"
"231..4.......4.\n"
"2..2..1.14.1...\n"
"..23..4.12.....\n"
"...1.221....42.\n") == 0);
free(board304976241);
board304976241 = NULL;
assert( gamma_move(board, 4, 11, 1) == 1 );
assert( gamma_move(board, 4, 3, 12) == 1 );
assert( gamma_move(board, 1, 6, 14) == 0 );
assert( gamma_move(board, 1, 1, 8) == 1 );
assert( gamma_move(board, 2, 3, 8) == 1 );
assert( gamma_move(board, 2, 9, 2) == 0 );
assert( gamma_busy_fields(board, 2) == 19 );
assert( gamma_move(board, 4, 13, 13) == 0 );
assert( gamma_busy_fields(board, 4) == 18 );
assert( gamma_move(board, 1, 13, 0) == 0 );
assert( gamma_move(board, 1, 7, 1) == 1 );
assert( gamma_move(board, 2, 4, 3) == 1 );
assert( gamma_move(board, 3, 10, 10) == 0 );
assert( gamma_move(board, 4, 5, 5) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 6, 2) == 0 );
assert( gamma_move(board, 1, 12, 12) == 1 );
assert( gamma_move(board, 2, 0, 8) == 1 );
assert( gamma_move(board, 2, 10, 8) == 0 );
assert( gamma_busy_fields(board, 2) == 21 );
assert( gamma_move(board, 3, 6, 7) == 1 );
assert( gamma_move(board, 3, 0, 10) == 1 );
assert( gamma_move(board, 4, 9, 14) == 0 );
assert( gamma_move(board, 4, 8, 0) == 1 );
assert( gamma_move(board, 1, 9, 0) == 1 );
assert( gamma_move(board, 1, 4, 12) == 1 );
assert( gamma_free_fields(board, 1) == 120 );
assert( gamma_move(board, 2, 1, 14) == 0 );
assert( gamma_move(board, 3, 13, 2) == 0 );
assert( gamma_move(board, 4, 5, 9) == 0 );
assert( gamma_move(board, 4, 8, 10) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 3, 8) == 0 );
assert( gamma_free_fields(board, 1) == 120 );
assert( gamma_move(board, 3, 2, 2) == 0 );
assert( gamma_move(board, 4, 11, 2) == 0 );
assert( gamma_move(board, 4, 9, 4) == 1 );
assert( gamma_move(board, 1, 5, 5) == 0 );
assert( gamma_move(board, 2, 12, 8) == 1 );
assert( gamma_move(board, 2, 3, 3) == 1 );
assert( gamma_move(board, 3, 2, 2) == 0 );
assert( gamma_move(board, 3, 12, 7) == 0 );
assert( gamma_move(board, 4, 11, 13) == 0 );
assert( gamma_move(board, 1, 11, 7) == 1 );
assert( gamma_move(board, 1, 2, 10) == 0 );


char* board698174080 = gamma_board(board);
assert( board698174080 != NULL );
assert( strcmp(board698174080, 
".3..3..24.34.3.\n"
"...4143...2.1..\n"
"31.3..3..2.4...\n"
"3.31.3.21...4..\n"
".....44113...3.\n"
"21.2.2.13.3.2..\n"
"22.1..3....1.4.\n"
"2....13.31...1.\n"
"234.4441..1..11\n"
"..3....124.....\n"
"231224.......4.\n"
"2..2..1.14.1...\n"
"..23..4112.4...\n"
"...1.22141..42.\n") == 0);
free(board698174080);
board698174080 = NULL;
assert( gamma_move(board, 2, 12, 12) == 0 );
assert( gamma_move(board, 3, 10, 4) == 0 );
assert( gamma_busy_fields(board, 3) == 22 );
assert( gamma_golden_possible(board, 3) == 1 );


char* board883945837 = gamma_board(board);
assert( board883945837 != NULL );
assert( strcmp(board883945837, 
".3..3..24.34.3.\n"
"...4143...2.1..\n"
"31.3..3..2.4...\n"
"3.31.3.21...4..\n"
".....44113...3.\n"
"21.2.2.13.3.2..\n"
"22.1..3....1.4.\n"
"2....13.31...1.\n"
"234.4441..1..11\n"
"..3....124.....\n"
"231224.......4.\n"
"2..2..1.14.1...\n"
"..23..4112.4...\n"
"...1.22141..42.\n") == 0);
free(board883945837);
board883945837 = NULL;
assert( gamma_move(board, 4, 2, 2) == 1 );
assert( gamma_move(board, 4, 7, 13) == 0 );
assert( gamma_move(board, 1, 11, 9) == 0 );
assert( gamma_move(board, 1, 11, 2) == 0 );
assert( gamma_move(board, 2, 4, 14) == 0 );
assert( gamma_move(board, 3, 3, 10) == 0 );
assert( gamma_move(board, 4, 9, 11) == 0 );
assert( gamma_move(board, 4, 5, 10) == 0 );
assert( gamma_move(board, 1, 12, 0) == 0 );
assert( gamma_move(board, 2, 13, 14) == 0 );
assert( gamma_move(board, 3, 10, 6) == 0 );
assert( gamma_busy_fields(board, 3) == 22 );
assert( gamma_free_fields(board, 3) == 41 );
assert( gamma_move(board, 4, 2, 7) == 0 );
assert( gamma_move(board, 4, 6, 7) == 0 );
assert( gamma_busy_fields(board, 4) == 22 );
assert( gamma_move(board, 1, 8, 8) == 0 );
assert( gamma_golden_move(board, 2, 5, 2) == 0 );
assert( gamma_move(board, 3, 0, 3) == 0 );
assert( gamma_move(board, 4, 1, 10) == 0 );
assert( gamma_move(board, 4, 3, 3) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 13, 14) == 0 );
assert( gamma_move(board, 1, 14, 11) == 0 );
assert( gamma_move(board, 2, 3, 7) == 0 );
assert( gamma_move(board, 2, 12, 2) == 1 );
assert( gamma_move(board, 3, 9, 2) == 0 );
assert( gamma_move(board, 3, 0, 12) == 1 );
assert( gamma_move(board, 4, 6, 3) == 1 );
assert( gamma_move(board, 4, 14, 8) == 0 );
assert( gamma_busy_fields(board, 4) == 23 );
assert( gamma_move(board, 1, 13, 14) == 0 );
assert( gamma_move(board, 2, 3, 10) == 0 );
assert( gamma_move(board, 2, 14, 7) == 1 );
assert( gamma_move(board, 3, 2, 12) == 0 );
assert( gamma_move(board, 4, 3, 11) == 0 );
assert( gamma_move(board, 1, 6, 5) == 0 );
assert( gamma_move(board, 1, 10, 12) == 0 );
assert( gamma_free_fields(board, 1) == 47 );
assert( gamma_move(board, 2, 13, 2) == 1 );
assert( gamma_move(board, 3, 4, 10) == 1 );
assert( gamma_move(board, 3, 7, 0) == 0 );
assert( gamma_busy_fields(board, 3) == 24 );
assert( gamma_move(board, 4, 4, 1) == 0 );
assert( gamma_move(board, 1, 6, 11) == 0 );
assert( gamma_move(board, 1, 10, 11) == 0 );
assert( gamma_move(board, 2, 13, 13) == 0 );
assert( gamma_move(board, 2, 7, 7) == 1 );
assert( gamma_golden_move(board, 2, 3, 1) == 1 );
assert( gamma_move(board, 3, 6, 0) == 0 );
assert( gamma_move(board, 3, 1, 4) == 1 );
assert( gamma_move(board, 4, 12, 14) == 0 );
assert( gamma_move(board, 4, 5, 0) == 0 );
assert( gamma_busy_fields(board, 4) == 23 );
assert( gamma_move(board, 1, 3, 3) == 0 );
assert( gamma_move(board, 2, 6, 4) == 1 );
assert( gamma_move(board, 2, 9, 13) == 1 );
assert( gamma_move(board, 3, 6, 2) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 9, 10) == 0 );
assert( gamma_move(board, 4, 9, 7) == 0 );
assert( gamma_move(board, 2, 8, 11) == 1 );
assert( gamma_busy_fields(board, 2) == 31 );
assert( gamma_move(board, 3, 11, 13) == 0 );
assert( gamma_free_fields(board, 3) == 104 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 10, 6) == 1 );
assert( gamma_move(board, 1, 5, 1) == 1 );
assert( gamma_move(board, 2, 2, 5) == 0 );
assert( gamma_move(board, 3, 3, 11) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 10, 14) == 0 );
assert( gamma_move(board, 4, 4, 12) == 0 );
assert( gamma_move(board, 1, 11, 6) == 1 );
assert( gamma_move(board, 2, 12, 7) == 1 );
assert( gamma_move(board, 2, 13, 12) == 0 );
assert( gamma_move(board, 3, 5, 3) == 0 );
assert( gamma_move(board, 3, 13, 3) == 0 );
assert( gamma_move(board, 4, 10, 11) == 1 );
assert( gamma_move(board, 1, 6, 2) == 0 );
assert( gamma_free_fields(board, 1) == 99 );
assert( gamma_move(board, 2, 11, 2) == 0 );
assert( gamma_free_fields(board, 2) == 43 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 6, 14) == 0 );
assert( gamma_move(board, 3, 9, 9) == 0 );
assert( gamma_busy_fields(board, 3) == 24 );
assert( gamma_move(board, 4, 9, 10) == 0 );
assert( gamma_move(board, 4, 8, 6) == 0 );
assert( gamma_move(board, 1, 13, 3) == 0 );
assert( gamma_golden_move(board, 1, 2, 1) == 1 );
assert( gamma_move(board, 2, 1, 2) == 1 );
assert( gamma_move(board, 3, 6, 4) == 0 );
assert( gamma_move(board, 4, 12, 3) == 1 );
assert( gamma_move(board, 4, 6, 12) == 0 );
assert( gamma_move(board, 1, 11, 7) == 0 );
assert( gamma_move(board, 2, 9, 2) == 0 );
assert( gamma_move(board, 3, 3, 7) == 0 );
assert( gamma_move(board, 4, 10, 14) == 0 );
assert( gamma_move(board, 1, 6, 2) == 0 );
assert( gamma_move(board, 1, 3, 5) == 0 );
assert( gamma_free_fields(board, 1) == 42 );
assert( gamma_move(board, 2, 13, 12) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 13, 4) == 1 );
assert( gamma_move(board, 1, 9, 11) == 0 );
assert( gamma_move(board, 2, 7, 7) == 0 );


char* board466205380 = gamma_board(board);
assert( board466205380 != NULL );
assert( strcmp(board466205380, 
".3..3..24234.3.\n"
"3..4143...2.1..\n"
"31.3..3.2244...\n"
"3.3133.21...4..\n"
".....44113...3.\n"
"21.2.2.13.3.2..\n"
"22.1..32...1242\n"
"2....13.3111.1.\n"
"234.4441..1..11\n"
".33...2124...3.\n"
"2312244.....44.\n"
"2242..1.14.122.\n"
"..12.14112.4...\n"
"...1.22141..42.\n") == 0);
free(board466205380);
board466205380 = NULL;
assert( gamma_move(board, 3, 8, 14) == 0 );
assert( gamma_move(board, 3, 2, 3) == 0 );
assert( gamma_move(board, 4, 5, 12) == 0 );
assert( gamma_move(board, 2, 8, 14) == 0 );
assert( gamma_move(board, 2, 11, 10) == 0 );
assert( gamma_golden_move(board, 2, 11, 3) == 0 );
assert( gamma_move(board, 3, 12, 9) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 7, 2) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 3, 8) == 0 );
assert( gamma_move(board, 1, 9, 5) == 1 );
assert( gamma_move(board, 2, 8, 2) == 0 );
assert( gamma_move(board, 2, 4, 0) == 1 );
assert( gamma_move(board, 3, 12, 7) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 9, 14) == 0 );
assert( gamma_move(board, 1, 0, 11) == 0 );
assert( gamma_move(board, 1, 5, 9) == 0 );
assert( gamma_move(board, 2, 8, 14) == 0 );
assert( gamma_move(board, 2, 12, 13) == 0 );
assert( gamma_busy_fields(board, 2) == 33 );


char* board736481402 = gamma_board(board);
assert( board736481402 != NULL );
assert( strcmp(board736481402, 
".3..3..24234.3.\n"
"3..4143...2.1..\n"
"31.3..3.2244...\n"
"3.3133.21...4..\n"
".....44113..33.\n"
"21.2.2.13.3.2..\n"
"22.1..32...1242\n"
"2....13.3111.1.\n"
"234.4441.11..11\n"
".33...2124...3.\n"
"2312244.....44.\n"
"2242..1.14.122.\n"
"..12.14112.4...\n"
"...1222141..42.\n") == 0);
free(board736481402);
board736481402 = NULL;
assert( gamma_move(board, 3, 0, 10) == 0 );


char* board836341750 = gamma_board(board);
assert( board836341750 != NULL );
assert( strcmp(board836341750, 
".3..3..24234.3.\n"
"3..4143...2.1..\n"
"31.3..3.2244...\n"
"3.3133.21...4..\n"
".....44113..33.\n"
"21.2.2.13.3.2..\n"
"22.1..32...1242\n"
"2....13.3111.1.\n"
"234.4441.11..11\n"
".33...2124...3.\n"
"2312244.....44.\n"
"2242..1.14.122.\n"
"..12.14112.4...\n"
"...1222141..42.\n") == 0);
free(board836341750);
board836341750 = NULL;
assert( gamma_move(board, 4, 12, 8) == 0 );
assert( gamma_move(board, 4, 2, 4) == 0 );
assert( gamma_move(board, 1, 0, 2) == 0 );
assert( gamma_move(board, 2, 4, 5) == 0 );


char* board661786116 = gamma_board(board);
assert( board661786116 != NULL );
assert( strcmp(board661786116, 
".3..3..24234.3.\n"
"3..4143...2.1..\n"
"31.3..3.2244...\n"
"3.3133.21...4..\n"
".....44113..33.\n"
"21.2.2.13.3.2..\n"
"22.1..32...1242\n"
"2....13.3111.1.\n"
"234.4441.11..11\n"
".33...2124...3.\n"
"2312244.....44.\n"
"2242..1.14.122.\n"
"..12.14112.4...\n"
"...1222141..42.\n") == 0);
free(board661786116);
board661786116 = NULL;
assert( gamma_move(board, 4, 8, 13) == 0 );
assert( gamma_move(board, 1, 12, 1) == 0 );
assert( gamma_free_fields(board, 1) == 39 );
assert( gamma_move(board, 2, 7, 2) == 0 );
assert( gamma_busy_fields(board, 2) == 33 );
assert( gamma_golden_move(board, 2, 1, 7) == 0 );
assert( gamma_move(board, 3, 3, 2) == 0 );
assert( gamma_move(board, 3, 7, 2) == 1 );
assert( gamma_free_fields(board, 3) == 92 );
assert( gamma_move(board, 4, 4, 2) == 0 );
assert( gamma_move(board, 4, 14, 8) == 0 );
assert( gamma_move(board, 1, 10, 8) == 0 );
assert( gamma_move(board, 2, 12, 8) == 0 );
assert( gamma_move(board, 2, 9, 13) == 0 );
assert( gamma_move(board, 3, 12, 7) == 0 );
assert( gamma_move(board, 4, 5, 4) == 1 );
assert( gamma_move(board, 4, 10, 3) == 1 );
assert( gamma_move(board, 1, 14, 2) == 0 );
assert( gamma_move(board, 2, 13, 12) == 0 );
assert( gamma_move(board, 2, 11, 6) == 0 );
assert( gamma_busy_fields(board, 2) == 33 );
assert( gamma_move(board, 3, 13, 10) == 1 );
assert( gamma_move(board, 4, 3, 8) == 0 );
assert( gamma_move(board, 4, 5, 2) == 1 );
assert( gamma_golden_move(board, 4, 3, 0) == 0 );
assert( gamma_move(board, 1, 12, 11) == 1 );
assert( gamma_move(board, 2, 9, 6) == 0 );
assert( gamma_move(board, 2, 1, 4) == 0 );
assert( gamma_move(board, 3, 3, 14) == 0 );
assert( gamma_move(board, 3, 10, 10) == 1 );
assert( gamma_busy_fields(board, 3) == 29 );
assert( gamma_move(board, 4, 12, 2) == 0 );
assert( gamma_move(board, 1, 1, 4) == 0 );
assert( gamma_move(board, 1, 2, 5) == 0 );
assert( gamma_busy_fields(board, 1) == 34 );
assert( gamma_move(board, 2, 11, 4) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_busy_fields(board, 3) == 29 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_golden_move(board, 3, 8, 0) == 0 );
assert( gamma_move(board, 4, 0, 0) == 0 );
assert( gamma_move(board, 4, 9, 8) == 0 );
assert( gamma_move(board, 1, 4, 12) == 0 );
assert( gamma_golden_move(board, 1, 1, 9) == 0 );
assert( gamma_move(board, 2, 0, 2) == 0 );
assert( gamma_move(board, 2, 13, 9) == 0 );
assert( gamma_busy_fields(board, 2) == 33 );
assert( gamma_move(board, 3, 10, 6) == 0 );
assert( gamma_move(board, 4, 0, 12) == 0 );
assert( gamma_free_fields(board, 4) == 27 );
assert( gamma_move(board, 1, 2, 13) == 0 );
assert( gamma_free_fields(board, 1) == 37 );
assert( gamma_move(board, 2, 10, 9) == 0 );
assert( gamma_move(board, 2, 9, 3) == 0 );
assert( gamma_move(board, 3, 8, 8) == 0 );
assert( gamma_move(board, 4, 4, 0) == 0 );
assert( gamma_move(board, 4, 3, 13) == 1 );
assert( gamma_golden_move(board, 4, 9, 13) == 1 );
assert( gamma_move(board, 1, 3, 8) == 0 );
assert( gamma_move(board, 1, 14, 11) == 0 );
assert( gamma_move(board, 2, 3, 8) == 0 );
assert( gamma_move(board, 2, 2, 3) == 0 );
assert( gamma_move(board, 3, 0, 1) == 0 );
assert( gamma_move(board, 3, 5, 1) == 0 );
assert( gamma_busy_fields(board, 3) == 29 );
assert( gamma_move(board, 4, 4, 3) == 0 );
assert( gamma_move(board, 4, 2, 2) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 1, 3, 14) == 0 );
assert( gamma_busy_fields(board, 1) == 34 );
assert( gamma_move(board, 3, 7, 3) == 1 );
assert( gamma_move(board, 4, 10, 5) == 0 );
assert( gamma_move(board, 4, 10, 7) == 0 );
assert( gamma_move(board, 1, 3, 7) == 0 );
assert( gamma_move(board, 1, 13, 0) == 0 );
assert( gamma_busy_fields(board, 1) == 34 );
assert( gamma_move(board, 2, 6, 6) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 13, 1) == 0 );
assert( gamma_move(board, 3, 13, 12) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 13, 2) == 0 );
assert( gamma_move(board, 4, 4, 13) == 0 );
assert( gamma_move(board, 1, 0, 10) == 0 );
assert( gamma_move(board, 1, 4, 10) == 0 );
assert( gamma_move(board, 2, 7, 4) == 0 );
assert( gamma_move(board, 3, 4, 6) == 0 );
assert( gamma_move(board, 4, 7, 9) == 0 );
assert( gamma_free_fields(board, 4) == 27 );
assert( gamma_move(board, 1, 12, 8) == 0 );
assert( gamma_busy_fields(board, 1) == 34 );
assert( gamma_move(board, 2, 1, 4) == 0 );
assert( gamma_move(board, 2, 7, 13) == 0 );
assert( gamma_move(board, 3, 11, 5) == 0 );
assert( gamma_move(board, 3, 9, 0) == 0 );
assert( gamma_free_fields(board, 3) == 40 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 1, 11, 13) == 0 );
assert( gamma_move(board, 3, 12, 11) == 0 );
assert( gamma_move(board, 3, 2, 1) == 0 );
assert( gamma_busy_fields(board, 3) == 31 );
assert( gamma_move(board, 4, 8, 11) == 0 );
assert( gamma_move(board, 4, 3, 10) == 0 );
assert( gamma_move(board, 1, 11, 12) == 1 );
assert( gamma_move(board, 1, 2, 5) == 0 );
assert( gamma_move(board, 2, 9, 1) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );


char* board551333866 = gamma_board(board);
assert( board551333866 != NULL );
assert( strcmp(board551333866, 
".3.43..24434.3.\n"
"3..4143...2113.\n"
"31.3..3.22441..\n"
"3.3133.21.3.43.\n"
".....44113..33.\n"
"21.2.2.13.3.2..\n"
"22.1..32...1242\n"
"2....13.3111.1.\n"
"234.4441.11..11\n"
".33..42124...3.\n"
"23122443..4.44.\n"
"2242.41314.122.\n"
"..12.14112.4...\n"
"...1222141..42.\n") == 0);
free(board551333866);
board551333866 = NULL;
assert( gamma_move(board, 3, 11, 14) == 0 );
assert( gamma_move(board, 3, 10, 6) == 0 );
assert( gamma_move(board, 1, 12, 9) == 0 );
assert( gamma_move(board, 2, 11, 8) == 1 );
assert( gamma_move(board, 2, 12, 4) == 1 );
assert( gamma_move(board, 3, 0, 9) == 1 );
assert( gamma_move(board, 4, 11, 2) == 0 );
assert( gamma_move(board, 1, 3, 9) == 1 );
assert( gamma_free_fields(board, 1) == 34 );
assert( gamma_move(board, 2, 6, 2) == 0 );
assert( gamma_move(board, 2, 14, 1) == 0 );
assert( gamma_free_fields(board, 2) == 36 );
assert( gamma_move(board, 3, 11, 7) == 0 );
assert( gamma_move(board, 4, 11, 5) == 0 );
assert( gamma_move(board, 4, 9, 7) == 0 );
assert( gamma_move(board, 1, 1, 14) == 0 );
assert( gamma_move(board, 1, 11, 13) == 0 );
assert( gamma_move(board, 2, 2, 1) == 0 );
assert( gamma_move(board, 2, 6, 11) == 0 );


char* board339366452 = gamma_board(board);
assert( board339366452 != NULL );
assert( strcmp(board339366452, 
".3.43..24434.3.\n"
"3..4143...2113.\n"
"31.3..3.22441..\n"
"3.3133.21.3.43.\n"
"3..1.44113..33.\n"
"21.2.2.13.322..\n"
"22.1..32...1242\n"
"2....13.3111.1.\n"
"234.4441.11..11\n"
".33..42124..23.\n"
"23122443..4.44.\n"
"2242.41314.122.\n"
"..12.14112.4...\n"
"...1222141..42.\n") == 0);
free(board339366452);
board339366452 = NULL;
assert( gamma_move(board, 3, 8, 14) == 0 );
assert( gamma_move(board, 3, 0, 8) == 0 );
assert( gamma_move(board, 4, 12, 13) == 1 );
assert( gamma_move(board, 4, 9, 12) == 1 );
assert( gamma_free_fields(board, 4) == 23 );
assert( gamma_move(board, 1, 2, 7) == 1 );
assert( gamma_move(board, 2, 7, 12) == 1 );
assert( gamma_move(board, 2, 3, 8) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 4, 4) == 1 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 1, 6, 1) == 0 );
assert( gamma_move(board, 1, 0, 9) == 0 );
assert( gamma_move(board, 2, 3, 2) == 0 );
assert( gamma_golden_move(board, 2, 11, 0) == 0 );
assert( gamma_move(board, 3, 11, 13) == 0 );
assert( gamma_move(board, 4, 8, 2) == 0 );
assert( gamma_move(board, 4, 4, 8) == 0 );


char* board355984400 = gamma_board(board);
assert( board355984400 != NULL );
assert( strcmp(board355984400, 
".3.43..2443443.\n"
"3..41432.42113.\n"
"31.3..3.22441..\n"
"3.3133.21.3.43.\n"
"3..1.44113..33.\n"
"21.2.2.13.322..\n"
"2211..32...1242\n"
"2....13.3111.1.\n"
"234.4441.11..11\n"
".33.442124..23.\n"
"23122443..4.44.\n"
"2242.41314.122.\n"
"..12.14112.4...\n"
"...1222141..42.\n") == 0);
free(board355984400);
board355984400 = NULL;
assert( gamma_move(board, 1, 6, 12) == 0 );
assert( gamma_golden_move(board, 2, 12, 12) == 0 );
assert( gamma_move(board, 4, 2, 14) == 0 );
assert( gamma_move(board, 4, 6, 4) == 0 );
assert( gamma_busy_fields(board, 4) == 33 );
assert( gamma_move(board, 1, 11, 14) == 0 );
assert( gamma_move(board, 2, 5, 11) == 0 );
assert( gamma_move(board, 3, 13, 13) == 0 );
assert( gamma_move(board, 4, 10, 7) == 0 );
assert( gamma_move(board, 4, 11, 7) == 0 );
assert( gamma_move(board, 1, 5, 2) == 0 );
assert( gamma_move(board, 2, 5, 5) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_golden_move(board, 2, 3, 10) == 0 );
assert( gamma_move(board, 3, 4, 3) == 0 );
assert( gamma_move(board, 3, 8, 9) == 0 );
assert( gamma_move(board, 4, 10, 11) == 0 );
assert( gamma_move(board, 4, 14, 8) == 0 );
assert( gamma_move(board, 1, 8, 2) == 0 );
assert( gamma_move(board, 2, 4, 2) == 1 );
assert( gamma_move(board, 3, 0, 0) == 0 );
assert( gamma_move(board, 3, 11, 4) == 0 );
assert( gamma_move(board, 4, 14, 9) == 0 );
assert( gamma_move(board, 4, 8, 10) == 0 );
assert( gamma_busy_fields(board, 4) == 33 );
assert( gamma_move(board, 1, 9, 1) == 0 );
assert( gamma_move(board, 1, 4, 4) == 0 );
assert( gamma_move(board, 2, 8, 14) == 0 );
assert( gamma_move(board, 3, 0, 9) == 0 );
assert( gamma_move(board, 3, 1, 9) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 6, 3) == 0 );
assert( gamma_move(board, 1, 10, 6) == 0 );
assert( gamma_move(board, 2, 3, 9) == 0 );
assert( gamma_move(board, 2, 1, 13) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 6, 14) == 0 );
assert( gamma_move(board, 3, 9, 6) == 0 );
assert( gamma_move(board, 4, 1, 4) == 0 );
assert( gamma_move(board, 4, 0, 5) == 0 );
assert( gamma_move(board, 1, 1, 14) == 0 );
assert( gamma_free_fields(board, 1) == 32 );
assert( gamma_free_fields(board, 2) == 31 );
assert( gamma_golden_move(board, 2, 13, 11) == 0 );
assert( gamma_move(board, 3, 1, 13) == 0 );
assert( gamma_move(board, 3, 6, 13) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 12, 2) == 0 );
assert( gamma_move(board, 1, 6, 1) == 0 );
assert( gamma_move(board, 2, 7, 10) == 0 );
assert( gamma_move(board, 3, 4, 11) == 1 );
assert( gamma_move(board, 3, 3, 10) == 0 );
assert( gamma_busy_fields(board, 3) == 35 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_golden_move(board, 3, 10, 3) == 1 );
assert( gamma_free_fields(board, 4) == 69 );
assert( gamma_move(board, 1, 4, 10) == 0 );
assert( gamma_move(board, 1, 13, 3) == 0 );
assert( gamma_move(board, 2, 6, 14) == 0 );
assert( gamma_move(board, 2, 4, 11) == 0 );
assert( gamma_move(board, 3, 8, 14) == 0 );
assert( gamma_move(board, 3, 7, 12) == 0 );
assert( gamma_move(board, 4, 2, 10) == 0 );
assert( gamma_move(board, 4, 14, 1) == 1 );
assert( gamma_move(board, 1, 4, 10) == 0 );
assert( gamma_busy_fields(board, 1) == 37 );
assert( gamma_move(board, 2, 9, 14) == 0 );


char* board425275313 = gamma_board(board);
assert( board425275313 != NULL );
assert( strcmp(board425275313, 
".3.43.32443443.\n"
"3..41432.42113.\n"
"31.33.3.22441..\n"
"3.3133.21.3.43.\n"
"33.1.44113..33.\n"
"21.2.2.13.322..\n"
"2211..32...1242\n"
"2....13.3111.1.\n"
"234.4441.11..11\n"
".33.442124..23.\n"
"23122443..3.44.\n"
"2242241314.122.\n"
"..12.14112.4..4\n"
"...1222141..42.\n") == 0);
free(board425275313);
board425275313 = NULL;
assert( gamma_move(board, 3, 6, 1) == 0 );
assert( gamma_move(board, 3, 2, 8) == 0 );


char* board227015919 = gamma_board(board);
assert( board227015919 != NULL );
assert( strcmp(board227015919, 
".3.43.32443443.\n"
"3..41432.42113.\n"
"31.33.3.22441..\n"
"3.3133.21.3.43.\n"
"33.1.44113..33.\n"
"21.2.2.13.322..\n"
"2211..32...1242\n"
"2....13.3111.1.\n"
"234.4441.11..11\n"
".33.442124..23.\n"
"23122443..3.44.\n"
"2242241314.122.\n"
"..12.14112.4..4\n"
"...1222141..42.\n") == 0);
free(board227015919);
board227015919 = NULL;
assert( gamma_move(board, 4, 0, 8) == 0 );
assert( gamma_move(board, 4, 11, 4) == 0 );
assert( gamma_busy_fields(board, 4) == 33 );
assert( gamma_move(board, 1, 11, 11) == 0 );
assert( gamma_move(board, 3, 8, 2) == 0 );
assert( gamma_move(board, 4, 0, 0) == 0 );
assert( gamma_move(board, 4, 3, 3) == 0 );
assert( gamma_move(board, 1, 13, 11) == 1 );
assert( gamma_move(board, 1, 6, 8) == 1 );
assert( gamma_move(board, 2, 12, 1) == 1 );
assert( gamma_move(board, 2, 12, 0) == 0 );
assert( gamma_move(board, 3, 5, 3) == 0 );
assert( gamma_move(board, 3, 3, 11) == 0 );
assert( gamma_move(board, 4, 2, 10) == 0 );
assert( gamma_free_fields(board, 4) == 23 );
assert( gamma_move(board, 1, 1, 10) == 1 );
assert( gamma_move(board, 1, 9, 6) == 0 );
assert( gamma_move(board, 2, 7, 7) == 0 );
assert( gamma_move(board, 3, 8, 14) == 0 );
assert( gamma_move(board, 4, 7, 4) == 0 );
assert( gamma_move(board, 4, 8, 9) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );


char* board679753477 = gamma_board(board);
assert( board679753477 != NULL );
assert( strcmp(board679753477, 
".3.43.32443443.\n"
"3..41432.42113.\n"
"31.33.3.224411.\n"
"313133.21.3.43.\n"
"33.1.44113..33.\n"
"21.2.2113.322..\n"
"2211..32...1242\n"
"2....13.3111.1.\n"
"234.4441.11..11\n"
".33.442124..23.\n"
"23122443..3.44.\n"
"2242241314.122.\n"
"..12.14112.42.4\n"
"...1222141..42.\n") == 0);
free(board679753477);
board679753477 = NULL;
assert( gamma_move(board, 1, 11, 2) == 0 );
assert( gamma_busy_fields(board, 1) == 40 );
assert( gamma_move(board, 2, 11, 2) == 0 );
assert( gamma_move(board, 2, 9, 4) == 0 );
assert( gamma_move(board, 3, 4, 11) == 0 );
assert( gamma_move(board, 4, 13, 2) == 0 );
assert( gamma_move(board, 1, 10, 0) == 1 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 5, 12) == 0 );
assert( gamma_move(board, 4, 0, 2) == 0 );
assert( gamma_move(board, 4, 2, 1) == 0 );
assert( gamma_free_fields(board, 4) == 23 );
assert( gamma_golden_move(board, 4, 9, 7) == 0 );


char* board877876934 = gamma_board(board);
assert( board877876934 != NULL );
assert( strcmp(board877876934, 
".3.43.32443443.\n"
"3..41432.42113.\n"
"31.33.3.224411.\n"
"313133.21.3.43.\n"
"33.1.44113..33.\n"
"21.2.2113.322..\n"
"2211..32...1242\n"
"2....13.3111.1.\n"
"234.4441.11..11\n"
".33.442124..23.\n"
"23122443..3.44.\n"
"2242241314.122.\n"
"..12.14112.42.4\n"
"...12221411.42.\n") == 0);
free(board877876934);
board877876934 = NULL;
assert( gamma_free_fields(board, 1) == 30 );
assert( gamma_move(board, 2, 7, 5) == 0 );
assert( gamma_busy_fields(board, 2) == 37 );
assert( gamma_move(board, 3, 6, 12) == 0 );
assert( gamma_move(board, 4, 8, 13) == 0 );
assert( gamma_move(board, 1, 10, 6) == 0 );
assert( gamma_move(board, 1, 0, 13) == 0 );
assert( gamma_free_fields(board, 1) == 30 );
assert( gamma_move(board, 2, 7, 11) == 1 );
assert( gamma_move(board, 3, 5, 11) == 1 );
assert( gamma_move(board, 3, 3, 10) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 3, 2) == 0 );
assert( gamma_move(board, 1, 5, 3) == 0 );


char* board771103507 = gamma_board(board);
assert( board771103507 != NULL );
assert( strcmp(board771103507, 
".3.43.32443443.\n"
"3..41432.42113.\n"
"31.33332224411.\n"
"313133.21.3.43.\n"
"33.1.44113..33.\n"
"21.2.2113.322..\n"
"2211..32...1242\n"
"2....13.3111.1.\n"
"234.4441.11..11\n"
".33.442124..23.\n"
"23122443..3.44.\n"
"2242241314.122.\n"
"..12.14112.42.4\n"
"...12221411.42.\n") == 0);
free(board771103507);
board771103507 = NULL;
assert( gamma_move(board, 2, 8, 13) == 0 );
assert( gamma_move(board, 3, 3, 8) == 0 );
assert( gamma_move(board, 4, 2, 14) == 0 );
assert( gamma_move(board, 4, 2, 10) == 0 );
assert( gamma_move(board, 1, 8, 13) == 0 );
assert( gamma_move(board, 1, 9, 2) == 0 );
assert( gamma_move(board, 2, 7, 9) == 0 );
assert( gamma_move(board, 3, 11, 14) == 0 );
assert( gamma_move(board, 4, 6, 1) == 0 );
assert( gamma_busy_fields(board, 4) == 33 );
assert( gamma_move(board, 1, 7, 0) == 0 );
assert( gamma_free_fields(board, 1) == 30 );
assert( gamma_move(board, 2, 13, 2) == 0 );
assert( gamma_move(board, 2, 11, 4) == 1 );
assert( gamma_move(board, 3, 1, 4) == 0 );
assert( gamma_move(board, 3, 7, 5) == 0 );
assert( gamma_move(board, 4, 10, 11) == 0 );
assert( gamma_move(board, 1, 11, 8) == 0 );
assert( gamma_move(board, 1, 9, 7) == 1 );
assert( gamma_move(board, 2, 6, 7) == 0 );
assert( gamma_move(board, 3, 4, 2) == 0 );
assert( gamma_move(board, 3, 11, 2) == 0 );
assert( gamma_move(board, 4, 12, 8) == 0 );
assert( gamma_busy_fields(board, 4) == 33 );


char* board796933905 = gamma_board(board);
assert( board796933905 != NULL );
assert( strcmp(board796933905, 
".3.43.32443443.\n"
"3..41432.42113.\n"
"31.33332224411.\n"
"313133.21.3.43.\n"
"33.1.44113..33.\n"
"21.2.2113.322..\n"
"2211..32.1.1242\n"
"2....13.3111.1.\n"
"234.4441.11..11\n"
".33.442124.223.\n"
"23122443..3.44.\n"
"2242241314.122.\n"
"..12.14112.42.4\n"
"...12221411.42.\n") == 0);
free(board796933905);
board796933905 = NULL;
assert( gamma_move(board, 1, 5, 7) == 1 );
assert( gamma_move(board, 2, 9, 11) == 0 );
assert( gamma_move(board, 2, 5, 1) == 0 );
assert( gamma_move(board, 3, 1, 6) == 1 );
assert( gamma_move(board, 3, 4, 2) == 0 );
assert( gamma_move(board, 4, 11, 11) == 0 );
assert( gamma_move(board, 4, 9, 11) == 0 );
assert( gamma_move(board, 1, 0, 14) == 0 );
assert( gamma_move(board, 1, 13, 2) == 0 );


char* board853681160 = gamma_board(board);
assert( board853681160 != NULL );
assert( strcmp(board853681160, 
".3.43.32443443.\n"
"3..41432.42113.\n"
"31.33332224411.\n"
"313133.21.3.43.\n"
"33.1.44113..33.\n"
"21.2.2113.322..\n"
"2211.132.1.1242\n"
"23...13.3111.1.\n"
"234.4441.11..11\n"
".33.442124.223.\n"
"23122443..3.44.\n"
"2242241314.122.\n"
"..12.14112.42.4\n"
"...12221411.42.\n") == 0);
free(board853681160);
board853681160 = NULL;
assert( gamma_move(board, 2, 5, 9) == 0 );
assert( gamma_move(board, 3, 11, 7) == 0 );
assert( gamma_move(board, 3, 3, 13) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 5, 11) == 0 );
assert( gamma_free_fields(board, 4) == 22 );
assert( gamma_move(board, 1, 13, 7) == 0 );
assert( gamma_move(board, 2, 9, 11) == 0 );
assert( gamma_move(board, 2, 2, 3) == 0 );
assert( gamma_move(board, 3, 12, 1) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 0, 0) == 0 );
assert( gamma_move(board, 1, 5, 7) == 0 );
assert( gamma_move(board, 2, 11, 10) == 1 );
assert( gamma_move(board, 3, 10, 9) == 1 );
assert( gamma_move(board, 1, 0, 0) == 0 );
assert( gamma_move(board, 2, 8, 14) == 0 );
assert( gamma_move(board, 2, 9, 11) == 0 );


char* board656524230 = gamma_board(board);
assert( board656524230 != NULL );
assert( strcmp(board656524230, 
".3.43.32443443.\n"
"3..41432.42113.\n"
"31.33332224411.\n"
"313133.21.3243.\n"
"33.1.441133.33.\n"
"21.2.2113.322..\n"
"2211.132.1.1242\n"
"23...13.3111.1.\n"
"234.4441.11..11\n"
".33.442124.223.\n"
"23122443..3.44.\n"
"2242241314.122.\n"
"..12.14112.42.4\n"
"...12221411.42.\n") == 0);
free(board656524230);
board656524230 = NULL;
assert( gamma_move(board, 3, 8, 9) == 0 );
assert( gamma_move(board, 3, 13, 6) == 0 );
assert( gamma_move(board, 4, 13, 5) == 0 );
assert( gamma_move(board, 1, 13, 8) == 0 );
assert( gamma_move(board, 2, 7, 4) == 0 );
assert( gamma_move(board, 2, 14, 12) == 1 );
assert( gamma_busy_fields(board, 2) == 41 );
assert( gamma_move(board, 3, 0, 2) == 0 );
assert( gamma_free_fields(board, 3) == 54 );
assert( gamma_move(board, 4, 5, 8) == 0 );
assert( gamma_move(board, 1, 8, 10) == 0 );
assert( gamma_move(board, 2, 13, 14) == 0 );
assert( gamma_move(board, 2, 10, 13) == 0 );
assert( gamma_move(board, 3, 5, 11) == 0 );
assert( gamma_golden_move(board, 3, 6, 8) == 0 );
assert( gamma_move(board, 4, 0, 14) == 0 );
assert( gamma_move(board, 1, 1, 0) == 0 );
assert( gamma_move(board, 1, 12, 1) == 0 );
assert( gamma_move(board, 2, 0, 0) == 0 );
assert( gamma_move(board, 2, 3, 11) == 0 );
assert( gamma_move(board, 3, 4, 0) == 0 );
assert( gamma_move(board, 4, 12, 8) == 0 );
assert( gamma_move(board, 1, 0, 0) == 0 );
assert( gamma_move(board, 1, 13, 12) == 0 );
assert( gamma_busy_fields(board, 1) == 43 );
assert( gamma_golden_move(board, 1, 9, 1) == 0 );
assert( gamma_move(board, 2, 1, 4) == 0 );
assert( gamma_move(board, 3, 6, 7) == 0 );
assert( gamma_move(board, 3, 7, 9) == 0 );
assert( gamma_busy_fields(board, 3) == 39 );
assert( gamma_move(board, 4, 10, 9) == 0 );
assert( gamma_move(board, 1, 1, 13) == 0 );
assert( gamma_move(board, 1, 10, 0) == 0 );
assert( gamma_move(board, 2, 8, 4) == 0 );
assert( gamma_move(board, 3, 14, 3) == 1 );
assert( gamma_move(board, 3, 13, 5) == 0 );
assert( gamma_move(board, 4, 3, 0) == 0 );
assert( gamma_move(board, 4, 6, 12) == 0 );
assert( gamma_busy_fields(board, 4) == 33 );
assert( gamma_move(board, 1, 10, 5) == 0 );
assert( gamma_move(board, 1, 9, 7) == 0 );
assert( gamma_move(board, 2, 2, 4) == 0 );
assert( gamma_golden_possible(board, 2) == 0 );
assert( gamma_move(board, 3, 4, 3) == 0 );
assert( gamma_move(board, 3, 13, 11) == 0 );
assert( gamma_free_fields(board, 3) == 53 );
assert( gamma_golden_move(board, 3, 4, 8) == 0 );
assert( gamma_move(board, 4, 2, 10) == 0 );
assert( gamma_move(board, 4, 14, 10) == 0 );
assert( gamma_move(board, 1, 7, 1) == 0 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 3, 13, 7) == 0 );
assert( gamma_move(board, 3, 0, 13) == 1 );
assert( gamma_golden_move(board, 3, 7, 1) == 0 );
assert( gamma_move(board, 4, 8, 2) == 0 );
assert( gamma_free_fields(board, 4) == 20 );
assert( gamma_move(board, 1, 5, 8) == 0 );
assert( gamma_move(board, 1, 5, 10) == 0 );
assert( gamma_move(board, 2, 3, 8) == 0 );
assert( gamma_move(board, 3, 4, 10) == 0 );
assert( gamma_free_fields(board, 4) == 20 );
assert( gamma_move(board, 1, 2, 8) == 1 );
assert( gamma_move(board, 2, 4, 0) == 0 );
assert( gamma_move(board, 3, 6, 13) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 11, 5) == 0 );
assert( gamma_move(board, 4, 1, 1) == 0 );
assert( gamma_move(board, 1, 4, 3) == 0 );
assert( gamma_move(board, 1, 11, 0) == 1 );
assert( gamma_move(board, 2, 10, 6) == 0 );
assert( gamma_golden_move(board, 2, 3, 14) == 0 );
assert( gamma_move(board, 3, 7, 10) == 0 );
assert( gamma_move(board, 3, 4, 11) == 0 );
assert( gamma_golden_move(board, 3, 2, 8) == 0 );
assert( gamma_move(board, 4, 6, 12) == 0 );
assert( gamma_move(board, 4, 0, 3) == 0 );
assert( gamma_move(board, 1, 12, 8) == 0 );
assert( gamma_move(board, 1, 1, 0) == 1 );
assert( gamma_free_fields(board, 1) == 29 );
assert( gamma_move(board, 2, 10, 7) == 0 );
assert( gamma_free_fields(board, 2) == 28 );
assert( gamma_golden_move(board, 2, 9, 7) == 0 );
assert( gamma_move(board, 3, 0, 2) == 0 );
assert( gamma_busy_fields(board, 3) == 41 );
assert( gamma_move(board, 4, 3, 8) == 0 );
assert( gamma_golden_move(board, 4, 10, 2) == 0 );
assert( gamma_move(board, 1, 3, 9) == 0 );
assert( gamma_move(board, 1, 10, 12) == 0 );
assert( gamma_busy_fields(board, 1) == 46 );
assert( gamma_free_fields(board, 1) == 29 );
assert( gamma_move(board, 2, 5, 2) == 0 );
assert( gamma_move(board, 2, 9, 4) == 0 );
assert( gamma_move(board, 4, 12, 1) == 0 );
assert( gamma_move(board, 4, 0, 6) == 0 );


char* board707779903 = gamma_board(board);
assert( board707779903 != NULL );
assert( strcmp(board707779903, 
"33.43.32443443.\n"
"3..41432.421132\n"
"31.33332224411.\n"
"313133.21.3243.\n"
"33.1.441133.33.\n"
"2112.2113.322..\n"
"2211.132.1.1242\n"
"23...13.3111.1.\n"
"234.4441.11..11\n"
".33.442124.223.\n"
"23122443..3.443\n"
"2242241314.122.\n"
"..12.14112.42.4\n"
".1.12221411142.\n") == 0);
free(board707779903);
board707779903 = NULL;
assert( gamma_move(board, 1, 10, 14) == 0 );
assert( gamma_busy_fields(board, 1) == 46 );
assert( gamma_move(board, 2, 10, 9) == 0 );
assert( gamma_move(board, 3, 1, 13) == 0 );
assert( gamma_move(board, 3, 7, 11) == 0 );
assert( gamma_move(board, 4, 1, 6) == 0 );
assert( gamma_busy_fields(board, 4) == 33 );
assert( gamma_move(board, 1, 0, 7) == 0 );
assert( gamma_move(board, 1, 10, 0) == 0 );
assert( gamma_move(board, 2, 6, 3) == 0 );
assert( gamma_move(board, 3, 1, 4) == 0 );
assert( gamma_move(board, 3, 14, 9) == 1 );


char* board726957576 = gamma_board(board);
assert( board726957576 != NULL );
assert( strcmp(board726957576, 
"33.43.32443443.\n"
"3..41432.421132\n"
"31.33332224411.\n"
"313133.21.3243.\n"
"33.1.441133.333\n"
"2112.2113.322..\n"
"2211.132.1.1242\n"
"23...13.3111.1.\n"
"234.4441.11..11\n"
".33.442124.223.\n"
"23122443..3.443\n"
"2242241314.122.\n"
"..12.14112.42.4\n"
".1.12221411142.\n") == 0);
free(board726957576);
board726957576 = NULL;
assert( gamma_move(board, 4, 4, 9) == 1 );
assert( gamma_move(board, 4, 7, 2) == 0 );
assert( gamma_move(board, 1, 7, 4) == 0 );
assert( gamma_move(board, 1, 8, 0) == 0 );
assert( gamma_move(board, 2, 10, 14) == 0 );
assert( gamma_move(board, 2, 3, 7) == 0 );
assert( gamma_move(board, 3, 1, 10) == 0 );
assert( gamma_move(board, 4, 10, 14) == 0 );
assert( gamma_busy_fields(board, 4) == 34 );
assert( gamma_move(board, 1, 14, 13) == 0 );
assert( gamma_move(board, 2, 14, 1) == 0 );
assert( gamma_move(board, 2, 11, 13) == 0 );
assert( gamma_move(board, 3, 12, 8) == 0 );
assert( gamma_move(board, 4, 6, 7) == 0 );
assert( gamma_move(board, 4, 12, 1) == 0 );
assert( gamma_move(board, 1, 10, 1) == 1 );
assert( gamma_move(board, 1, 2, 1) == 0 );
assert( gamma_move(board, 2, 8, 0) == 0 );
assert( gamma_move(board, 3, 7, 3) == 0 );
assert( gamma_move(board, 3, 8, 0) == 0 );
assert( gamma_move(board, 4, 6, 4) == 0 );
assert( gamma_move(board, 4, 13, 10) == 0 );
assert( gamma_free_fields(board, 4) == 18 );


gamma_delete(board);

    return 0;
}
