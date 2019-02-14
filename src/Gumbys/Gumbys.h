#pragma once
#include "LadderInterface.h"
#include <sc2api/sc2_api.h>

#include "Types.h"

using namespace sc2;

class Gumbys : public Agent
{
public:
	Gumbys(const std::string &InOpponentId);

// Override functions
	virtual void OnGameStart() override;
	virtual void OnUnitIdle(const Unit *unit) override;
	virtual void OnUnitDestroyed(const Unit *unit) override;
	virtual void OnUnitCreated(const Unit *unit) override;
	virtual void OnUnitEnterVision(const Unit *unit) override;
	virtual void OnUnitTakeDamage(const Unit *unit) override;
	virtual void OnUpgradeCompleted(sc2::UpgradeID Upgrade) override;


private:
	const std::string OpponentId;
	EGumbysState State;

}; 
