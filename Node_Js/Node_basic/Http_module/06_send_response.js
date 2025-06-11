const http=require('http')

const server=http.createServer((req,res)=>{
res.setHeader('Content-type','text/html')
res.write("<html>")  
res.write("<head>")
res.write("<title> Home </title>")
res.write("</head>")
res.write("<body><h2>Hello From Node Server</h2></body>")
res.write("</html>")
res.end()  
console.log(res.getHeader("Content-type"))
})
server.listen(4000)