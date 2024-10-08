#include "Blockchain.h"

Blockchain::Blockchain() {
    chain.emplace_back(Block(0, "Genesis Block", "0"));
}

Block Blockchain::getLatestBlock() const {
    return chain.back();
}

void Blockchain::addBlock(Block newBlock) {
    newBlock.mineBlock(2);
    chain.push_back(newBlock);
}

std::vector<Block> Blockchain::getChain() const {
    return chain;
}