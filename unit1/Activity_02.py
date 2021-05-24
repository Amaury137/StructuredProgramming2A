#activity_3 - Salary#

hours = int(input("How many hours did you worked?:\n"))
salaryperH = 1
if(hours >= 40):
    salary = (((hours - 40)*1.5)+(40*salaryperH))
    
print("your payment will be $", salary)