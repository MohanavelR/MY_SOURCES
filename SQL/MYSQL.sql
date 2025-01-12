-- Collection of Data
/*
-- Single Line Comment 
/* Multiple Line Comment 
*/
-- ====================================================
-- views charactor set
show character set;
-- ====================================================
--  database creation
create database pratice;
-- ====================================================
-- view databases
show databases;
-- ====================================================
-- set current use database
use pratice;
-- ====================================================
-- Data Types 
-- Charactor --char(length) ,Varchar(length)
--       char is fixed length .it's length 10 and your charactor is 5 .so remain charactors is space add 
--       Max 255 bytes
--       varchar is charactor length so your charactor value only stored.
--       Max 65535 bytes
-- Text -- Text,Tiny text,Medium text,long text
--       Text bytes-255
--       Tinytext bytes-65 535
--       mediumtest Bytes 16,777,215
--       longtext Bytes 4,294,967,295
-- Numberic -- int ,Decimal (5,2)-999.99(Total number length,digit)
--           TinyInt -127 to 128
--           smallint -32000 to 32000
--           mediumint ,bigInt,  
-- Decimal -- float(p,s),Double(p,s)
-- Date,Datetime,timestamp,year,time
-- ===============================================================
-- view databases
show databases;
-- ===============================================================
-- database creation (create database databasename)
create database pratice;
-- ===============================================================
-- set current database
use pratice;
-- ===============================================================
-- delete database
drop database pratice;
drop schema pratice;
-- ===============================================================
-- if exists
drop database if exists pratice;
drop schema if exists pratice;
-- this is here database delete not here comes warning not error
-- ===============================================================
-- view Tables
 show tables;
-- ===============================================================
-- Table creation
create table student(
id int primary key ,
name varchar(30),
gpa decimal(3,2)
); 
-- ===============================================================
-- view table information
describe student;
-- ===============================================================
-- table delete
drop table student;
-- ===============================================================
-- table column add (alter table table name  add column name datatypes)
alter table student add dept varchar(35);
alter table student add column dept varchar(35);
-- ===============================================================
-- table column delete (alter table table name drop column name)
alter table student drop dept;
alter table student drop column dept ;
-- ===============================================================
-- Table values add(insert into tablename values (Your values ) )
insert into student values(1,"Mohan",3.6);
-- one paricular values add
-- insert into table name(column names) values("values.."); 
insert into student(id,name) values(2,"Jegan"); 
-- ===============================================================
-- table values view (select * from  tablename ) 
-- * all values show (You want one paricular column) column name
-- select (column name) from table name 
select * from student;
select id,name from student;
-- ===============================================================
-- ===============================================================
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
-- ===============================================================
-- Distinct
-- this Skip duplicate 
select distinct job from emp; 
-- ===============================================================
-- Order by 
--  Acsending order sorting or ordered 
select * from emp order by ename;
select * from emp order by salary;
-- ===============================================================
select * from emp order by ename asc;
select * from emp order by salary asc;
-- ===============================================================
-- this descending  
select * from emp order by ename desc;
select * from emp order by salary desc;
-- ===============================================================
select * from emp order by salary,ename;
-- ===============================================================
select * from emp where job="Manager" order by salary,ename;       
-- ===============================================================
-- custom order
select * from emp order by (case job
when "ceo" then 1
when "Manager" then 2
when "Hr" then 3
when "engineer" then 4
when "sales" then 5
else 100 end
),ename;
-- ===============================================================
--    function MYSQL 
-- Numbaric
-- count
select count(*)TotalEmployee from emp;
-- ===============================================================
-- Average
select avg(salary) Avarage_salary from emp;
-- ===============================================================
-- sum
select sum(salary) Total_salary from emp where job="Engineer";
-- ===============================================================
-- max 
select max(salary) Maximun_salary from emp where job="Engineer";
-- ===============================================================
-- min
select min(salary) Total_salary_of from emp where job="Engineer";
-- ===============================================================
-- String
-- ucase
-- upper
select ucase(ename),salary from emp;
select upper(ename),salary from emp;
-- ===============================================================
-- lcase
-- lower
select lcase(ename) uppername,salary from emp;
select lower(ename),salary from emp;
-- ===============================================================
-- char_length
select ename, char_length(ename) char_count from emp;
-- ===============================================================
-- concat
select ename,concat("Rs .",salary) Amount from emp;
-- ===============================================================
-- format
select ename ,format(salary,0) salary from emp;
-- ===============================================================
-- left
select ename ,left(job,4) salary from emp;
-- ===============================================================
alter table emp add column hired_date date;
alter table emp drop column hired_date;
-- ===============================================================
-- Date 
-- date,datetime,timestamp,year,time
select * from emp;
update emp SET Hired_date=now();
-- now()
select now();
-- =================================================================
-- date
select date(now());
-- =================================================================

-- current_date
select current_date();
-- =================================================================

-- curdate
select curdate();
-- =================================================================

-- date_format
select date_format(curdate(),"%d/%m/%y");
-- =================================================================

-- datediff
select datediff(curdate(),"2003-12-16");
-- =================================================================
-- date_add
select date_add(curdate(),interval 1 day);
select date_add(curdate(),interval 1 week);
select date_add(curdate(),interval 1 month);
select date_add(curdate(),interval 1 year);
-- =================================================================
-- groupby
select * from emp order by job;
select job,avg(salary) from emp group by job ;
-- =================================================================
select job,count(emp_id) from emp group by job ;
-- =================================================================
-- having
select job,count(emp_id) from emp group by job having count(emp_id)>1;
-- =================================================================
select job,count(emp_id) from emp group by job having avg(salary)>3100000;

-- =================================================================
select job,count(emp_id) from emp group by job having avg(salary)>2000000 order by job ;
select job,count(emp_id) from emp where salary>250000 group by job having count(emp_id)>1;
-- ==================================================================
drop table emp;
-- ==================================================================
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
-- =================================================================
-- foreign key
create table branch(
branch_id int auto_increment primary key,
branch_name varchar(20) not NULL,
address varchar(50)
);
create table emp(
emp_id int primary key auto_increment,
ename varchar(50),
job varchar(50),
salary bigint,
branch_id int ,
 constraint for_key_branch_id foreign key (branch_id) references branch (branch_id) 
);
alter table emp drop foreign key for_key_branch_id;
select * from emp;

-- ==================================================================
-- indexing
show index from emp;
-- 
create table emp(
emp_id int primary key auto_increment ,
ename varchar(50)not null,
job varchar(50) default "unAssigned",
salary bigint,
pan varchar (10) unique,
check (salary>100000)
);
-- default constaier foreign key, primary key,and unique contraint ,
show index from emp;
-- custom index
create index name_index on emp(ename);
alter table emp add index name_index (ename); 
alter table emp drop index name_index;
-- ===========================================================
-- on delete
create table branch(
branch_id int auto_increment primary key,
branch_name varchar(20) not NULL,
address varchar(50)
);
create table emp(
emp_id int primary key auto_increment,
ename varchar(50),
job varchar(50),
salary bigint,
branch_id int ,
 constraint for_key_branch_id foreign key (branch_id) references branch (branch_id) 
 on delete set null
);
-- set null is when delete branch id set null
create table emp(
emp_id int primary key auto_increment,
ename varchar(50),
job varchar(50),
salary bigint,
branch_id int ,
 constraint for_key_branch_id foreign key (branch_id) references branch (branch_id) 
 on delete cascade
);
-- cascade is when delete branch_id same time branch_id in row also delete
-- ============================================================================
-- joins
-- Inner Join
-- this view only (on) condition remaining is skip
select emp.emp_id,emp.ename,emp.job ,branch.branch_name
from emp
inner join branch 
on emp.branch_id=emp.branch_id;
-- =================================================================
-- left join
-- this view All left table(emp)  (on) condition remain also view 
select emp.emp_id,emp.ename,emp.job ,branch.branch_name
from emp
left join branch 
on emp.branch_id=emp.branch_id;
-- ================================================================
-- left join
-- this view All right table(branch)  (on) condition remain also view 
select emp.emp_id,emp.ename,emp.job ,branch.branch_name
from emp
right join branch 
on emp.branch_id=emp.branch_id;
-- ================================================================
-- join use where
select emp.emp_id,emp.ename,emp.job ,branch.branch_name
from emp,branch
where emp.branch_id=emp.branch_id;
-- ==================================================================
-- cross
-- cross join is left table all values all right table values join do view
select emp.emp_id,emp.ename,emp.job ,branch.branch_name
from emp
cross join branch ;
