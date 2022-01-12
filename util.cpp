#include "util.hpp"
#include <memory>
#include <stdexcept>
#include <array>
#include <cstdio>



std::string getStdout(const std::string &cmd) {
    std::unique_ptr<FILE, decltype(&pclose)> f(popen(cmd.c_str(), "r"), &pclose);
    std::array<char, 256> buffer;
    std::string out;

    if(!f) throw std::runtime_error("Couldn't run command: "+cmd);

    while(fgets(buffer.data(), buffer.size(), f.get())) out += buffer.data();

    return out;
}
