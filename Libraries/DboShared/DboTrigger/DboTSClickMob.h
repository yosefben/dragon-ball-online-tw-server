#ifndef _DBO_TSCLICKMOB_H_
#define _DBO_TSCLICKMOB_H_


#include "DboTSCoreDefine.h"


/**
	Click Mob event
*/


class CDboTSClickMob : public CNtlTSEvent
{
	NTL_TS_DECLARE_RTTI(CDboTSClickMob, CNtlTSEvent)

// Member variables
protected:
	unsigned int						m_uiMobGroupIdx;

// Constructions
public:
	CDboTSClickMob( void );

// Methods
public:
	virtual unsigned int				GetEntityType( void ) const { return DBO_EVENT_TYPE_ID_CLICK_MOB; }

	unsigned int						GetMobGroupIdx( void ) const;
	void								SetMobGroupIdx( unsigned int uiMobGroupIdx );

// Implementations
protected:
	// 스크립트로 부터 컴포넌트 객체의 데이터를 로딩 및 입력 시키기 위한 함수
	virtual	void						ApplyScriptDataForScript( const CNtlTSScrProperty& clProperty );
	virtual	void						TakeScriptDataForScript( CNtlTSScrProperty& clProperty );
};


inline unsigned int CDboTSClickMob::GetMobGroupIdx( void ) const
{
	return m_uiMobGroupIdx;
}


#endif