let strJson=`[
    {
        "name":"mohan"
    },
    {
        "name":"jegan"
    },
    {
        "name":"karthi"
    },
    {
        "name":"selva"
    },
    {
        "name":"bala"
    }
]`
console.log("Json in String :",strJson)
console.log("Parse Method is String to json(Arrayof object or object) convert ")
let Parsed=JSON.parse(strJson)
console.log("Json Array of Object :",Parsed)