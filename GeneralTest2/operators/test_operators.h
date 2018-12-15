#pragma once
#include <operators/test_duplicate.h>
#include <operators/test_collapse.h>

// elementwise operators
#include <operators/test_abs.h>
#include <operators/test_acos.h>
#include <operators/test_acos_grad.h>
#include <operators/test_add.h>
#include <operators/test_asin.h>
#include <operators/test_asin_grad.h>
#include <operators/test_divide.h>
#include <operators/test_multiply.h>
#include <operators/test_sigmoid.h>
#include <operators/test_sigmoid_grad.h>
#include <operators/test_sign.h>
#include <operators/test_substract.h>
#include <operators/test_tanh.h>
#include <operators/test_tanh_grad.h>

// mutation operators
#include <operators/test_transpose.h>

#include <operators/test_dot.h>

namespace Test::Operators
{
    void test_operators()
    {
        test_duplicate();
        test_collapse();
        
        test_abs();
        test_acos();        test_acos_grad();
        test_add();
        test_asin();        test_asin_grad();
        test_divide();
        test_multiply();
        test_sigmoid();     test_sigmoid_grad();
        test_sign();
        test_substract();
        test_tanh();        test_tanh_grad();
        
        test_transpose();
        
        test_dot();
    }
}