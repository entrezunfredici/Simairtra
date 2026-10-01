#pragma once

// Statistiques des événements aléatoires.
//
// IMPORTANT : les valeurs ci-dessous sont des ORDRES DE GRANDEUR PLACEHOLDERS,
// à vérifier et à sourcer (IATA, Boeing Statistical Summary, EASA, NTSB,
// publications médicales, etc.) avant d'être considérées comme réalistes.
// Renseigner la source de chaque valeur dans son commentaire.
//
// Deux familles de taux :
//  - par heure de vol  (événements qui surviennent pendant le vol)
//  - par mouvement     (événements liés à un décollage ou un atterrissage)
//
// Les probabilités sont converties en "par seconde" puis multipliées par dt.
namespace stats {

constexpr double perHour(double ratePerHour) { return ratePerHour / 3600.0; }

// Facteur appliqué à tous les taux (réglable dans l'UI).
// 1.0 = taux réels ; des valeurs élevées rendent les événements visibles en démo.
inline constexpr double DEFAULT_RATE_MULTIPLIER = 1.0;

// ---- Taux par heure de vol (par avion) ------------------------------------

inline constexpr double TURBULENCE_PER_HOUR       = 0.05;     // source : à renseigner
inline constexpr double FUEL_LEAK_PER_HOUR        = 1.0e-5;   // source : à renseigner
inline constexpr double ENGINE_FAILURE_PER_HOUR   = 2.0e-5;   // ~1e-5 par moteur (extinction en vol) ; source : à vérifier
inline constexpr double ENGINE_FIRE_PER_HOUR      = 1.0e-6;   // source : à renseigner
inline constexpr double DEPRESSURIZATION_PER_HOUR = 1.0e-5;   // source : à renseigner
inline constexpr double MEDICAL_EMERGENCY_PER_HOUR = 8.0e-4;  // ~1 vol sur 600 (vol de ~2 h) ; source : à vérifier
inline constexpr double HYDRAULIC_FAILURE_PER_HOUR = 1.0e-5;  // source : à renseigner

// ---- Taux par mouvement (décollage ou atterrissage) -----------------------

inline constexpr double BIRD_STRIKE_PER_MOVEMENT = 1.0e-4;    // source : à renseigner

// ---- Durées et effets ------------------------------------------------------

// Durée de l'événement (min / max, tirée au hasard dans l'intervalle)
inline constexpr float TURBULENCE_DURATION_MIN = 60.0f;    // s
inline constexpr float TURBULENCE_DURATION_MAX = 600.0f;   // s
inline constexpr float FUEL_LEAK_DURATION_MIN  = 600.0f;   // s
inline constexpr float FUEL_LEAK_DURATION_MAX  = 3600.0f;  // s

// Effets
inline constexpr float FUEL_LEAK_CONSUMPTION_FACTOR = 3.0f;  // consommation multipliée
inline constexpr float ENGINE_FAILURE_SPEED_FACTOR  = 0.7f;  // vitesse max multipliée

}  // namespace stats
