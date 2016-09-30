#pragma once

#include<cocos2d.h>
#include"Shibata/CollisionSystem/CollisionSystem.h"
#include"Shibata/Party/Party.h"


// ボタン用
#include "ui/CocosGUI.h"

class Temporary :public cocos2d::Layer
{
private:
	CSWorld* m_pWorld;
	// ========================================================== //
	// SPバー
	cocos2d::Sprite* m_SPbar[4];
	// HPバー
	cocos2d::Sprite* m_HPbar[4];
	// ボタン
	cocos2d::ui::Button* m_button[4];
	// ========================================================== //

public:
	//! @brief シーン作成
	static cocos2d::Scene* createScene();

	//! @brief 初期化
	virtual bool init();

	//! @brief 更新
	void update(float dt)override;

	// ========================================================== //
	// パーティ
	Party* g_party;

	// ボタン
	void ButtonEvent1(Ref *pSender, cocos2d::ui::Widget::TouchEventType type );
	void ButtonEvent2(Ref *pSender, cocos2d::ui::Widget::TouchEventType type);

	// タッチ開始
	bool onTouchBegan(cocos2d::Touch* touch, cocos2d::Event* event);
	// タッチ移動
	void onTouchMoved(cocos2d::Touch* touch, cocos2d::Event* event);
	// タッチ終了
	void onTouchEnded(cocos2d::Touch* touch, cocos2d::Event* event);
	// タッチキャンセル
	void onTouchCancelled(cocos2d::Touch* touch, cocos2d::Event* event);
	// ========================================================== //


	CREATE_FUNC(Temporary);
};