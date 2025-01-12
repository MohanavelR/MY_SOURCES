
show character set; 

-- use namelist;
-- show tables;
-- select * from users;
drop table users;
create table account(
id int primary key,
name varchar(30),
age int); 
insert into account values(1,"mohan",25);
describe account;
select*from account;
insert into account(id,name) values(2,"mohan");
alter table account add num int;
alter table account drop num;
select name from account;

select* from branch; 
drop table branch;
create table branch(
branch_id int primary key auto-auto_increment,
b_name varchar(30),
address varchar(30)

);

create table emp1(
emp_id int primary key,
ename varchar(30),
job varchar(30),
salary int
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






