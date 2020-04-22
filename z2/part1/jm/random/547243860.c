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
uuid: 547243860
*/
/*
random actions, total chaos
*/
gamma_t* board = gamma_new(9, 5, 5, 3);
assert( board != NULL );


assert( gamma_move(board, 1, 1, 0) == 1 );
assert( gamma_move(board, 1, 6, 2) == 1 );
assert( gamma_move(board, 2, 4, 3) == 1 );
assert( gamma_move(board, 2, 8, 0) == 1 );
assert( gamma_move(board, 3, 0, 6) == 0 );
assert( gamma_move(board, 3, 2, 3) == 1 );
assert( gamma_busy_fields(board, 3) == 1 );
assert( gamma_move(board, 4, 0, 1) == 1 );
assert( gamma_busy_fields(board, 4) == 1 );
assert( gamma_move(board, 5, 0, 3) == 1 );
assert( gamma_move(board, 1, 2, 3) == 0 );


char* board434475688 = gamma_board(board);
assert( board434475688 != NULL );
assert( strcmp(board434475688, 
".........\n"
"5.3.2....\n"
"......1..\n"
"4........\n"
".1......2\n") == 0);
free(board434475688);
board434475688 = NULL;
assert( gamma_move(board, 2, 2, 0) == 1 );
assert( gamma_move(board, 3, 8, 3) == 1 );
assert( gamma_move(board, 4, 4, 1) == 1 );
assert( gamma_move(board, 5, 4, 3) == 0 );
assert( gamma_move(board, 2, 0, 5) == 0 );
assert( gamma_busy_fields(board, 2) == 3 );
assert( gamma_move(board, 3, 6, 3) == 1 );
assert( gamma_move(board, 3, 3, 3) == 1 );
assert( gamma_move(board, 4, 2, 0) == 0 );
assert( gamma_golden_possible(board, 4) == 1 );
assert( gamma_move(board, 5, 4, 1) == 0 );
assert( gamma_move(board, 5, 0, 4) == 1 );
assert( gamma_move(board, 1, 5, 0) == 1 );
assert( gamma_move(board, 1, 4, 0) == 1 );
assert( gamma_move(board, 2, 1, 5) == 0 );
assert( gamma_move(board, 2, 2, 3) == 0 );
assert( gamma_move(board, 3, 4, 1) == 0 );
assert( gamma_move(board, 3, 1, 2) == 0 );
assert( gamma_busy_fields(board, 3) == 4 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 0, 6) == 0 );
assert( gamma_free_fields(board, 4) == 30 );
assert( gamma_move(board, 5, 2, 7) == 0 );
assert( gamma_move(board, 5, 8, 0) == 0 );
assert( gamma_move(board, 1, 1, 1) == 1 );
assert( gamma_move(board, 2, 0, 4) == 0 );
assert( gamma_move(board, 2, 7, 2) == 0 );
assert( gamma_move(board, 3, 2, 3) == 0 );
assert( gamma_free_fields(board, 3) == 10 );
assert( gamma_move(board, 4, 2, 1) == 1 );
assert( gamma_free_fields(board, 4) == 6 );
assert( gamma_move(board, 5, 3, 7) == 0 );
assert( gamma_golden_move(board, 5, 3, 4) == 0 );
assert( gamma_move(board, 1, 3, 1) == 0 );
assert( gamma_move(board, 1, 5, 0) == 0 );


char* board913623704 = gamma_board(board);
assert( board913623704 != NULL );
assert( strcmp(board913623704, 
"5........\n"
"5.332.3.3\n"
"......1..\n"
"414.4....\n"
".12.11..2\n") == 0);
free(board913623704);
board913623704 = NULL;
assert( gamma_move(board, 2, 2, 7) == 0 );
assert( gamma_move(board, 3, 2, 1) == 0 );
assert( gamma_busy_fields(board, 3) == 4 );


char* board584286037 = gamma_board(board);
assert( board584286037 != NULL );
assert( strcmp(board584286037, 
"5........\n"
"5.332.3.3\n"
"......1..\n"
"414.4....\n"
".12.11..2\n") == 0);
free(board584286037);
board584286037 = NULL;
assert( gamma_move(board, 4, 4, 8) == 0 );
assert( gamma_move(board, 5, 3, 1) == 1 );
assert( gamma_move(board, 5, 2, 1) == 0 );
assert( gamma_move(board, 1, 6, 4) == 0 );
assert( gamma_move(board, 1, 8, 4) == 0 );
assert( gamma_free_fields(board, 1) == 8 );
assert( gamma_busy_fields(board, 2) == 3 );
assert( gamma_golden_move(board, 2, 3, 0) == 0 );


char* board697689915 = gamma_board(board);
assert( board697689915 != NULL );
assert( strcmp(board697689915, 
"5........\n"
"5.332.3.3\n"
"......1..\n"
"41454....\n"
".12.11..2\n") == 0);
free(board697689915);
board697689915 = NULL;
assert( gamma_move(board, 3, 2, 3) == 0 );
assert( gamma_move(board, 3, 2, 4) == 1 );
assert( gamma_move(board, 4, 4, 8) == 0 );
assert( gamma_move(board, 5, 0, 0) == 1 );
assert( gamma_free_fields(board, 5) == 5 );
assert( gamma_move(board, 1, 2, 4) == 0 );
assert( gamma_move(board, 2, 0, 7) == 0 );
assert( gamma_move(board, 2, 0, 2) == 0 );
assert( gamma_busy_fields(board, 2) == 3 );


char* board957619352 = gamma_board(board);
assert( board957619352 != NULL );
assert( strcmp(board957619352, 
"5.3......\n"
"5.332.3.3\n"
"......1..\n"
"41454....\n"
"512.11..2\n") == 0);
free(board957619352);
board957619352 = NULL;
assert( gamma_move(board, 3, 1, 6) == 0 );
assert( gamma_move(board, 3, 8, 1) == 0 );
assert( gamma_move(board, 4, 4, 7) == 0 );
assert( gamma_move(board, 4, 7, 1) == 0 );
assert( gamma_move(board, 5, 4, 3) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 1, 1, 8) == 0 );
assert( gamma_move(board, 1, 3, 3) == 0 );
assert( gamma_free_fields(board, 1) == 7 );
assert( gamma_move(board, 2, 0, 3) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 2, 1) == 0 );
assert( gamma_move(board, 4, 2, 2) == 1 );
assert( gamma_move(board, 4, 7, 3) == 0 );
assert( gamma_move(board, 5, 3, 1) == 0 );
assert( gamma_free_fields(board, 5) == 5 );
assert( gamma_move(board, 1, 5, 3) == 0 );
assert( gamma_golden_move(board, 2, 0, 4) == 0 );
assert( gamma_move(board, 5, 4, 3) == 0 );
assert( gamma_move(board, 5, 8, 0) == 0 );
assert( gamma_golden_move(board, 5, 0, 4) == 0 );
assert( gamma_move(board, 1, 4, 8) == 0 );
assert( gamma_move(board, 1, 8, 4) == 0 );
assert( gamma_move(board, 2, 0, 3) == 0 );
assert( gamma_move(board, 3, 3, 5) == 0 );
assert( gamma_move(board, 3, 1, 4) == 1 );
assert( gamma_move(board, 4, 3, 2) == 1 );
assert( gamma_move(board, 5, 1, 7) == 0 );
assert( gamma_move(board, 5, 8, 4) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 1, 2, 0) == 0 );
assert( gamma_move(board, 1, 7, 1) == 0 );
assert( gamma_move(board, 2, 2, 1) == 0 );
assert( gamma_move(board, 2, 3, 2) == 0 );


char* board889886980 = gamma_board(board);
assert( board889886980 != NULL );
assert( strcmp(board889886980, 
"533......\n"
"5.332.3.3\n"
"..44..1..\n"
"41454....\n"
"512.11..2\n") == 0);
free(board889886980);
board889886980 = NULL;
assert( gamma_move(board, 3, 3, 1) == 0 );
assert( gamma_golden_move(board, 3, 3, 4) == 0 );
assert( gamma_move(board, 4, 0, 0) == 0 );
assert( gamma_move(board, 4, 2, 1) == 0 );
assert( gamma_move(board, 5, 4, 7) == 0 );
assert( gamma_move(board, 5, 4, 3) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 1, 1, 5) == 0 );
assert( gamma_move(board, 2, 1, 5) == 0 );
assert( gamma_move(board, 3, 2, 8) == 0 );
assert( gamma_busy_fields(board, 3) == 6 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_move(board, 4, 2, 0) == 0 );
assert( gamma_move(board, 4, 7, 0) == 0 );
assert( gamma_busy_fields(board, 4) == 5 );
assert( gamma_move(board, 1, 2, 7) == 0 );
assert( gamma_move(board, 1, 7, 4) == 0 );
assert( gamma_move(board, 2, 6, 0) == 0 );
assert( gamma_free_fields(board, 2) == 6 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 0, 1) == 0 );
assert( gamma_move(board, 3, 8, 3) == 0 );
assert( gamma_move(board, 4, 0, 3) == 0 );
assert( gamma_move(board, 4, 1, 1) == 0 );
assert( gamma_free_fields(board, 4) == 4 );
assert( gamma_move(board, 5, 4, 4) == 0 );
assert( gamma_move(board, 5, 6, 4) == 0 );
assert( gamma_busy_fields(board, 1) == 5 );
assert( gamma_golden_possible(board, 1) == 1 );
assert( gamma_move(board, 2, 5, 1) == 0 );
assert( gamma_move(board, 3, 3, 1) == 0 );


char* board774072765 = gamma_board(board);
assert( board774072765 != NULL );
assert( strcmp(board774072765, 
"533......\n"
"5.332.3.3\n"
"..44..1..\n"
"41454....\n"
"512.11..2\n") == 0);
free(board774072765);
board774072765 = NULL;
assert( gamma_move(board, 4, 0, 6) == 0 );
assert( gamma_move(board, 5, 4, 1) == 0 );
assert( gamma_move(board, 1, 2, 3) == 0 );
assert( gamma_free_fields(board, 1) == 7 );
assert( gamma_move(board, 2, 0, 3) == 0 );
assert( gamma_busy_fields(board, 2) == 3 );


char* board226532563 = gamma_board(board);
assert( board226532563 != NULL );
assert( strcmp(board226532563, 
"533......\n"
"5.332.3.3\n"
"..44..1..\n"
"41454....\n"
"512.11..2\n") == 0);
free(board226532563);
board226532563 = NULL;
assert( gamma_move(board, 3, 3, 5) == 0 );
assert( gamma_move(board, 3, 0, 0) == 0 );
assert( gamma_golden_possible(board, 3) == 1 );
assert( gamma_golden_move(board, 3, 1, 0) == 0 );
assert( gamma_move(board, 4, 4, 8) == 0 );
assert( gamma_move(board, 5, 2, 8) == 0 );
assert( gamma_move(board, 5, 7, 2) == 0 );
assert( gamma_golden_possible(board, 5) == 1 );
assert( gamma_move(board, 1, 0, 7) == 0 );
assert( gamma_move(board, 2, 2, 0) == 0 );
assert( gamma_move(board, 2, 1, 1) == 0 );
assert( gamma_golden_possible(board, 2) == 1 );
assert( gamma_move(board, 3, 4, 5) == 0 );
assert( gamma_move(board, 3, 0, 1) == 0 );
assert( gamma_move(board, 4, 2, 7) == 0 );
assert( gamma_move(board, 5, 6, 4) == 0 );
assert( gamma_busy_fields(board, 5) == 4 );
assert( gamma_free_fields(board, 5) == 3 );
assert( gamma_move(board, 1, 4, 4) == 0 );
assert( gamma_move(board, 2, 1, 8) == 0 );
assert( gamma_busy_fields(board, 2) == 3 );
assert( gamma_move(board, 3, 2, 5) == 0 );
assert( gamma_move(board, 3, 3, 0) == 0 );
assert( gamma_golden_move(board, 3, 4, 0) == 0 );
assert( gamma_move(board, 4, 4, 3) == 0 );
assert( gamma_move(board, 4, 2, 3) == 0 );
assert( gamma_move(board, 5, 2, 1) == 0 );
assert( gamma_busy_fields(board, 5) == 4 );


gamma_delete(board);

    return 0;
}
