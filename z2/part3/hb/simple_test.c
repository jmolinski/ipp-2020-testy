#ifdef NDEBUG
#undef NDEBUG
#endif

#include "gamma.h"
#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

  gamma_t *g = gamma_new(2, 3, 2, 1);
  assert(g != NULL);
  assert(gamma_move(g, 1, 0, 0));
  assert(gamma_move(g, 1, 0, 1));
  assert(gamma_move(g, 1, 1, 0));

  assert(gamma_golden_possible(g, 2));
  assert(!gamma_golden_possible(g, 1));

  assert(!gamma_golden_move(g, 2, 0, 0));
  assert(gamma_golden_possible(g, 2));

  assert(gamma_move(g, 2, 1, 2));
  assert(!gamma_golden_possible(g, 2));

  assert(gamma_move(g, 2, 1, 1));
  assert(gamma_golden_possible(g, 2));

  gamma_delete(g);

  g = gamma_new(2, 3, 2, 1);
  assert(g != NULL);
  assert(gamma_move(g, 1, 1, 1));
  assert(gamma_move(g, 1, 0, 1));
  assert(gamma_move(g, 1, 1, 0));

  assert(gamma_golden_possible(g, 2));
  assert(!gamma_golden_possible(g, 1));

  assert(!gamma_golden_move(g, 2, 0, 0));
  assert(!gamma_golden_move(g, 2, 1, 1));
  assert(gamma_golden_possible(g, 2));

  assert(gamma_move(g, 2, 1, 2));
  assert(!gamma_golden_possible(g, 2));

  assert(gamma_move(g, 2, 0, 2));
  assert(gamma_golden_possible(g, 2));

  gamma_delete(g);
  return 0;
}
