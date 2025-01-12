let nums=[1,2,3,4,5,6,7,8,9,0]
console.log("map(val,index,arr)")
let square=nums.map(a=>a*a)
console.log("Numberlist :",nums)
console.log("Squarelist :",square)
console.log("================================")
console.log("List Function      :names.map(a=>a.toUpperCase())")
let names=['Mohan','Jegan','Karthi','Bala','Selva']
console.log("My  List names     :",names)
console.log("List Methods Value :",names.map(a=>a.toUpperCase()))
console.log("================================")
const users=[
    {fname:"Mohan",age:18,city:'salem',salary:100000},
    {fname:"karth",age:17,city:'sangari',salary:140000},
    {fname:"selva",age:20,city:'salem',salary:120000},
    {fname:"bala",age:25,city:'anthivur',salary:180000},
    {fname:"jegan",age:16,city:'salem',salary:190000},
 ]
 console.table(users)
let eligible=users.map(user=>({
    fname:user.fname,
    age:user.age,
    city:user.city,
    salary:user.salary,
    status:user.age>=18?"Eligible":'Not Eligible'
}))
console.table(eligible)
console.log("================================")
let eligible2=users.map(user=>(
    {...user,
         status:user.age>=18?"Eligible":'Not Eligible'
    }
))
console.table(eligible2)
console.log("================================")
let colors=['Apple','orange']
let fruts=['red','Orange']
let colorfruts=fruts.map((a,index)=>a+"-"+colors[index])
console.log("Colors      :",colors)
console.log("Fruits      :",fruts)
console.log("ColorFruits :",colorfruts)
console.log("================================")
let boollist=nums.map(a=>a%2===0)
console.log("Boolean List :",boollist)
console.log("================================")
let fullname=users.map(a=>a.fname)
console.log("Fullname :",fullname)
console.log("================================")
let update_users=users.map(user=>({...user,age:user.age+1}))
console.table(update_users)
console.log("================================")
let nameswords=names.map((val,index,arr)=>(
    {name : val,length:val.length,position:index,totalwords:arr.length}
))
console.table(nameswords)
console.log("================================")
