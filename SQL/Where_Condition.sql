
create table emp(
emp_id int primary key,
ename varchar(50),
job varchar(50),
salary bigint
);
insert into emp values
(1,"ram","admin",1000000),
(2,"harini","manager",2500000),
(3,"george","sales",2000000),
(4,"ramya","sales",1300000),
(5,"meena","hr",2000000),
(6,"ashok","manager",3000000),
(7,"abdul","hr",2000000),
(8,"ramya","engineer",1000000),
(9,"raghu","ceo",8000000),
(10,"aravid","manager",2800000),
(11,"akshay","manager",1000000),
(12,"john","admin",2200000),
(13,"abinaya","engineer",2100000);
select * from emp;
-- ===============================================================
--  select * from table name where condition   
--  = Equal
--  > Greater than
--  < less than
--  <= lessthan or Equal
--  >= greater than or Equal
--  ( <> or != )  not 
--  Between value to value
--  like search for a pattarn
--  and AND operator
--  or OR operactor
 -- ===============================================================
select * from emp where ename="ramya";
-- ===============================================================
select * from emp where ename!="ramya";
select * from emp where ename<>"ramya";
-- ===============================================================
select * from emp where salary>2000000;
-- ===============================================================
select * from emp where salary<3000000;
-- ===============================================================
select * from emp where salary>2000000 and job="manager";
-- ===============================================================
select * from emp where job="hr" or job="sales";
select * from emp where job in ("hr","sales");
-- ===============================================================
select * from emp where job not in ("hr","sales");
-- ===============================================================
select * from emp where salary between 2000000 and 2600000;
-- ===============================================================
select * from emp where salary between 2000000 and 2600000 limit 3;
-- ===============================================================
-- like 
  -- Wildcard %(zero or more charactors)
  -- (_)one charators
-- =============================================================== 
-- starting with
select * from emp where ename like "A%";
-- ===============================================================
 -- ending with
select * from emp where ename like "%y";
-- ===============================================================
-- starting and ending
select * from emp where ename like "A%A";
-- ===============================================================
-- between charactor 
select * from emp where ename like "%m%";
-- ===============================================================
-- specific charactor index 
select * from emp where ename like "__i%";
-- ===============================================================
