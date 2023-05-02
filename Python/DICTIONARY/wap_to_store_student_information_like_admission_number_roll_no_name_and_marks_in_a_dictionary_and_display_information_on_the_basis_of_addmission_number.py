student_DB = {}
while True:
    line = input("please input the id and name separated by comma or q to exit:")
    if line == "q":
        break
    id, name = line.split(",")
    student_DB.update({id: name})
    for x, y in student_DB.items():
        print(x, y)
    key = input("enter id to search:")
    if key in student_DB:
        print("key=", key, "value=", student_DB[key])
    else:
        print("key not found")
    student_DB = {}
