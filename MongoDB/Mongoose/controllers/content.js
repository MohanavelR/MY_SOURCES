const { databaseConnection } = require("../db")
const { EmployeeModel } = require("../models/employeeModel")

// Connect database
databaseConnection()
exports.home=async(req,res,next)=>{
    let users=await EmployeeModel.find({})
    let message=req.flash('message')
    res.status(200).render('home',{doctitle:'Home',users,message})
}
exports.add_emp=async(req,res,next)=>{
  const employee=new EmployeeModel(req.body)
   await employee.save()
   req.flash('message','Added Successfully')
   res.status(200).redirect('/')
}
exports.update=async(req,res,next)=>{
  const edit_id = req.params.edit_id
  const user= await EmployeeModel.findOne({_id:edit_id})
  
  res.status(200).render('update',{doctitle:'Update',user})
}
exports.update_process = async(req,res,next)=>{
    const edit_id= req.query.edit_id
    await EmployeeModel.findOneAndUpdate({_id:edit_id},req.body)
   req.flash('message', 'Updated successfully!');
    res.status(200).redirect('/')
}
exports.delete_emp = async(req,res,next)=>{
    const delete_id= req.params.delete_id
    await  EmployeeModel.deleteOne({_id:(delete_id)})
    req.flash('message', 'Deleted successfully!');
    res.status(200).redirect('/')
}
