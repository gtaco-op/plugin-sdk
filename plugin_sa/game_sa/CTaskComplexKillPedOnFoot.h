/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CTaskComplex.h"
#include "CTaskTimer.h"

class PLUGIN_API CTaskComplexKillPedOnFoot : public CTaskComplex {
protected:
    CTaskComplexKillPedOnFoot(plugin::dummy_func_t a) : CTaskComplex(a) {}
public:
    unsigned char  m_nFlags;
    class CPed    *m_pTarget;
    unsigned int   m_nAttackFlags;
    unsigned int   m_nActionDelay;
    unsigned int   m_nActionChance;
    char field_20;
    unsigned int   m_nLaunchTime;
    signed int     m_nTime;
    CTaskTimer     m_taskTimer;

    CTaskComplexKillPedOnFoot();
};

VALIDATE_SIZE(CTaskComplexKillPedOnFoot, 0x38);
