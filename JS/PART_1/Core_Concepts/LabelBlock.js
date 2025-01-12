let groups=[
    ['mohan','jegan','selva'],['bala','mohanraj','karthi']
]
for(let group of groups ){
    innerloop:
    for (let name of group){
        if(name.startsWith("m")){
            console.log("Starting with M :",name)
            break innerloop  
        }
   
    }
}
console.log("set inner loop name. continue and break execute inner loop name")