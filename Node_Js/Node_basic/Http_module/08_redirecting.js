const http=require('http')
const fs=require('fs')
const server=http.createServer((req,res)=>{
    if (req.url === "/redirect"){
        fs.writeFileSync("Node_basic/Http_module/hello.txt","Hello world")
        console.log("Redirecting....")
        res.setHeader("Location","/")
        res.statusCode = 302
        return res.end()
    }
    
        res.write("<h1>Welcome The Index Page</h1>")
        res.end()
    

})
server.listen(4000)