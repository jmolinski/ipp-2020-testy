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
uuid: 763760377
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(14, 11, 7, 11);
assert( board != NULL );


assert( gamma_move(board, 1, 12, 6) == 1 );
assert( gamma_move(board, 2, 9, 9) == 1 );
assert( gamma_busy_fields(board, 2) == 1 );
assert( gamma_move(board, 3, 8, 10) == 1 );
assert( gamma_move(board, 4, 2, 0) == 1 );
assert( gamma_move(board, 4, 12, 2) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 5, 7) == 1 );
assert( gamma_move(board, 5, 3, 5) == 1 );
assert( gamma_busy_fields(board, 5) == 2 );
assert( gamma_move(board, 6, 11, 4) == 1 );
assert( gamma_move(board, 6, 0, 7) == 1 );
assert( gamma_move(board, 7, 0, 8) == 1 );
assert( gamma_move(board, 1, 3, 12) == 0 );
assert( gamma_move(board, 1, 8, 2) == 1 );
assert( gamma_move(board, 2, 2, 11) == 0 );
assert( gamma_move(board, 2, 0, 8) == 0 );
assert( gamma_free_fields(board, 2) == 143 );
assert( gamma_move(board, 3, 9, 10) == 1 );
assert( gamma_move(board, 3, 8, 8) == 1 );
assert( gamma_move(board, 4, 1, 5) == 1 );
assert( gamma_move(board, 4, 0, 8) == 0 );
assert( gamma_golden_move(board, 4, 5, 3) == 0 );
assert( gamma_move(board, 5, 8, 7) == 1 );
assert( gamma_move(board, 5, 2, 0) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 4, 3) == 1 );
assert( gamma_busy_fields(board, 7) == 2 );
assert( gamma_move(board, 1, 6, 9) == 1 );
assert( gamma_move(board, 1, 2, 1) == 1 );
assert( gamma_free_fields(board, 1) == 136 );
assert( gamma_move(board, 2, 0, 4) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 1, 8) == 1 );
assert( gamma_move(board, 3, 1, 3) == 1 );
assert( gamma_move(board, 4, 5, 12) == 0 );
assert( gamma_move(board, 5, 2, 5) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 5, 8) == 1 );
assert( gamma_move(board, 6, 9, 8) == 1 );
assert( gamma_move(board, 7, 4, 5) == 1 );


char* board490512750 = gamma_board(board);
assert( board490512750 != NULL );
assert( strcmp(board490512750, 
"........33....\n"
"......1..2....\n"
"73...6..36....\n"
"6....5..5.....\n"
"............1.\n"
".4557.........\n"
"2..........6..\n"
".3..7.........\n"
"........1...4.\n"
"..1...........\n"
"..4...........\n") == 0);
free(board490512750);
board490512750 = NULL;
assert( gamma_move(board, 1, 6, 4) == 1 );
assert( gamma_move(board, 1, 11, 4) == 0 );
assert( gamma_move(board, 2, 1, 6) == 1 );
assert( gamma_move(board, 2, 4, 6) == 1 );
assert( gamma_move(board, 3, 4, 12) == 0 );
assert( gamma_move(board, 4, 4, 1) == 1 );
assert( gamma_move(board, 5, 9, 6) == 1 );
assert( gamma_move(board, 5, 7, 10) == 1 );
assert( gamma_move(board, 6, 6, 0) == 1 );
assert( gamma_move(board, 7, 10, 2) == 1 );
assert( gamma_busy_fields(board, 7) == 4 );
assert( gamma_move(board, 1, 6, 8) == 1 );
assert( gamma_move(board, 2, 7, 13) == 0 );
assert( gamma_move(board, 3, 1, 5) == 0 );
assert( gamma_move(board, 4, 7, 8) == 1 );
assert( gamma_move(board, 4, 4, 0) == 1 );
assert( gamma_move(board, 5, 0, 8) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 7, 8) == 0 );
assert( gamma_move(board, 7, 4, 3) == 0 );
assert( gamma_move(board, 1, 3, 6) == 1 );
assert( gamma_busy_fields(board, 1) == 7 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 12, 7) == 1 );
assert( gamma_golden_move(board, 2, 5, 1) == 0 );
assert( gamma_move(board, 3, 7, 8) == 0 );
assert( gamma_move(board, 3, 2, 3) == 1 );
assert( gamma_busy_fields(board, 3) == 6 );
assert( gamma_move(board, 4, 4, 5) == 0 );
assert( gamma_move(board, 5, 1, 9) == 1 );
assert( gamma_move(board, 6, 0, 10) == 1 );
assert( gamma_busy_fields(board, 7) == 4 );
assert( gamma_move(board, 1, 8, 3) == 1 );
assert( gamma_move(board, 2, 4, 10) == 1 );
assert( gamma_move(board, 3, 4, 9) == 1 );
assert( gamma_busy_fields(board, 3) == 7 );
assert( gamma_free_fields(board, 3) == 110 );
assert( gamma_move(board, 4, 3, 11) == 0 );
assert( gamma_move(board, 5, 6, 10) == 1 );
assert( gamma_move(board, 5, 12, 7) == 0 );
assert( gamma_move(board, 6, 1, 11) == 0 );
assert( gamma_move(board, 7, 1, 3) == 0 );
assert( gamma_move(board, 1, 4, 3) == 0 );
assert( gamma_move(board, 2, 1, 6) == 0 );
assert( gamma_free_fields(board, 2) == 109 );
assert( gamma_move(board, 3, 2, 4) == 1 );
assert( gamma_move(board, 3, 3, 9) == 1 );
assert( gamma_free_fields(board, 3) == 107 );
assert( gamma_golden_move(board, 3, 6, 1) == 0 );
assert( gamma_move(board, 4, 5, 8) == 0 );
assert( gamma_move(board, 5, 2, 4) == 0 );
assert( gamma_move(board, 5, 13, 7) == 1 );
assert( gamma_move(board, 6, 3, 7) == 1 );
assert( gamma_move(board, 6, 2, 5) == 0 );
assert( gamma_move(board, 7, 13, 2) == 1 );
assert( gamma_move(board, 7, 4, 0) == 0 );
assert( gamma_busy_fields(board, 7) == 5 );
assert( gamma_move(board, 1, 2, 9) == 1 );
assert( gamma_free_fields(board, 1) == 103 );
assert( gamma_move(board, 2, 5, 10) == 1 );
assert( gamma_move(board, 2, 0, 0) == 1 );
assert( gamma_move(board, 3, 8, 13) == 0 );
assert( gamma_move(board, 3, 1, 3) == 0 );
assert( gamma_free_fields(board, 3) == 101 );
assert( gamma_move(board, 5, 0, 4) == 0 );
assert( gamma_busy_fields(board, 5) == 9 );
assert( gamma_move(board, 6, 1, 7) == 1 );


char* board225456620 = gamma_board(board);
assert( board225456620 != NULL );
assert( strcmp(board225456620, 
"6...225533....\n"
".5133.1..2....\n"
"73...61436....\n"
"66.6.5..5...25\n"
".2.12....5..1.\n"
".4557.........\n"
"2.3...1....6..\n"
".33.7...1.....\n"
"........1.7.47\n"
"..1.4.........\n"
"2.4.4.6.......\n") == 0);
free(board225456620);
board225456620 = NULL;
assert( gamma_move(board, 7, 2, 1) == 0 );
assert( gamma_move(board, 7, 0, 6) == 1 );
assert( gamma_move(board, 1, 2, 6) == 1 );
assert( gamma_move(board, 2, 5, 7) == 0 );
assert( gamma_move(board, 3, 6, 6) == 1 );
assert( gamma_move(board, 4, 9, 10) == 0 );
assert( gamma_move(board, 5, 10, 3) == 1 );
assert( gamma_move(board, 5, 8, 6) == 1 );
assert( gamma_move(board, 6, 2, 6) == 0 );
assert( gamma_move(board, 7, 6, 11) == 0 );
assert( gamma_move(board, 1, 9, 7) == 1 );
assert( gamma_move(board, 2, 2, 8) == 1 );
assert( gamma_move(board, 2, 4, 0) == 0 );
assert( gamma_move(board, 4, 10, 10) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 9, 7) == 0 );
assert( gamma_move(board, 5, 2, 10) == 1 );
assert( gamma_move(board, 6, 13, 4) == 1 );
assert( gamma_move(board, 7, 0, 13) == 0 );
assert( gamma_move(board, 1, 7, 2) == 1 );
assert( gamma_move(board, 2, 2, 3) == 0 );
assert( gamma_move(board, 3, 2, 3) == 0 );
assert( gamma_move(board, 4, 5, 0) == 1 );
assert( gamma_move(board, 5, 1, 0) == 1 );
assert( gamma_move(board, 5, 3, 6) == 0 );
assert( gamma_move(board, 6, 7, 6) == 1 );
assert( gamma_golden_move(board, 6, 2, 8) == 1 );
assert( gamma_move(board, 7, 1, 11) == 0 );
assert( gamma_free_fields(board, 7) == 86 );
assert( gamma_move(board, 1, 4, 8) == 1 );
assert( gamma_move(board, 1, 9, 2) == 1 );
assert( gamma_move(board, 2, 5, 10) == 0 );
assert( gamma_move(board, 3, 0, 3) == 1 );
assert( gamma_move(board, 3, 9, 9) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 10, 1) == 1 );
assert( gamma_move(board, 5, 0, 9) == 1 );
assert( gamma_move(board, 6, 0, 11) == 0 );
assert( gamma_move(board, 7, 4, 2) == 1 );
assert( gamma_move(board, 1, 0, 11) == 0 );
assert( gamma_move(board, 2, 9, 7) == 0 );
assert( gamma_move(board, 3, 3, 10) == 1 );
assert( gamma_move(board, 3, 5, 6) == 1 );
assert( gamma_move(board, 4, 11, 7) == 1 );
assert( gamma_busy_fields(board, 4) == 10 );
assert( gamma_move(board, 5, 3, 5) == 0 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 7, 1, 2) == 1 );
assert( gamma_move(board, 1, 1, 11) == 0 );
assert( gamma_free_fields(board, 1) == 76 );
assert( gamma_golden_possible(board, 2) == 1 );


char* board527730214 = gamma_board(board);
assert( board527730214 != NULL );
assert( strcmp(board527730214, 
"6.532255334...\n"
"55133.1..2....\n"
"736.161436....\n"
"66.6.5..51.425\n"
"7211233655..1.\n"
".4557.........\n"
"2.3...1....6.6\n"
"333.7...1.5...\n"
".7..7..1117.47\n"
"..1.4.....4...\n"
"254.446.......\n") == 0);
free(board527730214);
board527730214 = NULL;
assert( gamma_move(board, 3, 0, 9) == 0 );
assert( gamma_move(board, 4, 7, 3) == 1 );
assert( gamma_move(board, 4, 13, 6) == 1 );
assert( gamma_move(board, 5, 0, 11) == 0 );
assert( gamma_busy_fields(board, 5) == 14 );
assert( gamma_move(board, 7, 9, 5) == 1 );
assert( gamma_busy_fields(board, 7) == 9 );
assert( gamma_free_fields(board, 7) == 73 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 1, 2, 11) == 0 );
assert( gamma_move(board, 1, 6, 4) == 0 );


char* board612523686 = gamma_board(board);
assert( board612523686 != NULL );
assert( strcmp(board612523686, 
"6.532255334...\n"
"55133.1..2....\n"
"736.161436....\n"
"66.6.5..51.425\n"
"7211233655..14\n"
".4557....7....\n"
"2.3...1....6.6\n"
"333.7..41.5...\n"
".7..7..1117.47\n"
"..1.4.....4...\n"
"254.446.......\n") == 0);
free(board612523686);
board612523686 = NULL;
assert( gamma_move(board, 2, 3, 8) == 1 );
assert( gamma_move(board, 3, 10, 12) == 0 );
assert( gamma_move(board, 3, 10, 10) == 0 );
assert( gamma_move(board, 4, 1, 13) == 0 );
assert( gamma_move(board, 4, 7, 1) == 1 );
assert( gamma_move(board, 5, 1, 5) == 0 );
assert( gamma_move(board, 5, 2, 8) == 0 );
assert( gamma_move(board, 6, 11, 4) == 0 );
assert( gamma_move(board, 7, 6, 6) == 0 );
assert( gamma_move(board, 7, 4, 6) == 0 );
assert( gamma_move(board, 1, 12, 2) == 0 );
assert( gamma_move(board, 1, 13, 5) == 1 );
assert( gamma_move(board, 2, 9, 4) == 1 );
assert( gamma_move(board, 2, 10, 5) == 1 );
assert( gamma_move(board, 3, 1, 6) == 0 );
assert( gamma_busy_fields(board, 3) == 13 );
assert( gamma_move(board, 4, 5, 2) == 0 );
assert( gamma_move(board, 4, 6, 7) == 0 );
assert( gamma_golden_move(board, 4, 4, 11) == 0 );
assert( gamma_move(board, 5, 9, 12) == 0 );
assert( gamma_move(board, 6, 4, 1) == 0 );
assert( gamma_move(board, 7, 3, 12) == 0 );
assert( gamma_move(board, 1, 8, 1) == 1 );
assert( gamma_move(board, 2, 4, 7) == 1 );
assert( gamma_move(board, 2, 6, 2) == 1 );
assert( gamma_move(board, 3, 5, 8) == 0 );


char* board522068063 = gamma_board(board);
assert( board522068063 != NULL );
assert( strcmp(board522068063, 
"6.532255334...\n"
"55133.1..2....\n"
"7362161436....\n"
"66.625..51.425\n"
"7211233655..14\n"
".4557....72..1\n"
"2.3...1..2.6.6\n"
"333.7..41.5...\n"
".7..7.21117.47\n"
"..1.4..41.4...\n"
"254.446.......\n") == 0);
free(board522068063);
board522068063 = NULL;
assert( gamma_move(board, 4, 4, 3) == 0 );
assert( gamma_move(board, 4, 9, 3) == 0 );
assert( gamma_move(board, 5, 3, 3) == 1 );
assert( gamma_move(board, 5, 0, 10) == 0 );
assert( gamma_move(board, 6, 1, 6) == 0 );
assert( gamma_move(board, 7, 5, 8) == 0 );
assert( gamma_move(board, 1, 5, 6) == 0 );
assert( gamma_golden_move(board, 1, 10, 9) == 0 );
assert( gamma_move(board, 2, 8, 13) == 0 );
assert( gamma_move(board, 2, 4, 5) == 0 );
assert( gamma_move(board, 3, 6, 9) == 0 );
assert( gamma_busy_fields(board, 3) == 13 );
assert( gamma_move(board, 4, 9, 7) == 0 );
assert( gamma_move(board, 4, 4, 6) == 0 );
assert( gamma_free_fields(board, 4) == 22 );
assert( gamma_move(board, 5, 4, 4) == 1 );
assert( gamma_move(board, 6, 9, 7) == 0 );
assert( gamma_move(board, 7, 8, 4) == 1 );
assert( gamma_move(board, 1, 0, 9) == 0 );
assert( gamma_move(board, 1, 13, 0) == 1 );
assert( gamma_move(board, 3, 6, 11) == 0 );
assert( gamma_move(board, 5, 11, 1) == 0 );
assert( gamma_free_fields(board, 5) == 14 );
assert( gamma_move(board, 6, 5, 5) == 1 );
assert( gamma_move(board, 7, 3, 13) == 0 );
assert( gamma_move(board, 1, 1, 9) == 0 );
assert( gamma_move(board, 1, 1, 2) == 0 );


char* board306798899 = gamma_board(board);
assert( board306798899 != NULL );
assert( strcmp(board306798899, 
"6.532255334...\n"
"55133.1..2....\n"
"7362161436....\n"
"66.625..51.425\n"
"7211233655..14\n"
".45576...72..1\n"
"2.3.5.1.72.6.6\n"
"33357..41.5...\n"
".7..7.21117.47\n"
"..1.4..41.4...\n"
"254.446......1\n") == 0);
free(board306798899);
board306798899 = NULL;
assert( gamma_move(board, 2, 9, 5) == 0 );
assert( gamma_move(board, 3, 12, 5) == 1 );
assert( gamma_move(board, 3, 10, 2) == 0 );
assert( gamma_move(board, 4, 9, 7) == 0 );
assert( gamma_move(board, 4, 9, 8) == 0 );


char* board878205166 = gamma_board(board);
assert( board878205166 != NULL );
assert( strcmp(board878205166, 
"6.532255334...\n"
"55133.1..2....\n"
"7362161436....\n"
"66.625..51.425\n"
"7211233655..14\n"
".45576...72.31\n"
"2.3.5.1.72.6.6\n"
"33357..41.5...\n"
".7..7.21117.47\n"
"..1.4..41.4...\n"
"254.446......1\n") == 0);
free(board878205166);
board878205166 = NULL;
assert( gamma_move(board, 5, 0, 8) == 0 );
assert( gamma_golden_move(board, 5, 3, 4) == 0 );
assert( gamma_move(board, 6, 4, 10) == 0 );
assert( gamma_move(board, 6, 1, 1) == 0 );
assert( gamma_busy_fields(board, 6) == 12 );
assert( gamma_move(board, 7, 13, 10) == 1 );
assert( gamma_move(board, 7, 9, 4) == 0 );
assert( gamma_move(board, 1, 4, 4) == 0 );
assert( gamma_move(board, 2, 6, 11) == 0 );
assert( gamma_move(board, 2, 11, 7) == 0 );
assert( gamma_golden_move(board, 2, 9, 1) == 0 );
assert( gamma_move(board, 3, 5, 0) == 0 );
assert( gamma_busy_fields(board, 3) == 14 );
assert( gamma_move(board, 4, 11, 1) == 1 );
assert( gamma_free_fields(board, 4) == 22 );
assert( gamma_move(board, 5, 5, 3) == 0 );
assert( gamma_free_fields(board, 5) == 14 );
assert( gamma_move(board, 6, 3, 9) == 0 );
assert( gamma_move(board, 6, 10, 5) == 0 );
assert( gamma_move(board, 7, 8, 2) == 0 );
assert( gamma_move(board, 1, 4, 12) == 0 );
assert( gamma_move(board, 1, 4, 7) == 0 );
assert( gamma_free_fields(board, 1) == 18 );
assert( gamma_move(board, 2, 0, 8) == 0 );
assert( gamma_move(board, 3, 11, 3) == 1 );
assert( gamma_move(board, 3, 11, 7) == 0 );
assert( gamma_move(board, 4, 0, 9) == 0 );
assert( gamma_move(board, 4, 13, 7) == 0 );


char* board501177722 = gamma_board(board);
assert( board501177722 != NULL );
assert( strcmp(board501177722, 
"6.532255334..7\n"
"55133.1..2....\n"
"7362161436....\n"
"66.625..51.425\n"
"7211233655..14\n"
".45576...72.31\n"
"2.3.5.1.72.6.6\n"
"33357..41.53..\n"
".7..7.21117.47\n"
"..1.4..41.44..\n"
"254.446......1\n") == 0);
free(board501177722);
board501177722 = NULL;
assert( gamma_move(board, 5, 7, 2) == 0 );
assert( gamma_free_fields(board, 5) == 13 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 0, 3) == 0 );


char* board943559604 = gamma_board(board);
assert( board943559604 != NULL );
assert( strcmp(board943559604, 
"6.532255334..7\n"
"55133.1..2....\n"
"7362161436....\n"
"66.625..51.425\n"
"7211233655..14\n"
".45576...72.31\n"
"2.3.5.1.72.6.6\n"
"33357..41.53..\n"
".7..7.21117.47\n"
"..1.4..41.44..\n"
"254.446......1\n") == 0);
free(board943559604);
board943559604 = NULL;
assert( gamma_move(board, 7, 7, 7) == 1 );
assert( gamma_move(board, 7, 11, 8) == 0 );
assert( gamma_busy_fields(board, 7) == 12 );
assert( gamma_move(board, 1, 1, 6) == 0 );
assert( gamma_move(board, 2, 4, 1) == 0 );
assert( gamma_move(board, 3, 9, 8) == 0 );
assert( gamma_move(board, 3, 13, 10) == 0 );
assert( gamma_move(board, 4, 7, 2) == 0 );
assert( gamma_move(board, 5, 9, 12) == 0 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 7, 2, 2) == 1 );
assert( gamma_move(board, 7, 6, 5) == 0 );
assert( gamma_move(board, 1, 6, 11) == 0 );
assert( gamma_move(board, 2, 4, 1) == 0 );
assert( gamma_move(board, 2, 5, 2) == 1 );
assert( gamma_free_fields(board, 2) == 15 );
assert( gamma_move(board, 3, 4, 2) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 8, 10) == 0 );
assert( gamma_move(board, 5, 10, 12) == 0 );
assert( gamma_move(board, 6, 5, 8) == 0 );
assert( gamma_move(board, 6, 9, 8) == 0 );


char* board362087010 = gamma_board(board);
assert( board362087010 != NULL );
assert( strcmp(board362087010, 
"6.532255334..7\n"
"55133.1..2....\n"
"7362161436....\n"
"66.625.751.425\n"
"7211233655..14\n"
".45576...72.31\n"
"2.3.5.1.72.6.6\n"
"33357..41.53..\n"
".77.7221117.47\n"
"..1.4..41.44..\n"
"254.446......1\n") == 0);
free(board362087010);
board362087010 = NULL;
assert( gamma_move(board, 7, 0, 10) == 0 );
assert( gamma_move(board, 7, 8, 1) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 1, 0, 9) == 0 );
assert( gamma_move(board, 1, 1, 0) == 0 );
assert( gamma_move(board, 2, 5, 4) == 0 );
assert( gamma_busy_fields(board, 2) == 14 );
assert( gamma_move(board, 3, 5, 3) == 1 );
assert( gamma_move(board, 3, 13, 8) == 1 );
assert( gamma_golden_move(board, 3, 0, 4) == 1 );
assert( gamma_move(board, 4, 4, 4) == 0 );
assert( gamma_move(board, 4, 9, 10) == 0 );
assert( gamma_move(board, 5, 6, 10) == 0 );
assert( gamma_move(board, 5, 13, 10) == 0 );
assert( gamma_move(board, 6, 3, 6) == 0 );
assert( gamma_move(board, 6, 1, 1) == 0 );
assert( gamma_move(board, 1, 8, 11) == 0 );
assert( gamma_move(board, 2, 1, 0) == 0 );
assert( gamma_busy_fields(board, 2) == 13 );
assert( gamma_move(board, 3, 4, 12) == 0 );
assert( gamma_busy_fields(board, 3) == 18 );
assert( gamma_move(board, 4, 3, 9) == 0 );
assert( gamma_move(board, 5, 6, 11) == 0 );
assert( gamma_move(board, 6, 1, 0) == 0 );
assert( gamma_move(board, 7, 2, 4) == 0 );
assert( gamma_free_fields(board, 2) == 51 );
assert( gamma_move(board, 3, 8, 10) == 0 );
assert( gamma_move(board, 4, 3, 13) == 0 );
assert( gamma_move(board, 5, 12, 7) == 0 );
assert( gamma_move(board, 5, 2, 6) == 0 );
assert( gamma_move(board, 6, 9, 13) == 0 );
assert( gamma_busy_fields(board, 6) == 12 );
assert( gamma_golden_move(board, 6, 6, 3) == 0 );
assert( gamma_move(board, 7, 8, 12) == 0 );
assert( gamma_golden_move(board, 7, 8, 9) == 0 );
assert( gamma_move(board, 1, 6, 10) == 0 );
assert( gamma_golden_move(board, 1, 8, 2) == 0 );
assert( gamma_move(board, 2, 4, 7) == 0 );
assert( gamma_busy_fields(board, 2) == 13 );
assert( gamma_free_fields(board, 2) == 51 );
assert( gamma_golden_possible(board, 2) == 1 );


char* board324101934 = gamma_board(board);
assert( board324101934 != NULL );
assert( strcmp(board324101934, 
"6.532255334..7\n"
"55133.1..2....\n"
"7362161436...3\n"
"66.625.751.425\n"
"7211233655..14\n"
".45576...72.31\n"
"3.3.5.1.72.6.6\n"
"333573.41.53..\n"
".77.7221117.47\n"
"..1.4..41.44..\n"
"254.446......1\n") == 0);
free(board324101934);
board324101934 = NULL;
assert( gamma_move(board, 3, 9, 7) == 0 );
assert( gamma_move(board, 3, 6, 9) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 7, 10) == 0 );
assert( gamma_busy_fields(board, 4) == 14 );
assert( gamma_move(board, 5, 12, 5) == 0 );
assert( gamma_move(board, 5, 11, 2) == 0 );
assert( gamma_move(board, 6, 2, 5) == 0 );
assert( gamma_busy_fields(board, 6) == 12 );
assert( gamma_move(board, 7, 5, 6) == 0 );
assert( gamma_move(board, 7, 10, 7) == 0 );
assert( gamma_move(board, 2, 4, 10) == 0 );
assert( gamma_move(board, 2, 12, 3) == 1 );
assert( gamma_move(board, 3, 2, 3) == 0 );
assert( gamma_move(board, 3, 6, 2) == 0 );
assert( gamma_golden_move(board, 3, 5, 9) == 0 );
assert( gamma_move(board, 4, 1, 6) == 0 );
assert( gamma_golden_move(board, 4, 6, 9) == 0 );


char* board104218283 = gamma_board(board);
assert( board104218283 != NULL );
assert( strcmp(board104218283, 
"6.532255334..7\n"
"55133.1..2....\n"
"7362161436...3\n"
"66.625.751.425\n"
"7211233655..14\n"
".45576...72.31\n"
"3.3.5.1.72.6.6\n"
"333573.41.532.\n"
".77.7221117.47\n"
"..1.4..41.44..\n"
"254.446......1\n") == 0);
free(board104218283);
board104218283 = NULL;
assert( gamma_move(board, 5, 9, 8) == 0 );
assert( gamma_move(board, 6, 5, 11) == 0 );
assert( gamma_move(board, 6, 9, 1) == 0 );
assert( gamma_busy_fields(board, 6) == 12 );
assert( gamma_move(board, 7, 1, 9) == 0 );
assert( gamma_move(board, 1, 9, 7) == 0 );
assert( gamma_golden_move(board, 1, 3, 3) == 0 );
assert( gamma_move(board, 2, 1, 12) == 0 );
assert( gamma_move(board, 2, 7, 3) == 0 );
assert( gamma_move(board, 3, 5, 7) == 0 );
assert( gamma_move(board, 4, 5, 8) == 0 );
assert( gamma_move(board, 4, 0, 5) == 1 );
assert( gamma_move(board, 5, 3, 10) == 0 );
assert( gamma_busy_fields(board, 5) == 16 );
assert( gamma_move(board, 6, 10, 2) == 0 );
assert( gamma_move(board, 7, 0, 3) == 0 );
assert( gamma_move(board, 1, 4, 5) == 0 );
assert( gamma_move(board, 2, 5, 3) == 0 );


char* board546641433 = gamma_board(board);
assert( board546641433 != NULL );
assert( strcmp(board546641433, 
"6.532255334..7\n"
"55133.1..2....\n"
"7362161436...3\n"
"66.625.751.425\n"
"7211233655..14\n"
"445576...72.31\n"
"3.3.5.1.72.6.6\n"
"333573.41.532.\n"
".77.7221117.47\n"
"..1.4..41.44..\n"
"254.446......1\n") == 0);
free(board546641433);
board546641433 = NULL;
assert( gamma_move(board, 3, 1, 6) == 0 );
assert( gamma_move(board, 4, 9, 3) == 0 );


char* board971196359 = gamma_board(board);
assert( board971196359 != NULL );
assert( strcmp(board971196359, 
"6.532255334..7\n"
"55133.1..2....\n"
"7362161436...3\n"
"66.625.751.425\n"
"7211233655..14\n"
"445576...72.31\n"
"3.3.5.1.72.6.6\n"
"333573.41.532.\n"
".77.7221117.47\n"
"..1.4..41.44..\n"
"254.446......1\n") == 0);
free(board971196359);
board971196359 = NULL;
assert( gamma_move(board, 5, 1, 0) == 0 );
assert( gamma_move(board, 6, 10, 0) == 0 );
assert( gamma_move(board, 6, 3, 3) == 0 );
assert( gamma_move(board, 7, 7, 6) == 0 );
assert( gamma_move(board, 1, 4, 8) == 0 );
assert( gamma_free_fields(board, 1) == 17 );
assert( gamma_move(board, 2, 9, 7) == 0 );
assert( gamma_free_fields(board, 2) == 14 );
assert( gamma_move(board, 3, 13, 7) == 0 );
assert( gamma_move(board, 3, 5, 3) == 0 );
assert( gamma_move(board, 4, 2, 11) == 0 );
assert( gamma_move(board, 4, 3, 2) == 0 );
assert( gamma_move(board, 5, 9, 8) == 0 );
assert( gamma_move(board, 5, 4, 7) == 0 );
assert( gamma_free_fields(board, 5) == 11 );
assert( gamma_move(board, 6, 8, 12) == 0 );
assert( gamma_move(board, 6, 9, 1) == 0 );
assert( gamma_busy_fields(board, 6) == 12 );
assert( gamma_move(board, 7, 1, 13) == 0 );
assert( gamma_move(board, 1, 4, 3) == 0 );


char* board189352688 = gamma_board(board);
assert( board189352688 != NULL );
assert( strcmp(board189352688, 
"6.532255334..7\n"
"55133.1..2....\n"
"7362161436...3\n"
"66.625.751.425\n"
"7211233655..14\n"
"445576...72.31\n"
"3.3.5.1.72.6.6\n"
"333573.41.532.\n"
".77.7221117.47\n"
"..1.4..41.44..\n"
"254.446......1\n") == 0);
free(board189352688);
board189352688 = NULL;
assert( gamma_move(board, 2, 8, 12) == 0 );
assert( gamma_move(board, 3, 5, 7) == 0 );
assert( gamma_move(board, 4, 10, 12) == 0 );
assert( gamma_busy_fields(board, 4) == 15 );
assert( gamma_free_fields(board, 4) == 19 );
assert( gamma_move(board, 5, 1, 0) == 0 );
assert( gamma_golden_move(board, 5, 0, 6) == 0 );
assert( gamma_move(board, 6, 1, 10) == 1 );
assert( gamma_move(board, 7, 4, 10) == 0 );
assert( gamma_move(board, 7, 2, 8) == 0 );
assert( gamma_move(board, 1, 1, 1) == 1 );
assert( gamma_move(board, 1, 2, 0) == 0 );
assert( gamma_busy_fields(board, 1) == 18 );
assert( gamma_move(board, 2, 9, 7) == 0 );
assert( gamma_move(board, 2, 5, 3) == 0 );
assert( gamma_move(board, 3, 9, 8) == 0 );
assert( gamma_move(board, 3, 1, 9) == 0 );
assert( gamma_golden_move(board, 4, 7, 1) == 0 );
assert( gamma_move(board, 5, 3, 6) == 0 );
assert( gamma_move(board, 5, 11, 8) == 0 );


char* board266742200 = gamma_board(board);
assert( board266742200 != NULL );
assert( strcmp(board266742200, 
"66532255334..7\n"
"55133.1..2....\n"
"7362161436...3\n"
"66.625.751.425\n"
"7211233655..14\n"
"445576...72.31\n"
"3.3.5.1.72.6.6\n"
"333573.41.532.\n"
".77.7221117.47\n"
".11.4..41.44..\n"
"254.446......1\n") == 0);
free(board266742200);
board266742200 = NULL;
assert( gamma_move(board, 6, 4, 10) == 0 );
assert( gamma_move(board, 6, 5, 0) == 0 );
assert( gamma_golden_possible(board, 6) == 0 );
assert( gamma_move(board, 7, 8, 10) == 0 );
assert( gamma_move(board, 7, 5, 9) == 0 );
assert( gamma_move(board, 1, 0, 7) == 0 );
assert( gamma_move(board, 2, 2, 3) == 0 );
assert( gamma_move(board, 2, 1, 9) == 0 );
assert( gamma_move(board, 3, 1, 3) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_golden_move(board, 4, 7, 1) == 0 );
assert( gamma_move(board, 5, 2, 3) == 0 );
assert( gamma_move(board, 5, 13, 3) == 0 );
assert( gamma_move(board, 7, 2, 3) == 0 );
assert( gamma_busy_fields(board, 7) == 13 );
assert( gamma_golden_move(board, 7, 4, 2) == 0 );
assert( gamma_move(board, 1, 7, 10) == 0 );
assert( gamma_move(board, 2, 9, 5) == 0 );
assert( gamma_move(board, 2, 13, 9) == 0 );
assert( gamma_free_fields(board, 2) == 14 );
assert( gamma_golden_move(board, 2, 10, 10) == 0 );
assert( gamma_move(board, 3, 4, 5) == 0 );
assert( gamma_move(board, 3, 3, 10) == 0 );
assert( gamma_move(board, 4, 1, 6) == 0 );
assert( gamma_move(board, 4, 10, 10) == 0 );
assert( gamma_move(board, 5, 4, 7) == 0 );
assert( gamma_move(board, 5, 12, 1) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 2, 2) == 0 );
assert( gamma_move(board, 1, 9, 7) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 7, 1) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 3, 0) == 1 );
assert( gamma_move(board, 4, 9, 10) == 0 );
assert( gamma_move(board, 5, 4, 3) == 0 );
assert( gamma_free_fields(board, 5) == 9 );
assert( gamma_move(board, 6, 9, 8) == 0 );
assert( gamma_move(board, 7, 2, 6) == 0 );
assert( gamma_move(board, 7, 13, 5) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 1, 0, 11) == 0 );
assert( gamma_move(board, 2, 3, 6) == 0 );
assert( gamma_move(board, 2, 2, 2) == 0 );
assert( gamma_move(board, 3, 9, 12) == 0 );
assert( gamma_move(board, 3, 11, 1) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 4, 5) == 0 );
assert( gamma_move(board, 5, 6, 3) == 0 );
assert( gamma_move(board, 5, 4, 1) == 0 );
assert( gamma_free_fields(board, 5) == 9 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 0, 7) == 0 );
assert( gamma_move(board, 6, 0, 9) == 0 );
assert( gamma_free_fields(board, 6) == 12 );
assert( gamma_move(board, 7, 8, 4) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 1, 1, 5) == 0 );
assert( gamma_move(board, 2, 0, 9) == 0 );
assert( gamma_move(board, 2, 2, 7) == 0 );
assert( gamma_move(board, 3, 5, 9) == 1 );


char* board626674314 = gamma_board(board);
assert( board626674314 != NULL );
assert( strcmp(board626674314, 
"66532255334..7\n"
"5513331..2....\n"
"7362161436...3\n"
"66.625.751.425\n"
"7211233655..14\n"
"445576...72.31\n"
"3.3.5.1.72.6.6\n"
"333573.41.532.\n"
".77.7221117.47\n"
".11.4..41.44..\n"
"2543446......1\n") == 0);
free(board626674314);
board626674314 = NULL;
assert( gamma_move(board, 4, 5, 11) == 0 );
assert( gamma_move(board, 4, 2, 4) == 0 );


char* board672766053 = gamma_board(board);
assert( board672766053 != NULL );
assert( strcmp(board672766053, 
"66532255334..7\n"
"5513331..2....\n"
"7362161436...3\n"
"66.625.751.425\n"
"7211233655..14\n"
"445576...72.31\n"
"3.3.5.1.72.6.6\n"
"333573.41.532.\n"
".77.7221117.47\n"
".11.4..41.44..\n"
"2543446......1\n") == 0);
free(board672766053);
board672766053 = NULL;
assert( gamma_move(board, 5, 3, 13) == 0 );
assert( gamma_move(board, 5, 13, 6) == 0 );
assert( gamma_move(board, 6, 2, 3) == 0 );
assert( gamma_move(board, 7, 8, 4) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 1, 5, 8) == 0 );


char* board874200398 = gamma_board(board);
assert( board874200398 != NULL );
assert( strcmp(board874200398, 
"66532255334..7\n"
"5513331..2....\n"
"7362161436...3\n"
"66.625.751.425\n"
"7211233655..14\n"
"445576...72.31\n"
"3.3.5.1.72.6.6\n"
"333573.41.532.\n"
".77.7221117.47\n"
".11.4..41.44..\n"
"2543446......1\n") == 0);
free(board874200398);
board874200398 = NULL;
assert( gamma_move(board, 2, 4, 10) == 0 );
assert( gamma_move(board, 2, 12, 5) == 0 );
assert( gamma_move(board, 3, 10, 12) == 0 );
assert( gamma_move(board, 3, 1, 1) == 0 );
assert( gamma_move(board, 4, 2, 3) == 0 );
assert( gamma_move(board, 5, 8, 11) == 0 );
assert( gamma_move(board, 6, 1, 9) == 0 );
assert( gamma_move(board, 6, 10, 8) == 1 );
assert( gamma_busy_fields(board, 6) == 14 );
assert( gamma_move(board, 1, 4, 3) == 0 );
assert( gamma_move(board, 1, 7, 7) == 0 );
assert( gamma_move(board, 2, 8, 11) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 9, 13) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 8, 4) == 0 );


char* board688339610 = gamma_board(board);
assert( board688339610 != NULL );
assert( strcmp(board688339610, 
"66532255334..7\n"
"5513331..2....\n"
"73621614366..3\n"
"66.625.751.425\n"
"7211233655..14\n"
"445576...72.31\n"
"3.3.5.1.72.6.6\n"
"333573.41.532.\n"
".77.7221117.47\n"
".11.4..41.44..\n"
"2543446......1\n") == 0);
free(board688339610);
board688339610 = NULL;
assert( gamma_move(board, 5, 2, 0) == 0 );
assert( gamma_move(board, 5, 10, 5) == 0 );
assert( gamma_move(board, 6, 9, 6) == 0 );
assert( gamma_move(board, 7, 9, 8) == 0 );
assert( gamma_move(board, 7, 8, 5) == 1 );
assert( gamma_move(board, 1, 1, 10) == 0 );
assert( gamma_move(board, 2, 2, 10) == 0 );
assert( gamma_move(board, 3, 1, 6) == 0 );
assert( gamma_move(board, 3, 4, 3) == 0 );
assert( gamma_move(board, 4, 8, 8) == 0 );
assert( gamma_move(board, 4, 4, 6) == 0 );
assert( gamma_move(board, 5, 0, 11) == 0 );
assert( gamma_move(board, 6, 4, 12) == 0 );


char* board408925364 = gamma_board(board);
assert( board408925364 != NULL );
assert( strcmp(board408925364, 
"66532255334..7\n"
"5513331..2....\n"
"73621614366..3\n"
"66.625.751.425\n"
"7211233655..14\n"
"445576..772.31\n"
"3.3.5.1.72.6.6\n"
"333573.41.532.\n"
".77.7221117.47\n"
".11.4..41.44..\n"
"2543446......1\n") == 0);
free(board408925364);
board408925364 = NULL;
assert( gamma_move(board, 7, 9, 7) == 0 );
assert( gamma_move(board, 7, 11, 8) == 1 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 1, 1, 3) == 0 );
assert( gamma_move(board, 1, 3, 9) == 0 );
assert( gamma_move(board, 2, 9, 3) == 1 );
assert( gamma_move(board, 2, 1, 5) == 0 );
assert( gamma_free_fields(board, 2) == 12 );
assert( gamma_move(board, 3, 7, 6) == 0 );
assert( gamma_move(board, 3, 13, 3) == 0 );
assert( gamma_free_fields(board, 4) == 17 );


char* board599306827 = gamma_board(board);
assert( board599306827 != NULL );
assert( strcmp(board599306827, 
"66532255334..7\n"
"5513331..2....\n"
"736216143667.3\n"
"66.625.751.425\n"
"7211233655..14\n"
"445576..772.31\n"
"3.3.5.1.72.6.6\n"
"333573.412532.\n"
".77.7221117.47\n"
".11.4..41.44..\n"
"2543446......1\n") == 0);
free(board599306827);
board599306827 = NULL;
assert( gamma_move(board, 5, 4, 3) == 0 );
assert( gamma_move(board, 6, 0, 6) == 0 );
assert( gamma_free_fields(board, 6) == 12 );
assert( gamma_move(board, 7, 13, 8) == 0 );


gamma_delete(board);

    return 0;
}
