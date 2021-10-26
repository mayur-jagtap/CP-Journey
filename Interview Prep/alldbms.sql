-- DDL AND DML QUERIES

create table employees(
	emp_id int unsigned NOT NULL,
	name varchar(20) NOT NULL,
	salary int unsigned NOT NULL,
    dept_name varchar(20) NOT NULL,
	primary key(emp_id)
);

insert into employees values(1,'abc',50000,'cse');
insert into employees values(2,'pqr',60000,'it');
insert into employees values(3,'lmn',70000,'entc');
insert into employees values(4,'rst',80000,'electrical');
insert into employees values(5,'xyz',90000,'mechanical');

-- SELECTION QUERIES
-- every row in table
select * from employees;
-- fetch in decreasing salary
select * from employees order by salary DESC;
-- select specific person with id
select * from employees where emp_id = 5;

-- AGGREGRATE FUNCTIONS IN SQL
select max(salary) from employees;
select avg(salary) from employees;
select min(salary) from employees;
select count(*) from employees;

-- get all details of highest salary person
select * from employees where salary = (select max(salary) from employees);

-- get all distinct rows from employee table
select distinct emp_id,name,dept_name,salary from employees;

-- second highest salary person
select * from (select * from employees order by salary desc limit 2) as emps order by salary limit 1;


-- UPDATE QUERIES --
-- GENERAL FORM --
(UPDATE table_name SET column1 = value1, column2 = value2, ... WHERE condition;)
UPDATE employees SET name = 'ksi' WHERE emp_id = 1;

