/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this file,
 * You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "mozilla/dom/MozIccBinding.h"
#include "nsIIccProvider.h"

namespace mozilla {
namespace dom {

#define ASSERT_ICC_CARD_STATE_EQUALITY(webidlState, xpidlState) \
  static_assert(static_cast<uint32_t>(IccCardState::webidlState) == nsIIccProvider::xpidlState, \
                "IccCardState::" #webidlState " should equal to nsIIccProvider::" #xpidlState)

ASSERT_ICC_CARD_STATE_EQUALITY(Unknown, CARD_STATE_UNKNOWN);
ASSERT_ICC_CARD_STATE_EQUALITY(Ready, CARD_STATE_READY);
ASSERT_ICC_CARD_STATE_EQUALITY(PinRequired, CARD_STATE_PIN_REQUIRED);
ASSERT_ICC_CARD_STATE_EQUALITY(PukRequired, CARD_STATE_PUK_REQUIRED);
ASSERT_ICC_CARD_STATE_EQUALITY(PermanentBlocked, CARD_STATE_PERMANENT_BLOCKED);
ASSERT_ICC_CARD_STATE_EQUALITY(PersonalizationInProgress, CARD_STATE_PERSONALIZATION_IN_PROGRESS);
ASSERT_ICC_CARD_STATE_EQUALITY(PersonalizationReady, CARD_STATE_PERSONALIZATION_READY);
ASSERT_ICC_CARD_STATE_EQUALITY(NetworkLocked, CARD_STATE_NETWORK_LOCKED);
ASSERT_ICC_CARD_STATE_EQUALITY(NetworkSubsetLocked, CARD_STATE_NETWORK_SUBSET_LOCKED);
ASSERT_ICC_CARD_STATE_EQUALITY(CorporateLocked, CARD_STATE_CORPORATE_LOCKED);
ASSERT_ICC_CARD_STATE_EQUALITY(ServiceProviderLocked, CARD_STATE_SERVICE_PROVIDER_LOCKED);
ASSERT_ICC_CARD_STATE_EQUALITY(SimPersonalizationLocked, CARD_STATE_SIM_LOCKED);
ASSERT_ICC_CARD_STATE_EQUALITY(NetworkPukRequired, CARD_STATE_NETWORK_PUK_REQUIRED);
ASSERT_ICC_CARD_STATE_EQUALITY(NetworkSubsetPukRequired, CARD_STATE_NETWORK_SUBSET_PUK_REQUIRED);
ASSERT_ICC_CARD_STATE_EQUALITY(CorporatePukRequired, CARD_STATE_CORPORATE_PUK_REQUIRED);
ASSERT_ICC_CARD_STATE_EQUALITY(ServiceProviderPukRequired, CARD_STATE_SERVICE_PROVIDER_PUK_REQUIRED);
ASSERT_ICC_CARD_STATE_EQUALITY(SimPersonalizationPukRequired, CARD_STATE_SIM_PUK_REQUIRED);
ASSERT_ICC_CARD_STATE_EQUALITY(Network1Locked, CARD_STATE_NETWORK1_LOCKED);
ASSERT_ICC_CARD_STATE_EQUALITY(Network2Locked, CARD_STATE_NETWORK2_LOCKED);
ASSERT_ICC_CARD_STATE_EQUALITY(HrpdNetworkLocked, CARD_STATE_HRPD_NETWORK_LOCKED);
ASSERT_ICC_CARD_STATE_EQUALITY(RuimCorporateLocked, CARD_STATE_RUIM_CORPORATE_LOCKED);
ASSERT_ICC_CARD_STATE_EQUALITY(RuimServiceProviderLocked, CARD_STATE_RUIM_SERVICE_PROVIDER_LOCKED);
ASSERT_ICC_CARD_STATE_EQUALITY(RuimPersonalizationLocked, CARD_STATE_RUIM_LOCKED);
ASSERT_ICC_CARD_STATE_EQUALITY(Network1PukRequired, CARD_STATE_NETWORK1_PUK_REQUIRED);
ASSERT_ICC_CARD_STATE_EQUALITY(Network2PukRequired, CARD_STATE_NETWORK2_PUK_REQUIRED);
ASSERT_ICC_CARD_STATE_EQUALITY(HrpdNetworkPukRequired, CARD_STATE_HRPD_NETWORK_PUK_REQUIRED);
ASSERT_ICC_CARD_STATE_EQUALITY(RuimCorporatePukRequired, CARD_STATE_RUIM_CORPORATE_PUK_REQUIRED);
ASSERT_ICC_CARD_STATE_EQUALITY(RuimServiceProviderPukRequired, CARD_STATE_RUIM_SERVICE_PROVIDER_PUK_REQUIRED);
ASSERT_ICC_CARD_STATE_EQUALITY(RuimPersonalizationPukRequired, CARD_STATE_RUIM_PUK_REQUIRED);
ASSERT_ICC_CARD_STATE_EQUALITY(Illegal, CARD_STATE_ILLEGAL);

#undef ASSERT_ICC_CARD_STATE_EQUALITY

} // namespace dom
} // namespace mozilla
