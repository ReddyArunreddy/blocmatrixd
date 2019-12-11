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


// This has to be included early to prevent an obscure MSVC compile error
#include <boost/asio/deadline_timer.hpp>

#include <blocmatrix/protocol/jss.h>
#include <blocmatrix/rpc/RPCHandler.h>
#include <blocmatrix/rpc/handlers/Handlers.h>

#include <blocmatrix/rpc/handlers/AccountCurrenciesHandler.cpp>
#include <blocmatrix/rpc/handlers/AccountInfo.cpp>
#include <blocmatrix/rpc/handlers/AccountLines.cpp>
#include <blocmatrix/rpc/handlers/AccountChannels.cpp>
#include <blocmatrix/rpc/handlers/AccountObjects.cpp>
#include <blocmatrix/rpc/handlers/AccountOffers.cpp>
#include <blocmatrix/rpc/handlers/AccountTx.cpp>
#include <blocmatrix/rpc/handlers/AccountTxOld.cpp>
#include <blocmatrix/rpc/handlers/AccountTxSwitch.cpp>
#include <blocmatrix/rpc/handlers/BlackList.cpp>
#include <blocmatrix/rpc/handlers/BookOffers.cpp>
#include <blocmatrix/rpc/handlers/CanDelete.cpp>
#include <blocmatrix/rpc/handlers/Connect.cpp>
#include <blocmatrix/rpc/handlers/ConsensusInfo.cpp>
#include <blocmatrix/rpc/handlers/CrawlShards.cpp>
#include <blocmatrix/rpc/handlers/DepositAuthorized.cpp>
#include <blocmatrix/rpc/handlers/DownloadShard.cpp>
#include <blocmatrix/rpc/handlers/Feature1.cpp>
#include <blocmatrix/rpc/handlers/Fee1.cpp>
#include <blocmatrix/rpc/handlers/FetchInfo.cpp>
#include <blocmatrix/rpc/handlers/GatewayBalances.cpp>
#include <blocmatrix/rpc/handlers/GetCounts.cpp>
#include <blocmatrix/rpc/handlers/LedgerHandler.cpp>
#include <blocmatrix/rpc/handlers/LedgerAccept.cpp>
#include <blocmatrix/rpc/handlers/LedgerCleanerHandler.cpp>
#include <blocmatrix/rpc/handlers/LedgerClosed.cpp>
#include <blocmatrix/rpc/handlers/LedgerCurrent.cpp>
#include <blocmatrix/rpc/handlers/LedgerData.cpp>
#include <blocmatrix/rpc/handlers/LedgerEntry.cpp>
#include <blocmatrix/rpc/handlers/LedgerHeader.cpp>
#include <blocmatrix/rpc/handlers/LedgerRequest.cpp>
#include <blocmatrix/rpc/handlers/LogLevel.cpp>
#include <blocmatrix/rpc/handlers/LogRotate.cpp>
#include <blocmatrix/rpc/handlers/NoBlocmatrixCheck.cpp>
#include <blocmatrix/rpc/handlers/OwnerInfo.cpp>
