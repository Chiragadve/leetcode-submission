-- Write your PostgreSQL query statement below
SELECT EmployeeUNI.unique_id, Employees.name FROM Employees LEFT JOIN EmployeeUNI ON Employees.id = EmployeeUNI.id ORDER BY Employees.id;