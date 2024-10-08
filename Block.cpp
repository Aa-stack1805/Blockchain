#include "Block.h"
#include "SHA256.h"
#include <sstream>
#include <iostream>

Block::Block(int idx, const std::string &data, const std::string &prevHash)
    : index(idx), timestamp(std::time(nullptr)), data(data), prevHash(prevHash), nonce(0) {
    hash = calculateHash();
}

std::string Block::calculateHash() const {
    std::stringstream ss;
    ss << index << timestamp << data << prevHash << nonce;
    return SHA256::hash(ss.str());
}

void Block::mineBlock(int difficulty) {
    std::string target(difficulty, '0');

    while (hash.substr(0, difficulty) != target) {
        nonce++;
        hash = calculateHash();
    }

    std::cout << "Block mined: " << hash << std::endl;
}

std::string Block::getHash() const {
    return hash;
}