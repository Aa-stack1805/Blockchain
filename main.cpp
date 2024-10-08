#include <iostream>
#include "Blockchain.h"

int main() {
    Blockchain simpleChain;

    std::cout << "Mining block 1..." << std::endl;
    simpleChain.addBlock(Block(1, "Block 1 Data", simpleChain.getChain().back().getHash()));

    std::cout << "Mining block 2..." << std::endl;
    simpleChain.addBlock(Block(2, "Block 2 Data", simpleChain.getChain().back().getHash()));

    std::cout << "Mining block 3..." << std::endl;
    simpleChain.addBlock(Block(3, "Block 3 Data", simpleChain.getChain().back().getHash()));

    return 0;
}