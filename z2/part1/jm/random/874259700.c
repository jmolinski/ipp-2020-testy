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
uuid: 874259700
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(14, 6, 5, 12);
assert( board != NULL );


assert( gamma_move(board, 1, 11, 1) == 1 );
assert( gamma_move(board, 1, 10, 5) == 1 );
assert( gamma_move(board, 2, 4, 8) == 0 );
assert( gamma_move(board, 2, 3, 0) == 1 );
assert( gamma_move(board, 3, 0, 0) == 1 );
assert( gamma_move(board, 3, 2, 2) == 1 );
assert( gamma_move(board, 4, 3, 2) == 1 );
assert( gamma_free_fields(board, 4) == 78 );
assert( gamma_move(board, 5, 5, 7) == 0 );
assert( gamma_move(board, 5, 9, 3) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 1, 5, 13) == 0 );
assert( gamma_free_fields(board, 1) == 77 );


char* board434005943 = gamma_board(board);
assert( board434005943 != NULL );
assert( strcmp(board434005943, 
"..........1...\n"
"..............\n"
".........5....\n"
"..34..........\n"
"...........1..\n"
"3..2..........\n") == 0);
free(board434005943);
board434005943 = NULL;
assert( gamma_move(board, 2, 11, 0) == 1 );
assert( gamma_move(board, 3, 12, 2) == 1 );
assert( gamma_move(board, 4, 1, 5) == 1 );
assert( gamma_move(board, 4, 0, 5) == 1 );
assert( gamma_move(board, 5, 5, 2) == 1 );
assert( gamma_move(board, 1, 2, 5) == 1 );
assert( gamma_move(board, 1, 10, 2) == 1 );
assert( gamma_move(board, 2, 10, 2) == 0 );
assert( gamma_free_fields(board, 2) == 70 );
assert( gamma_move(board, 3, 4, 11) == 0 );
assert( gamma_move(board, 3, 7, 1) == 1 );
assert( gamma_move(board, 4, 4, 4) == 1 );
assert( gamma_move(board, 4, 7, 3) == 1 );
assert( gamma_busy_fields(board, 4) == 5 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 4, 2) == 1 );
assert( gamma_move(board, 5, 8, 3) == 1 );
assert( gamma_move(board, 1, 6, 0) == 1 );
assert( gamma_move(board, 2, 10, 3) == 1 );
assert( gamma_move(board, 3, 0, 8) == 0 );
assert( gamma_move(board, 3, 6, 4) == 1 );
assert( gamma_move(board, 4, 1, 8) == 0 );
assert( gamma_move(board, 1, 2, 1) == 1 );
assert( gamma_move(board, 1, 8, 0) == 1 );
assert( gamma_move(board, 2, 8, 1) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 5, 4) == 1 );
assert( gamma_move(board, 3, 0, 4) == 1 );
assert( gamma_busy_fields(board, 3) == 7 );
assert( gamma_move(board, 4, 3, 3) == 1 );
assert( gamma_move(board, 4, 11, 0) == 0 );
assert( gamma_busy_fields(board, 4) == 6 );
assert( gamma_move(board, 5, 5, 1) == 1 );
assert( gamma_move(board, 1, 0, 10) == 0 );
assert( gamma_move(board, 2, 1, 1) == 1 );
assert( gamma_move(board, 3, 3, 13) == 0 );
assert( gamma_move(board, 3, 5, 0) == 1 );
assert( gamma_move(board, 4, 1, 6) == 0 );
assert( gamma_move(board, 4, 4, 4) == 0 );
assert( gamma_busy_fields(board, 4) == 6 );
assert( gamma_move(board, 5, 4, 2) == 0 );
assert( gamma_move(board, 1, 3, 1) == 1 );
assert( gamma_move(board, 2, 10, 4) == 1 );
assert( gamma_move(board, 3, 5, 2) == 0 );
assert( gamma_move(board, 4, 4, 8) == 0 );
assert( gamma_move(board, 5, 4, 8) == 0 );
assert( gamma_move(board, 1, 4, 1) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 0, 13) == 0 );
assert( gamma_move(board, 2, 13, 1) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 13, 2) == 1 );
assert( gamma_move(board, 3, 12, 3) == 1 );
assert( gamma_move(board, 4, 1, 0) == 1 );
assert( gamma_golden_move(board, 4, 0, 11) == 0 );
assert( gamma_move(board, 5, 0, 7) == 0 );
assert( gamma_move(board, 5, 7, 3) == 0 );
assert( gamma_move(board, 1, 2, 1) == 0 );
assert( gamma_move(board, 2, 4, 11) == 0 );
assert( gamma_move(board, 3, 2, 1) == 0 );
assert( gamma_golden_move(board, 4, 2, 4) == 0 );
assert( gamma_move(board, 5, 1, 1) == 0 );
assert( gamma_busy_fields(board, 5) == 5 );
assert( gamma_move(board, 1, 4, 7) == 0 );
assert( gamma_free_fields(board, 1) == 46 );
assert( gamma_move(board, 2, 5, 5) == 1 );
assert( gamma_move(board, 2, 9, 1) == 1 );
assert( gamma_busy_fields(board, 2) == 9 );
assert( gamma_free_fields(board, 2) == 44 );
assert( gamma_move(board, 3, 0, 4) == 0 );
assert( gamma_move(board, 3, 2, 0) == 1 );
assert( gamma_busy_fields(board, 3) == 11 );
assert( gamma_move(board, 4, 13, 2) == 0 );


char* board930052142 = gamma_board(board);
assert( board930052142 != NULL );
assert( strcmp(board930052142, 
"441..2....1...\n"
"3...433...2...\n"
"...4...4552.3.\n"
"..3455....1.33\n"
".21115.322.1.2\n"
"3432.31.1..2..\n") == 0);
free(board930052142);
board930052142 = NULL;
assert( gamma_move(board, 5, 4, 11) == 0 );
assert( gamma_free_fields(board, 5) == 43 );
assert( gamma_move(board, 1, 1, 4) == 1 );
assert( gamma_free_fields(board, 1) == 42 );
assert( gamma_move(board, 2, 3, 5) == 1 );
assert( gamma_move(board, 2, 11, 1) == 0 );
assert( gamma_move(board, 3, 2, 1) == 0 );
assert( gamma_move(board, 3, 13, 5) == 1 );
assert( gamma_golden_move(board, 3, 5, 10) == 0 );
assert( gamma_move(board, 4, 0, 7) == 0 );
assert( gamma_move(board, 4, 5, 5) == 0 );
assert( gamma_move(board, 5, 1, 12) == 0 );
assert( gamma_move(board, 5, 8, 2) == 1 );
assert( gamma_move(board, 1, 11, 2) == 1 );
assert( gamma_move(board, 1, 5, 2) == 0 );
assert( gamma_move(board, 2, 0, 7) == 0 );
assert( gamma_move(board, 3, 9, 4) == 1 );
assert( gamma_move(board, 3, 6, 2) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 5, 7) == 0 );
assert( gamma_move(board, 5, 5, 4) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 1, 1, 5) == 0 );
assert( gamma_move(board, 2, 1, 0) == 0 );
assert( gamma_move(board, 3, 5, 11) == 0 );
assert( gamma_free_fields(board, 3) == 36 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 0, 4) == 0 );
assert( gamma_move(board, 4, 4, 1) == 0 );
assert( gamma_move(board, 5, 3, 5) == 0 );
assert( gamma_free_fields(board, 5) == 36 );
assert( gamma_move(board, 1, 4, 12) == 0 );
assert( gamma_move(board, 1, 12, 1) == 1 );
assert( gamma_move(board, 2, 0, 13) == 0 );
assert( gamma_move(board, 2, 3, 0) == 0 );
assert( gamma_move(board, 3, 5, 8) == 0 );
assert( gamma_move(board, 3, 0, 4) == 0 );
assert( gamma_move(board, 4, 0, 13) == 0 );
assert( gamma_move(board, 4, 12, 1) == 0 );
assert( gamma_move(board, 5, 3, 5) == 0 );
assert( gamma_move(board, 5, 1, 5) == 0 );
assert( gamma_move(board, 1, 2, 4) == 1 );
assert( gamma_move(board, 2, 7, 2) == 1 );
assert( gamma_move(board, 2, 6, 4) == 0 );
assert( gamma_move(board, 3, 4, 3) == 1 );
assert( gamma_move(board, 3, 7, 3) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 5, 12) == 0 );
assert( gamma_move(board, 5, 3, 0) == 0 );
assert( gamma_move(board, 5, 9, 5) == 1 );
assert( gamma_move(board, 2, 10, 0) == 1 );
assert( gamma_move(board, 2, 5, 5) == 0 );
assert( gamma_busy_fields(board, 2) == 12 );
assert( gamma_move(board, 3, 3, 6) == 0 );
assert( gamma_move(board, 3, 9, 0) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 4, 3) == 0 );
assert( gamma_move(board, 5, 1, 0) == 0 );
assert( gamma_move(board, 5, 6, 5) == 1 );
assert( gamma_busy_fields(board, 5) == 8 );
assert( gamma_move(board, 1, 4, 13) == 0 );
assert( gamma_free_fields(board, 1) == 29 );
assert( gamma_move(board, 2, 5, 11) == 0 );
assert( gamma_move(board, 3, 0, 9) == 0 );
assert( gamma_busy_fields(board, 3) == 15 );
assert( gamma_move(board, 4, 0, 12) == 0 );
assert( gamma_move(board, 4, 1, 2) == 1 );


char* board308408579 = gamma_board(board);
assert( board308408579 != NULL );
assert( strcmp(board308408579, 
"4412.25..51..3\n"
"311.433..32...\n"
"...43..4552.3.\n"
".43455325.1133\n"
".21115.322.112\n"
"3432.31.1.22..\n") == 0);
free(board308408579);
board308408579 = NULL;
assert( gamma_move(board, 5, 0, 9) == 0 );
assert( gamma_move(board, 5, 5, 0) == 0 );
assert( gamma_move(board, 1, 5, 12) == 0 );
assert( gamma_move(board, 2, 0, 9) == 0 );
assert( gamma_move(board, 3, 4, 11) == 0 );
assert( gamma_move(board, 4, 0, 12) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 4, 12) == 0 );
assert( gamma_move(board, 5, 5, 0) == 0 );
assert( gamma_busy_fields(board, 5) == 8 );
assert( gamma_free_fields(board, 5) == 28 );
assert( gamma_move(board, 1, 0, 13) == 0 );
assert( gamma_move(board, 1, 10, 2) == 0 );
assert( gamma_free_fields(board, 1) == 28 );
assert( gamma_move(board, 2, 1, 4) == 0 );
assert( gamma_move(board, 2, 1, 3) == 1 );
assert( gamma_move(board, 3, 4, 8) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 3, 13) == 0 );
assert( gamma_move(board, 4, 3, 2) == 0 );
assert( gamma_move(board, 5, 4, 8) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 1, 4, 3) == 0 );
assert( gamma_move(board, 2, 10, 2) == 0 );
assert( gamma_move(board, 3, 4, 7) == 0 );
assert( gamma_move(board, 3, 0, 3) == 1 );
assert( gamma_move(board, 5, 9, 1) == 0 );
assert( gamma_free_fields(board, 5) == 26 );
assert( gamma_move(board, 1, 11, 1) == 0 );
assert( gamma_move(board, 1, 3, 1) == 0 );


char* board132247546 = gamma_board(board);
assert( board132247546 != NULL );
assert( strcmp(board132247546, 
"4412.25..51..3\n"
"311.433..32...\n"
"32.43..4552.3.\n"
".43455325.1133\n"
".21115.322.112\n"
"3432.31.1.22..\n") == 0);
free(board132247546);
board132247546 = NULL;
assert( gamma_move(board, 2, 0, 12) == 0 );
assert( gamma_busy_fields(board, 2) == 13 );
assert( gamma_move(board, 3, 0, 7) == 0 );
assert( gamma_move(board, 3, 9, 3) == 0 );
assert( gamma_busy_fields(board, 3) == 16 );
assert( gamma_move(board, 4, 12, 2) == 0 );
assert( gamma_move(board, 4, 12, 1) == 0 );
assert( gamma_move(board, 5, 8, 5) == 1 );
assert( gamma_move(board, 1, 1, 4) == 0 );
assert( gamma_move(board, 2, 3, 3) == 0 );
assert( gamma_move(board, 3, 3, 2) == 0 );
assert( gamma_busy_fields(board, 3) == 16 );
assert( gamma_move(board, 5, 5, 7) == 0 );
assert( gamma_move(board, 5, 8, 5) == 0 );
assert( gamma_busy_fields(board, 5) == 9 );


char* board132780210 = gamma_board(board);
assert( board132780210 != NULL );
assert( strcmp(board132780210, 
"4412.25.551..3\n"
"311.433..32...\n"
"32.43..4552.3.\n"
".43455325.1133\n"
".21115.322.112\n"
"3432.31.1.22..\n") == 0);
free(board132780210);
board132780210 = NULL;
assert( gamma_move(board, 1, 1, 3) == 0 );
assert( gamma_move(board, 2, 5, 7) == 0 );
assert( gamma_move(board, 2, 4, 4) == 0 );
assert( gamma_move(board, 3, 6, 0) == 0 );
assert( gamma_free_fields(board, 3) == 15 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 4, 11) == 0 );
assert( gamma_move(board, 4, 5, 0) == 0 );


char* board920574488 = gamma_board(board);
assert( board920574488 != NULL );
assert( strcmp(board920574488, 
"4412.25.551..3\n"
"311.433..32...\n"
"32.43..4552.3.\n"
".43455325.1133\n"
".21115.322.112\n"
"3432.31.1.22..\n") == 0);
free(board920574488);
board920574488 = NULL;
assert( gamma_move(board, 5, 7, 5) == 1 );
assert( gamma_move(board, 5, 7, 3) == 0 );
assert( gamma_move(board, 1, 6, 3) == 1 );
assert( gamma_move(board, 2, 4, 13) == 0 );
assert( gamma_move(board, 3, 5, 2) == 0 );
assert( gamma_move(board, 4, 1, 0) == 0 );
assert( gamma_move(board, 4, 0, 1) == 1 );
assert( gamma_free_fields(board, 4) == 22 );
assert( gamma_move(board, 5, 4, 3) == 0 );
assert( gamma_move(board, 5, 0, 1) == 0 );
assert( gamma_free_fields(board, 5) == 22 );
assert( gamma_move(board, 1, 5, 4) == 0 );
assert( gamma_free_fields(board, 1) == 22 );
assert( gamma_move(board, 2, 11, 5) == 1 );
assert( gamma_busy_fields(board, 2) == 14 );
assert( gamma_move(board, 3, 4, 7) == 0 );
assert( gamma_move(board, 4, 4, 11) == 0 );
assert( gamma_free_fields(board, 4) == 21 );
assert( gamma_move(board, 5, 9, 2) == 1 );
assert( gamma_free_fields(board, 5) == 20 );


char* board334506923 = gamma_board(board);
assert( board334506923 != NULL );
assert( strcmp(board334506923, 
"4412.2555512.3\n"
"311.433..32...\n"
"32.43.14552.3.\n"
".4345532551133\n"
"421115.322.112\n"
"3432.31.1.22..\n") == 0);
free(board334506923);
board334506923 = NULL;
assert( gamma_move(board, 1, 5, 4) == 0 );
assert( gamma_move(board, 2, 0, 9) == 0 );
assert( gamma_move(board, 3, 3, 3) == 0 );
assert( gamma_move(board, 4, 3, 5) == 0 );
assert( gamma_move(board, 5, 2, 0) == 0 );
assert( gamma_move(board, 5, 3, 0) == 0 );
assert( gamma_busy_fields(board, 5) == 11 );
assert( gamma_move(board, 1, 0, 4) == 0 );
assert( gamma_free_fields(board, 1) == 20 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 7, 3) == 0 );
assert( gamma_free_fields(board, 2) == 20 );
assert( gamma_move(board, 3, 2, 1) == 0 );
assert( gamma_move(board, 3, 12, 2) == 0 );


char* board976586886 = gamma_board(board);
assert( board976586886 != NULL );
assert( strcmp(board976586886, 
"4412.2555512.3\n"
"311.433..32...\n"
"32.43.14552.3.\n"
".4345532551133\n"
"421115.322.112\n"
"3432.31.1.22..\n") == 0);
free(board976586886);
board976586886 = NULL;
assert( gamma_move(board, 4, 3, 13) == 0 );
assert( gamma_move(board, 4, 9, 0) == 1 );
assert( gamma_busy_fields(board, 4) == 10 );
assert( gamma_move(board, 5, 0, 13) == 0 );
assert( gamma_golden_move(board, 5, 2, 5) == 1 );
assert( gamma_move(board, 1, 3, 5) == 0 );
assert( gamma_move(board, 1, 1, 3) == 0 );
assert( gamma_move(board, 2, 6, 0) == 0 );
assert( gamma_move(board, 2, 11, 0) == 0 );
assert( gamma_move(board, 3, 13, 5) == 0 );
assert( gamma_busy_fields(board, 3) == 16 );
assert( gamma_move(board, 4, 1, 0) == 0 );
assert( gamma_move(board, 4, 5, 0) == 0 );
assert( gamma_move(board, 5, 7, 1) == 0 );
assert( gamma_move(board, 1, 0, 12) == 0 );
assert( gamma_busy_fields(board, 1) == 13 );
assert( gamma_golden_move(board, 1, 5, 11) == 0 );
assert( gamma_move(board, 2, 0, 4) == 0 );
assert( gamma_move(board, 2, 0, 3) == 0 );
assert( gamma_move(board, 4, 4, 7) == 0 );
assert( gamma_move(board, 4, 6, 2) == 0 );


char* board601123030 = gamma_board(board);
assert( board601123030 != NULL );
assert( strcmp(board601123030, 
"4452.2555512.3\n"
"311.433..32...\n"
"32.43.14552.3.\n"
".4345532551133\n"
"421115.322.112\n"
"3432.31.1422..\n") == 0);
free(board601123030);
board601123030 = NULL;
assert( gamma_move(board, 5, 6, 0) == 0 );
assert( gamma_busy_fields(board, 5) == 12 );
assert( gamma_move(board, 1, 11, 1) == 0 );
assert( gamma_move(board, 2, 5, 1) == 0 );
assert( gamma_move(board, 2, 7, 4) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 5, 4) == 0 );
assert( gamma_free_fields(board, 3) == 12 );
assert( gamma_move(board, 4, 4, 8) == 0 );
assert( gamma_move(board, 5, 2, 4) == 0 );
assert( gamma_move(board, 1, 3, 13) == 0 );
assert( gamma_busy_fields(board, 1) == 13 );
assert( gamma_golden_possible(board, 1) == 1 );


char* board156110169 = gamma_board(board);
assert( board156110169 != NULL );
assert( strcmp(board156110169, 
"4452.2555512.3\n"
"311.4332.32...\n"
"32.43.14552.3.\n"
".4345532551133\n"
"421115.322.112\n"
"3432.31.1422..\n") == 0);
free(board156110169);
board156110169 = NULL;
assert( gamma_move(board, 2, 1, 6) == 0 );
assert( gamma_move(board, 2, 0, 5) == 0 );
assert( gamma_move(board, 3, 10, 2) == 0 );
assert( gamma_move(board, 3, 5, 5) == 0 );
assert( gamma_move(board, 4, 2, 0) == 0 );
assert( gamma_move(board, 5, 11, 4) == 1 );
assert( gamma_move(board, 5, 2, 3) == 1 );
assert( gamma_move(board, 1, 2, 0) == 0 );
assert( gamma_move(board, 2, 4, 8) == 0 );
assert( gamma_move(board, 2, 3, 1) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_free_fields(board, 3) == 11 );
assert( gamma_move(board, 4, 0, 13) == 0 );
assert( gamma_move(board, 4, 1, 2) == 0 );


char* board730368537 = gamma_board(board);
assert( board730368537 != NULL );
assert( strcmp(board730368537, 
"4452.2555512.3\n"
"311.4332.325..\n"
"32543.14552.3.\n"
".4345532551133\n"
"421115.322.112\n"
"3432.31.1422..\n") == 0);
free(board730368537);
board730368537 = NULL;
assert( gamma_move(board, 5, 3, 11) == 0 );
assert( gamma_move(board, 1, 4, 0) == 1 );
assert( gamma_move(board, 2, 7, 5) == 0 );
assert( gamma_move(board, 2, 5, 0) == 0 );
assert( gamma_move(board, 3, 5, 12) == 0 );
assert( gamma_move(board, 3, 4, 2) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 4, 8) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 5, 5) == 0 );
assert( gamma_move(board, 5, 3, 2) == 0 );
assert( gamma_move(board, 1, 4, 12) == 0 );
assert( gamma_busy_fields(board, 1) == 14 );
assert( gamma_move(board, 2, 4, 3) == 0 );
assert( gamma_move(board, 2, 8, 0) == 0 );


char* board484770899 = gamma_board(board);
assert( board484770899 != NULL );
assert( strcmp(board484770899, 
"4452.2555512.3\n"
"311.4332.325..\n"
"32543.14552.3.\n"
".4345532551133\n"
"421115.322.112\n"
"3432131.1422..\n") == 0);
free(board484770899);
board484770899 = NULL;
assert( gamma_move(board, 3, 4, 5) == 0 );
assert( gamma_move(board, 3, 0, 2) == 1 );


gamma_delete(board);

    return 0;
}
