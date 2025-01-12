let reachA=new Promise((success,failure)=>{
    let reach=true
    if(reach){
       setTimeout(success,1000,'A successfully reached')
    }
  else{
   failure('Not Reached...')
  }
})
let reachB=new Promise((success,failure)=>{
   let reach=true
   if(reach){
      setTimeout(success,2000,' B successfully reached')
   }
 else{
  failure('Not Reached...')
 }
})
let reachc=new Promise((success,failure)=>{
   let reach=false
   if(reach){
      setTimeout(success,3000,' C successfully reached')
   }
 else{
  failure('Not Reached...')
 }
})
Promise.any([reachA,reachB,reachc])
.then((mess)=>console.log(mess))
.catch((mess)=>console.log(mess))