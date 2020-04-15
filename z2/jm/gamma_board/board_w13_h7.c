#include <stdint.h>
#include <stdlib.h>
#include <assert.h>
#include <stdio.h>
#include "gamma.h"
#include <stdbool.h>
#include <string.h>


int main() {

/*
scenario: test_gamma_board
uuid: 413766716
*/
/*
gamma_move + gamma_board
*/
gamma_t* board = gamma_new(7, 13, 9, 9);
assert( board != NULL );


assert( gamma_move(board, 1, 13, 2) == 0 );


char* board890528397 = gamma_board(board);
assert( board890528397 != NULL );
assert( strcmp(board890528397, 
".......\n"
".......\n"
".......\n"
".......\n"
".......\n"
".......\n"
".......\n"
".......\n"
".......\n"
".......\n"
".......\n"
".......\n"
".......\n") == 0);
free(board890528397);
board890528397 = NULL;
assert( gamma_move(board, 2, 13, 5) == 0 );
assert( gamma_move(board, 3, 2, 2) == 1 );
assert( gamma_move(board, 4, 0, 5) == 1 );
assert( gamma_move(board, 5, 9, 7) == 0 );
assert( gamma_move(board, 6, 0, 7) == 1 );


char* board505898893 = gamma_board(board);
assert( board505898893 != NULL );
assert( strcmp(board505898893, 
".......\n"
".......\n"
".......\n"
".......\n"
".......\n"
"6......\n"
".......\n"
"4......\n"
".......\n"
".......\n"
"..3....\n"
".......\n"
".......\n") == 0);
free(board505898893);
board505898893 = NULL;
assert( gamma_move(board, 7, 1, 0) == 1 );
assert( gamma_move(board, 8, 10, 0) == 0 );
assert( gamma_move(board, 9, 12, 1) == 0 );
assert( gamma_move(board, 1, 13, 4) == 0 );


char* board769205024 = gamma_board(board);
assert( board769205024 != NULL );
assert( strcmp(board769205024, 
".......\n"
".......\n"
".......\n"
".......\n"
".......\n"
"6......\n"
".......\n"
"4......\n"
".......\n"
".......\n"
"..3....\n"
".......\n"
".7.....\n") == 0);
free(board769205024);
board769205024 = NULL;
assert( gamma_move(board, 2, 13, 0) == 0 );
assert( gamma_move(board, 3, 6, 6) == 1 );
assert( gamma_move(board, 4, 11, 3) == 0 );
assert( gamma_move(board, 5, 12, 2) == 0 );
assert( gamma_move(board, 6, 2, 3) == 1 );


char* board618262145 = gamma_board(board);
assert( board618262145 != NULL );
assert( strcmp(board618262145, 
".......\n"
".......\n"
".......\n"
".......\n"
".......\n"
"6......\n"
"......3\n"
"4......\n"
".......\n"
"..6....\n"
"..3....\n"
".......\n"
".7.....\n") == 0);
free(board618262145);
board618262145 = NULL;
assert( gamma_move(board, 7, 1, 3) == 1 );
assert( gamma_move(board, 8, 11, 6) == 0 );
assert( gamma_move(board, 9, 13, 3) == 0 );
assert( gamma_move(board, 1, 12, 6) == 0 );


char* board351308626 = gamma_board(board);
assert( board351308626 != NULL );
assert( strcmp(board351308626, 
".......\n"
".......\n"
".......\n"
".......\n"
".......\n"
"6......\n"
"......3\n"
"4......\n"
".......\n"
".76....\n"
"..3....\n"
".......\n"
".7.....\n") == 0);
free(board351308626);
board351308626 = NULL;
assert( gamma_move(board, 2, 6, 5) == 1 );
assert( gamma_move(board, 3, 11, 2) == 0 );
assert( gamma_move(board, 4, 11, 1) == 0 );
assert( gamma_move(board, 5, 13, 2) == 0 );
assert( gamma_move(board, 6, 11, 5) == 0 );


char* board198404951 = gamma_board(board);
assert( board198404951 != NULL );
assert( strcmp(board198404951, 
".......\n"
".......\n"
".......\n"
".......\n"
".......\n"
"6......\n"
"......3\n"
"4.....2\n"
".......\n"
".76....\n"
"..3....\n"
".......\n"
".7.....\n") == 0);
free(board198404951);
board198404951 = NULL;
assert( gamma_move(board, 7, 9, 1) == 0 );
assert( gamma_move(board, 8, 5, 7) == 1 );
assert( gamma_move(board, 9, 13, 0) == 0 );
assert( gamma_move(board, 1, 5, 5) == 1 );


char* board903947073 = gamma_board(board);
assert( board903947073 != NULL );
assert( strcmp(board903947073, 
".......\n"
".......\n"
".......\n"
".......\n"
".......\n"
"6....8.\n"
"......3\n"
"4....12\n"
".......\n"
".76....\n"
"..3....\n"
".......\n"
".7.....\n") == 0);
free(board903947073);
board903947073 = NULL;
assert( gamma_move(board, 2, 11, 1) == 0 );
assert( gamma_move(board, 3, 7, 3) == 0 );
assert( gamma_move(board, 4, 6, 2) == 1 );
assert( gamma_move(board, 5, 10, 3) == 0 );
assert( gamma_move(board, 6, 1, 1) == 1 );


char* board887353056 = gamma_board(board);
assert( board887353056 != NULL );
assert( strcmp(board887353056, 
".......\n"
".......\n"
".......\n"
".......\n"
".......\n"
"6....8.\n"
"......3\n"
"4....12\n"
".......\n"
".76....\n"
"..3...4\n"
".6.....\n"
".7.....\n") == 0);
free(board887353056);
board887353056 = NULL;
assert( gamma_move(board, 7, 2, 0) == 1 );
assert( gamma_move(board, 8, 5, 5) == 0 );
assert( gamma_move(board, 9, 5, 5) == 0 );
assert( gamma_move(board, 1, 12, 2) == 0 );


char* board998417869 = gamma_board(board);
assert( board998417869 != NULL );
assert( strcmp(board998417869, 
".......\n"
".......\n"
".......\n"
".......\n"
".......\n"
"6....8.\n"
"......3\n"
"4....12\n"
".......\n"
".76....\n"
"..3...4\n"
".6.....\n"
".77....\n") == 0);
free(board998417869);
board998417869 = NULL;
assert( gamma_move(board, 2, 7, 2) == 0 );
assert( gamma_move(board, 3, 5, 5) == 0 );
assert( gamma_move(board, 4, 1, 1) == 0 );
assert( gamma_move(board, 5, 4, 3) == 1 );
assert( gamma_move(board, 6, 0, 7) == 0 );


char* board617387224 = gamma_board(board);
assert( board617387224 != NULL );
assert( strcmp(board617387224, 
".......\n"
".......\n"
".......\n"
".......\n"
".......\n"
"6....8.\n"
"......3\n"
"4....12\n"
".......\n"
".76.5..\n"
"..3...4\n"
".6.....\n"
".77....\n") == 0);
free(board617387224);
board617387224 = NULL;
assert( gamma_move(board, 7, 5, 5) == 0 );
assert( gamma_move(board, 8, 1, 2) == 1 );
assert( gamma_move(board, 9, 4, 0) == 1 );
assert( gamma_move(board, 1, 7, 4) == 0 );


char* board635877255 = gamma_board(board);
assert( board635877255 != NULL );
assert( strcmp(board635877255, 
".......\n"
".......\n"
".......\n"
".......\n"
".......\n"
"6....8.\n"
"......3\n"
"4....12\n"
".......\n"
".76.5..\n"
".83...4\n"
".6.....\n"
".77.9..\n") == 0);
free(board635877255);
board635877255 = NULL;
assert( gamma_move(board, 2, 5, 3) == 1 );
assert( gamma_move(board, 3, 5, 4) == 1 );
assert( gamma_move(board, 4, 3, 2) == 1 );
assert( gamma_move(board, 5, 13, 5) == 0 );
assert( gamma_move(board, 6, 1, 4) == 1 );


char* board424751141 = gamma_board(board);
assert( board424751141 != NULL );
assert( strcmp(board424751141, 
".......\n"
".......\n"
".......\n"
".......\n"
".......\n"
"6....8.\n"
"......3\n"
"4....12\n"
".6...3.\n"
".76.52.\n"
".834..4\n"
".6.....\n"
".77.9..\n") == 0);
free(board424751141);
board424751141 = NULL;
assert( gamma_move(board, 7, 9, 7) == 0 );
assert( gamma_move(board, 8, 13, 2) == 0 );
assert( gamma_move(board, 9, 11, 6) == 0 );
assert( gamma_move(board, 1, 8, 0) == 0 );


char* board776089696 = gamma_board(board);
assert( board776089696 != NULL );
assert( strcmp(board776089696, 
".......\n"
".......\n"
".......\n"
".......\n"
".......\n"
"6....8.\n"
"......3\n"
"4....12\n"
".6...3.\n"
".76.52.\n"
".834..4\n"
".6.....\n"
".77.9..\n") == 0);
free(board776089696);
board776089696 = NULL;
assert( gamma_move(board, 2, 8, 0) == 0 );
assert( gamma_move(board, 3, 7, 6) == 0 );
assert( gamma_move(board, 4, 7, 2) == 0 );
assert( gamma_move(board, 5, 3, 3) == 1 );
assert( gamma_move(board, 6, 6, 0) == 1 );


char* board535944274 = gamma_board(board);
assert( board535944274 != NULL );
assert( strcmp(board535944274, 
".......\n"
".......\n"
".......\n"
".......\n"
".......\n"
"6....8.\n"
"......3\n"
"4....12\n"
".6...3.\n"
".76552.\n"
".834..4\n"
".6.....\n"
".77.9.6\n") == 0);
free(board535944274);
board535944274 = NULL;
assert( gamma_move(board, 7, 6, 2) == 0 );
assert( gamma_move(board, 8, 0, 6) == 1 );
assert( gamma_move(board, 9, 12, 1) == 0 );
assert( gamma_move(board, 1, 8, 5) == 0 );


char* board979541991 = gamma_board(board);
assert( board979541991 != NULL );
assert( strcmp(board979541991, 
".......\n"
".......\n"
".......\n"
".......\n"
".......\n"
"6....8.\n"
"8.....3\n"
"4....12\n"
".6...3.\n"
".76552.\n"
".834..4\n"
".6.....\n"
".77.9.6\n") == 0);
free(board979541991);
board979541991 = NULL;
assert( gamma_move(board, 2, 2, 7) == 1 );
assert( gamma_move(board, 3, 5, 0) == 1 );
assert( gamma_move(board, 4, 10, 5) == 0 );
assert( gamma_move(board, 5, 0, 5) == 0 );
assert( gamma_move(board, 6, 12, 0) == 0 );


char* board700863809 = gamma_board(board);
assert( board700863809 != NULL );
assert( strcmp(board700863809, 
".......\n"
".......\n"
".......\n"
".......\n"
".......\n"
"6.2..8.\n"
"8.....3\n"
"4....12\n"
".6...3.\n"
".76552.\n"
".834..4\n"
".6.....\n"
".77.936\n") == 0);
free(board700863809);
board700863809 = NULL;
assert( gamma_move(board, 7, 3, 5) == 1 );
assert( gamma_move(board, 8, 6, 1) == 1 );
assert( gamma_move(board, 9, 13, 6) == 0 );
assert( gamma_move(board, 1, 10, 7) == 0 );


char* board781405595 = gamma_board(board);
assert( board781405595 != NULL );
assert( strcmp(board781405595, 
".......\n"
".......\n"
".......\n"
".......\n"
".......\n"
"6.2..8.\n"
"8.....3\n"
"4..7.12\n"
".6...3.\n"
".76552.\n"
".834..4\n"
".6....8\n"
".77.936\n") == 0);
free(board781405595);
board781405595 = NULL;
assert( gamma_move(board, 2, 6, 0) == 0 );
assert( gamma_move(board, 3, 7, 1) == 0 );
assert( gamma_move(board, 4, 8, 2) == 0 );
assert( gamma_move(board, 5, 7, 3) == 0 );
assert( gamma_move(board, 6, 2, 4) == 1 );


char* board763324405 = gamma_board(board);
assert( board763324405 != NULL );
assert( strcmp(board763324405, 
".......\n"
".......\n"
".......\n"
".......\n"
".......\n"
"6.2..8.\n"
"8.....3\n"
"4..7.12\n"
".66..3.\n"
".76552.\n"
".834..4\n"
".6....8\n"
".77.936\n") == 0);
free(board763324405);
board763324405 = NULL;
assert( gamma_move(board, 7, 12, 0) == 0 );
assert( gamma_move(board, 8, 6, 2) == 0 );
assert( gamma_move(board, 9, 7, 1) == 0 );
assert( gamma_move(board, 1, 11, 3) == 0 );


char* board427992312 = gamma_board(board);
assert( board427992312 != NULL );
assert( strcmp(board427992312, 
".......\n"
".......\n"
".......\n"
".......\n"
".......\n"
"6.2..8.\n"
"8.....3\n"
"4..7.12\n"
".66..3.\n"
".76552.\n"
".834..4\n"
".6....8\n"
".77.936\n") == 0);
free(board427992312);
board427992312 = NULL;
assert( gamma_move(board, 2, 13, 6) == 0 );
assert( gamma_move(board, 3, 6, 1) == 0 );
assert( gamma_move(board, 4, 8, 6) == 0 );
assert( gamma_move(board, 5, 13, 3) == 0 );
assert( gamma_move(board, 6, 2, 0) == 0 );


char* board815419501 = gamma_board(board);
assert( board815419501 != NULL );
assert( strcmp(board815419501, 
".......\n"
".......\n"
".......\n"
".......\n"
".......\n"
"6.2..8.\n"
"8.....3\n"
"4..7.12\n"
".66..3.\n"
".76552.\n"
".834..4\n"
".6....8\n"
".77.936\n") == 0);
free(board815419501);
board815419501 = NULL;
assert( gamma_move(board, 7, 0, 7) == 0 );
assert( gamma_move(board, 8, 6, 7) == 1 );
assert( gamma_move(board, 9, 5, 0) == 0 );
assert( gamma_move(board, 1, 13, 6) == 0 );


char* board530255865 = gamma_board(board);
assert( board530255865 != NULL );
assert( strcmp(board530255865, 
".......\n"
".......\n"
".......\n"
".......\n"
".......\n"
"6.2..88\n"
"8.....3\n"
"4..7.12\n"
".66..3.\n"
".76552.\n"
".834..4\n"
".6....8\n"
".77.936\n") == 0);
free(board530255865);
board530255865 = NULL;


gamma_delete(board);

    return 0;
}
