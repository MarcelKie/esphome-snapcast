#include "esphome/core/log.h"
#include "snapcast_component.h"

namespace esphome {
namespace snapcast {

static const char *TAG = "snapcast.component";

void snapcast::setup() {

}

void snapcast::loop() {

}

void snapcast::dump_config(){
    ESP_LOGCONFIG(TAG, "SnapCast Component");
}


}  // namespace snapcast
}  // namespace esphome
