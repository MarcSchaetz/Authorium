#ifndef AUTHORIUM_LOGGER_H
#define AUTHORIUM_LOGGER_H
#include <spdlog/spdlog.h>

#define logdef_info(msg, __VARGS__) spdlog::info(msg, __VARGS__)
#define logdef_debug(msg, __VARGS__) spdlog::debug(msg, __VARGS__)
#define logdef_warn(msg, __VARGS__) spdlog::warn(msg, __VARGS__)
#define logdef_error(msg, __VARGS__) spdlog::error(msg, __VARGS__)

#endif // AUTHORIUM_LOGGER_H