const mongoose=require('mongoose')
const EmployeeSchema = new mongoose.Schema({
    name:String,
    age:Number,
    address:String,
    phone:String,
    email:String
})
exports.EmployeeModel = mongoose.model('employee',EmployeeSchema)
