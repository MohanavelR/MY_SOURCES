const http=require('http')

const server=http.createServer((req,res)=>{
const url=req.url


if (url==="/"){
    res.write("<h1>Welcome The index Page</h1>")
    res.end()
}
else if (url==="/home"){
 res.write("<h1>Welcome The Home Page</h1>")
 res.end()
}
else if (url==="/about"){
  res.write("<h1>Welcome The About Page</h1>")
  res.end()
}
else if (url==="/login"){
     res.write("<h1>Welcome The Login Page</h1>")
     res.end()
}
else{
     res.write("<h1>Page Not Found.</h1>")
     res.end()
}
 
})
server.listen(4000)