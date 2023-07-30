#pragma once
#include <cstdint>
#include "PositionsOfPrimesUint32.h"

namespace lib_is_prime
{
	inline bool IsPrime(uint32_t number)
	{
		if (number % 2 == 0) return (number == 2);
		if (number % 3 == 0) return (number == 3);

		if (number >= 4294963201) // TODO: fix array. end is missing
		{
			return number == 4294963237 ||
number == 4294963291 ||
number == 4294963313 ||
number == 4294963333 ||
number == 4294963349 ||
number == 4294963369 ||
number == 4294963427 ||
number == 4294963429 ||
number == 4294963459 ||
number == 4294963499 ||
number == 4294963523 ||
number == 4294963537 ||
number == 4294963553 ||
number == 4294963571 ||
number == 4294963583 ||
number == 4294963619 ||
number == 4294963637 ||
number == 4294963639 ||
number == 4294963643 ||
number == 4294963667 ||
number == 4294963681 ||
number == 4294963723 ||
number == 4294963747 ||
number == 4294963781 ||
number == 4294963787 ||
number == 4294963847 ||
number == 4294963853 ||
number == 4294963891 ||
number == 4294963901 ||
number == 4294963921 ||
number == 4294963943 ||
number == 4294963957 ||
number == 4294963987 ||
number == 4294963993 ||
number == 4294964017 ||
number == 4294964027 ||
number == 4294964029 ||
number == 4294964039 ||
number == 4294964081 ||
number == 4294964123 ||
number == 4294964131 ||
number == 4294964159 ||
number == 4294964173 ||
number == 4294964203 ||
number == 4294964207 ||
number == 4294964209 ||
number == 4294964213 ||
number == 4294964221 ||
number == 4294964239 ||
number == 4294964249 ||
number == 4294964257 ||
number == 4294964263 ||
number == 4294964281 ||
number == 4294964287 ||
number == 4294964309 ||
number == 4294964327 ||
number == 4294964341 ||
number == 4294964381 ||
number == 4294964419 ||
number == 4294964437 ||
number == 4294964441 ||
number == 4294964461 ||
number == 4294964489 ||
number == 4294964491 ||
number == 4294964521 ||
number == 4294964537 ||
number == 4294964543 ||
number == 4294964561 ||
number == 4294964579 ||
number == 4294964599 ||
number == 4294964621 ||
number == 4294964633 ||
number == 4294964683 ||
number == 4294964689 ||
number == 4294964749 ||
number == 4294964771 ||
number == 4294964789 ||
number == 4294964809 ||
number == 4294964827 ||
number == 4294964833 ||
number == 4294964879 ||
number == 4294964887 ||
number == 4294964893 ||
number == 4294964897 ||
number == 4294964899 ||
number == 4294964903 ||
number == 4294964923 ||
number == 4294964929 ||
number == 4294964939 ||
number == 4294964959 ||
number == 4294964969 ||
number == 4294964977 ||
number == 4294964981 ||
number == 4294965019 ||
number == 4294965131 ||
number == 4294965137 ||
number == 4294965151 ||
number == 4294965161 ||
number == 4294965193 ||
number == 4294965203 ||
number == 4294965229 ||
number == 4294965251 ||
number == 4294965263 ||
number == 4294965307 ||
number == 4294965313 ||
number == 4294965331 ||
number == 4294965347 ||
number == 4294965361 ||
number == 4294965383 ||
number == 4294965413 ||
number == 4294965457 ||
number == 4294965461 ||
number == 4294965487 ||
number == 4294965529 ||
number == 4294965581 ||
number == 4294965601 ||
number == 4294965613 ||
number == 4294965617 ||
number == 4294965641 ||
number == 4294965659 ||
number == 4294965671 ||
number == 4294965673 ||
number == 4294965679 ||
number == 4294965683 ||
number == 4294965691 ||
number == 4294965721 ||
number == 4294965733 ||
number == 4294965737 ||
number == 4294965757 ||
number == 4294965767 ||
number == 4294965793 ||
number == 4294965821 ||
number == 4294965839 ||
number == 4294965841 ||
number == 4294965847 ||
number == 4294965887 ||
number == 4294965911 ||
number == 4294965937 ||
number == 4294965949 ||
number == 4294965967 ||
number == 4294965971 ||
number == 4294965977 ||
number == 4294966001 ||
number == 4294966007 ||
number == 4294966043 ||
number == 4294966073 ||
number == 4294966087 ||
number == 4294966099 ||
number == 4294966121 ||
number == 4294966129 ||
number == 4294966153 ||
number == 4294966163 ||
number == 4294966177 ||
number == 4294966187 ||
number == 4294966217 ||
number == 4294966231 ||
number == 4294966237 ||
number == 4294966243 ||
number == 4294966297 ||
number == 4294966337 ||
number == 4294966367 ||
number == 4294966373 ||
number == 4294966427 ||
number == 4294966441 ||
number == 4294966447 ||
number == 4294966477 ||
number == 4294966553 ||
number == 4294966583 ||
number == 4294966591 ||
number == 4294966619 ||
number == 4294966639 ||
number == 4294966651 ||
number == 4294966657 ||
number == 4294966661 ||
number == 4294966667 ||
number == 4294966769 ||
number == 4294966813 ||
number == 4294966829 ||
number == 4294966877 ||
number == 4294966909 ||
number == 4294966927 ||
number == 4294966943 ||
number == 4294966981 ||
number == 4294966997 ||
number == 4294967029 ||
number == 4294967087 ||
number == 4294967111 ||
number == 4294967143 ||
number == 4294967161 ||
number == 4294967189 ||
number == 4294967197 ||
number == 4294967231 ||
number == 4294967279 ||
number == 4294967291;
		}

		const uint32_t index = number / 3;
		const uint32_t index_of_bitmask = index / 64;
		const uint32_t index_in_bitmask = index % 64;

		constexpr uint32_t size_of_all_positions_chunks = 22369622;
		constexpr uint32_t chunk_size = size_of_all_positions_chunks / 64; // 349 525

		uint32_t number_of_chunk_for_index = index_of_bitmask / chunk_size;
		uint32_t index_in_chunk = index_of_bitmask % chunk_size;

		return positions_of_uint32_primes[number_of_chunk_for_index][index_in_chunk] & (1ULL << index_in_bitmask);
	}
}
