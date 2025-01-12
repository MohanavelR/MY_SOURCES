console.log("List Function      : names.sort()")
let names=['Mohan','Jegan','Karthi','Bala','Selva']
console.log("My  List names     :",names)
console.log("List Methods Value :",names.sort())
console.log("=====================================")
let nums=[50,2,60,300,100,500,6,7,8,9]
console.log("List Function      : nums.sort()")
console.log("My  List nums     :",nums)
console.log("List Methods Value :",nums.sort())

console.log("=====================================")
 nums=[50,2,60,300,100,500,6,7,8,9]
console.log("List Function      : nums.sort((a,b)=>a-b)")
console.log("My  List nums     :",nums)
console.log("List Methods Value :",nums.sort((a,b)=>a-b))
console.log("=====================================")
nums=[50,2,60,300,100,500,6,7,8,9]
console.log("List Function      : nums.sort((a,b)=>b-a)")
console.log("My  List nums     :",nums)
console.log("List Methods Value :",nums.sort((a,b)=>b-a))
console.log("=====================================")
const users=[
    {fname:"Mohan",age:18,city:'salem',salary:100000},
    {fname:"karth",age:17,city:'sangari',salary:140000},
    {fname:"selva",age:20,city:'salem',salary:120000},
    {fname:"bala",age:25,city:'anthivur',salary:180000},
    {fname:"jegan",age:16,city:'salem',salary:190000},
 ]
console.table(users)
console.log("List Function      : users.sort((a,b)=>a.age-b.age)")
console.log("List Methods Value :",users.sort((a,b)=>a.age-b.age))
console.table(users)
console.log("=====================================")
// users=[
//     {fname:"Mohan",age:18,city:'salem',salary:100000},
//     {fname:"karth",age:17,city:'sangari',salary:140000},
//     {fname:"selva",age:20,city:'salem',salary:120000},
//     {fname:"Bala",age:25,city:'anthivur',salary:180000},
//     {fname:"jegan",age:16,city:'salem',salary:190000},
//  ]
console.log("List Function      : users.sort((a,b)=>a.age-b.age)")
console.log("List Methods Value :",users.sort((a,b)=>{
    if (a.fname.toLowerCase()>b.fname.toLowerCase()) return 1;
    if (a.fname.toLowerCase()<b.fname.toLowerCase())  return -1;
    return 0;
}))
console.table(users)
console.log("you change values original values is change")