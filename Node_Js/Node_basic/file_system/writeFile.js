const file_system=require('fs')


file_system.writeFile('Node_basic/file_system/create_file-2.txt',"This File Created Node js module file system writeFile",(err)=>{
   if (err==null){

       console.log('sucessfully created....')
       return
   } 
   console.log(err)

})

// console.log('Successfully Created...')

// This Function is Async Function