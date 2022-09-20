#ifndef MEMBERSENTITY_H
#define MEMBERSENTITY_H

#include <vector>
#include <iostream>
#include "MemberInfo.h"

class MembersEntity
{
private:
    std::vector<MemberInfo> vecMenbersList;
    MemberInfo memberInfo;
    FILE *fpDBData;
    

public:
    MembersEntity();
    ~MembersEntity();
    void loadMembersInfo();
    // void makeDBMembersInfo();
    // void addMemberInfo(MemberInfo member);
    // void delMemberInfo(MemberInfo member);
    void printMemberInfo();
};

#endif