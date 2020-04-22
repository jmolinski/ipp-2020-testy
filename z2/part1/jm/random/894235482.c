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
uuid: 894235482
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(9, 8, 4, 13);
assert( board != NULL );


assert( gamma_move(board, 1, 6, 7) == 1 );
assert( gamma_free_fields(board, 1) == 71 );
assert( gamma_golden_possible(board, 1) == 0 );
assert( gamma_move(board, 2, 4, 4) == 1 );
assert( gamma_free_fields(board, 2) == 70 );
assert( gamma_move(board, 3, 2, 7) == 1 );
assert( gamma_move(board, 3, 7, 4) == 1 );
assert( gamma_move(board, 4, 3, 2) == 1 );
assert( gamma_move(board, 4, 5, 1) == 1 );
assert( gamma_move(board, 1, 3, 6) == 1 );
assert( gamma_move(board, 2, 5, 5) == 1 );
assert( gamma_move(board, 2, 3, 3) == 1 );
assert( gamma_move(board, 3, 5, 0) == 1 );
assert( gamma_busy_fields(board, 3) == 3 );
assert( gamma_move(board, 4, 3, 8) == 0 );
assert( gamma_move(board, 1, 7, 3) == 1 );
assert( gamma_move(board, 1, 0, 5) == 1 );
assert( gamma_move(board, 2, 7, 6) == 1 );
assert( gamma_free_fields(board, 2) == 59 );


char* board458868722 = gamma_board(board);
assert( board458868722 != NULL );
assert( strcmp(board458868722, 
"..3...1..\n"
"...1...2.\n"
"1....2...\n"
"....2..3.\n"
"...2...1.\n"
"...4.....\n"
".....4...\n"
".....3...\n") == 0);
free(board458868722);
board458868722 = NULL;
assert( gamma_move(board, 3, 3, 1) == 1 );
assert( gamma_move(board, 3, 1, 7) == 1 );
assert( gamma_move(board, 4, 7, 7) == 1 );
assert( gamma_move(board, 1, 6, 5) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 0, 8) == 0 );
assert( gamma_move(board, 2, 3, 4) == 1 );
assert( gamma_move(board, 3, 2, 5) == 1 );
assert( gamma_move(board, 3, 4, 5) == 1 );
assert( gamma_move(board, 4, 1, 1) == 1 );


char* board714563053 = gamma_board(board);
assert( board714563053 != NULL );
assert( strcmp(board714563053, 
".33...14.\n"
"...1...2.\n"
"1.3.321..\n"
"...22..3.\n"
"...2...1.\n"
"...4.....\n"
".4.3.4...\n"
".....3...\n") == 0);
free(board714563053);
board714563053 = NULL;
assert( gamma_move(board, 1, 5, 5) == 0 );
assert( gamma_busy_fields(board, 1) == 5 );
assert( gamma_move(board, 2, 6, 0) == 1 );
assert( gamma_move(board, 2, 2, 1) == 1 );
assert( gamma_free_fields(board, 2) == 49 );
assert( gamma_move(board, 3, 7, 4) == 0 );
assert( gamma_move(board, 4, 2, 6) == 1 );
assert( gamma_free_fields(board, 4) == 48 );
assert( gamma_move(board, 1, 0, 4) == 1 );
assert( gamma_move(board, 3, 6, 0) == 0 );
assert( gamma_move(board, 3, 0, 1) == 1 );
assert( gamma_free_fields(board, 3) == 46 );
assert( gamma_move(board, 4, 6, 3) == 1 );
assert( gamma_move(board, 1, 7, 4) == 0 );
assert( gamma_move(board, 1, 5, 0) == 0 );
assert( gamma_move(board, 2, 5, 5) == 0 );
assert( gamma_move(board, 2, 1, 6) == 1 );
assert( gamma_move(board, 3, 6, 3) == 0 );


char* board861809937 = gamma_board(board);
assert( board861809937 != NULL );
assert( strcmp(board861809937, 
".33...14.\n"
".241...2.\n"
"1.3.321..\n"
"1..22..3.\n"
"...2..41.\n"
"...4.....\n"
"3423.4...\n"
".....32..\n") == 0);
free(board861809937);
board861809937 = NULL;
assert( gamma_move(board, 4, 7, 5) == 1 );
assert( gamma_move(board, 1, 5, 0) == 0 );
assert( gamma_move(board, 1, 7, 2) == 1 );
assert( gamma_move(board, 3, 4, 8) == 0 );
assert( gamma_move(board, 4, 6, 6) == 1 );
assert( gamma_move(board, 1, 2, 4) == 1 );
assert( gamma_move(board, 2, 7, 0) == 1 );
assert( gamma_move(board, 2, 4, 1) == 1 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 7, 5) == 0 );
assert( gamma_move(board, 3, 7, 0) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 3, 1) == 0 );
assert( gamma_move(board, 1, 1, 6) == 0 );
assert( gamma_move(board, 1, 2, 2) == 1 );
assert( gamma_busy_fields(board, 1) == 9 );
assert( gamma_move(board, 2, 5, 1) == 0 );
assert( gamma_move(board, 2, 5, 3) == 1 );
assert( gamma_busy_fields(board, 2) == 11 );
assert( gamma_move(board, 3, 1, 7) == 0 );
assert( gamma_move(board, 4, 4, 7) == 1 );
assert( gamma_move(board, 4, 5, 0) == 0 );
assert( gamma_move(board, 1, 2, 4) == 0 );
assert( gamma_move(board, 1, 7, 2) == 0 );
assert( gamma_move(board, 2, 0, 8) == 0 );
assert( gamma_move(board, 2, 1, 4) == 1 );
assert( gamma_free_fields(board, 2) == 34 );
assert( gamma_move(board, 3, 0, 4) == 0 );
assert( gamma_move(board, 3, 0, 1) == 0 );
assert( gamma_move(board, 4, 6, 0) == 0 );
assert( gamma_move(board, 4, 2, 0) == 1 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 3, 8) == 0 );
assert( gamma_move(board, 2, 4, 4) == 0 );
assert( gamma_move(board, 2, 2, 6) == 0 );
assert( gamma_move(board, 3, 0, 8) == 0 );
assert( gamma_move(board, 4, 8, 4) == 1 );
assert( gamma_move(board, 1, 2, 2) == 0 );
assert( gamma_move(board, 1, 3, 6) == 0 );
assert( gamma_free_fields(board, 1) == 32 );
assert( gamma_move(board, 2, 2, 1) == 0 );
assert( gamma_move(board, 2, 1, 3) == 1 );
assert( gamma_move(board, 3, 2, 1) == 0 );
assert( gamma_move(board, 4, 1, 8) == 0 );
assert( gamma_move(board, 4, 5, 5) == 0 );
assert( gamma_free_fields(board, 4) == 31 );
assert( gamma_move(board, 1, 0, 4) == 0 );
assert( gamma_move(board, 2, 3, 2) == 0 );
assert( gamma_move(board, 2, 2, 4) == 0 );
assert( gamma_move(board, 3, 2, 1) == 0 );
assert( gamma_move(board, 4, 4, 6) == 1 );
assert( gamma_move(board, 4, 4, 1) == 0 );
assert( gamma_free_fields(board, 4) == 30 );
assert( gamma_move(board, 1, 0, 3) == 1 );
assert( gamma_move(board, 2, 5, 0) == 0 );
assert( gamma_move(board, 2, 0, 4) == 0 );
assert( gamma_move(board, 3, 1, 1) == 0 );
assert( gamma_move(board, 3, 0, 0) == 1 );


char* board572022564 = gamma_board(board);
assert( board572022564 != NULL );
assert( strcmp(board572022564, 
".33.4.14.\n"
".2414.42.\n"
"1.3.3214.\n"
"12122..34\n"
"12.2.241.\n"
"..14...1.\n"
"342324...\n"
"3.4..322.\n") == 0);
free(board572022564);
board572022564 = NULL;
assert( gamma_move(board, 4, 1, 8) == 0 );
assert( gamma_move(board, 4, 2, 0) == 0 );
assert( gamma_golden_move(board, 4, 0, 6) == 0 );
assert( gamma_move(board, 1, 5, 8) == 0 );
assert( gamma_move(board, 1, 6, 1) == 1 );
assert( gamma_busy_fields(board, 1) == 11 );
assert( gamma_free_fields(board, 1) == 27 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 2, 3) == 1 );
assert( gamma_move(board, 3, 0, 8) == 0 );
assert( gamma_busy_fields(board, 3) == 9 );
assert( gamma_move(board, 4, 8, 3) == 1 );
assert( gamma_move(board, 1, 0, 1) == 0 );
assert( gamma_move(board, 1, 1, 7) == 0 );
assert( gamma_free_fields(board, 1) == 25 );
assert( gamma_move(board, 2, 6, 8) == 0 );
assert( gamma_move(board, 3, 1, 7) == 0 );
assert( gamma_move(board, 4, 7, 3) == 0 );
assert( gamma_move(board, 4, 7, 7) == 0 );
assert( gamma_free_fields(board, 4) == 25 );
assert( gamma_move(board, 2, 7, 0) == 0 );
assert( gamma_move(board, 3, 4, 1) == 0 );
assert( gamma_golden_move(board, 3, 4, 4) == 1 );
assert( gamma_move(board, 4, 6, 8) == 0 );
assert( gamma_move(board, 1, 0, 3) == 0 );
assert( gamma_move(board, 1, 8, 0) == 1 );


char* board222704701 = gamma_board(board);
assert( board222704701 != NULL );
assert( strcmp(board222704701, 
".33.4.14.\n"
".2414.42.\n"
"1.3.3214.\n"
"12123..34\n"
"1222.2414\n"
"..14...1.\n"
"3423241..\n"
"3.4..3221\n") == 0);
free(board222704701);
board222704701 = NULL;
assert( gamma_move(board, 2, 2, 5) == 0 );
assert( gamma_move(board, 3, 2, 4) == 0 );
assert( gamma_move(board, 3, 8, 6) == 1 );
assert( gamma_move(board, 4, 0, 4) == 0 );
assert( gamma_move(board, 4, 8, 1) == 1 );
assert( gamma_move(board, 1, 7, 0) == 0 );
assert( gamma_free_fields(board, 1) == 22 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 4, 5) == 0 );
assert( gamma_move(board, 3, 1, 7) == 0 );
assert( gamma_move(board, 4, 2, 0) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 1, 0, 6) == 1 );
assert( gamma_free_fields(board, 1) == 21 );
assert( gamma_move(board, 3, 2, 0) == 0 );
assert( gamma_free_fields(board, 3) == 21 );
assert( gamma_move(board, 4, 8, 7) == 1 );
assert( gamma_move(board, 1, 0, 4) == 0 );
assert( gamma_move(board, 1, 1, 4) == 0 );
assert( gamma_move(board, 2, 0, 3) == 0 );
assert( gamma_move(board, 2, 7, 5) == 0 );
assert( gamma_move(board, 3, 1, 7) == 0 );
assert( gamma_move(board, 4, 3, 4) == 0 );
assert( gamma_move(board, 4, 1, 5) == 1 );
assert( gamma_busy_fields(board, 4) == 16 );
assert( gamma_golden_move(board, 4, 7, 4) == 1 );
assert( gamma_move(board, 1, 1, 6) == 0 );
assert( gamma_move(board, 2, 7, 5) == 0 );
assert( gamma_move(board, 3, 4, 6) == 0 );
assert( gamma_move(board, 4, 0, 4) == 0 );
assert( gamma_move(board, 4, 2, 0) == 0 );
assert( gamma_move(board, 1, 6, 5) == 0 );
assert( gamma_move(board, 2, 2, 4) == 0 );
assert( gamma_move(board, 3, 2, 6) == 0 );
assert( gamma_move(board, 1, 2, 4) == 0 );
assert( gamma_move(board, 1, 5, 4) == 1 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 5, 5) == 0 );
assert( gamma_move(board, 3, 5, 1) == 0 );
assert( gamma_move(board, 3, 6, 5) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 0, 3) == 0 );


char* board247888622 = gamma_board(board);
assert( board247888622 != NULL );
assert( strcmp(board247888622, 
".33.4.144\n"
"12414.423\n"
"143.3214.\n"
"121231.44\n"
"1222.2414\n"
"..14...1.\n"
"3423241.4\n"
"3.4..3221\n") == 0);
free(board247888622);
board247888622 = NULL;
assert( gamma_move(board, 1, 3, 4) == 0 );
assert( gamma_move(board, 1, 5, 6) == 1 );
assert( gamma_busy_fields(board, 1) == 15 );
assert( gamma_move(board, 2, 4, 6) == 0 );
assert( gamma_move(board, 2, 8, 2) == 1 );
assert( gamma_move(board, 3, 0, 3) == 0 );
assert( gamma_move(board, 3, 3, 1) == 0 );
assert( gamma_golden_possible(board, 3) == 0 );
assert( gamma_move(board, 4, 0, 1) == 0 );
assert( gamma_move(board, 4, 6, 3) == 0 );
assert( gamma_free_fields(board, 4) == 16 );
assert( gamma_move(board, 1, 2, 4) == 0 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_busy_fields(board, 3) == 10 );
assert( gamma_move(board, 4, 0, 3) == 0 );


char* board675159093 = gamma_board(board);
assert( board675159093 != NULL );
assert( strcmp(board675159093, 
".33.4.144\n"
"124141423\n"
"143.3214.\n"
"121231.44\n"
"1222.2414\n"
"..14...12\n"
"3423241.4\n"
"3.4..3221\n") == 0);
free(board675159093);
board675159093 = NULL;
assert( gamma_move(board, 1, 2, 5) == 0 );
assert( gamma_move(board, 1, 0, 1) == 0 );
assert( gamma_move(board, 2, 2, 5) == 0 );
assert( gamma_move(board, 2, 2, 1) == 0 );
assert( gamma_move(board, 3, 3, 4) == 0 );
assert( gamma_move(board, 3, 0, 0) == 0 );
assert( gamma_free_fields(board, 3) == 16 );
assert( gamma_move(board, 1, 4, 3) == 1 );
assert( gamma_move(board, 1, 4, 6) == 0 );
assert( gamma_move(board, 2, 2, 5) == 0 );
assert( gamma_move(board, 2, 5, 3) == 0 );
assert( gamma_move(board, 3, 7, 5) == 0 );
assert( gamma_move(board, 3, 5, 6) == 0 );
assert( gamma_move(board, 4, 2, 5) == 0 );
assert( gamma_move(board, 4, 3, 3) == 0 );
assert( gamma_move(board, 1, 2, 5) == 0 );
assert( gamma_move(board, 1, 0, 7) == 1 );
assert( gamma_move(board, 2, 5, 8) == 0 );
assert( gamma_move(board, 3, 2, 1) == 0 );
assert( gamma_golden_move(board, 3, 2, 3) == 0 );
assert( gamma_move(board, 4, 0, 4) == 0 );
assert( gamma_move(board, 4, 8, 7) == 0 );
assert( gamma_busy_fields(board, 4) == 17 );
assert( gamma_free_fields(board, 4) == 14 );
assert( gamma_move(board, 1, 7, 0) == 0 );
assert( gamma_move(board, 1, 7, 0) == 0 );
assert( gamma_busy_fields(board, 1) == 17 );
assert( gamma_move(board, 2, 4, 6) == 0 );
assert( gamma_move(board, 2, 6, 1) == 0 );
assert( gamma_move(board, 3, 7, 3) == 0 );
assert( gamma_busy_fields(board, 3) == 10 );
assert( gamma_move(board, 4, 7, 1) == 1 );
assert( gamma_move(board, 1, 2, 1) == 0 );
assert( gamma_busy_fields(board, 1) == 17 );
assert( gamma_move(board, 2, 2, 4) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 5, 8) == 0 );
assert( gamma_busy_fields(board, 4) == 18 );
assert( gamma_move(board, 1, 0, 4) == 0 );
assert( gamma_move(board, 2, 2, 4) == 0 );
assert( gamma_move(board, 2, 5, 7) == 1 );
assert( gamma_golden_move(board, 2, 5, 0) == 1 );
assert( gamma_move(board, 3, 2, 0) == 0 );
assert( gamma_move(board, 4, 2, 6) == 0 );
assert( gamma_move(board, 1, 2, 5) == 0 );
assert( gamma_move(board, 1, 0, 1) == 0 );
assert( gamma_move(board, 2, 7, 5) == 0 );
assert( gamma_move(board, 3, 2, 1) == 0 );
assert( gamma_move(board, 3, 0, 6) == 0 );
assert( gamma_free_fields(board, 3) == 12 );
assert( gamma_move(board, 4, 0, 1) == 0 );
assert( gamma_move(board, 4, 6, 0) == 0 );
assert( gamma_golden_move(board, 4, 4, 4) == 0 );
assert( gamma_move(board, 1, 2, 6) == 0 );
assert( gamma_move(board, 1, 7, 2) == 0 );
assert( gamma_move(board, 2, 6, 2) == 1 );
assert( gamma_move(board, 3, 5, 3) == 0 );
assert( gamma_move(board, 4, 3, 1) == 0 );


char* board847211356 = gamma_board(board);
assert( board847211356 != NULL );
assert( strcmp(board847211356, 
"133.42144\n"
"124141423\n"
"143.3214.\n"
"121231.44\n"
"122212414\n"
"..14..212\n"
"342324144\n"
"3.4..2221\n") == 0);
free(board847211356);
board847211356 = NULL;
assert( gamma_move(board, 1, 5, 3) == 0 );
assert( gamma_busy_fields(board, 1) == 17 );
assert( gamma_move(board, 2, 2, 0) == 0 );
assert( gamma_move(board, 3, 5, 2) == 1 );
assert( gamma_busy_fields(board, 3) == 10 );
assert( gamma_move(board, 4, 5, 3) == 0 );
assert( gamma_move(board, 4, 1, 6) == 0 );


gamma_delete(board);

    return 0;
}
