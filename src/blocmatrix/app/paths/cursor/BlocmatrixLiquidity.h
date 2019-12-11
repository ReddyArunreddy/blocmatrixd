//------------------------------------------------------------------------------
/*
    This file is part of rippled: https://github.com/ripple/rippled
    Copyright (c) 2012, 2013 Ripple Labs Inc.

    Permission to use, copy, modify, and/or distribute this software for any
    purpose  with  or without fee is hereby granted, provided that the above
    copyright notice and this permission notice appear in all copies.

    THE  SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
    WITH  REGARD  TO  THIS  SOFTWARE  INCLUDING  ALL  IMPLIED  WARRANTIES  OF
    MERCHANTABILITY  AND  FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
    ANY  SPECIAL ,  DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
    WHATSOEVER  RESULTING  FROM  LOSS  OF USE, DATA OR PROFITS, WHETHER IN AN
    ACTION  OF  CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
    OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
*/
//==============================================================================

#ifndef BLOCMATRIX_APP_PATHS_CURSOR_BLOCMATRIXLIQUIDITY_H_INCLUDED
#define BLOCMATRIX_APP_PATHS_CURSOR_BLOCMATRIXLIQUIDITY_H_INCLUDED

#include <blocmatrix/app/paths/cursor/PathCursor.h>
#include <blocmatrix/app/paths/BlocmatrixCalc.h>
#include <blocmatrix/app/paths/Tuning.h>
#include <blocmatrix/ledger/View.h>
#include <blocmatrix/protocol/Rate.h>

namespace blocmatrix {
namespace path {

void blocmatrixLiquidity (
    BlocmatrixCalc&,
    Rate const& qualityIn,
    Rate const& qualityOut,
    STAmount const& saPrvReq,
    STAmount const& saCurReq,
    STAmount& saPrvAct,
    STAmount& saCurAct,
    std::uint64_t& uRateMax);

Rate
quality_in (
    ReadView const& view,
    AccountID const& uToAccountID,
    AccountID const& uFromAccountID,
    Currency const& currency);

Rate
quality_out (
    ReadView const& view,
    AccountID const& uToAccountID,
    AccountID const& uFromAccountID,
    Currency const& currency);

} // path
} // blocmatrix

#endif
