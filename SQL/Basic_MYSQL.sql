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
-- table values update (update table set columns=values where primarykey=primarykeyvalue) 
update student set name="Mohan R" where id=1;
-- ===============================================================
-- table values delete(delete from table name where primarykey=primarykeyvalue )
delete from student where id=2;
-- ===============================================================
