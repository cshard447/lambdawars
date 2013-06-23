// This file has been generated by Py++.

#include "cbase.h"



#include "boost/python.hpp"

#include "videocfg/videocfg.h"

#include "cbase.h"

#include "steam/steam_api.h"

#include "steam/isteamfriends.h"

#include "steam/isteamutils.h"

#include "steam/steamclientpublic.h"

#include "src_python.h"

#include "tier0/memdbgon.h"

namespace bp = boost::python;

BOOST_PYTHON_MODULE(isteam){
    bp::docstring_options doc_options( true, true, false );

    bp::enum_< EAccountType>("EAccountType")
        .value("k_EAccountTypeInvalid", k_EAccountTypeInvalid)
        .value("k_EAccountTypeIndividual", k_EAccountTypeIndividual)
        .value("k_EAccountTypeMultiseat", k_EAccountTypeMultiseat)
        .value("k_EAccountTypeGameServer", k_EAccountTypeGameServer)
        .value("k_EAccountTypeAnonGameServer", k_EAccountTypeAnonGameServer)
        .value("k_EAccountTypePending", k_EAccountTypePending)
        .value("k_EAccountTypeContentServer", k_EAccountTypeContentServer)
        .value("k_EAccountTypeClan", k_EAccountTypeClan)
        .value("k_EAccountTypeChat", k_EAccountTypeChat)
        .value("k_EAccountTypeAnonUser", k_EAccountTypeAnonUser)
        .value("k_EAccountTypeMax", k_EAccountTypeMax)
        .export_values()
        ;

    bp::enum_< EAvatarSize>("EAvatarSize")
        .value("k_EAvatarSize32x32", k_EAvatarSize32x32)
        .value("k_EAvatarSize64x64", k_EAvatarSize64x64)
        .value("k_EAvatarSize184x184", k_EAvatarSize184x184)
        .export_values()
        ;

    bp::enum_< EChatEntryType>("EChatEntryType")
        .value("k_EChatEntryTypeInvalid", k_EChatEntryTypeInvalid)
        .value("k_EChatEntryTypeChatMsg", k_EChatEntryTypeChatMsg)
        .value("k_EChatEntryTypeTyping", k_EChatEntryTypeTyping)
        .value("k_EChatEntryTypeInviteGame", k_EChatEntryTypeInviteGame)
        .value("k_EChatEntryTypeEmote", k_EChatEntryTypeEmote)
        .value("k_EChatEntryTypeLobbyGameStart", k_EChatEntryTypeLobbyGameStart)
        .value("k_EChatEntryTypeLeftConversation", k_EChatEntryTypeLeftConversation)
        .export_values()
        ;

    bp::enum_< EChatRoomEnterResponse>("EChatRoomEnterResponse")
        .value("k_EChatRoomEnterResponseSuccess", k_EChatRoomEnterResponseSuccess)
        .value("k_EChatRoomEnterResponseDoesntExist", k_EChatRoomEnterResponseDoesntExist)
        .value("k_EChatRoomEnterResponseNotAllowed", k_EChatRoomEnterResponseNotAllowed)
        .value("k_EChatRoomEnterResponseFull", k_EChatRoomEnterResponseFull)
        .value("k_EChatRoomEnterResponseError", k_EChatRoomEnterResponseError)
        .value("k_EChatRoomEnterResponseBanned", k_EChatRoomEnterResponseBanned)
        .value("k_EChatRoomEnterResponseLimited", k_EChatRoomEnterResponseLimited)
        .export_values()
        ;

    bp::enum_< EDenyReason>("EDenyReason")
        .value("k_EDenyInvalid", k_EDenyInvalid)
        .value("k_EDenyInvalidVersion", k_EDenyInvalidVersion)
        .value("k_EDenyGeneric", k_EDenyGeneric)
        .value("k_EDenyNotLoggedOn", k_EDenyNotLoggedOn)
        .value("k_EDenyNoLicense", k_EDenyNoLicense)
        .value("k_EDenyCheater", k_EDenyCheater)
        .value("k_EDenyLoggedInElseWhere", k_EDenyLoggedInElseWhere)
        .value("k_EDenyUnknownText", k_EDenyUnknownText)
        .value("k_EDenyIncompatibleAnticheat", k_EDenyIncompatibleAnticheat)
        .value("k_EDenyMemoryCorruption", k_EDenyMemoryCorruption)
        .value("k_EDenyIncompatibleSoftware", k_EDenyIncompatibleSoftware)
        .value("k_EDenySteamConnectionLost", k_EDenySteamConnectionLost)
        .value("k_EDenySteamConnectionError", k_EDenySteamConnectionError)
        .value("k_EDenySteamResponseTimedOut", k_EDenySteamResponseTimedOut)
        .value("k_EDenySteamValidationStalled", k_EDenySteamValidationStalled)
        .value("k_EDenySteamOwnerLeftGuestUser", k_EDenySteamOwnerLeftGuestUser)
        .export_values()
        ;

    bp::enum_< EFriendRelationship>("EFriendRelationship")
        .value("k_EFriendRelationshipNone", k_EFriendRelationshipNone)
        .value("k_EFriendRelationshipBlocked", k_EFriendRelationshipBlocked)
        .value("k_EFriendRelationshipRequestRecipient", k_EFriendRelationshipRequestRecipient)
        .value("k_EFriendRelationshipFriend", k_EFriendRelationshipFriend)
        .value("k_EFriendRelationshipRequestInitiator", k_EFriendRelationshipRequestInitiator)
        .value("k_EFriendRelationshipIgnored", k_EFriendRelationshipIgnored)
        .value("k_EFriendRelationshipIgnoredFriend", k_EFriendRelationshipIgnoredFriend)
        .export_values()
        ;

    bp::enum_< EPersonaState>("EPersonaState")
        .value("k_EPersonaStateOffline", k_EPersonaStateOffline)
        .value("k_EPersonaStateOnline", k_EPersonaStateOnline)
        .value("k_EPersonaStateBusy", k_EPersonaStateBusy)
        .value("k_EPersonaStateAway", k_EPersonaStateAway)
        .value("k_EPersonaStateSnooze", k_EPersonaStateSnooze)
        .value("k_EPersonaStateMax", k_EPersonaStateMax)
        .export_values()
        ;

    bp::enum_< EResult>("EResult")
        .value("k_EResultOK", k_EResultOK)
        .value("k_EResultFail", k_EResultFail)
        .value("k_EResultNoConnection", k_EResultNoConnection)
        .value("k_EResultInvalidPassword", k_EResultInvalidPassword)
        .value("k_EResultLoggedInElsewhere", k_EResultLoggedInElsewhere)
        .value("k_EResultInvalidProtocolVer", k_EResultInvalidProtocolVer)
        .value("k_EResultInvalidParam", k_EResultInvalidParam)
        .value("k_EResultFileNotFound", k_EResultFileNotFound)
        .value("k_EResultBusy", k_EResultBusy)
        .value("k_EResultInvalidState", k_EResultInvalidState)
        .value("k_EResultInvalidName", k_EResultInvalidName)
        .value("k_EResultInvalidEmail", k_EResultInvalidEmail)
        .value("k_EResultDuplicateName", k_EResultDuplicateName)
        .value("k_EResultAccessDenied", k_EResultAccessDenied)
        .value("k_EResultTimeout", k_EResultTimeout)
        .value("k_EResultBanned", k_EResultBanned)
        .value("k_EResultAccountNotFound", k_EResultAccountNotFound)
        .value("k_EResultInvalidSteamID", k_EResultInvalidSteamID)
        .value("k_EResultServiceUnavailable", k_EResultServiceUnavailable)
        .value("k_EResultNotLoggedOn", k_EResultNotLoggedOn)
        .value("k_EResultPending", k_EResultPending)
        .value("k_EResultEncryptionFailure", k_EResultEncryptionFailure)
        .value("k_EResultInsufficientPrivilege", k_EResultInsufficientPrivilege)
        .value("k_EResultLimitExceeded", k_EResultLimitExceeded)
        .value("k_EResultRevoked", k_EResultRevoked)
        .value("k_EResultExpired", k_EResultExpired)
        .value("k_EResultAlreadyRedeemed", k_EResultAlreadyRedeemed)
        .value("k_EResultDuplicateRequest", k_EResultDuplicateRequest)
        .value("k_EResultAlreadyOwned", k_EResultAlreadyOwned)
        .value("k_EResultIPNotFound", k_EResultIPNotFound)
        .value("k_EResultPersistFailed", k_EResultPersistFailed)
        .value("k_EResultLockingFailed", k_EResultLockingFailed)
        .value("k_EResultLogonSessionReplaced", k_EResultLogonSessionReplaced)
        .value("k_EResultConnectFailed", k_EResultConnectFailed)
        .value("k_EResultHandshakeFailed", k_EResultHandshakeFailed)
        .value("k_EResultIOFailure", k_EResultIOFailure)
        .value("k_EResultRemoteDisconnect", k_EResultRemoteDisconnect)
        .value("k_EResultShoppingCartNotFound", k_EResultShoppingCartNotFound)
        .value("k_EResultBlocked", k_EResultBlocked)
        .value("k_EResultIgnored", k_EResultIgnored)
        .value("k_EResultNoMatch", k_EResultNoMatch)
        .value("k_EResultAccountDisabled", k_EResultAccountDisabled)
        .value("k_EResultServiceReadOnly", k_EResultServiceReadOnly)
        .value("k_EResultAccountNotFeatured", k_EResultAccountNotFeatured)
        .value("k_EResultAdministratorOK", k_EResultAdministratorOK)
        .value("k_EResultContentVersion", k_EResultContentVersion)
        .value("k_EResultTryAnotherCM", k_EResultTryAnotherCM)
        .value("k_EResultPasswordRequiredToKickSession", k_EResultPasswordRequiredToKickSession)
        .value("k_EResultAlreadyLoggedInElsewhere", k_EResultAlreadyLoggedInElsewhere)
        .value("k_EResultSuspended", k_EResultSuspended)
        .value("k_EResultCancelled", k_EResultCancelled)
        .value("k_EResultDataCorruption", k_EResultDataCorruption)
        .value("k_EResultDiskFull", k_EResultDiskFull)
        .value("k_EResultRemoteCallFailed", k_EResultRemoteCallFailed)
        .export_values()
        ;

    bp::enum_< ESteamUserStatType>("ESteamUserStatType")
        .value("k_ESteamUserStatTypeINVALID", k_ESteamUserStatTypeINVALID)
        .value("k_ESteamUserStatTypeINT", k_ESteamUserStatTypeINT)
        .value("k_ESteamUserStatTypeFLOAT", k_ESteamUserStatTypeFLOAT)
        .value("k_ESteamUserStatTypeAVGRATE", k_ESteamUserStatTypeAVGRATE)
        .value("k_ESteamUserStatTypeACHIEVEMENTS", k_ESteamUserStatTypeACHIEVEMENTS)
        .value("k_ESteamUserStatTypeGROUPACHIEVEMENTS", k_ESteamUserStatTypeGROUPACHIEVEMENTS)
        .export_values()
        ;

    bp::enum_< EUniverse>("EUniverse")
        .value("k_EUniverseInvalid", k_EUniverseInvalid)
        .value("k_EUniversePublic", k_EUniversePublic)
        .value("k_EUniverseBeta", k_EUniverseBeta)
        .value("k_EUniverseInternal", k_EUniverseInternal)
        .value("k_EUniverseDev", k_EUniverseDev)
        .value("k_EUniverseRC", k_EUniverseRC)
        .value("k_EUniverseMax", k_EUniverseMax)
        .export_values()
        ;

    bp::class_< CSteamAPIContext >( "CSteamAPIContext", bp::init< >() )    
        .def( 
            "SteamFriends"
            , (::ISteamFriends * ( ::CSteamAPIContext::* )(  ) )( &::CSteamAPIContext::SteamFriends )
            , bp::return_internal_reference< >() )    
        .def( 
            "SteamUtils"
            , (::ISteamUtils * ( ::CSteamAPIContext::* )(  ) )( &::CSteamAPIContext::SteamUtils )
            , bp::return_internal_reference< >() );

    { //::CSteamID
        typedef bp::class_< CSteamID > CSteamID_exposer_t;
        CSteamID_exposer_t CSteamID_exposer = CSteamID_exposer_t( "CSteamID", bp::init< >() );
        bp::scope CSteamID_scope( CSteamID_exposer );
        CSteamID_exposer.def( bp::init< uint32, EUniverse, EAccountType >(( bp::arg("unAccountID"), bp::arg("eUniverse"), bp::arg("eAccountType") )) );
        CSteamID_exposer.def( bp::init< uint32, unsigned int, EUniverse, EAccountType >(( bp::arg("unAccountID"), bp::arg("unAccountInstance"), bp::arg("eUniverse"), bp::arg("eAccountType") )) );
        CSteamID_exposer.def( bp::init< uint64 >(( bp::arg("ulSteamID") )) );
        bp::implicitly_convertible< uint64, CSteamID >();
        { //::CSteamID::BAnonAccount
        
            typedef bool ( ::CSteamID::*BAnonAccount_function_type )(  ) const;
            
            CSteamID_exposer.def( 
                "BAnonAccount"
                , BAnonAccount_function_type( &::CSteamID::BAnonAccount ) );
        
        }
        { //::CSteamID::BAnonUserAccount
        
            typedef bool ( ::CSteamID::*BAnonUserAccount_function_type )(  ) const;
            
            CSteamID_exposer.def( 
                "BAnonUserAccount"
                , BAnonUserAccount_function_type( &::CSteamID::BAnonUserAccount ) );
        
        }
        { //::CSteamID::BBlankAnonAccount
        
            typedef bool ( ::CSteamID::*BBlankAnonAccount_function_type )(  ) const;
            
            CSteamID_exposer.def( 
                "BBlankAnonAccount"
                , BBlankAnonAccount_function_type( &::CSteamID::BBlankAnonAccount ) );
        
        }
        { //::CSteamID::BChatAccount
        
            typedef bool ( ::CSteamID::*BChatAccount_function_type )(  ) const;
            
            CSteamID_exposer.def( 
                "BChatAccount"
                , BChatAccount_function_type( &::CSteamID::BChatAccount ) );
        
        }
        { //::CSteamID::BClanAccount
        
            typedef bool ( ::CSteamID::*BClanAccount_function_type )(  ) const;
            
            CSteamID_exposer.def( 
                "BClanAccount"
                , BClanAccount_function_type( &::CSteamID::BClanAccount ) );
        
        }
        { //::CSteamID::BContentServerAccount
        
            typedef bool ( ::CSteamID::*BContentServerAccount_function_type )(  ) const;
            
            CSteamID_exposer.def( 
                "BContentServerAccount"
                , BContentServerAccount_function_type( &::CSteamID::BContentServerAccount ) );
        
        }
        { //::CSteamID::BGameServerAccount
        
            typedef bool ( ::CSteamID::*BGameServerAccount_function_type )(  ) const;
            
            CSteamID_exposer.def( 
                "BGameServerAccount"
                , BGameServerAccount_function_type( &::CSteamID::BGameServerAccount ) );
        
        }
        { //::CSteamID::BIndividualAccount
        
            typedef bool ( ::CSteamID::*BIndividualAccount_function_type )(  ) const;
            
            CSteamID_exposer.def( 
                "BIndividualAccount"
                , BIndividualAccount_function_type( &::CSteamID::BIndividualAccount ) );
        
        }
        { //::CSteamID::ConvertToUint64
        
            typedef ::uint64 ( ::CSteamID::*ConvertToUint64_function_type )(  ) const;
            
            CSteamID_exposer.def( 
                "ConvertToUint64"
                , ConvertToUint64_function_type( &::CSteamID::ConvertToUint64 ) );
        
        }
        { //::CSteamID::CreateBlankAnonLogon
        
            typedef void ( ::CSteamID::*CreateBlankAnonLogon_function_type )( ::EUniverse ) ;
            
            CSteamID_exposer.def( 
                "CreateBlankAnonLogon"
                , CreateBlankAnonLogon_function_type( &::CSteamID::CreateBlankAnonLogon )
                , ( bp::arg("eUniverse") ) );
        
        }
        { //::CSteamID::CreateBlankAnonUserLogon
        
            typedef void ( ::CSteamID::*CreateBlankAnonUserLogon_function_type )( ::EUniverse ) ;
            
            CSteamID_exposer.def( 
                "CreateBlankAnonUserLogon"
                , CreateBlankAnonUserLogon_function_type( &::CSteamID::CreateBlankAnonUserLogon )
                , ( bp::arg("eUniverse") ) );
        
        }
        { //::CSteamID::FullSet
        
            typedef void ( ::CSteamID::*FullSet_function_type )( ::uint64,::EUniverse,::EAccountType ) ;
            
            CSteamID_exposer.def( 
                "FullSet"
                , FullSet_function_type( &::CSteamID::FullSet )
                , ( bp::arg("ulIdentifier"), bp::arg("eUniverse"), bp::arg("eAccountType") ) );
        
        }
        { //::CSteamID::GetAccountID
        
            typedef ::uint32 ( ::CSteamID::*GetAccountID_function_type )(  ) const;
            
            CSteamID_exposer.def( 
                "GetAccountID"
                , GetAccountID_function_type( &::CSteamID::GetAccountID ) );
        
        }
        { //::CSteamID::GetEAccountType
        
            typedef ::EAccountType ( ::CSteamID::*GetEAccountType_function_type )(  ) const;
            
            CSteamID_exposer.def( 
                "GetEAccountType"
                , GetEAccountType_function_type( &::CSteamID::GetEAccountType ) );
        
        }
        { //::CSteamID::GetEUniverse
        
            typedef ::EUniverse ( ::CSteamID::*GetEUniverse_function_type )(  ) const;
            
            CSteamID_exposer.def( 
                "GetEUniverse"
                , GetEUniverse_function_type( &::CSteamID::GetEUniverse ) );
        
        }
        { //::CSteamID::GetStaticAccountKey
        
            typedef ::uint64 ( ::CSteamID::*GetStaticAccountKey_function_type )(  ) const;
            
            CSteamID_exposer.def( 
                "GetStaticAccountKey"
                , GetStaticAccountKey_function_type( &::CSteamID::GetStaticAccountKey ) );
        
        }
        { //::CSteamID::GetUnAccountInstance
        
            typedef ::uint32 ( ::CSteamID::*GetUnAccountInstance_function_type )(  ) const;
            
            CSteamID_exposer.def( 
                "GetUnAccountInstance"
                , GetUnAccountInstance_function_type( &::CSteamID::GetUnAccountInstance ) );
        
        }
        { //::CSteamID::InstancedSet
        
            typedef void ( ::CSteamID::*InstancedSet_function_type )( ::uint32,::uint32,::EUniverse,::EAccountType ) ;
            
            CSteamID_exposer.def( 
                "InstancedSet"
                , InstancedSet_function_type( &::CSteamID::InstancedSet )
                , ( bp::arg("unAccountID"), bp::arg("unInstance"), bp::arg("eUniverse"), bp::arg("eAccountType") ) );
        
        }
        { //::CSteamID::IsLobby
        
            typedef bool ( ::CSteamID::*IsLobby_function_type )(  ) const;
            
            CSteamID_exposer.def( 
                "IsLobby"
                , IsLobby_function_type( &::CSteamID::IsLobby ) );
        
        }
        { //::CSteamID::IsValid
        
            typedef bool ( ::CSteamID::*IsValid_function_type )(  ) const;
            
            CSteamID_exposer.def( 
                "IsValid"
                , IsValid_function_type( &::CSteamID::IsValid ) );
        
        }
        { //::CSteamID::Set
        
            typedef void ( ::CSteamID::*Set_function_type )( ::uint32,::EUniverse,::EAccountType ) ;
            
            CSteamID_exposer.def( 
                "Set"
                , Set_function_type( &::CSteamID::Set )
                , ( bp::arg("unAccountID"), bp::arg("eUniverse"), bp::arg("eAccountType") ) );
        
        }
        { //::CSteamID::SetAccountID
        
            typedef void ( ::CSteamID::*SetAccountID_function_type )( ::uint32 ) ;
            
            CSteamID_exposer.def( 
                "SetAccountID"
                , SetAccountID_function_type( &::CSteamID::SetAccountID )
                , ( bp::arg("unAccountID") ) );
        
        }
        { //::CSteamID::SetEUniverse
        
            typedef void ( ::CSteamID::*SetEUniverse_function_type )( ::EUniverse ) ;
            
            CSteamID_exposer.def( 
                "SetEUniverse"
                , SetEUniverse_function_type( &::CSteamID::SetEUniverse )
                , ( bp::arg("eUniverse") ) );
        
        }
        { //::CSteamID::SetFromUint64
        
            typedef void ( ::CSteamID::*SetFromUint64_function_type )( ::uint64 ) ;
            
            CSteamID_exposer.def( 
                "SetFromUint64"
                , SetFromUint64_function_type( &::CSteamID::SetFromUint64 )
                , ( bp::arg("ulSteamID") ) );
        
        }
        CSteamID_exposer.def( bp::self != bp::self );
        CSteamID_exposer.def( bp::self < bp::self );
        CSteamID_exposer.def( bp::self == bp::self );
        CSteamID_exposer.def( bp::self > bp::self );
    }

    bp::class_< ISteamFriends, boost::noncopyable >( "ISteamFriends", bp::no_init )    
        .def( 
            "ActivateGameOverlay"
            , (void ( ::ISteamFriends::* )( char const * ) )( &::ISteamFriends::ActivateGameOverlay )
            , ( bp::arg("pchDialog") ) )    
        .def( 
            "ActivateGameOverlayInviteDialog"
            , (void ( ::ISteamFriends::* )( ::CSteamID ) )( &::ISteamFriends::ActivateGameOverlayInviteDialog )
            , ( bp::arg("steamIDLobby") ) )    
        .def( 
            "ActivateGameOverlayToStore"
            , (void ( ::ISteamFriends::* )( ::AppId_t ) )( &::ISteamFriends::ActivateGameOverlayToStore )
            , ( bp::arg("nAppID") ) )    
        .def( 
            "ActivateGameOverlayToUser"
            , (void ( ::ISteamFriends::* )( char const *,::CSteamID ) )( &::ISteamFriends::ActivateGameOverlayToUser )
            , ( bp::arg("pchDialog"), bp::arg("steamID") ) )    
        .def( 
            "ActivateGameOverlayToWebPage"
            , (void ( ::ISteamFriends::* )( char const * ) )( &::ISteamFriends::ActivateGameOverlayToWebPage )
            , ( bp::arg("pchURL") ) )    
        .def( 
            "GetClanByIndex"
            , (::CSteamID ( ::ISteamFriends::* )( int ) )( &::ISteamFriends::GetClanByIndex )
            , ( bp::arg("iClan") ) )    
        .def( 
            "GetClanCount"
            , (int ( ::ISteamFriends::* )(  ) )( &::ISteamFriends::GetClanCount ) )    
        .def( 
            "GetClanName"
            , (char const * ( ::ISteamFriends::* )( ::CSteamID ) )( &::ISteamFriends::GetClanName )
            , ( bp::arg("steamIDClan") ) )    
        .def( 
            "GetClanTag"
            , (char const * ( ::ISteamFriends::* )( ::CSteamID ) )( &::ISteamFriends::GetClanTag )
            , ( bp::arg("steamIDClan") ) )    
        .def( 
            "GetFriendAvatar"
            , (int ( ::ISteamFriends::* )( ::CSteamID,int ) )( &::ISteamFriends::GetFriendAvatar )
            , ( bp::arg("steamIDFriend"), bp::arg("eAvatarSize") ) )    
        .def( 
            "GetFriendByIndex"
            , (::CSteamID ( ::ISteamFriends::* )( int,int ) )( &::ISteamFriends::GetFriendByIndex )
            , ( bp::arg("iFriend"), bp::arg("iFriendFlags") ) )    
        .def( 
            "GetFriendCount"
            , (int ( ::ISteamFriends::* )( int ) )( &::ISteamFriends::GetFriendCount )
            , ( bp::arg("iFriendFlags") ) )    
        .def( 
            "GetFriendCountFromSource"
            , (int ( ::ISteamFriends::* )( ::CSteamID ) )( &::ISteamFriends::GetFriendCountFromSource )
            , ( bp::arg("steamIDSource") ) )    
        .def( 
            "GetFriendFromSourceByIndex"
            , (::CSteamID ( ::ISteamFriends::* )( ::CSteamID,int ) )( &::ISteamFriends::GetFriendFromSourceByIndex )
            , ( bp::arg("steamIDSource"), bp::arg("iFriend") ) )    
        .def( 
            "GetFriendPersonaName"
            , (char const * ( ::ISteamFriends::* )( ::CSteamID ) )( &::ISteamFriends::GetFriendPersonaName )
            , ( bp::arg("steamIDFriend") ) )    
        .def( 
            "GetFriendPersonaNameHistory"
            , (char const * ( ::ISteamFriends::* )( ::CSteamID,int ) )( &::ISteamFriends::GetFriendPersonaNameHistory )
            , ( bp::arg("steamIDFriend"), bp::arg("iPersonaName") ) )    
        .def( 
            "GetFriendPersonaState"
            , (::EPersonaState ( ::ISteamFriends::* )( ::CSteamID ) )( &::ISteamFriends::GetFriendPersonaState )
            , ( bp::arg("steamIDFriend") ) )    
        .def( 
            "GetFriendRelationship"
            , (::EFriendRelationship ( ::ISteamFriends::* )( ::CSteamID ) )( &::ISteamFriends::GetFriendRelationship )
            , ( bp::arg("steamIDFriend") ) )    
        .def( 
            "GetPersonaName"
            , (char const * ( ::ISteamFriends::* )(  ) )( &::ISteamFriends::GetPersonaName ) )    
        .def( 
            "GetPersonaState"
            , (::EPersonaState ( ::ISteamFriends::* )(  ) )( &::ISteamFriends::GetPersonaState ) )    
        .def( 
            "HasFriend"
            , (bool ( ::ISteamFriends::* )( ::CSteamID,int ) )( &::ISteamFriends::HasFriend )
            , ( bp::arg("steamIDFriend"), bp::arg("iFriendFlags") ) )    
        .def( 
            "IsUserInSource"
            , (bool ( ::ISteamFriends::* )( ::CSteamID,::CSteamID ) )( &::ISteamFriends::IsUserInSource )
            , ( bp::arg("steamIDUser"), bp::arg("steamIDSource") ) )    
        .def( 
            "SetInGameVoiceSpeaking"
            , (void ( ::ISteamFriends::* )( ::CSteamID,bool ) )( &::ISteamFriends::SetInGameVoiceSpeaking )
            , ( bp::arg("steamIDUser"), bp::arg("bSpeaking") ) )    
        .def( 
            "SetPersonaName"
            , (void ( ::ISteamFriends::* )( char const * ) )( &::ISteamFriends::SetPersonaName )
            , ( bp::arg("pchPersonaName") ) )    
        .def( 
            "SetPlayedWith"
            , (void ( ::ISteamFriends::* )( ::CSteamID ) )( &::ISteamFriends::SetPlayedWith )
            , ( bp::arg("steamIDUserPlayedWith") ) );

    bp::scope().attr( "steamapicontext" ) = boost::ref(steamapicontext);

    bp::scope().attr( "QUERY_PORT_NOT_INITIALIZED" ) = (int)QUERY_PORT_NOT_INITIALIZED;

    bp::scope().attr( "QUERY_PORT_ERROR" ) = (int)QUERY_PORT_ERROR;

    bp::scope().attr( "k_cchPersonaNameMax" ) = (int)k_cchPersonaNameMax;

    bp::class_< ISteamUtils, boost::noncopyable >( "ISteamUtils", bp::no_init )    
        .def( 
            "BOverlayNeedsPresent"
            , (bool ( ::ISteamUtils::* )(  ) )( &::ISteamUtils::BOverlayNeedsPresent ) )    
        .def( 
            "CheckFileSignature"
            , (::SteamAPICall_t ( ::ISteamUtils::* )( char const * ) )( &::ISteamUtils::CheckFileSignature )
            , ( bp::arg("szFileName") ) )    
        .def( 
            "GetAPICallFailureReason"
            , (::ESteamAPICallFailure ( ::ISteamUtils::* )( ::SteamAPICall_t ) )( &::ISteamUtils::GetAPICallFailureReason )
            , ( bp::arg("hSteamAPICall") ) )    
        .def( 
            "GetAPICallResult"
            , (bool ( ::ISteamUtils::* )( ::SteamAPICall_t,void *,int,int,bool * ) )( &::ISteamUtils::GetAPICallResult )
            , ( bp::arg("hSteamAPICall"), bp::arg("pCallback"), bp::arg("cubCallback"), bp::arg("iCallbackExpected"), bp::arg("pbFailed") ) )    
        .def( 
            "GetAppID"
            , (::uint32 ( ::ISteamUtils::* )(  ) )( &::ISteamUtils::GetAppID ) )    
        .def( 
            "GetCSERIPPort"
            , (bool ( ::ISteamUtils::* )( ::uint32 *,::uint16 * ) )( &::ISteamUtils::GetCSERIPPort )
            , ( bp::arg("unIP"), bp::arg("usPort") ) )    
        .def( 
            "GetConnectedUniverse"
            , (::EUniverse ( ::ISteamUtils::* )(  ) )( &::ISteamUtils::GetConnectedUniverse ) )    
        .def( 
            "GetCurrentBatteryPower"
            , (::uint8 ( ::ISteamUtils::* )(  ) )( &::ISteamUtils::GetCurrentBatteryPower ) )    
        .def( 
            "GetIPCCallCount"
            , (::uint32 ( ::ISteamUtils::* )(  ) )( &::ISteamUtils::GetIPCCallCount ) )    
        .def( 
            "GetIPCountry"
            , (char const * ( ::ISteamUtils::* )(  ) )( &::ISteamUtils::GetIPCountry ) )    
        .def( 
            "GetSecondsSinceAppActive"
            , (::uint32 ( ::ISteamUtils::* )(  ) )( &::ISteamUtils::GetSecondsSinceAppActive ) )    
        .def( 
            "GetSecondsSinceComputerActive"
            , (::uint32 ( ::ISteamUtils::* )(  ) )( &::ISteamUtils::GetSecondsSinceComputerActive ) )    
        .def( 
            "GetServerRealTime"
            , (::uint32 ( ::ISteamUtils::* )(  ) )( &::ISteamUtils::GetServerRealTime ) )    
        .def( 
            "IsAPICallCompleted"
            , (bool ( ::ISteamUtils::* )( ::SteamAPICall_t,bool * ) )( &::ISteamUtils::IsAPICallCompleted )
            , ( bp::arg("hSteamAPICall"), bp::arg("pbFailed") ) )    
        .def( 
            "IsOverlayEnabled"
            , (bool ( ::ISteamUtils::* )(  ) )( &::ISteamUtils::IsOverlayEnabled ) )    
        .def( 
            "RunFrame"
            , (void ( ::ISteamUtils::* )(  ) )( &::ISteamUtils::RunFrame ) )    
        .def( 
            "SetOverlayNotificationPosition"
            , (void ( ::ISteamUtils::* )( ::ENotificationPosition ) )( &::ISteamUtils::SetOverlayNotificationPosition )
            , ( bp::arg("eNotificationPosition") ) );
}
