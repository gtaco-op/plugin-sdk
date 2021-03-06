/*
    Plugin-SDK (Grand Theft Auto Vice City) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"

class CPed;

class CPedIK {
public:
    CPed *m_pPed;
    char field_4[32];
    unsigned int m_dwFlags; //aim flags - 0x2 - torso used - 0x4 - aims with hand rather than with body
};

VALIDATE_SIZE(CPedIK, 0x28);