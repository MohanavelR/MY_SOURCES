function Hello({name,age=35,...rest} ){
    console.log("Hello",name)
    console.log("Age :",age)
    console.log("Rest:",rest)
}
let persion={
    name :'mohan',
    age:34,
    city:'salem',
    salary:4000000
}
function Arr([a,b,c,d]){
    console.log("a : ",a)
    console.log("b : ",b)
    console.log("c : ",c)
    console.log("d : ",d)
}
Hello(persion)
Arr([34,56,78,90])
