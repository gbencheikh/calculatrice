#include <iostream>
#include "calculatrice.h"
#include <gtest/gtest.h>

using namespace std; 

// Test de la méthode addition
TEST(CalculatriceTest, Addition) {
    EXPECT_DOUBLE_EQ(Calculatrice::addition(0.5, 0.1), 0.6);
    EXPECT_DOUBLE_EQ(Calculatrice::addition(-1.0, 1.0), 0.0);
    EXPECT_DOUBLE_EQ(Calculatrice::addition(2.0, 2.0), 4.0);
}

// Test de la méthode soustraction
TEST(CalculatriceTest, Soustraction) {
    EXPECT_DOUBLE_EQ(Calculatrice::soustraction(0.5, 0.1), 0.4);
    EXPECT_DOUBLE_EQ(Calculatrice::soustraction(-1.0, 1.0), -2.0);
    EXPECT_DOUBLE_EQ(Calculatrice::soustraction(2.0, 2.0), 0.0);
}

// Test de la méthode multiplication
TEST(CalculatriceTest, Multiplication) {
    EXPECT_DOUBLE_EQ(Calculatrice::multiplication(0.5, 0.1), 0.05);
    EXPECT_DOUBLE_EQ(Calculatrice::multiplication(-1.0, 1.0), -1.0);
    EXPECT_DOUBLE_EQ(Calculatrice::multiplication(2.0, 2.0), 4.0);
}

// Test de la méthode division
TEST(CalculatriceTest, Division) {
    EXPECT_DOUBLE_EQ(Calculatrice::division(0.5, 0.1), 5.0);
    EXPECT_DOUBLE_EQ(Calculatrice::division(-1.0, 1.0), -1.0);
    EXPECT_DOUBLE_EQ(Calculatrice::division(2.0, 2.0), 1.0);

    // Test de la division par zéro
    EXPECT_THROW(Calculatrice::division(1.0, 0.0), std::invalid_argument);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}