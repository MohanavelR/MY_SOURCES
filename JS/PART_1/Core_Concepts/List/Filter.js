let nums=[1,2,3,4,5,6,7,8,9,0]
let even=nums.filter(a=>a%2==0)
let names=['Mohan','Jegan','Karthi','Bala','Selva']
console.log("Numberlist :",nums)
console.log("Evenlist :",even)
console.log("================================")
const users=[
    {fname:"Mohan",age:18,city:'salem',salary:100000},
    {fname:"karth",age:17,city:'sangari',salary:140000},
    {fname:"selva",age:20,city:'salem',salary:120000},
    {fname:"bala",age:25,city:'anthivur',salary:180000},
    {fname:"jegan",age:16,city:'salem',salary:190000},
 ]
 console.table(users)
 let eligible=users.filter(user=>user.age>=18)
 console.table(eligible)
 console.log("================================")
let fivewords=names.filter(name=>name.length>4)
console.log('Fivewords:',fivewords) 
console.log("================================")
let startm=names.filter(name=>name.startsWith("M"))
console.log("Startwith M :",startm)
console.log("================================")
let startendm=names.filter(name=>name.startsWith("M")&& name.endsWith("n"))
console.log("Startwith M :",startendm)