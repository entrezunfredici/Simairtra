#pragma once

#include <string_view>

// Dassault Rafale — constantes servant à instancier un AircraftType.
// Unités SI. Valeurs : ORDRES DE GRANDEUR à vérifier (sources ouvertes).
namespace rafale {

inline constexpr std::string_view ID    = "RAFALE";
inline constexpr std::string_view BRAND = "Dassault";
inline constexpr std::string_view MODEL = "Rafale";
inline constexpr std::string_view SIZE  = "Small";

inline constexpr float MAX_SPEED        = 530.0f;    // m/s (~Mach 1,8 en altitude)
inline constexpr float MAX_ALTITUDE     = 15800.0f;  // m
inline constexpr float FUEL_CONSUMPTION = 1.0f;      // kg/s (vol subsonique de croisière)
inline constexpr float MAX_FUEL         = 4700.0f;   // kg (carburant interne)
inline constexpr float GLIDE_RATIO      = 8.0f;      // finesse
inline constexpr float CLIMB_RATE       = 100.0f;    // m/s (moyenne ; le pic initial est bien supérieur)
inline constexpr float DESCENT_RATE     = 60.0f;     // m/s (moyenne)

inline constexpr int TAKEOFF_DURATION   = 20;        // s
inline constexpr int LANDING_DURATION   = 40;        // s

}  // namespace rafale
