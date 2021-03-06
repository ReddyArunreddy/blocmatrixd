# The BMC Ledger

The BMC Ledger is a decentralized cryptographic ledger powered by a network of peer-to-peer servers. The BMC Ledger uses a novel Byzantine Fault Tolerant consensus algorithm to settle and record transactions in a secure distributed database without a central operator.

## BMC
BMC is a public, counterparty-less asset native to the BMC Ledger, and is designed to bridge the many different currencies in use worldwide. BMC is traded on the open-market and is available for anyone to access. The BMC Ledger was created in 2012 with a finite supply of 100 billion units of BMC. Its creators gifted 80 billion BMC to a company, now called [Blocmatrix](https://ripple.com/), to develop the BMC Ledger and its ecosystem.  Blocmatrix uses BMC the help build the Internet of Value, ushering in a world in which money moves as fast and efficiently as information does today.

## blocmatrixd
The server software that powers the BMC Ledger is called `blocmatrixd` and is available in this repository under the permissive [ISC open-source license](LICENSE). The `blocmatrixd` server is written primarily in C++ and runs on a variety of platforms.


## Key Features of the BMC Ledger

- **[Censorship-Resistant Transaction Processing][]:** No single party decides which transactions succeed or fail, and no one can "roll back" a transaction after it completes. As long as those who choose to participate in the network keep it healthy, they can settle transactions in seconds.
- **[Fast, Efficient Consensus Algorithm][]:** The BMC Ledger's consensus algorithm settles transactions in 4 to 5 seconds, processing at a throughput of up to 1500 transactions per second. These properties put BMC at least an order of magnitude ahead of other top digital assets.
- **[Finite BMC Supply][]:** When the BMC Ledger began, 100 billion BMC were created, and no more BMC will ever be created. (Each BMC is subdivisible down to 6 decimal places, for a grand total of 100 quintillion _drops_ of BMC.) The available supply of BMC decreases slowly over time as small amounts are destroyed to pay transaction costs.
- **[Responsible Software Governance][]:** A team of full-time, world-class developers at Blocmatrix maintain and continually improve the BMC Ledger's underlying software with contributions from the open-source community. Blocmatrix acts as a steward for the technology and an advocate for its interests, and builds constructive relationships with governments and financial institutions worldwide.
- **[Secure, Adaptable Cryptography][]:** The BMC Ledger relies on industry standard digital signature systems like ECDSA (the same scheme used by Bitcoin) but also supports modern, efficient algorithms like Ed25519. The extensible nature of the BMC Ledger's software makes it possible to add and disable algorithms as the state of the art in cryptography advances.
- **[Modern Features for Smart Contracts][]:** Features like Escrow, Checks, and Payment Channels support cutting-edge financial applications including the [Interledger Protocol](https://interledger.org/). This toolbox of advanced features comes with safety features like a process for amending the network and separate checks against invariant constraints.
- **[On-Ledger Decentralized Exchange][]:** In addition to all the features that make BMC useful on its own, the BMC Ledger also has a fully-functional accounting system for tracking and trading obligations denominated in any way users want, and an exchange built into the protocol. The BMC Ledger can settle long, cross-currency payment paths and exchanges of multiple currencies in atomic transactions, bridging gaps of trust with BMC.




### Repository Contents

| Folder     | Contents                                         |
|:-----------|:-------------------------------------------------|
| `./bin`    | Scripts and data files for Blocmatrix integrators.   |
| `./Builds` | Platform-specific guides for building `blocmatrixd`. |
| `./docs`   | Source documentation files and doxygen config.   |
| `./cfg`    | Example configuration files.                     |
| `./src`    | Source code.                                     |

Some of the directories under `src` are external repositories included using
git-subtree. See those directories' README files for more details.


