#pragma once
#include "PlacableActor.h"

class Key;
class PowerUp;

class Player : public PlacableActor
{
public:
	Player();

	bool HasKey();
	bool HasKey(ActorColor color);
	void PickupKey(Key* key);
	void UseKey();
	void DropKey();
	Key* GetKey() { return m_pCurrentKey; }

	bool HasPowerUp();
	void PickupPowerUp(PowerUp* powerup);
	void UsePowerUp();
	PowerUp* GetPowerUp() { return m_pCurrentPowerUp; }

	void AddMoney(int money) { m_money += money; }
	int GetMoney() { return m_money; }

	int GetLives() { return m_lives; }
	void DecrementLives() { m_lives--; }

	virtual ActorType GetType() override { return ActorType::Player; }
	virtual void Draw() override;
private:
	Key* m_pCurrentKey;
	PowerUp* m_pCurrentPowerUp;
	int m_money;
	int m_lives;
};
