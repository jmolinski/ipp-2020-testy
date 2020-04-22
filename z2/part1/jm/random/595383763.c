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
uuid: 595383763
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(12, 9, 9, 14);
assert( board != NULL );


assert( gamma_move(board, 1, 9, 0) == 1 );
assert( gamma_move(board, 1, 5, 2) == 1 );
assert( gamma_move(board, 2, 4, 8) == 1 );
assert( gamma_move(board, 2, 10, 3) == 1 );
assert( gamma_move(board, 3, 6, 10) == 0 );
assert( gamma_move(board, 3, 0, 6) == 1 );
assert( gamma_move(board, 4, 2, 1) == 1 );
assert( gamma_move(board, 4, 0, 1) == 1 );
assert( gamma_move(board, 5, 5, 7) == 1 );
assert( gamma_move(board, 6, 4, 2) == 1 );
assert( gamma_move(board, 6, 7, 8) == 1 );
assert( gamma_move(board, 7, 10, 7) == 1 );
assert( gamma_golden_move(board, 7, 2, 4) == 0 );
assert( gamma_move(board, 8, 2, 7) == 1 );
assert( gamma_move(board, 8, 2, 8) == 1 );
assert( gamma_move(board, 9, 0, 7) == 1 );
assert( gamma_move(board, 9, 11, 7) == 1 );
assert( gamma_move(board, 1, 7, 9) == 0 );
assert( gamma_free_fields(board, 1) == 93 );


char* board969000311 = gamma_board(board);
assert( board969000311 != NULL );
assert( strcmp(board969000311, 
"..8.2..6....\n"
"9.8..5....79\n"
"3...........\n"
"............\n"
"............\n"
"..........2.\n"
"....61......\n"
"4.4.........\n"
".........1..\n") == 0);
free(board969000311);
board969000311 = NULL;
assert( gamma_move(board, 2, 6, 5) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 8, 5) == 1 );
assert( gamma_move(board, 3, 5, 5) == 1 );
assert( gamma_busy_fields(board, 3) == 3 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_golden_move(board, 4, 7, 2) == 0 );


char* board464727232 = gamma_board(board);
assert( board464727232 != NULL );
assert( strcmp(board464727232, 
"..8.2..6....\n"
"9.8..5....79\n"
"3...........\n"
".....32.3...\n"
"............\n"
"..........2.\n"
"....61......\n"
"4.4.........\n"
".........1..\n") == 0);
free(board464727232);
board464727232 = NULL;
assert( gamma_move(board, 5, 8, 10) == 0 );
assert( gamma_busy_fields(board, 5) == 1 );
assert( gamma_move(board, 6, 5, 11) == 0 );
assert( gamma_move(board, 6, 11, 5) == 1 );
assert( gamma_move(board, 7, 4, 9) == 0 );
assert( gamma_move(board, 8, 11, 2) == 1 );
assert( gamma_move(board, 8, 1, 1) == 1 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_move(board, 9, 1, 7) == 1 );


char* board523795859 = gamma_board(board);
assert( board523795859 != NULL );
assert( strcmp(board523795859, 
"..8.2..6....\n"
"998..5....79\n"
"3...........\n"
".....32.3..6\n"
"............\n"
"..........2.\n"
"....61.....8\n"
"484.........\n"
".........1..\n") == 0);
free(board523795859);
board523795859 = NULL;
assert( gamma_move(board, 1, 2, 3) == 1 );


char* board158131551 = gamma_board(board);
assert( board158131551 != NULL );
assert( strcmp(board158131551, 
"..8.2..6....\n"
"998..5....79\n"
"3...........\n"
".....32.3..6\n"
"............\n"
"..1.......2.\n"
"....61.....8\n"
"484.........\n"
".........1..\n") == 0);
free(board158131551);
board158131551 = NULL;
assert( gamma_move(board, 2, 4, 9) == 0 );
assert( gamma_busy_fields(board, 2) == 3 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 6, 5) == 0 );
assert( gamma_move(board, 4, 2, 1) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 7, 4) == 1 );
assert( gamma_move(board, 6, 9, 4) == 1 );
assert( gamma_move(board, 6, 2, 4) == 1 );
assert( gamma_free_fields(board, 6) == 82 );
assert( gamma_move(board, 7, 2, 8) == 0 );
assert( gamma_move(board, 8, 7, 7) == 1 );
assert( gamma_move(board, 8, 7, 2) == 1 );


char* board537639627 = gamma_board(board);
assert( board537639627 != NULL );
assert( strcmp(board537639627, 
"..8.2..6....\n"
"998..5.8..79\n"
"3...........\n"
".....32.3..6\n"
"..6....5.6..\n"
"..1.......2.\n"
"....61.8...8\n"
"484.........\n"
".........1..\n") == 0);
free(board537639627);
board537639627 = NULL;
assert( gamma_move(board, 9, 10, 1) == 1 );
assert( gamma_move(board, 9, 6, 4) == 1 );
assert( gamma_busy_fields(board, 9) == 5 );
assert( gamma_move(board, 1, 3, 7) == 1 );
assert( gamma_move(board, 2, 0, 3) == 1 );
assert( gamma_move(board, 2, 8, 7) == 1 );
assert( gamma_move(board, 3, 6, 11) == 0 );
assert( gamma_move(board, 3, 6, 7) == 1 );
assert( gamma_move(board, 4, 2, 10) == 0 );
assert( gamma_move(board, 5, 1, 7) == 0 );
assert( gamma_move(board, 5, 10, 6) == 1 );
assert( gamma_busy_fields(board, 5) == 3 );
assert( gamma_free_fields(board, 5) == 73 );
assert( gamma_move(board, 6, 8, 6) == 1 );
assert( gamma_move(board, 7, 11, 1) == 1 );
assert( gamma_move(board, 8, 3, 1) == 1 );
assert( gamma_move(board, 9, 8, 1) == 1 );
assert( gamma_move(board, 9, 2, 2) == 1 );
assert( gamma_move(board, 1, 4, 7) == 1 );
assert( gamma_move(board, 1, 11, 1) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_free_fields(board, 2) == 67 );
assert( gamma_move(board, 3, 6, 2) == 1 );
assert( gamma_move(board, 4, 4, 5) == 1 );
assert( gamma_move(board, 5, 11, 6) == 1 );
assert( gamma_move(board, 5, 11, 1) == 0 );
assert( gamma_busy_fields(board, 5) == 4 );
assert( gamma_move(board, 6, 11, 7) == 0 );
assert( gamma_move(board, 7, 2, 9) == 0 );
assert( gamma_move(board, 7, 0, 7) == 0 );
assert( gamma_golden_possible(board, 7) == 1 );
assert( gamma_move(board, 9, 4, 4) == 1 );
assert( gamma_move(board, 9, 2, 0) == 1 );
assert( gamma_move(board, 1, 2, 2) == 0 );
assert( gamma_move(board, 1, 11, 1) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 5, 7) == 0 );
assert( gamma_move(board, 2, 9, 3) == 1 );
assert( gamma_free_fields(board, 2) == 61 );
assert( gamma_move(board, 3, 4, 11) == 0 );
assert( gamma_move(board, 3, 1, 3) == 1 );
assert( gamma_busy_fields(board, 3) == 6 );


char* board696780026 = gamma_board(board);
assert( board696780026 != NULL );
assert( strcmp(board696780026, 
"..8.2..6....\n"
"998115382.79\n"
"3.......6.55\n"
"....432.3..6\n"
"..6.9.95.6..\n"
"231......22.\n"
"..9.6138...8\n"
"4848....9.97\n"
"..9......1..\n") == 0);
free(board696780026);
board696780026 = NULL;
assert( gamma_move(board, 4, 3, 4) == 1 );
assert( gamma_move(board, 4, 10, 6) == 0 );
assert( gamma_move(board, 5, 9, 2) == 1 );
assert( gamma_golden_move(board, 5, 7, 0) == 0 );
assert( gamma_move(board, 6, 2, 3) == 0 );
assert( gamma_busy_fields(board, 6) == 6 );
assert( gamma_move(board, 7, 4, 5) == 0 );
assert( gamma_move(board, 8, 8, 0) == 1 );
assert( gamma_move(board, 8, 10, 0) == 1 );
assert( gamma_move(board, 9, 2, 1) == 0 );
assert( gamma_move(board, 9, 11, 6) == 0 );
assert( gamma_move(board, 1, 8, 1) == 0 );
assert( gamma_move(board, 2, 5, 3) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 2, 1) == 0 );
assert( gamma_move(board, 3, 2, 6) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 8, 5) == 0 );
assert( gamma_move(board, 5, 0, 11) == 0 );
assert( gamma_move(board, 5, 7, 3) == 1 );
assert( gamma_move(board, 6, 8, 5) == 0 );
assert( gamma_move(board, 6, 8, 4) == 1 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 8, 9) == 0 );
assert( gamma_move(board, 7, 5, 1) == 1 );
assert( gamma_move(board, 8, 9, 1) == 1 );
assert( gamma_move(board, 9, 0, 6) == 0 );
assert( gamma_free_fields(board, 9) == 50 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_move(board, 1, 6, 3) == 1 );
assert( gamma_move(board, 2, 4, 1) == 1 );
assert( gamma_move(board, 3, 7, 9) == 0 );
assert( gamma_move(board, 3, 9, 2) == 0 );
assert( gamma_move(board, 4, 1, 7) == 0 );
assert( gamma_move(board, 5, 0, 3) == 0 );
assert( gamma_busy_fields(board, 5) == 6 );
assert( gamma_move(board, 6, 7, 1) == 1 );
assert( gamma_move(board, 7, 10, 8) == 1 );
assert( gamma_move(board, 7, 9, 5) == 1 );
assert( gamma_busy_fields(board, 7) == 5 );
assert( gamma_golden_move(board, 7, 4, 7) == 1 );
assert( gamma_move(board, 8, 3, 8) == 1 );
assert( gamma_move(board, 8, 7, 1) == 0 );
assert( gamma_move(board, 9, 6, 6) == 1 );
assert( gamma_move(board, 2, 8, 5) == 0 );
assert( gamma_move(board, 2, 8, 7) == 0 );
assert( gamma_move(board, 3, 11, 4) == 1 );
assert( gamma_move(board, 3, 11, 8) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 5, 7) == 0 );
assert( gamma_move(board, 4, 4, 5) == 0 );
assert( gamma_free_fields(board, 4) == 41 );
assert( gamma_move(board, 5, 4, 0) == 1 );
assert( gamma_free_fields(board, 5) == 40 );
assert( gamma_move(board, 6, 4, 10) == 0 );
assert( gamma_move(board, 6, 2, 3) == 0 );
assert( gamma_move(board, 7, 3, 11) == 0 );
assert( gamma_move(board, 7, 3, 4) == 0 );
assert( gamma_move(board, 8, 4, 5) == 0 );
assert( gamma_move(board, 9, 9, 8) == 1 );
assert( gamma_move(board, 9, 4, 1) == 0 );
assert( gamma_free_fields(board, 9) == 39 );
assert( gamma_move(board, 1, 8, 8) == 1 );
assert( gamma_move(board, 2, 6, 5) == 0 );
assert( gamma_move(board, 2, 0, 8) == 1 );
assert( gamma_move(board, 3, 11, 4) == 0 );
assert( gamma_free_fields(board, 3) == 37 );
assert( gamma_move(board, 4, 0, 1) == 0 );
assert( gamma_move(board, 4, 5, 8) == 1 );
assert( gamma_move(board, 5, 4, 0) == 0 );
assert( gamma_move(board, 5, 4, 0) == 0 );
assert( gamma_move(board, 6, 6, 5) == 0 );
assert( gamma_move(board, 6, 7, 5) == 1 );
assert( gamma_move(board, 7, 6, 3) == 0 );
assert( gamma_move(board, 8, 8, 6) == 0 );
assert( gamma_golden_possible(board, 8) == 1 );
assert( gamma_golden_move(board, 8, 5, 8) == 1 );
assert( gamma_move(board, 9, 0, 5) == 1 );
assert( gamma_golden_possible(board, 9) == 1 );
assert( gamma_golden_move(board, 9, 5, 8) == 1 );
assert( gamma_move(board, 1, 4, 5) == 0 );
assert( gamma_move(board, 1, 6, 6) == 0 );
assert( gamma_move(board, 2, 0, 7) == 0 );
assert( gamma_move(board, 3, 2, 1) == 0 );
assert( gamma_move(board, 3, 11, 5) == 0 );
assert( gamma_move(board, 4, 6, 7) == 0 );
assert( gamma_move(board, 4, 9, 5) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 0, 3) == 0 );
assert( gamma_move(board, 7, 0, 0) == 1 );
assert( gamma_free_fields(board, 7) == 33 );
assert( gamma_move(board, 8, 7, 9) == 0 );
assert( gamma_free_fields(board, 8) == 33 );
assert( gamma_golden_move(board, 8, 2, 2) == 0 );
assert( gamma_move(board, 9, 5, 3) == 0 );
assert( gamma_move(board, 9, 7, 2) == 0 );
assert( gamma_free_fields(board, 9) == 33 );
assert( gamma_golden_move(board, 9, 8, 8) == 0 );
assert( gamma_move(board, 1, 2, 8) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 3, 3) == 1 );
assert( gamma_move(board, 2, 7, 7) == 0 );
assert( gamma_busy_fields(board, 2) == 10 );
assert( gamma_move(board, 3, 0, 6) == 0 );
assert( gamma_busy_fields(board, 3) == 9 );
assert( gamma_free_fields(board, 3) == 32 );
assert( gamma_move(board, 4, 4, 3) == 1 );
assert( gamma_move(board, 5, 4, 1) == 0 );
assert( gamma_move(board, 5, 6, 5) == 0 );
assert( gamma_move(board, 6, 5, 3) == 0 );
assert( gamma_move(board, 7, 5, 3) == 0 );
assert( gamma_move(board, 8, 4, 0) == 0 );
assert( gamma_move(board, 8, 3, 7) == 0 );
assert( gamma_move(board, 9, 0, 7) == 0 );
assert( gamma_move(board, 9, 8, 8) == 0 );
assert( gamma_free_fields(board, 9) == 31 );
assert( gamma_move(board, 1, 5, 2) == 0 );
assert( gamma_busy_fields(board, 1) == 6 );
assert( gamma_move(board, 2, 7, 9) == 0 );
assert( gamma_move(board, 2, 9, 8) == 0 );
assert( gamma_move(board, 4, 10, 7) == 0 );
assert( gamma_move(board, 5, 5, 3) == 0 );
assert( gamma_busy_fields(board, 5) == 7 );
assert( gamma_move(board, 6, 5, 3) == 0 );
assert( gamma_move(board, 6, 3, 4) == 0 );
assert( gamma_move(board, 7, 5, 3) == 0 );
assert( gamma_move(board, 7, 11, 6) == 0 );
assert( gamma_busy_fields(board, 7) == 7 );
assert( gamma_move(board, 8, 0, 1) == 0 );
assert( gamma_move(board, 8, 8, 2) == 1 );
assert( gamma_move(board, 9, 8, 6) == 0 );
assert( gamma_move(board, 1, 8, 4) == 0 );
assert( gamma_move(board, 2, 0, 11) == 0 );
assert( gamma_move(board, 2, 7, 8) == 0 );
assert( gamma_move(board, 3, 0, 3) == 0 );
assert( gamma_move(board, 4, 6, 4) == 0 );
assert( gamma_move(board, 5, 3, 2) == 1 );
assert( gamma_move(board, 5, 4, 4) == 0 );


char* board130930965 = gamma_board(board);
assert( board130930965 != NULL );
assert( strcmp(board130930965, 
"2.8829.61973\n"
"998175382.79\n"
"3.3...9.6.55\n"
"9...432637.6\n"
"..649.9566.3\n"
"23124215.22.\n"
"..95613885.8\n"
"484827.69897\n"
"7.9.5...818.\n") == 0);
free(board130930965);
board130930965 = NULL;
assert( gamma_move(board, 6, 3, 8) == 0 );
assert( gamma_move(board, 7, 2, 0) == 0 );
assert( gamma_move(board, 7, 9, 5) == 0 );
assert( gamma_move(board, 8, 7, 9) == 0 );
assert( gamma_move(board, 9, 10, 1) == 0 );
assert( gamma_move(board, 9, 8, 5) == 0 );
assert( gamma_move(board, 1, 0, 5) == 0 );
assert( gamma_move(board, 2, 7, 2) == 0 );
assert( gamma_move(board, 2, 4, 1) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 10, 3) == 0 );
assert( gamma_busy_fields(board, 3) == 9 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 0, 11) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 6, 4) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 6, 5) == 0 );
assert( gamma_move(board, 6, 5, 2) == 0 );
assert( gamma_free_fields(board, 6) == 29 );
assert( gamma_move(board, 7, 7, 1) == 0 );
assert( gamma_move(board, 7, 0, 5) == 0 );
assert( gamma_move(board, 8, 6, 1) == 1 );
assert( gamma_move(board, 8, 3, 4) == 0 );
assert( gamma_golden_possible(board, 8) == 0 );
assert( gamma_move(board, 9, 4, 0) == 0 );
assert( gamma_move(board, 1, 6, 5) == 0 );
assert( gamma_move(board, 2, 6, 7) == 0 );
assert( gamma_move(board, 2, 3, 7) == 0 );
assert( gamma_move(board, 3, 7, 5) == 0 );
assert( gamma_move(board, 4, 3, 11) == 0 );
assert( gamma_move(board, 4, 10, 1) == 0 );
assert( gamma_move(board, 5, 3, 8) == 0 );
assert( gamma_move(board, 5, 2, 3) == 0 );
assert( gamma_busy_fields(board, 5) == 8 );


char* board117280253 = gamma_board(board);
assert( board117280253 != NULL );
assert( strcmp(board117280253, 
"2.8829.61973\n"
"998175382.79\n"
"3.3...9.6.55\n"
"9...432637.6\n"
"..649.9566.3\n"
"23124215.22.\n"
"..95613885.8\n"
"484827869897\n"
"7.9.5...818.\n") == 0);
free(board117280253);
board117280253 = NULL;
assert( gamma_move(board, 6, 2, 8) == 0 );
assert( gamma_move(board, 6, 11, 5) == 0 );
assert( gamma_move(board, 7, 1, 6) == 1 );
assert( gamma_move(board, 7, 6, 1) == 0 );
assert( gamma_free_fields(board, 7) == 27 );
assert( gamma_move(board, 8, 2, 1) == 0 );
assert( gamma_move(board, 8, 5, 6) == 1 );
assert( gamma_move(board, 9, 9, 0) == 0 );
assert( gamma_move(board, 1, 2, 0) == 0 );
assert( gamma_move(board, 1, 5, 8) == 0 );
assert( gamma_busy_fields(board, 1) == 6 );
assert( gamma_move(board, 2, 7, 9) == 0 );
assert( gamma_move(board, 3, 1, 7) == 0 );
assert( gamma_move(board, 3, 1, 7) == 0 );
assert( gamma_move(board, 4, 5, 3) == 0 );
assert( gamma_move(board, 4, 1, 3) == 0 );
assert( gamma_move(board, 5, 6, 3) == 0 );
assert( gamma_move(board, 6, 5, 10) == 0 );
assert( gamma_free_fields(board, 6) == 26 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 7, 1, 4) == 1 );
assert( gamma_move(board, 7, 2, 2) == 0 );
assert( gamma_free_fields(board, 7) == 25 );
assert( gamma_move(board, 8, 2, 6) == 0 );
assert( gamma_move(board, 8, 6, 2) == 0 );
assert( gamma_move(board, 9, 5, 2) == 0 );
assert( gamma_move(board, 9, 8, 3) == 1 );
assert( gamma_move(board, 1, 1, 3) == 0 );
assert( gamma_move(board, 2, 2, 4) == 0 );
assert( gamma_move(board, 2, 0, 1) == 0 );
assert( gamma_busy_fields(board, 2) == 10 );
assert( gamma_move(board, 3, 4, 10) == 0 );
assert( gamma_golden_move(board, 3, 1, 4) == 1 );


char* board546349686 = gamma_board(board);
assert( board546349686 != NULL );
assert( strcmp(board546349686, 
"2.8829.61973\n"
"998175382.79\n"
"373..89.6.55\n"
"9...432637.6\n"
".3649.9566.3\n"
"23124215922.\n"
"..95613885.8\n"
"484827869897\n"
"7.9.5...818.\n") == 0);
free(board546349686);
board546349686 = NULL;
assert( gamma_move(board, 4, 6, 9) == 0 );
assert( gamma_move(board, 4, 6, 1) == 0 );
assert( gamma_move(board, 5, 5, 3) == 0 );
assert( gamma_move(board, 5, 11, 0) == 1 );
assert( gamma_golden_move(board, 5, 5, 7) == 0 );
assert( gamma_move(board, 6, 2, 1) == 0 );
assert( gamma_move(board, 6, 5, 8) == 0 );
assert( gamma_move(board, 7, 4, 5) == 0 );
assert( gamma_move(board, 7, 0, 4) == 1 );
assert( gamma_free_fields(board, 7) == 22 );
assert( gamma_move(board, 8, 9, 7) == 1 );
assert( gamma_move(board, 8, 7, 5) == 0 );
assert( gamma_golden_move(board, 8, 7, 3) == 0 );


char* board859035335 = gamma_board(board);
assert( board859035335 != NULL );
assert( strcmp(board859035335, 
"2.8829.61973\n"
"998175382879\n"
"373..89.6.55\n"
"9...432637.6\n"
"73649.9566.3\n"
"23124215922.\n"
"..95613885.8\n"
"484827869897\n"
"7.9.5...8185\n") == 0);
free(board859035335);
board859035335 = NULL;
assert( gamma_move(board, 9, 0, 3) == 0 );
assert( gamma_move(board, 9, 2, 7) == 0 );
assert( gamma_move(board, 1, 5, 3) == 0 );
assert( gamma_move(board, 1, 0, 7) == 0 );
assert( gamma_move(board, 3, 6, 3) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 6, 7) == 0 );
assert( gamma_move(board, 5, 9, 1) == 0 );
assert( gamma_move(board, 5, 2, 8) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 4, 6) == 1 );
assert( gamma_move(board, 6, 5, 2) == 0 );
assert( gamma_move(board, 7, 10, 1) == 0 );
assert( gamma_move(board, 8, 0, 3) == 0 );
assert( gamma_move(board, 8, 2, 0) == 0 );
assert( gamma_move(board, 9, 6, 6) == 0 );
assert( gamma_golden_move(board, 9, 3, 3) == 0 );
assert( gamma_move(board, 1, 7, 2) == 0 );
assert( gamma_move(board, 1, 6, 4) == 0 );


char* board837548301 = gamma_board(board);
assert( board837548301 != NULL );
assert( strcmp(board837548301, 
"2.8829.61973\n"
"998175382879\n"
"373.689.6.55\n"
"9...432637.6\n"
"73649.9566.3\n"
"23124215922.\n"
"..95613885.8\n"
"484827869897\n"
"7.9.5...8185\n") == 0);
free(board837548301);
board837548301 = NULL;
assert( gamma_move(board, 2, 8, 1) == 0 );
assert( gamma_move(board, 3, 0, 3) == 0 );
assert( gamma_golden_move(board, 3, 6, 6) == 0 );
assert( gamma_move(board, 4, 2, 0) == 0 );
assert( gamma_move(board, 4, 9, 7) == 0 );
assert( gamma_move(board, 5, 6, 3) == 0 );
assert( gamma_move(board, 5, 4, 3) == 0 );
assert( gamma_move(board, 6, 0, 3) == 0 );
assert( gamma_move(board, 7, 6, 3) == 0 );
assert( gamma_move(board, 8, 5, 1) == 0 );
assert( gamma_free_fields(board, 8) == 20 );
assert( gamma_busy_fields(board, 9) == 14 );
assert( gamma_golden_move(board, 9, 3, 4) == 0 );
assert( gamma_move(board, 1, 4, 10) == 0 );
assert( gamma_move(board, 2, 7, 8) == 0 );
assert( gamma_move(board, 4, 11, 6) == 0 );
assert( gamma_move(board, 4, 4, 4) == 0 );
assert( gamma_move(board, 5, 6, 7) == 0 );
assert( gamma_move(board, 6, 5, 1) == 0 );
assert( gamma_move(board, 7, 0, 1) == 0 );
assert( gamma_move(board, 7, 5, 0) == 1 );
assert( gamma_move(board, 8, 11, 8) == 0 );
assert( gamma_move(board, 8, 2, 6) == 0 );
assert( gamma_move(board, 9, 3, 11) == 0 );
assert( gamma_move(board, 9, 9, 1) == 0 );
assert( gamma_move(board, 2, 0, 3) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 8, 1) == 0 );
assert( gamma_golden_move(board, 4, 8, 7) == 1 );
assert( gamma_move(board, 5, 6, 9) == 0 );
assert( gamma_move(board, 6, 8, 6) == 0 );
assert( gamma_move(board, 6, 1, 7) == 0 );
assert( gamma_free_fields(board, 6) == 19 );
assert( gamma_move(board, 7, 0, 1) == 0 );
assert( gamma_free_fields(board, 7) == 19 );
assert( gamma_move(board, 8, 6, 3) == 0 );
assert( gamma_move(board, 9, 5, 3) == 0 );
assert( gamma_move(board, 1, 2, 1) == 0 );
assert( gamma_move(board, 1, 11, 7) == 0 );
assert( gamma_move(board, 2, 6, 6) == 0 );
assert( gamma_move(board, 2, 8, 2) == 0 );
assert( gamma_move(board, 3, 5, 5) == 0 );
assert( gamma_move(board, 3, 5, 3) == 0 );
assert( gamma_free_fields(board, 3) == 19 );
assert( gamma_move(board, 4, 6, 9) == 0 );
assert( gamma_move(board, 4, 2, 0) == 0 );
assert( gamma_move(board, 5, 0, 7) == 0 );
assert( gamma_move(board, 6, 0, 6) == 0 );
assert( gamma_move(board, 7, 2, 1) == 0 );
assert( gamma_move(board, 8, 6, 7) == 0 );
assert( gamma_move(board, 9, 6, 7) == 0 );
assert( gamma_move(board, 2, 4, 10) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 11, 7) == 0 );
assert( gamma_move(board, 3, 0, 0) == 0 );
assert( gamma_move(board, 4, 6, 9) == 0 );
assert( gamma_move(board, 4, 8, 4) == 0 );
assert( gamma_move(board, 5, 6, 7) == 0 );
assert( gamma_move(board, 6, 2, 1) == 0 );
assert( gamma_move(board, 7, 6, 9) == 0 );
assert( gamma_move(board, 7, 10, 0) == 0 );
assert( gamma_move(board, 8, 6, 3) == 0 );
assert( gamma_free_fields(board, 8) == 19 );


char* board646478328 = gamma_board(board);
assert( board646478328 != NULL );
assert( strcmp(board646478328, 
"2.8829.61973\n"
"998175384879\n"
"373.689.6.55\n"
"9...432637.6\n"
"73649.9566.3\n"
"23124215922.\n"
"..95613885.8\n"
"484827869897\n"
"7.9.57..8185\n") == 0);
free(board646478328);
board646478328 = NULL;
assert( gamma_move(board, 9, 2, 0) == 0 );
assert( gamma_move(board, 9, 3, 5) == 1 );


gamma_delete(board);

    return 0;
}
