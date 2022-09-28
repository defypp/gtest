#include "gtest/gtest.h"
#include "add.h"


/// 常用测试函数和方法, (建议使用 EXPECT_XXX)

/// 基础功能EXPECT_XXX
//! @brief EXPECT_TRUE(condition)    --- 一元比较， confition is true
//! @brief EXPECT_FALSE(condition)   --- 一元比较， confition is false
//! @brief EXPECT_EQ(val1,val2)      --- 二元比较， val1 == val2
//! @brief EXPECT_NE(val1,val2)      --- 二元比较， val1 != val2
//! @brief EXPECT_LT(val1,val2)      --- 二元比较， val1 < val2
//! @brief EXPECT_LE(val1,val2)      --- 二元比较， val1 <= val2
//! @brief EXPECT_GT(val1,val2)      --- 二元比较， val1 > val2
//! @brief EXPECT_GE(val1,val2)      --- 二元比较， val1 >= val2
 

/// 高级功能 TEST_F
/// 解决测试复杂函数每次都需要重新申明定义变量函数的问题
/// TEST_F(TestFixtureName, TestName)，其中TestFixtureName为继承自testing::Test
/// 执行流程 构造TestFixtureName对象t->t.setup()初始化 ->运行TestName测试主体->t.TearDwon -> t被析构


/// 参考googletest/samples 更多示例



TEST(add, add_op_test) {
    EXPECT_EQ(5,add(1,4));
    EXPECT_EQ(-2,add(1,-3));
    EXPECT_EQ(3,add(1,1));
}




int main(int argc, char** argv) {
    
    testing::InitGoogleTest(&argc, argv);
    RUN_ALL_TESTS();
    return 0;
}