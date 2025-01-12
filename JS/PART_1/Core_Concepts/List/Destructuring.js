console.log("Before Es6 version :")
let arr=[1,2,3,4,5]
let first=arr[0]
let second=arr[1]
let rest=arr.slice(2)
console.log("Arr          :",arr)
console.log("First value  :",first)
console.log("second value :",second)
console.log("Rest Value   :",rest)
console.log("After Es6 version :")

const[first1,second1,...rest1]=arr
console.log("Arr          :",arr)
console.log("First value  :",first1)
console.log("second value :",second1)
console.log("Rest Value   :",rest1)
console.log("Default Value:")
let num=[1,2]
const[a,b,z=3]=num
console.log("Num :",num)
console.log('a :',a)
console.log("b :",b)
console.log("z :",z)
num=[1,[2,3]]
const[x,[y,q]]=num
console.log("Num :",num)
console.log('x :',x)
console.log("y :",y)
console.log("q :",q)
