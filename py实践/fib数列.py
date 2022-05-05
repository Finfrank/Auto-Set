# TODO生成器 实时生成数据 不同于数组消耗大量内存
# yield 是一个类似 return 的关键字，只是这个函数返回的是个生成器。
def fib_loop_while(n):
    a,b=0,1
    for i in range(n):
        a,b=b,a+b 
        yield a
    # return a //递推 On
for i in fib_loop_while(20):
    print(i,end=' ')

# mlist = [x*x for x in range(1,3)]
# for i in mlist:
#     print(i)


# 矩阵解 logn 时间复杂度
import numpy as np
Matrix = np.matrix('1 1;1 0')
# 其n-1 次方的第一位,也就是Matrix(11)--下标11就是斐波那契数列的解
def Fibonacci_Matrix_tool(n): # 递归求解,速度慢与直接求方
    Matrix = np.matrix('1 1;1 0')
    if n == 1:
        return Matrix
    if n == 2:
        return pow(Matrix, 2)
    elif n % 2 == 1:
        return Fibonacci_Matrix_tool((n - 1) / 2) ** 2 * Matrix
    else:
        return Fibonacci_Matrix_tool(n / 2) ** 2

def Fibonacci_Matrix_tool2(n):
    Matrix = np.matrix('1 1;1 0')
    return pow(Matrix, n) # pow函数速度快于 使用双星号 "**"

def Fibonacci_Matrix(n):
    result_list = []
    for i in range(0, n): result_list.append(np.array(Fibonacci_Matrix_tool2(i))[0][0])
    return result_list


