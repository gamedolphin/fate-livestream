#include "fate/log.h"
#include "spdlog/spdlog.h"
#include <iostream>

namespace Fate {

  void LogMessage(std::string message) {
    spdlog::info(message);
  }
};
