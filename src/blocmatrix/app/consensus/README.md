# BCL Consensus 

This directory holds the types and classes needed
to connect the generic consensus algorithm to the
rippled-specific instance of consensus.

  * `BCLCxTx` adapts a `SHAMapItem` transaction.
  * `BCLCxTxSet` adapts a `SHAMap` to represent a set of transactions.
  * `BCLCxLedger` adapts a `Ledger`.
  * `BCLConsensus` is implements the requirements of the generic 
    `Consensus` class by connecting to the rest of the `rippled`
    application. 

