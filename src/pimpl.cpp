
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

#include "pimpl.h"

namespace daw {
	struct pimpl_pub_t::priv_t {
		int state = 0;

		constexpr priv_t( ) noexcept = default;

		constexpr void some_method( ) noexcept {
			++state;
		}

		void show( ) const {
			std::cout << state << '\n';
		}
	};

	pimpl_pub_t::pimpl_pub_t( )
	  : pimpl( std::make_unique<priv_t>( ) ) {}

	pimpl_pub_t::~pimpl_pub_t( ) = default;

	pimpl_pub_t::pimpl_pub_t( pimpl_pub_t const &other )
	  : pimpl( std::make_unique<priv_t>( ) ) {}

	pimpl_pub_t &pimpl_pub_t::operator=( pimpl_pub_t const &rhs ) {
		if( this != &rhs ) {
			*pimpl = *rhs.pimpl;
		}
		return *this;
	}

	void pimpl_pub_t::some_method( ) {
		pimpl->some_method( );
	}

	void pimpl_pub_t::show( ) const {
		pimpl->show( );
	}
} // namespace daw
