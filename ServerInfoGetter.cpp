#include "ServerInfoGetter.hpp"
#include "util.hpp"
#include <regex>



void ServerInfoGetter::getPlayers(const QString &addr) {
    std::string out = getStdout("mcstatus "+addr.toStdString()+" status");
    auto start = out.rfind('[')+1;

    if(start < out.rfind('\n', out.size()-2)) {
        emit resultReady("<none>");
        return;
    }  

    auto end = out.rfind(']');
    std::string playersRaw = out.substr(start, end-start);
    std::string players;
    std::regex pattern("\'([a-zA-Z0-9_]+) ");
    auto it_begin = std::sregex_iterator(playersRaw.begin(), playersRaw.end(), pattern);
    auto it_end = std::sregex_iterator();
    
    for(auto it = it_begin; it != it_end; it++) {
        if(players.size() > 0) players += '\n';
        players += it->str(1);
    }

    emit resultReady(QString::fromStdString(players));
}
