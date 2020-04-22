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
uuid: 740530391
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(7, 13, 6, 13);
assert( board != NULL );


assert( gamma_move(board, 1, 2, 0) == 1 );
assert( gamma_move(board, 2, 2, 0) == 0 );
assert( gamma_move(board, 2, 5, 2) == 1 );
assert( gamma_busy_fields(board, 2) == 1 );
assert( gamma_move(board, 3, 7, 2) == 0 );
assert( gamma_move(board, 3, 1, 0) == 1 );
assert( gamma_move(board, 4, 11, 2) == 0 );
assert( gamma_move(board, 4, 4, 8) == 1 );
assert( gamma_free_fields(board, 4) == 87 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 1, 2) == 1 );
assert( gamma_free_fields(board, 5) == 86 );
assert( gamma_move(board, 6, 7, 1) == 0 );
assert( gamma_move(board, 1, 7, 5) == 0 );
assert( gamma_move(board, 1, 1, 5) == 1 );
assert( gamma_move(board, 2, 4, 3) == 1 );
assert( gamma_move(board, 3, 11, 5) == 0 );
assert( gamma_move(board, 4, 1, 5) == 0 );
assert( gamma_move(board, 4, 3, 10) == 1 );
assert( gamma_free_fields(board, 4) == 83 );
assert( gamma_move(board, 5, 2, 11) == 1 );
assert( gamma_move(board, 6, 0, 3) == 1 );
assert( gamma_move(board, 6, 0, 5) == 1 );
assert( gamma_move(board, 1, 5, 8) == 1 );
assert( gamma_golden_move(board, 1, 0, 1) == 0 );
assert( gamma_move(board, 2, 3, 10) == 0 );
assert( gamma_move(board, 2, 0, 1) == 1 );
assert( gamma_move(board, 3, 8, 6) == 0 );
assert( gamma_move(board, 3, 3, 8) == 1 );
assert( gamma_move(board, 4, 10, 6) == 0 );
assert( gamma_move(board, 4, 4, 0) == 1 );
assert( gamma_move(board, 5, 1, 4) == 1 );
assert( gamma_move(board, 5, 0, 12) == 1 );
assert( gamma_move(board, 6, 6, 3) == 1 );
assert( gamma_move(board, 6, 4, 3) == 0 );
assert( gamma_move(board, 1, 11, 5) == 0 );
assert( gamma_move(board, 1, 5, 10) == 1 );
assert( gamma_move(board, 2, 2, 10) == 1 );
assert( gamma_move(board, 2, 0, 9) == 1 );
assert( gamma_move(board, 4, 1, 2) == 0 );
assert( gamma_move(board, 5, 3, 10) == 0 );
assert( gamma_move(board, 5, 5, 5) == 1 );
assert( gamma_move(board, 1, 2, 4) == 1 );
assert( gamma_move(board, 2, 10, 1) == 0 );
assert( gamma_free_fields(board, 2) == 68 );
assert( gamma_move(board, 3, 8, 6) == 0 );
assert( gamma_move(board, 3, 3, 7) == 1 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 9, 2) == 0 );
assert( gamma_move(board, 4, 0, 8) == 1 );
assert( gamma_free_fields(board, 4) == 66 );
assert( gamma_move(board, 5, 5, 10) == 0 );
assert( gamma_move(board, 6, 12, 3) == 0 );
assert( gamma_move(board, 6, 1, 6) == 1 );
assert( gamma_move(board, 1, 11, 1) == 0 );
assert( gamma_move(board, 2, 0, 2) == 1 );
assert( gamma_move(board, 3, 0, 7) == 1 );
assert( gamma_move(board, 3, 3, 8) == 0 );
assert( gamma_move(board, 4, 7, 2) == 0 );
assert( gamma_move(board, 4, 1, 2) == 0 );
assert( gamma_busy_fields(board, 4) == 4 );
assert( gamma_move(board, 5, 8, 6) == 0 );
assert( gamma_move(board, 6, 4, 3) == 0 );
assert( gamma_busy_fields(board, 6) == 4 );
assert( gamma_move(board, 1, 6, 6) == 1 );
assert( gamma_move(board, 1, 2, 10) == 0 );
assert( gamma_move(board, 2, 0, 12) == 0 );
assert( gamma_move(board, 2, 2, 12) == 1 );
assert( gamma_move(board, 3, 2, 2) == 1 );
assert( gamma_move(board, 4, 1, 1) == 1 );
assert( gamma_move(board, 4, 1, 0) == 0 );
assert( gamma_busy_fields(board, 4) == 5 );
assert( gamma_move(board, 5, 4, 4) == 1 );
assert( gamma_free_fields(board, 5) == 58 );
assert( gamma_move(board, 6, 12, 3) == 0 );
assert( gamma_move(board, 6, 1, 12) == 1 );
assert( gamma_free_fields(board, 6) == 57 );


char* board963170224 = gamma_board(board);
assert( board963170224 != NULL );
assert( strcmp(board963170224, 
"562....\n"
"..5....\n"
"..24.1.\n"
"2......\n"
"4..341.\n"
"3..3...\n"
".6....1\n"
"61...5.\n"
".51.5..\n"
"6...2.6\n"
"253..2.\n"
"24.....\n"
".31.4..\n") == 0);
free(board963170224);
board963170224 = NULL;
assert( gamma_move(board, 1, 0, 10) == 1 );
assert( gamma_move(board, 3, 11, 5) == 0 );
assert( gamma_move(board, 4, 2, 4) == 0 );
assert( gamma_move(board, 4, 6, 9) == 1 );
assert( gamma_move(board, 5, 5, 6) == 1 );
assert( gamma_move(board, 6, 0, 12) == 0 );
assert( gamma_move(board, 6, 1, 1) == 0 );
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_free_fields(board, 1) == 54 );
assert( gamma_golden_move(board, 1, 5, 0) == 0 );
assert( gamma_move(board, 2, 4, 0) == 0 );
assert( gamma_move(board, 3, 3, 5) == 1 );
assert( gamma_move(board, 3, 2, 0) == 0 );
assert( gamma_golden_move(board, 3, 9, 0) == 0 );
assert( gamma_move(board, 5, 1, 3) == 1 );
assert( gamma_move(board, 5, 0, 7) == 0 );
assert( gamma_move(board, 6, 1, 9) == 1 );
assert( gamma_move(board, 1, 9, 2) == 0 );
assert( gamma_move(board, 1, 5, 10) == 0 );
assert( gamma_move(board, 2, 8, 2) == 0 );
assert( gamma_move(board, 3, 11, 4) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 6, 2) == 1 );
assert( gamma_move(board, 5, 4, 5) == 1 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 6, 12, 6) == 0 );


char* board740345652 = gamma_board(board);
assert( board740345652 != NULL );
assert( strcmp(board740345652, 
"562....\n"
"..5....\n"
"1.24.1.\n"
"26....4\n"
"4..341.\n"
"3..3...\n"
".6...51\n"
"61.355.\n"
".51.5..\n"
"65..2.6\n"
"253..24\n"
"24.....\n"
".31.4..\n") == 0);
free(board740345652);
board740345652 = NULL;
assert( gamma_move(board, 1, 12, 4) == 0 );
assert( gamma_move(board, 1, 4, 1) == 1 );
assert( gamma_move(board, 2, 1, 0) == 0 );
assert( gamma_move(board, 2, 5, 1) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 1, 3) == 0 );
assert( gamma_move(board, 4, 0, 6) == 1 );
assert( gamma_move(board, 5, 0, 4) == 1 );
assert( gamma_move(board, 6, 8, 2) == 0 );
assert( gamma_move(board, 6, 2, 1) == 1 );
assert( gamma_golden_move(board, 6, 10, 2) == 0 );
assert( gamma_move(board, 1, 8, 2) == 0 );
assert( gamma_move(board, 2, 11, 1) == 0 );
assert( gamma_move(board, 2, 6, 10) == 1 );
assert( gamma_move(board, 3, 9, 3) == 0 );
assert( gamma_move(board, 3, 5, 8) == 0 );
assert( gamma_move(board, 4, 3, 2) == 1 );
assert( gamma_move(board, 4, 6, 12) == 1 );
assert( gamma_busy_fields(board, 4) == 10 );
assert( gamma_free_fields(board, 4) == 41 );
assert( gamma_move(board, 5, 3, 0) == 1 );
assert( gamma_free_fields(board, 5) == 40 );
assert( gamma_golden_move(board, 5, 0, 1) == 1 );
assert( gamma_move(board, 6, 11, 4) == 0 );
assert( gamma_busy_fields(board, 6) == 7 );
assert( gamma_move(board, 1, 5, 7) == 1 );
assert( gamma_free_fields(board, 1) == 39 );
assert( gamma_move(board, 3, 11, 6) == 0 );
assert( gamma_move(board, 3, 2, 2) == 0 );
assert( gamma_move(board, 5, 6, 6) == 0 );
assert( gamma_move(board, 5, 4, 2) == 1 );
assert( gamma_busy_fields(board, 5) == 13 );
assert( gamma_free_fields(board, 6) == 38 );
assert( gamma_move(board, 1, 11, 3) == 0 );
assert( gamma_move(board, 2, 3, 2) == 0 );
assert( gamma_move(board, 3, 7, 4) == 0 );
assert( gamma_move(board, 4, 8, 2) == 0 );
assert( gamma_move(board, 4, 0, 9) == 0 );
assert( gamma_move(board, 5, 11, 5) == 0 );
assert( gamma_move(board, 5, 0, 2) == 0 );


char* board617632404 = gamma_board(board);
assert( board617632404 != NULL );
assert( strcmp(board617632404, 
"562...4\n"
"..5....\n"
"1.24.12\n"
"26....4\n"
"4..341.\n"
"3..3.1.\n"
"46...51\n"
"61.355.\n"
"551.5..\n"
"65..2.6\n"
"2534524\n"
"546.12.\n"
".3154..\n") == 0);
free(board617632404);
board617632404 = NULL;
assert( gamma_move(board, 6, 5, 4) == 1 );
assert( gamma_move(board, 1, 7, 4) == 0 );
assert( gamma_move(board, 1, 3, 9) == 1 );
assert( gamma_move(board, 2, 5, 10) == 0 );
assert( gamma_move(board, 3, 1, 3) == 0 );
assert( gamma_move(board, 3, 4, 0) == 0 );
assert( gamma_move(board, 4, 6, 4) == 1 );
assert( gamma_move(board, 4, 6, 0) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );


char* board395287915 = gamma_board(board);
assert( board395287915 != NULL );
assert( strcmp(board395287915, 
"562...4\n"
"..5....\n"
"1.24.12\n"
"26.1..4\n"
"4..341.\n"
"3..3.1.\n"
"46...51\n"
"61.355.\n"
"551.564\n"
"65..2.6\n"
"2534524\n"
"546.12.\n"
".3154.4\n") == 0);
free(board395287915);
board395287915 = NULL;
assert( gamma_move(board, 5, 8, 2) == 0 );
assert( gamma_move(board, 5, 6, 0) == 0 );
assert( gamma_busy_fields(board, 5) == 13 );
assert( gamma_move(board, 6, 1, 6) == 0 );
assert( gamma_move(board, 6, 0, 11) == 1 );
assert( gamma_move(board, 1, 11, 5) == 0 );
assert( gamma_move(board, 1, 1, 8) == 1 );
assert( gamma_free_fields(board, 1) == 32 );
assert( gamma_move(board, 2, 9, 4) == 0 );
assert( gamma_move(board, 2, 0, 2) == 0 );
assert( gamma_move(board, 3, 6, 2) == 0 );
assert( gamma_move(board, 4, 7, 6) == 0 );
assert( gamma_move(board, 4, 0, 8) == 0 );
assert( gamma_free_fields(board, 4) == 32 );
assert( gamma_move(board, 5, 11, 1) == 0 );
assert( gamma_move(board, 6, 3, 2) == 0 );
assert( gamma_move(board, 6, 5, 3) == 1 );
assert( gamma_move(board, 1, 11, 3) == 0 );
assert( gamma_move(board, 1, 5, 11) == 1 );
assert( gamma_move(board, 3, 2, 2) == 0 );
assert( gamma_free_fields(board, 3) == 30 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 3, 1) == 1 );
assert( gamma_move(board, 4, 1, 10) == 1 );
assert( gamma_free_fields(board, 4) == 13 );
assert( gamma_move(board, 5, 5, 6) == 0 );
assert( gamma_move(board, 5, 6, 0) == 0 );
assert( gamma_busy_fields(board, 5) == 13 );


char* board459490241 = gamma_board(board);
assert( board459490241 != NULL );
assert( strcmp(board459490241, 
"562...4\n"
"6.5..1.\n"
"1424.12\n"
"26.1..4\n"
"41.341.\n"
"3..3.1.\n"
"46...51\n"
"61.355.\n"
"551.564\n"
"65..266\n"
"2534524\n"
"546412.\n"
".3154.4\n") == 0);
free(board459490241);
board459490241 = NULL;
assert( gamma_move(board, 6, 9, 2) == 0 );
assert( gamma_busy_fields(board, 6) == 10 );
assert( gamma_free_fields(board, 6) == 28 );
assert( gamma_move(board, 1, 3, 7) == 0 );
assert( gamma_move(board, 2, 7, 4) == 0 );
assert( gamma_move(board, 3, 7, 6) == 0 );
assert( gamma_move(board, 3, 5, 7) == 0 );
assert( gamma_busy_fields(board, 3) == 6 );
assert( gamma_move(board, 4, 5, 2) == 0 );
assert( gamma_move(board, 5, 2, 9) == 1 );
assert( gamma_move(board, 6, 2, 11) == 0 );
assert( gamma_move(board, 6, 0, 11) == 0 );
assert( gamma_move(board, 1, 4, 12) == 1 );
assert( gamma_move(board, 3, 2, 4) == 0 );
assert( gamma_move(board, 3, 5, 5) == 0 );


char* board550588890 = gamma_board(board);
assert( board550588890 != NULL );
assert( strcmp(board550588890, 
"562.1.4\n"
"6.5..1.\n"
"1424.12\n"
"2651..4\n"
"41.341.\n"
"3..3.1.\n"
"46...51\n"
"61.355.\n"
"551.564\n"
"65..266\n"
"2534524\n"
"546412.\n"
".3154.4\n") == 0);
free(board550588890);
board550588890 = NULL;
assert( gamma_move(board, 4, 4, 3) == 0 );
assert( gamma_move(board, 4, 1, 2) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 3, 2) == 0 );
assert( gamma_move(board, 5, 0, 7) == 0 );
assert( gamma_move(board, 6, 5, 6) == 0 );
assert( gamma_move(board, 6, 3, 10) == 0 );
assert( gamma_move(board, 2, 1, 6) == 0 );
assert( gamma_move(board, 2, 3, 4) == 1 );
assert( gamma_move(board, 3, 9, 5) == 0 );
assert( gamma_move(board, 3, 3, 9) == 0 );
assert( gamma_move(board, 4, 5, 10) == 0 );
assert( gamma_move(board, 4, 6, 0) == 0 );
assert( gamma_free_fields(board, 4) == 13 );
assert( gamma_move(board, 5, 5, 4) == 0 );
assert( gamma_move(board, 6, 11, 1) == 0 );
assert( gamma_move(board, 1, 6, 4) == 0 );
assert( gamma_move(board, 1, 1, 9) == 0 );
assert( gamma_move(board, 2, 7, 4) == 0 );
assert( gamma_move(board, 2, 2, 9) == 0 );
assert( gamma_move(board, 3, 8, 2) == 0 );
assert( gamma_move(board, 4, 6, 1) == 1 );
assert( gamma_move(board, 4, 2, 3) == 1 );
assert( gamma_move(board, 5, 11, 3) == 0 );
assert( gamma_free_fields(board, 5) == 23 );
assert( gamma_move(board, 6, 0, 12) == 0 );
assert( gamma_move(board, 6, 4, 8) == 0 );
assert( gamma_move(board, 1, 1, 7) == 1 );
assert( gamma_move(board, 2, 6, 3) == 0 );
assert( gamma_move(board, 2, 0, 11) == 0 );
assert( gamma_move(board, 3, 6, 4) == 0 );
assert( gamma_free_fields(board, 3) == 22 );
assert( gamma_move(board, 4, 11, 4) == 0 );
assert( gamma_move(board, 4, 1, 10) == 0 );
assert( gamma_move(board, 6, 2, 1) == 0 );
assert( gamma_move(board, 1, 11, 3) == 0 );
assert( gamma_move(board, 1, 1, 11) == 1 );
assert( gamma_move(board, 2, 7, 6) == 0 );
assert( gamma_move(board, 3, 11, 3) == 0 );
assert( gamma_move(board, 3, 5, 8) == 0 );
assert( gamma_free_fields(board, 3) == 21 );
assert( gamma_move(board, 5, 0, 5) == 0 );
assert( gamma_move(board, 6, 4, 4) == 0 );
assert( gamma_move(board, 1, 8, 2) == 0 );
assert( gamma_move(board, 1, 4, 5) == 0 );
assert( gamma_move(board, 2, 8, 2) == 0 );


char* board598597465 = gamma_board(board);
assert( board598597465 != NULL );
assert( strcmp(board598597465, 
"562.1.4\n"
"615..1.\n"
"1424.12\n"
"2651..4\n"
"41.341.\n"
"31.3.1.\n"
"46...51\n"
"61.355.\n"
"5512564\n"
"654.266\n"
"2534524\n"
"5464124\n"
".3154.4\n") == 0);
free(board598597465);
board598597465 = NULL;
assert( gamma_move(board, 3, 12, 5) == 0 );
assert( gamma_move(board, 3, 3, 6) == 1 );
assert( gamma_golden_move(board, 3, 4, 2) == 1 );
assert( gamma_move(board, 4, 5, 3) == 0 );
assert( gamma_move(board, 4, 3, 10) == 0 );
assert( gamma_golden_move(board, 4, 2, 4) == 1 );


char* board431990977 = gamma_board(board);
assert( board431990977 != NULL );
assert( strcmp(board431990977, 
"562.1.4\n"
"615..1.\n"
"1424.12\n"
"2651..4\n"
"41.341.\n"
"31.3.1.\n"
"46.3.51\n"
"61.355.\n"
"5542564\n"
"654.266\n"
"2534324\n"
"5464124\n"
".3154.4\n") == 0);
free(board431990977);
board431990977 = NULL;
assert( gamma_move(board, 5, 6, 6) == 0 );
assert( gamma_free_fields(board, 5) == 20 );
assert( gamma_move(board, 6, 6, 5) == 1 );
assert( gamma_move(board, 1, 2, 7) == 1 );
assert( gamma_move(board, 2, 6, 6) == 0 );
assert( gamma_move(board, 3, 8, 6) == 0 );
assert( gamma_move(board, 3, 2, 9) == 0 );
assert( gamma_move(board, 4, 9, 4) == 0 );
assert( gamma_move(board, 4, 1, 5) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 11, 4) == 0 );
assert( gamma_move(board, 5, 1, 12) == 0 );
assert( gamma_move(board, 6, 8, 6) == 0 );
assert( gamma_move(board, 6, 1, 3) == 0 );
assert( gamma_move(board, 1, 3, 1) == 0 );
assert( gamma_busy_fields(board, 1) == 15 );
assert( gamma_move(board, 2, 6, 4) == 0 );
assert( gamma_free_fields(board, 2) == 18 );
assert( gamma_move(board, 3, 12, 5) == 0 );
assert( gamma_move(board, 3, 2, 4) == 0 );
assert( gamma_move(board, 4, 6, 11) == 1 );
assert( gamma_move(board, 4, 0, 9) == 0 );
assert( gamma_golden_move(board, 4, 12, 0) == 0 );
assert( gamma_move(board, 5, 0, 4) == 0 );
assert( gamma_move(board, 6, 5, 2) == 0 );
assert( gamma_move(board, 1, 10, 4) == 0 );
assert( gamma_move(board, 2, 12, 3) == 0 );
assert( gamma_move(board, 2, 6, 4) == 0 );
assert( gamma_move(board, 3, 8, 2) == 0 );
assert( gamma_move(board, 4, 6, 2) == 0 );
assert( gamma_busy_fields(board, 4) == 18 );
assert( gamma_move(board, 5, 12, 5) == 0 );
assert( gamma_golden_move(board, 5, 1, 1) == 0 );
assert( gamma_move(board, 6, 10, 4) == 0 );
assert( gamma_move(board, 6, 6, 3) == 0 );
assert( gamma_move(board, 1, 7, 6) == 0 );
assert( gamma_move(board, 1, 4, 6) == 1 );
assert( gamma_move(board, 2, 7, 6) == 0 );
assert( gamma_move(board, 2, 3, 4) == 0 );


char* board175360817 = gamma_board(board);
assert( board175360817 != NULL );
assert( strcmp(board175360817, 
"562.1.4\n"
"615..14\n"
"1424.12\n"
"2651..4\n"
"41.341.\n"
"3113.1.\n"
"46.3151\n"
"61.3556\n"
"5542564\n"
"654.266\n"
"2534324\n"
"5464124\n"
".3154.4\n") == 0);
free(board175360817);
board175360817 = NULL;
assert( gamma_move(board, 3, 0, 0) == 1 );
assert( gamma_move(board, 4, 3, 3) == 1 );
assert( gamma_move(board, 5, 2, 3) == 0 );
assert( gamma_move(board, 6, 8, 6) == 0 );
assert( gamma_move(board, 6, 2, 3) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 12, 3) == 0 );
assert( gamma_move(board, 1, 5, 1) == 0 );
assert( gamma_move(board, 2, 12, 3) == 0 );
assert( gamma_move(board, 3, 6, 2) == 0 );
assert( gamma_move(board, 3, 4, 12) == 0 );
assert( gamma_busy_fields(board, 3) == 9 );


char* board564760335 = gamma_board(board);
assert( board564760335 != NULL );
assert( strcmp(board564760335, 
"562.1.4\n"
"615..14\n"
"1424.12\n"
"2651..4\n"
"41.341.\n"
"3113.1.\n"
"46.3151\n"
"61.3556\n"
"5542564\n"
"6544266\n"
"2534324\n"
"5464124\n"
"33154.4\n") == 0);
free(board564760335);
board564760335 = NULL;
assert( gamma_move(board, 4, 1, 4) == 0 );
assert( gamma_golden_possible(board, 4) == 0 );
assert( gamma_move(board, 5, 6, 2) == 0 );
assert( gamma_move(board, 5, 3, 9) == 0 );
assert( gamma_busy_fields(board, 5) == 13 );
assert( gamma_golden_possible(board, 5) == 0 );
assert( gamma_move(board, 6, 8, 2) == 0 );
assert( gamma_move(board, 6, 2, 7) == 0 );
assert( gamma_golden_possible(board, 6) == 1 );
assert( gamma_move(board, 1, 5, 6) == 0 );
assert( gamma_move(board, 2, 1, 3) == 0 );
assert( gamma_golden_move(board, 2, 4, 0) == 1 );
assert( gamma_move(board, 3, 0, 5) == 0 );
assert( gamma_move(board, 4, 7, 4) == 0 );
assert( gamma_move(board, 4, 1, 6) == 0 );
assert( gamma_move(board, 5, 12, 3) == 0 );
assert( gamma_move(board, 5, 0, 0) == 0 );
assert( gamma_move(board, 6, 11, 4) == 0 );
assert( gamma_busy_fields(board, 6) == 11 );
assert( gamma_free_fields(board, 6) == 14 );
assert( gamma_move(board, 1, 2, 8) == 1 );
assert( gamma_move(board, 2, 0, 5) == 0 );
assert( gamma_move(board, 2, 2, 7) == 0 );


gamma_delete(board);

    return 0;
}
