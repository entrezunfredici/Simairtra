#pragma once

#include <cstdint>

// Réglages généraux de la simulation (unités SI, temps en secondes).
namespace sim {

// Boucle principale
inline constexpr double   FIXED_TIME_STEP = 0.1;  // s, pas de temps fixe de la simulation
inline constexpr float    MAX_TIME_SPEED  = 1000; // facteur d'accélération maximal du temps

// Aléatoire
inline constexpr std::uint32_t DEFAULT_SEED   = 42;    // graine par défaut (scénarios reproductibles)
inline constexpr bool          RANDOM_ENABLED = true;  // état initial de la case à cocher de l'UI

// Carburant : seuils en fraction de la capacité du type d'avion
inline constexpr float LOW_FUEL_RATIO      = 0.20f;  // événement LowFuel
inline constexpr float CRITICAL_FUEL_RATIO = 0.10f;  // événement FuelCritical

// Pilote : intervalle entre deux décisions
inline constexpr double PILOT_DECISION_INTERVAL = 5.0;  // s

}  // namespace sim
