let Data={
    name:"mohan",
    // address:{
    //     city:'salem'
    // }
}
console.log("Option-1 :")
let city=Data.address?Data.address.city:undefined
console.log("City :",city)
console.log("Option-2 :")
city=Data.address&&Data.address.city
console.log("City :",city)
console.log("Option-3 :OptinalChaining")
city=Data.address?.city
console.log("City :",city)
console.log("2020")
console.log("Option-4 :OptinalChaining")
city=Data.address?.['city']
console.log("City :",city)
console.log("intro :2020")
let user_details={
    userId:234,
    account:{
        account_Number:'12345678',
        holder:{
            profile:{
                fname:"Mohan",
                lname:'R',
                Bob:'12-03-2005'
            }
        },

    }
}
// let birth=user_details.account.holder.profile.Bob
// console.log("Date of Birth :",birth)
birth=user_details.account && user_details.account.holder && user_details.account.holder.profile&&user_details.account.holder.profile.Bob
console.log("Date of Birth :",birth)
birth=user_details?.account?.holder?.profile?.Bob
console.log("Date of Birth :",birth)
user_details.name='Mohan'
