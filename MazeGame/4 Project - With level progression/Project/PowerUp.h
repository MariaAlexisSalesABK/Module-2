#pragma once
#include "PlacableActor.h"

enum class PowerType {
	Double,
	Break,
	Invis
};

class PowerUp : public PlacableActor {
	public:
		PowerUp(int x, int y, ActorColor color, PowerType type);

		
		virtual ActorType GetType() override { return ActorType::PowerUp; }
		virtual void Draw() override;

	private:
		PowerType m_currentType;
};
