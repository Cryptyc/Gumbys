#include "Gumbys.h"
#include <sc2api/sc2_api.h>

Gumbys::Gumbys(const std::string &InOpponentId)
	: OpponentId(InOpponentId)
{

}

void Gumbys::OnGameStart()
{
}

void Gumbys::OnUnitIdle(const Unit * unit)
{
}

void Gumbys::OnUnitDestroyed(const Unit * unit)
{
}

void Gumbys::OnUnitCreated(const Unit * unit)
{
}

void Gumbys::OnUnitEnterVision(const Unit * unit)
{
}

void Gumbys::OnUnitTakeDamage(const Unit * unit)
{
}

void Gumbys::OnUpgradeCompleted(sc2::UpgradeID Upgrade)
{
}
