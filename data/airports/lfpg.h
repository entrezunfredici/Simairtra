#pragma once

#include <string_view>

// Paris-Charles de Gaulle — constantes servant à instancier un Airport.
// Coordonnées en degrés, altitude en mètres.
// Valeurs : à vérifier (SIA / OurAirports). Hangars : placeholder.
namespace lfpg {

inline constexpr std::string_view CODE = "LFPG";
inline constexpr std::string_view NAME = "Paris-Charles de Gaulle";

inline constexpr double LATITUDE  = 49.0097;   // degrés
inline constexpr double LONGITUDE = 2.5479;    // degrés
inline constexpr float  ELEVATION = 119.0f;    // m

inline constexpr int RUNWAYS = 4;
inline constexpr int HANGARS = 10;             // placeholder

}  // namespace lfpg
