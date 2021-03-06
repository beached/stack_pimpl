
// The MIT License (MIT)
//
// Copyright (c) 2018 Darrell Wright
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files( the "Software" ), to
// deal in the Software without restriction, including without limitation the
// rights to use, copy, modify, merge, publish, distribute, sublicense, and / or
// sell copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
// SOFTWARE.

#include <iostream>

#include "stack_pimpl.h"

namespace daw {
	struct pub_t::priv_t {
		static constexpr void some_method( pub_t *self ) noexcept {
			self->m_state++;
		}

		static void show( pub_t const *self ) {
			std::cout << self->m_state << '\n';
		}

		static constexpr int state( pub_t const *self ) noexcept {
			return self->m_state;
		}
	};

	void pub_t::some_method( ) {
		priv_t::some_method( this );
	}

	void pub_t::show( ) const {
		priv_t::show( this );
	}

	int pub_t::state( ) const {
		return priv_t::state( this );
	}
} // namespace daw
