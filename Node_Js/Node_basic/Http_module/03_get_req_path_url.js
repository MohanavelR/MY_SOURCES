const http=require('http')

const server=http.createServer((req,res)=>{
     console.log("Requested Path in Url :",req.url)
     setTimeout(()=>{
        process.exit()
     },5000)
})
server.listen(4000)