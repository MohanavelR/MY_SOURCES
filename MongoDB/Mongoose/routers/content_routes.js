const { home, update, add_emp, update_process, delete_emp } = require('../controllers/content')
const { getDatabase } = require('../db')
const routers=require('express').Router()
routers.get('/',home)
routers.get('/update/:edit_id',update)
routers.get('/delete/:delete_id',delete_emp)
routers.post('/add-employee',add_emp)
routers.post('/update_process',update_process)
exports.routers=routers