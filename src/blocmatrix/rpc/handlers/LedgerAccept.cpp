//------------------------------------------------------------------------------
/*
    This file is part of rippled: https://github.com/ripple/rippled
    Copyright (c) 2012-2014 Ripple Labs Inc.

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

#include <blocmatrix/app/ledger/LedgerMaster.h>
#include <blocmatrix/app/misc/NetworkOPs.h>
#include <blocmatrix/app/main/Application.h>
#include <blocmatrix/core/Config.h>
#include <blocmatrix/net/RPCErr.h>
#include <blocmatrix/protocol/ErrorCodes.h>
#include <blocmatrix/protocol/Indexes.h>
#include <blocmatrix/protocol/jss.h>
#include <blocmatrix/rpc/Context.h>
#include <blocmatrix/basics/make_lock.h>

namespace blocmatrix {

Json::Value doLedgerAccept (RPC::Context& context)
{
    auto lock = make_lock(context.app.getMasterMutex());
    Json::Value jvResult;

    if (!context.app.config().standalone())
    {
        jvResult[jss::error] = "notStandAlone";
    }
    else
    {
        context.netOps.acceptLedger ();

        jvResult[jss::ledger_current_index] =
            context.ledgerMaster.getCurrentLedgerIndex ();
    }

    return jvResult;
}

} // blocmatrix
