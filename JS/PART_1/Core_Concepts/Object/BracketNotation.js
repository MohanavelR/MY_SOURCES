console.log("it is allowing variable name space  ")
let users={
    fname:"Mohan",
    'last name':'R',
    age:19,
    city:'salem',
    salary:100000,
    about:function(){
     console.log(this.fname)
    },
    eligiblity:function(){
    if (this.age>18){
       console.log("Your Eligible")
    }
    else{
        console.log("Not Eligible")
    }
    }
}
console.log("User Obj :",users)
console.log("User name :",users['fname'])
users['fname']='Jegan'
console.log("User name :",users['fname'])
console.log("Last name :",users['last name'])

