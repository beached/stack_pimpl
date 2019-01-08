
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

#pragma once

#include <memory>

namespace daw {

	class pimpl_pub_t {
		struct priv_t;
		
		std::unique_ptr<priv_t> pimpl;
	public:
		pimpl_pub_t( );
		~pimpl_pub_t( );
		pimpl_pub_t( pimpl_pub_t const & other );
		pimpl_pub_t & operator=( pimpl_pub_t const & rhs );

		pimpl_pub_t( pimpl_pub_t && ) noexcept = default;
		pimpl_pub_t & operator=( pimpl_pub_t && ) noexcept = default;

		void some_method( );
		void show( ) const;
		int state( ) const;
	};
} // namespace daw

