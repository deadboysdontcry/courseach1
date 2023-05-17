#pragma once
#include <cstdint>
#include <optional>
#include <cmath>

int64_t Gcd(int64_t a, int64_t b);

// y = kx, x <= r
uint64_t GetUnderLine(int64_t k, int64_t r);

// y = Px/Q, x <= r
uint64_t NumberIntegerPointsOnLine(int64_t P, int64_t Q, int64_t r, int64_t gcd);

// y = Px/Q, x <= r
uint64_t GetOnAndUnderLine(int64_t P, int64_t Q, int64_t r, std::optional<int64_t> gcd = std::nullopt);

// y = Px/Q,  l <= x <= r
uint64_t GetOnAndUnderLine(int64_t P, int64_t Q, int64_t l, int64_t r, std::optional<int64_t> gcd = std::nullopt);