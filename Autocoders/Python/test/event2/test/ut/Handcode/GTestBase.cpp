// ======================================================================
// \title  TestCommand/test/ut/GTestBase.cpp
// \author Auto-generated
// \brief  cpp file for TestCommand component Google Test harness base class
//
// \copyright
// Copyright 2009-2015, by the California Institute of Technology.
// ALL RIGHTS RESERVED.  United States Government Sponsorship
// acknowledged.
//
// ======================================================================

#include "GTestBase.hpp"

namespace Cmd {

  // ----------------------------------------------------------------------
  // Construction and destruction
  // ----------------------------------------------------------------------

  TestCommandGTestBase ::
    TestCommandGTestBase(
#if FW_OBJECT_NAMES == 1
        const char *const compName,
        const U32 maxHistorySize
#else
        const U32 maxHistorySize
#endif
    ) : 
        TestCommandTesterBase (
#if FW_OBJECT_NAMES == 1
            compName,
#endif
            maxHistorySize
        )
  {

  }

  TestCommandGTestBase ::
    ~TestCommandGTestBase(void)
  {

  }

  // ----------------------------------------------------------------------
  // Events
  // ----------------------------------------------------------------------

  void TestCommandGTestBase ::
    assertEvents_size(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 size
    ) const
  {
    ASSERT_EQ(size, this->eventsSize)
      << "\n"
      << "  File:     " << __callSiteFileName << "\n"
      << "  Line:     " << __callSiteLineNumber << "\n"
      << "  Value:    Total size of all event histories\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << this->eventsSize << "\n";
  }

  // ----------------------------------------------------------------------
  // Event: SomeEvent
  // ----------------------------------------------------------------------

  void TestCommandGTestBase ::
    assertEvents_SomeEvent_size(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 size
    ) const
  {
    ASSERT_EQ(size, this->eventHistory_SomeEvent->size())
      << "\n"
      << "  File:     " << __callSiteFileName << "\n"
      << "  Line:     " << __callSiteLineNumber << "\n"
      << "  Value:    Size of history for event SomeEvent\n"
      << "  Expected: " << size << "\n"
      << "  Actual:   " << this->eventHistory_SomeEvent->size() << "\n";
  }

  void TestCommandGTestBase ::
    assertEvents_SomeEvent(
        const char *const __callSiteFileName,
        const U32 __callSiteLineNumber,
        const U32 __index,
        const I32 arg1,
        const F32 arg2,
        const Ref::Gnc::Quaternion arg3
    ) const
  {
    ASSERT_GT(this->eventHistory_SomeEvent->size(), __index)
      << "\n"
      << "  File:     " << __callSiteFileName << "\n"
      << "  Line:     " << __callSiteLineNumber << "\n"
      << "  Value:    Index into history of event SomeEvent\n"
      << "  Expected: Less than size of history (" 
      << this->eventHistory_SomeEvent->size() << ")\n"
      << "  Actual:   " << __index << "\n";
    const EventEntry_SomeEvent& e =
      this->eventHistory_SomeEvent->at(__index);
    ASSERT_EQ(arg1, e.arg1)
      << "\n"
      << "  File:     " << __callSiteFileName << "\n"
      << "  Line:     " << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument arg1 at index "
      << __index
      << " in history of event SomeEvent\n"
      << "  Expected: " << arg1 << "\n"
      << "  Actual:   " << e.arg1 << "\n";
    ASSERT_EQ(arg2, e.arg2)
      << "\n"
      << "  File:     " << __callSiteFileName << "\n"
      << "  Line:     " << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument arg2 at index "
      << __index
      << " in history of event SomeEvent\n"
      << "  Expected: " << arg2 << "\n"
      << "  Actual:   " << e.arg2 << "\n";
    ASSERT_EQ(arg3, e.arg3)
      << "\n"
      << "  File:     " << __callSiteFileName << "\n"
      << "  Line:     " << __callSiteLineNumber << "\n"
      << "  Value:    Value of argument arg3 at index "
      << __index
      << " in history of event SomeEvent\n"
      << "  Expected: " << arg3 << "\n"
      << "  Actual:   " << e.arg3 << "\n";
  }

} // end namespace Cmd
