#pragma once

#include "esphome/core/component.h"

namespace esphome {
namespace snapcast {

class snapcast : public Component {
 public:
  void setup() override;
  void loop() override;
  void dump_config() override;
};


}  // namespace snapcast
}  // namespace esphome
