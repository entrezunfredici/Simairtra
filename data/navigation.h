#pragma once

// Réglages de navigation (unités SI).
//
// Rayon d'arrivée aux waypoints : un waypoint est considéré comme atteint
// quand l'avion passe sous ce rayon (ou le dépasse : la distance recommence
// à augmenter). Une valeur par phase de vol ; le rayon change à chaque
// transition de phase.
//
// Valeurs de départ, à ajuster. Un rayon trop petit peut être sauté
// (il doit rester nettement supérieur à vitesse × dt), un rayon trop grand
// valide le point trop tôt.
namespace nav {

inline constexpr float CAPTURE_RADIUS_TAKING_OFF = 1000.0f;  // m
inline constexpr float CAPTURE_RADIUS_CLIMBING   = 5000.0f;  // m
inline constexpr float CAPTURE_RADIUS_CRUISING   = 5000.0f;  // m
inline constexpr float CAPTURE_RADIUS_DESCENDING = 3000.0f;  // m
inline constexpr float CAPTURE_RADIUS_LANDING    = 1000.0f;  // m
inline constexpr float CAPTURE_RADIUS_GLIDING    = 3000.0f;  // m

// Pente de descente vers l'aéroport d'arrivée : la descente commence quand
// distance restante <= (altitude - altitude d'arrivée) / tan(pente).
inline constexpr float APPROACH_SLOPE_DEG = 3.0f;  // degrés

}  // namespace nav
