n=int(input())
l=[]
q={}
s={}
for i in range(n):
    q[i]=input().split()
    s["name"]=q[i][0]
    s['age']=eval(q[i][1])
    l.append(s.copy())
l.sort(key = lambda x:x['age'])
print(l)
l.sort(key = lambda x:x['name'])
print(l)


# [{'name': 'Tom', 'age': 18}, {'name': 'Cat', 'age': 20}, {'name': 'Doge', 'age': 33}, {'name': 'Jerry', 'age': 47}]
# [{'name': 'Cat', 'age': 20}, {'name': 'Doge', 'age': 33}, {'name': 'Jerry', 'age': 47}, {'name': 'Tom', 'age': 18}]

# [{'name': 'Tom', 'age': '18'}, {'name': 'Cat', 'age': '20'}, {'name': 'Doge', 'age': '33'}, {'name': 'Jerry', 'age': '47'}]
# [{'name': 'Cat', 'age': '20'}, {'name': 'Doge', 'age': '33'}, {'name': 'Jerry', 'age': '47'}, {'name': 'Tom', 'age': '18'}]