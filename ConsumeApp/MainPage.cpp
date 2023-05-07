#include "pch.h"
#include "MainPage.h"
#include "MainPage.g.cpp"
#include <winrt/CppWinRTComponent.h>
#include <string>

using namespace winrt;
using namespace Windows::UI::Xaml;

namespace winrt::ConsumeApp::implementation
{
    int32_t MainPage::MyProperty()
    {
        return 0;
    }

    void MainPage::MyProperty(int32_t /* value */)
    {
    }

    void MainPage::ClickHandler(IInspectable const&, RoutedEventArgs const&)
    {
        myButton().Content(box_value(L"Clicked"));
        CppWinRTComponent::Class cls;
        auto i = cls.MyProperty();
        OutputDebugString((L"i" + std::to_wstring(i)).c_str());
    }
}
