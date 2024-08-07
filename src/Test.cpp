#include <catch2/catch_test_macros.hpp>

#include <cstdint>

#include "main.cpp"


TEST_CASE("Testing", "List") {

    SECTION("Test Empty")
    {
        List MyList;
        INFO("List is not empty\n");
        CHECK(MyList.Empty());

    }

    SECTION("Test size")
    {

        List MyList;
        MyList.PushFront(1);
        INFO("Expected size: 1, Actual size: " << MyList.Size());
        CHECK(MyList.Size() == 1);
    }

    SECTION("Test clear")
    {

        List MyList;
        MyList.PushFront(1);
        INFO("Expected size: 1, Actual size: " << MyList.Size());
        CHECK(MyList.Size() == 1);
        MyList.PushBack(3);
        MyList.PushBack(4);
        MyList.PushBack(5);
        MyList.PushBack(6);
        MyList.PushBack(7);
        MyList.Clear();
        INFO("Expected size: 0, Actual size: " << MyList.Size());
        CHECK(MyList.Size() == 0);

       

    }
    
}

