// My game copyright

#if WITH_AUTOMATION_TESTS

#include "CoreMinimal.h"
#include "Misc/AutomationTest.h"

DEFINE_SPEC(FMyDummySpecTest, "TMP4DevOpsGame",
    EAutomationTestFlags::ApplicationContextMask | EAutomationTestFlags::ProductFilter | EAutomationTestFlags::HighPriority)

// BEGIN_DEFINE_SPEC(FTestClassName, "Category", EAutomationTestFlags::ApplicationContextMask | EAutomationTestFlags::ProductFilter |
// EAutomationTestFlags::HighPriority)

// END_DEFINE_SPEC(FTestClassName)

void FMyDummySpecTest::Define()
{
    Describe("Weapon", [this]() { It("Ammo should be full", [this]() {}); });
}

#endif
