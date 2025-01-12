for(let i=1;i<=10;i++){

    if (i==4){
      console.log("Execute Break..")
      break
    }
    else{
        console.log("Running :",i)
    }
}
console.log("===========================================")
for(let i=1;i<=10;i++){
  
    if (i%2==1){
      console.log("Execute Continue..")
      continue
    }
    else{
        console.log("Running :",i)
    }
}

console.log("Break is completetly break that block")
console.log('continue is paricular conition break ')