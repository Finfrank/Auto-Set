def m(l):
    ml = len(l)
    for i in l:
        if type(i) == list:
            len1 = m(i)
            ml=max(ml,len1)
    return ml 
l=eval(input())
print(m(l))
# def max_length(obj):
#     """返回列表中各级子列表的最大长度.

#     列表中各级子列表的最大长度的定义:
#     1. 如果  为整数时长度为0
#     2. 如果  为列表，最大长度为列表各级子列表的长度的最大值
#     >>> max_length(17)
#     0
#     >>> max_length([1, 2, [1, 2], 4])
#     4
#     >>> max_length([1, 2, [1, 2, [3], 4, 5], 4])
#     5
#     """
#     if isinstance(obj, int):
#         return 0
#     elif is_all_integer(obj):
#         return len(obj)
#     else:
#         m = len(obj)
#         for sublist in obj:
#             n = max_length(sublist)
#             if m < n:
#                 m = n
#         return m


# def is_all_integer(obj):
#     """如果obj中所有元素都是整数，则返回True

#     >>> is_all_integer([1,2,3,4])
#     True
#     """
#     for element in obj:
#         if not isinstance(element, int):
#             return False
#     return True


# if __name__ == '__main__':
#     test_lst = eval(input())
#     if is_all_integer(test_lst):
#         print(len(test_lst))
#     else:
#         print(max_length(test_lst))

