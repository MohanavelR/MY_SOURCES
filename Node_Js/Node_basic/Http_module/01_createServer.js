const http=require('http')

const server= http.createServer((req,res)=>{
 console.log(req)
})
server.listen(5000,)


