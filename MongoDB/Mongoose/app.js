const express=require('express')
const path=require('path')
const bp=require('body-parser')
const hbs=require('express-handlebars')
const { ROOTDIR } = require('./utlis/path')
const { routers } = require('./routers/content_routes')
const  flash=require('connect-flash')
const session=require('express-session')

// create App
const app=express()
app.use(session({
    resave:false,secret:'secret'
}))
app.use(flash())
app.use(bp.urlencoded())
//-------------------------------------------
// use css styles
app.use(express.static(path.join(ROOTDIR,'public')))
//---------------------------------------------
// set templates engine
app.engine('hbs',hbs.engine({
    extname:'.hbs',
    defaultLayout:"base",
    runtimeOptions:{
        allowProtoPropertiesByDefault:true,
        allowProtoMethodsByDefault:true
    },

        helpers: {
        serial: function (index) {
            return index + 1;
        }
    }
}))
app.set('view engine',"hbs")
// -------------------------------------------
// --------------------------------
//set Routers
app.use(routers)
//---------------------------------------------

// set Server
app.listen(8090,()=>{
    console.log('Running Port:http://127.0.0.1:8080')
})