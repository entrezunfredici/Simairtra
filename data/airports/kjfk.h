#pragma once

#include <string_view>

// New York-John F. Kennedy — constantes servant à instancier un Airport.
// Coordonnées en degrés, altitude en mètres.
// Valeurs : à vérifier (FAA / OurAirports). Hangars : placeholder.
namespace kjfk {

inline constexpr std::string_view CODE = "KJFK";
inline constexpr std::string_view NAME = "New York-John F. Kennedy";

inline constexpr double LATITUDE  = 40.6413;   // degrés
inline constexpr double LONGITUDE = -73.7781;  // degrés
inline constexpr float  ELEVATION = 4.0f;      // m

inline constexpr int RUNWAYS = 4;
inline constexpr int HANGARS = 10;             // placeholder

}  // namespace kjfk
