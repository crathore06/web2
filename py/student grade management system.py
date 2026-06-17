#Initialising dictionry
student_grades = { }

#Add a new student
def add_student(name, grade):
    student_grades[name] = grade
    #[sagar] = 100
    print(f"Added {name} with a {grade}")