//
//
//  Generated by StarUML(tm) C++ Add-In
//
//  @ Project : Untitled
//  @ File Name : Monster.h
//  @ Date : 24.07.2024
//  @ Author : 
//
//


#if !defined(_MONSTER_H)
#define _MONSTER_H

#include "Entity.h"
#include "MonsterRace.h"

class Monster : public Entity {
public:
    std::string nameOfMonsterString;
    Monster(MonsterRace race);
	MonsterRace nameOfMonster;
};

#endif  //_MONSTER_H
