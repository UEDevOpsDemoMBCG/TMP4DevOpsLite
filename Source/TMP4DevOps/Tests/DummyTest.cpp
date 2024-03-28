// My game copyright

#if WITH_AUTOMATION_TESTS

#include "TMP4DevOps/Tests/DummyTest.h"
#include "CoreMinimal.h"
#include "Misc/AutomationTest.h"

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FMyDummyTest, "TMP4DevOpsGame.DummyTest",
    EAutomationTestFlags::ApplicationContextMask | EAutomationTestFlags::ProductFilter | EAutomationTestFlags::HighPriority);

bool FMyDummyTest::RunTest(const FString& Parameters)
{
    // empty test, just return OK (true)
    return true;
}

#endif
