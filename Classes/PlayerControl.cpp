#include "PlayerControl.h"
#include "cocos2d.h"
#include "GameMaster.h"

USING_NS_CC;

PlayerControl * PlayerControl::create(int index)
{
	auto player = new PlayerControl();
	if (player != nullptr && player->initPlayer(index))
	{
		player->autorelease();
		return player;
	}
	CC_SAFE_DELETE(player);
	return false;
}

void PlayerControl::startQiangdizhu()
{
	_game->controlPlayerQiangdizhu();
}
