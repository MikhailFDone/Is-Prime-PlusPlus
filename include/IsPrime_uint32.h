#pragma once
#include <cstdint>
#include "PositionsOfPrimesUint32.h"

namespace lib_is_prime
{
	inline bool IsPrime(uint32_t number)
	{
		if (number % 2 == 0) return (number == 2);
		if (number % 3 == 0) return (number == 3);

		const uint32_t index = number / 3;
		const uint32_t index_of_bitmask = index / 64;
		const uint32_t index_in_bitmask = index % 64;

		constexpr uint32_t size_of_all_positions_chunks = 22369622;
		constexpr uint32_t chunk_size = size_of_all_positions_chunks / 64;

		uint32_t number_of_chunk_for_index = index_of_bitmask / chunk_size;
		uint32_t index_in_chunk = index_of_bitmask % chunk_size;

		return positions_of_uint32_primes[number_of_chunk_for_index][index_in_chunk] & (1ULL << index_in_bitmask);
	}
}
