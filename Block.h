#ifndef BLOCK_H
#define BLOCK_H

#include <string>
#include <ctime>

class Block {
public:
    Block(int index, const std::string& data, const std::string& prevHash);

    std::string getHash() const;
    void mineBlock(int difficulty);
    std::string calculateHash() const;

private:
    int index;
    std::time_t timestamp;
    std::string data;
    std::string prevHash;
    std::string hash;
    int nonce;

    std::string generateHash() const;
};

#endif // BLOCK_H