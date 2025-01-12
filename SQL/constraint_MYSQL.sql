-- constrains
-- not null
-- default "any value"
-- unique
-- check condition
-- auto_increment
-- 
create table emp(
emp_id int primary key auto_increment ,
ename varchar(50)not null,
job varchar(50) default "unAssigned",
salary bigint,
pan varchar (10) unique,
check (salary>100000)
);
select * from emp;
insert into emp(ename,salary) value("Mohan",100000);
insert into emp(ename,salary) value("Mohan",1000000);
-- ====================================================================
drop table emp;
-- add constrains
-- modify table
create table emp(
emp_id int primary key,
ename varchar(50),
job varchar(50),
salary bigint
);
select * from emp;
-- not null
alter table emp modify ename varchar(50) not null;
-- delete not null
alter table emp modify ename varchar(50);
-- add  default
alter table emp alter job set default "Unassigned";
-- delete defauit
alter table emp alter job drop default ;
-- add check 
-- alter table tablename add constraint anyname check (condition);

alter table emp add check (salary>1000000);
alter table emp add constraint check_salary check (salary>1000000);
-- delete check
alter table emp drop check check_salary;