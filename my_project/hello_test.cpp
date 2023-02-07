#include <iostream>
#include <vector>
#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "ClassExample1.cpp"
#include "llist.h"


using namespace std;
using ::testing::AtLeast;
using ::testing::Return;
using ::testing::_;

// class DataBaseConnect {
// public:
//     virtual bool login(string username, string password)
//     {return true;}
//     virtual bool logout(string username) {return true;}
//     virtual int fetchRecord() {return -1;}
// };

// class MockDB : public DataBaseConnect {
// public:
//     MOCK_METHOD0(fetchRecord, int());
//     MOCK_METHOD1(logout, bool (string username));
//     MOCK_METHOD2(login, bool (string username, string password ));
// };

// class MyDatabase {
//     DataBaseConnect & dbC;
// public:
//     MyDatabase(DataBaseConnect & _dbC) : dbC(_dbC) {}

//     int Init(string username, string password) {
//         if(dbC.login(username, password) != true){
//             cout<<"DB FAILURE"<<endl; return -1;
//         }
//         else {
//             cout<<"DB SUCCESS"<<endl; return 1;
//         }
//     }
// };

TEST(MockTestExample, MockTest1){
  MockClass1 mockClass1;
  // ON_CALL(mockClass1, TwoStringFunction("a", "b")).WillByDefault(Return(false));
  EXPECT_CALL(mockClass1, TwoStringFunction("a", "b")).Times(AtLeast(1)).WillOnce(Return(true));
  // // ASSERT_EQ("a","b")
  EXPECT_EQ(mockClass1.TwoStringFunction("a", "b"), true);
  // EXPECT_CALL(mockClass1, IntParamFunction("a", "b")).Times(AtLeast(1));
  // EXPECT_EQ(mockClass1.IntParamFunction("a", "b"), true);

};

TEST(MockTestAdBook, MockTest2){
  MockClass2 mockClass2;
  EXPECT_CALL(mockClass2, add_record("jan", "san pedro", 1999, "09219285032")).Times(AtLeast(1)).WillOnce(Return(1));;
  EXPECT_EQ(mockClass2.print_record("jan"), 1);
};

// TEST(MyDBTest, LoginTest){
//     //Arrange
//     MockDB mdb;
//     MyDatabase db(mdb);

//     EXPECT_CALL(mdb, login(_, _))
//     .Times(AtLeast(1))
//     .WillRepeatedly(Return(true));

//     //Act
//     int retValue = db.Init("hotdog", "chillin");

//     //Assert
//     EXPECT_EQ(retValue, 1);
// }

int main(int argc, char **argv) {
    testing::InitGoogleMock(&argc, argv);

    return RUN_ALL_TESTS();
}