#pragma once

#include <string_view>

// Airbus A320 — constantes servant à instancier un AircraftType.
// Unités SI. Valeurs : ORDRES DE GRANDEUR à vérifier (fiche constructeur).
namespace a320 {

inline constexpr std::string_view ID    = "A320";
inline constexpr std::string_view BRAND = "Airbus";
inline constexpr std::string_view MODEL = "A320";
inline constexpr std::string_view SIZE  = "Medium";

inline constexpr float MAX_SPEED        = 250.0f;    // m/s
inline constexpr float MAX_ALTITUDE     = 11900.0f;  // m (~FL390)
inline constexpr float FUEL_CONSUMPTION = 0.67f;     // kg/s (croisière, ~2400 kg/h)
inline constexpr float MAX_FUEL         = 19000.0f;  // kg
inline constexpr float GLIDE_RATIO      = 17.0f;     // finesse (distance / altitude perdue)
inline constexpr float CLIMB_RATE       = 12.0f;     // m/s (moyenne, ~2400 ft/min)
inline constexpr float DESCENT_RATE     = 10.0f;     // m/s (moyenne, ~2000 ft/min)

inline constexpr int TAKEOFF_DURATION   = 40;        // s
inline constexpr int LANDING_DURATION   = 60;        // s

}  // namespace a320
