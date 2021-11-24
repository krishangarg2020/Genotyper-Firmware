#include <stdlib.h>
#include <unity.h>

#include "model.hpp"

using namespace Model;

void test_struct_gcode_constructs(void) {
  std::size_t position = 1231;
  Gcode g = {Opcode::HOME, position};
  TEST_ASSERT_EQUAL(g.op, Opcode::HOME);
  TEST_ASSERT_EQUAL(g.arg, position);
}

int main(int argc, char **argv) {
  UNITY_BEGIN();
  RUN_TEST(test_struct_gcode_constructs);
  UNITY_END();

  return 0;
}
