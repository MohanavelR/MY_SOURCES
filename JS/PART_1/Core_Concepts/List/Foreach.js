console.log("List Function      :names.forEach(a=>console.log(a))")
let names=['Mohan','Jegan','Karthi','Bala','Selva']
let nums=[1,2,3,4,5,6,7,8,9]
console.log("My  List names     :",names)
console.log("My  List nums      :",nums)
console.log("List Methods Value :")
names.forEach(a=>console.log(a))
console.log("=====================================")
console.log("foreach(val,index,arr)")
console.log("List Function      :names.forEach((val,index)=>console.log(val,index))")
names=['Mohan','Jegan','Karthi','Bala','Selva']
console.log("My  List names     :",names)
console.log("List Methods Value :")
names.forEach((val,index)=>console.log("Index:",index,"Value :",val))
console.log("=======================================")
const users=[
   {fname:"Mohan",age:34,city:'salem',salary:100000},
   {fname:"karth",age:31,city:'sangari',salary:140000},
   {fname:"selva",age:32,city:'salem',salary:120000},
   {fname:"bala",age:36,city:'anthivur',salary:180000},
   {fname:"jegan",age:30,city:'salem',salary:190000},
]
console.log("My  List users     :",users)
users.forEach((val)=>console.log("Full Name :",val.fname))
users.forEach((val)=>console.log("Age :",val.age))
console.log("=================================================")
let total=0

nums.forEach(a=>total+=a)
console.log("Total Nums : ",total)
console.log("=================================================")
let doublethevalue=[]
nums.forEach(a=>{
    doublethevalue.push(a+a)
})
console.log("Double the number :",doublethevalue)
console.log("=================================================")
let maxnum=nums[0]
nums.forEach((a)=>{
    if (a>maxnum){
        maxnum=a
    }
})
console.log("Max Value :",maxnum)
console.log("=================================================")
total=0
let count=0
nums.forEach((a)=>{
    total+=a
    count++
})
console.log("Total Nums : ",total)
console.log('Avg :',total/nums.length)
console.log('Avg :',total/count)
console.log("=================================================")
let even=[]
nums.forEach(a=>{
    if (a%2===0){
        even.push(a)
    }
})
console.log("Evenlist : ",even)
console.log("=================================================")
// names.forEach((a,index)=>{
//     names[index]=a.toUpperCase()
// })
// console.log("Update Names :",names)
console.log("=================================================")
