#ifndef BLOCKCHAIN_H
#define BLOCKCHAIN_H

#include "Block.h"
#include <vector>

class Blockchain {
public:
    Blockchain();

    void addBlock(Block newBlock);
    std::vector<Block> getChain() const;

private:
    std::vector<Block> chain;

    Block getLatestBlock() const;
};

#endif // BLOCKCHAIN_H