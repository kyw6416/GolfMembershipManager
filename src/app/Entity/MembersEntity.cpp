#include "MembersEntity.h"

MembersEntity::MembersEntity()
{
    fpDBData = fopen("memberLists.bin", "r+");
    loadMembersInfo();      //전원이 들어오자마자 로드
    printMemberInfo();
}

MembersEntity::~MembersEntity()
{

}

void MembersEntity::loadMembersInfo()
{
    while (fread(&memberInfo, sizeof(MemberInfo), 1, fpDBData))
    {
        vecMenbersList.push_back(memberInfo);
    }
}

void MembersEntity::printMemberInfo()
{
    printf("%04d, %s, %s, %s, %0x-%0x-%0x-%0x-%0x \n", 
           vecMenbersList[1000].id,
           vecMenbersList[1000].name,
           vecMenbersList[1000].address,
           vecMenbersList[1000].phoneNumber,
           vecMenbersList[1000].cardNum[0],
           vecMenbersList[1000].cardNum[1],
           vecMenbersList[1000].cardNum[2],
           vecMenbersList[1000].cardNum[3],
           vecMenbersList[1000].cardNum[4]
           );
}
