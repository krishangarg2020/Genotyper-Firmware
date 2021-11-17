#ifndef MODEL_H____
#define MODEL_H____

#include <stdlib.h>

namespace Model {

enum class Opcode {
  MOVE,
  HOME,
  ABSOLUTE_POSITION,
  LOAD_TIP,
  CHECK_TIP_PRESSENCE
};

class Gcode {
public:
  Gcode() = default;
  ~Gcode() = default;

  Opcode op;
  std::size_t arg;
};

void com_receive_callback();

} // namespace Model

#endif // MODEL_H____
