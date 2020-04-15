#include <stdint.h>
#include <stdlib.h>
#include <assert.h>
#include <stdio.h>
#include "gamma.h"
#include <stdbool.h>
#include <string.h>


int main() {

/*
scenario: test_many_boards
uuid: 554026152
*/
/*
gamma_move + gamma_board, a few boards at the same time
*/
gamma_t* board1 = gamma_new(4, 4, 4, 16);
assert( board1 != NULL );


gamma_t* board2 = gamma_new(4, 4, 4, 16);
assert( board2 != NULL );


gamma_t* board3 = gamma_new(4, 4, 4, 16);
assert( board3 != NULL );


assert( gamma_move(board1, 1, 1, 0) == 1 );


char* board556743522 = gamma_board(board1);
assert( board556743522 != NULL );
assert( strcmp(board556743522, 
"....\n"
"....\n"
"....\n"
".1..\n") == 0);
free(board556743522);
board556743522 = NULL;
assert( gamma_move(board2, 1, 3, 3) == 1 );


char* board724500783 = gamma_board(board2);
assert( board724500783 != NULL );
assert( strcmp(board724500783, 
"...1\n"
"....\n"
"....\n"
"....\n") == 0);
free(board724500783);
board724500783 = NULL;
assert( gamma_move(board3, 1, 0, 0) == 1 );


char* board718398780 = gamma_board(board3);
assert( board718398780 != NULL );
assert( strcmp(board718398780, 
"....\n"
"....\n"
"....\n"
"1...\n") == 0);
free(board718398780);
board718398780 = NULL;
assert( gamma_move(board1, 2, 2, 3) == 1 );
assert( gamma_move(board2, 2, 1, 1) == 1 );
assert( gamma_move(board3, 2, 1, 2) == 1 );
assert( gamma_move(board1, 3, 2, 3) == 0 );
assert( gamma_move(board2, 3, 2, 3) == 1 );
assert( gamma_move(board3, 3, 1, 2) == 0 );
assert( gamma_move(board1, 4, 1, 3) == 1 );
assert( gamma_move(board2, 4, 3, 0) == 1 );
assert( gamma_move(board3, 4, 3, 0) == 1 );
assert( gamma_move(board1, 1, 1, 2) == 1 );


char* board507659791 = gamma_board(board1);
assert( board507659791 != NULL );
assert( strcmp(board507659791, 
".42.\n"
".1..\n"
"....\n"
".1..\n") == 0);
free(board507659791);
board507659791 = NULL;
assert( gamma_move(board2, 1, 1, 2) == 1 );


char* board510615878 = gamma_board(board2);
assert( board510615878 != NULL );
assert( strcmp(board510615878, 
"..31\n"
".1..\n"
".2..\n"
"...4\n") == 0);
free(board510615878);
board510615878 = NULL;
assert( gamma_move(board3, 1, 0, 3) == 1 );


char* board417166941 = gamma_board(board3);
assert( board417166941 != NULL );
assert( strcmp(board417166941, 
"1...\n"
".2..\n"
"....\n"
"1..4\n") == 0);
free(board417166941);
board417166941 = NULL;
assert( gamma_move(board1, 2, 3, 1) == 1 );
assert( gamma_move(board2, 2, 1, 1) == 0 );
assert( gamma_move(board3, 2, 2, 0) == 1 );
assert( gamma_move(board1, 3, 3, 0) == 1 );
assert( gamma_move(board2, 3, 0, 0) == 1 );
assert( gamma_move(board3, 3, 3, 0) == 0 );
assert( gamma_move(board1, 4, 3, 2) == 1 );
assert( gamma_move(board2, 4, 1, 3) == 1 );
assert( gamma_move(board3, 4, 2, 0) == 0 );
assert( gamma_move(board1, 1, 2, 1) == 1 );


char* board219547717 = gamma_board(board1);
assert( board219547717 != NULL );
assert( strcmp(board219547717, 
".42.\n"
".1.4\n"
"..12\n"
".1.3\n") == 0);
free(board219547717);
board219547717 = NULL;
assert( gamma_move(board2, 1, 2, 2) == 1 );


char* board517259313 = gamma_board(board2);
assert( board517259313 != NULL );
assert( strcmp(board517259313, 
".431\n"
".11.\n"
".2..\n"
"3..4\n") == 0);
free(board517259313);
board517259313 = NULL;
assert( gamma_move(board3, 1, 0, 2) == 1 );


char* board733525136 = gamma_board(board3);
assert( board733525136 != NULL );
assert( strcmp(board733525136, 
"1...\n"
"12..\n"
"....\n"
"1.24\n") == 0);
free(board733525136);
board733525136 = NULL;
assert( gamma_move(board1, 2, 2, 3) == 0 );
assert( gamma_move(board2, 2, 2, 0) == 1 );
assert( gamma_move(board3, 2, 3, 3) == 1 );
assert( gamma_move(board1, 3, 1, 1) == 1 );
assert( gamma_move(board2, 3, 0, 3) == 1 );
assert( gamma_move(board3, 3, 3, 2) == 1 );
assert( gamma_move(board1, 4, 2, 0) == 1 );
assert( gamma_move(board2, 4, 1, 1) == 0 );
assert( gamma_move(board3, 4, 0, 2) == 0 );
assert( gamma_move(board1, 1, 0, 3) == 1 );


char* board900917672 = gamma_board(board1);
assert( board900917672 != NULL );
assert( strcmp(board900917672, 
"142.\n"
".1.4\n"
".312\n"
".143\n") == 0);
free(board900917672);
board900917672 = NULL;
assert( gamma_move(board2, 1, 3, 2) == 1 );


char* board112006298 = gamma_board(board2);
assert( board112006298 != NULL );
assert( strcmp(board112006298, 
"3431\n"
".111\n"
".2..\n"
"3.24\n") == 0);
free(board112006298);
board112006298 = NULL;
assert( gamma_move(board3, 1, 2, 1) == 1 );


char* board884007886 = gamma_board(board3);
assert( board884007886 != NULL );
assert( strcmp(board884007886, 
"1..2\n"
"12.3\n"
"..1.\n"
"1.24\n") == 0);
free(board884007886);
board884007886 = NULL;
assert( gamma_move(board1, 2, 2, 2) == 1 );
assert( gamma_move(board2, 2, 1, 1) == 0 );
assert( gamma_move(board3, 2, 0, 3) == 0 );
assert( gamma_move(board1, 3, 1, 0) == 0 );
assert( gamma_move(board2, 3, 1, 3) == 0 );
assert( gamma_move(board3, 3, 0, 0) == 0 );
assert( gamma_move(board1, 4, 1, 1) == 0 );
assert( gamma_move(board2, 4, 2, 3) == 0 );
assert( gamma_move(board3, 4, 1, 0) == 1 );
assert( gamma_move(board1, 1, 0, 3) == 0 );


char* board457307926 = gamma_board(board1);
assert( board457307926 != NULL );
assert( strcmp(board457307926, 
"142.\n"
".124\n"
".312\n"
".143\n") == 0);
free(board457307926);
board457307926 = NULL;
assert( gamma_move(board2, 1, 1, 2) == 0 );


char* board929553971 = gamma_board(board2);
assert( board929553971 != NULL );
assert( strcmp(board929553971, 
"3431\n"
".111\n"
".2..\n"
"3.24\n") == 0);
free(board929553971);
board929553971 = NULL;
assert( gamma_move(board3, 1, 3, 3) == 0 );


char* board177681699 = gamma_board(board3);
assert( board177681699 != NULL );
assert( strcmp(board177681699, 
"1..2\n"
"12.3\n"
"..1.\n"
"1424\n") == 0);
free(board177681699);
board177681699 = NULL;
assert( gamma_move(board1, 2, 3, 2) == 0 );
assert( gamma_move(board2, 2, 0, 0) == 0 );
assert( gamma_move(board3, 2, 0, 1) == 1 );
assert( gamma_move(board1, 3, 0, 3) == 0 );
assert( gamma_move(board2, 3, 2, 2) == 0 );
assert( gamma_move(board3, 3, 3, 0) == 0 );
assert( gamma_move(board1, 4, 1, 0) == 0 );
assert( gamma_move(board2, 4, 0, 3) == 0 );
assert( gamma_move(board3, 4, 3, 3) == 0 );
assert( gamma_move(board1, 1, 3, 0) == 0 );


char* board424837751 = gamma_board(board1);
assert( board424837751 != NULL );
assert( strcmp(board424837751, 
"142.\n"
".124\n"
".312\n"
".143\n") == 0);
free(board424837751);
board424837751 = NULL;
assert( gamma_move(board2, 1, 3, 0) == 0 );


char* board831243793 = gamma_board(board2);
assert( board831243793 != NULL );
assert( strcmp(board831243793, 
"3431\n"
".111\n"
".2..\n"
"3.24\n") == 0);
free(board831243793);
board831243793 = NULL;
assert( gamma_move(board3, 1, 1, 2) == 0 );


char* board735824723 = gamma_board(board3);
assert( board735824723 != NULL );
assert( strcmp(board735824723, 
"1..2\n"
"12.3\n"
"2.1.\n"
"1424\n") == 0);
free(board735824723);
board735824723 = NULL;
assert( gamma_move(board1, 2, 1, 3) == 0 );
assert( gamma_move(board2, 2, 2, 2) == 0 );
assert( gamma_move(board3, 2, 3, 2) == 0 );
assert( gamma_move(board1, 3, 2, 0) == 0 );
assert( gamma_move(board2, 3, 3, 2) == 0 );
assert( gamma_move(board3, 3, 2, 0) == 0 );
assert( gamma_move(board1, 4, 3, 2) == 0 );
assert( gamma_move(board2, 4, 2, 3) == 0 );
assert( gamma_move(board3, 4, 0, 0) == 0 );
assert( gamma_move(board1, 1, 3, 1) == 0 );


char* board619245396 = gamma_board(board1);
assert( board619245396 != NULL );
assert( strcmp(board619245396, 
"142.\n"
".124\n"
".312\n"
".143\n") == 0);
free(board619245396);
board619245396 = NULL;
assert( gamma_move(board2, 1, 1, 3) == 0 );


char* board406097068 = gamma_board(board2);
assert( board406097068 != NULL );
assert( strcmp(board406097068, 
"3431\n"
".111\n"
".2..\n"
"3.24\n") == 0);
free(board406097068);
board406097068 = NULL;
assert( gamma_move(board3, 1, 3, 1) == 1 );


char* board547499229 = gamma_board(board3);
assert( board547499229 != NULL );
assert( strcmp(board547499229, 
"1..2\n"
"12.3\n"
"2.11\n"
"1424\n") == 0);
free(board547499229);
board547499229 = NULL;
assert( gamma_move(board1, 2, 3, 0) == 0 );
assert( gamma_move(board2, 2, 1, 0) == 1 );
assert( gamma_move(board3, 2, 3, 3) == 0 );
assert( gamma_move(board1, 3, 1, 3) == 0 );
assert( gamma_move(board2, 3, 3, 3) == 0 );
assert( gamma_move(board3, 3, 2, 1) == 0 );
assert( gamma_move(board1, 4, 2, 1) == 0 );
assert( gamma_move(board2, 4, 2, 1) == 1 );
assert( gamma_move(board3, 4, 1, 1) == 1 );
assert( gamma_move(board1, 1, 0, 0) == 1 );


char* board154266093 = gamma_board(board1);
assert( board154266093 != NULL );
assert( strcmp(board154266093, 
"142.\n"
".124\n"
".312\n"
"1143\n") == 0);
free(board154266093);
board154266093 = NULL;
assert( gamma_move(board2, 1, 2, 0) == 0 );


char* board308388199 = gamma_board(board2);
assert( board308388199 != NULL );
assert( strcmp(board308388199, 
"3431\n"
".111\n"
".24.\n"
"3224\n") == 0);
free(board308388199);
board308388199 = NULL;
assert( gamma_move(board3, 1, 3, 0) == 0 );


char* board139153469 = gamma_board(board3);
assert( board139153469 != NULL );
assert( strcmp(board139153469, 
"1..2\n"
"12.3\n"
"2411\n"
"1424\n") == 0);
free(board139153469);
board139153469 = NULL;
assert( gamma_move(board1, 2, 1, 3) == 0 );
assert( gamma_move(board2, 2, 1, 2) == 0 );
assert( gamma_move(board3, 2, 2, 0) == 0 );
assert( gamma_move(board1, 3, 3, 2) == 0 );
assert( gamma_move(board2, 3, 2, 1) == 0 );
assert( gamma_move(board3, 3, 0, 1) == 0 );
assert( gamma_move(board1, 4, 3, 2) == 0 );
assert( gamma_move(board2, 4, 0, 2) == 1 );
assert( gamma_move(board3, 4, 3, 2) == 0 );
assert( gamma_move(board1, 1, 3, 3) == 1 );


char* board427293970 = gamma_board(board1);
assert( board427293970 != NULL );
assert( strcmp(board427293970, 
"1421\n"
".124\n"
".312\n"
"1143\n") == 0);
free(board427293970);
board427293970 = NULL;
assert( gamma_move(board2, 1, 0, 2) == 0 );


char* board507021610 = gamma_board(board2);
assert( board507021610 != NULL );
assert( strcmp(board507021610, 
"3431\n"
"4111\n"
".24.\n"
"3224\n") == 0);
free(board507021610);
board507021610 = NULL;
assert( gamma_move(board3, 1, 0, 1) == 0 );


char* board524308066 = gamma_board(board3);
assert( board524308066 != NULL );
assert( strcmp(board524308066, 
"1..2\n"
"12.3\n"
"2411\n"
"1424\n") == 0);
free(board524308066);
board524308066 = NULL;
assert( gamma_move(board1, 2, 1, 3) == 0 );
assert( gamma_move(board2, 2, 1, 3) == 0 );
assert( gamma_move(board3, 2, 3, 0) == 0 );
assert( gamma_move(board1, 3, 0, 2) == 1 );
assert( gamma_move(board2, 3, 2, 0) == 0 );
assert( gamma_move(board3, 3, 3, 0) == 0 );
assert( gamma_move(board1, 4, 0, 0) == 0 );
assert( gamma_move(board2, 4, 0, 1) == 1 );
assert( gamma_move(board3, 4, 1, 1) == 0 );
assert( gamma_move(board1, 1, 2, 1) == 0 );


char* board814840250 = gamma_board(board1);
assert( board814840250 != NULL );
assert( strcmp(board814840250, 
"1421\n"
"3124\n"
".312\n"
"1143\n") == 0);
free(board814840250);
board814840250 = NULL;
assert( gamma_move(board2, 1, 2, 3) == 0 );


char* board572859236 = gamma_board(board2);
assert( board572859236 != NULL );
assert( strcmp(board572859236, 
"3431\n"
"4111\n"
"424.\n"
"3224\n") == 0);
free(board572859236);
board572859236 = NULL;
assert( gamma_move(board3, 1, 2, 2) == 1 );


char* board214229628 = gamma_board(board3);
assert( board214229628 != NULL );
assert( strcmp(board214229628, 
"1..2\n"
"1213\n"
"2411\n"
"1424\n") == 0);
free(board214229628);
board214229628 = NULL;
assert( gamma_move(board1, 2, 3, 3) == 0 );
assert( gamma_move(board2, 2, 3, 0) == 0 );
assert( gamma_move(board3, 2, 3, 0) == 0 );
assert( gamma_move(board1, 3, 1, 2) == 0 );
assert( gamma_move(board2, 3, 3, 3) == 0 );
assert( gamma_move(board3, 3, 1, 1) == 0 );
assert( gamma_move(board1, 4, 2, 0) == 0 );
assert( gamma_move(board2, 4, 2, 2) == 0 );
assert( gamma_move(board3, 4, 1, 3) == 1 );
assert( gamma_move(board1, 1, 0, 3) == 0 );


char* board145362184 = gamma_board(board1);
assert( board145362184 != NULL );
assert( strcmp(board145362184, 
"1421\n"
"3124\n"
".312\n"
"1143\n") == 0);
free(board145362184);
board145362184 = NULL;
assert( gamma_move(board2, 1, 2, 3) == 0 );


char* board380090686 = gamma_board(board2);
assert( board380090686 != NULL );
assert( strcmp(board380090686, 
"3431\n"
"4111\n"
"424.\n"
"3224\n") == 0);
free(board380090686);
board380090686 = NULL;
assert( gamma_move(board3, 1, 0, 1) == 0 );


char* board478242945 = gamma_board(board3);
assert( board478242945 != NULL );
assert( strcmp(board478242945, 
"14.2\n"
"1213\n"
"2411\n"
"1424\n") == 0);
free(board478242945);
board478242945 = NULL;
assert( gamma_move(board1, 2, 0, 0) == 0 );
assert( gamma_move(board2, 2, 0, 2) == 0 );
assert( gamma_move(board3, 2, 3, 2) == 0 );
assert( gamma_move(board1, 3, 1, 1) == 0 );
assert( gamma_move(board2, 3, 1, 3) == 0 );
assert( gamma_move(board3, 3, 0, 0) == 0 );
assert( gamma_move(board1, 4, 1, 1) == 0 );
assert( gamma_move(board2, 4, 0, 0) == 0 );
assert( gamma_move(board3, 4, 2, 3) == 1 );
assert( gamma_move(board1, 1, 2, 0) == 0 );


char* board915550628 = gamma_board(board1);
assert( board915550628 != NULL );
assert( strcmp(board915550628, 
"1421\n"
"3124\n"
".312\n"
"1143\n") == 0);
free(board915550628);
board915550628 = NULL;
assert( gamma_move(board2, 1, 1, 2) == 0 );


char* board128030268 = gamma_board(board2);
assert( board128030268 != NULL );
assert( strcmp(board128030268, 
"3431\n"
"4111\n"
"424.\n"
"3224\n") == 0);
free(board128030268);
board128030268 = NULL;
assert( gamma_move(board3, 1, 0, 2) == 0 );


char* board541014219 = gamma_board(board3);
assert( board541014219 != NULL );
assert( strcmp(board541014219, 
"1442\n"
"1213\n"
"2411\n"
"1424\n") == 0);
free(board541014219);
board541014219 = NULL;
assert( gamma_move(board1, 2, 0, 1) == 1 );
assert( gamma_move(board2, 2, 2, 0) == 0 );
assert( gamma_move(board3, 2, 3, 2) == 0 );
assert( gamma_move(board1, 3, 3, 3) == 0 );
assert( gamma_move(board2, 3, 0, 1) == 0 );
assert( gamma_move(board3, 3, 3, 2) == 0 );
assert( gamma_move(board1, 4, 1, 2) == 0 );
assert( gamma_move(board2, 4, 1, 1) == 0 );
assert( gamma_move(board3, 4, 0, 3) == 0 );


gamma_delete(board1);


gamma_delete(board3);


gamma_delete(board2);

    return 0;
}
