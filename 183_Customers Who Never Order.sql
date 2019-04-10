/* Write your PL/SQL query statement below */
Select C.Name as Customers from Customers C
Where C.id Not In (Select CustomerId From Orders
Group By CustomerId Having Count(*) > 0);
