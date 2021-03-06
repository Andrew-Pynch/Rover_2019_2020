// ArduinoJson - arduinojson.org
// Copyright Benoit Blanchon 2014-2019
// MIT License

#pragma once

#include "IsBaseOf.hpp"

namespace ArduinoJson {
namespace Internals {

class JsonVariantTag {};

template <typename T>
struct IsVariant : IsBaseOf<JsonVariantTag, T> {};
}  // namespace Internals
}  // namespace ArduinoJson
